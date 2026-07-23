/*
 * XREFs of NtSetSystemTime @ 0x14090A2D0
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x140909CEC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     RtlTimeFieldsToTime @ 0x140121DD0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013D240 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x1401453D0 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14015CA10 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1401822EC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x140182550 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x1405968F8 (ExpSetSystemTime.c)
 *     RtlIsMultiSessionSku @ 0x1405BDB70 (RtlIsMultiSessionSku.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x1408DB984 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  LONGLONG QuadPart; // rax
  NTSTATUS v8; // ebx
  char v9; // di
  LARGE_INTEGER v10; // rax
  BOOLEAN HasCapability[8]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER v13; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+50h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+60h] [rbp-28h] BYREF

  SystemTimea.QuadPart = 0LL;
  v13.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  *(_QWORD *)&CapabilityName.Length = 2228256LL;
  CapabilityName.Buffer = (wchar_t *)L"systemManagement";
  if ( !SystemTime )
  {
    v8 = -1073741811;
    ExAcquireTimeRefreshLock(1u);
    v9 = ExpSystemIsInCmosMode;
    if ( !(unsigned __int8)HalQueryRealTimeClock(&TimeFields)
      || !RtlTimeFieldsToTime(&TimeFields, &Time)
      || !ExpRefreshTimeZoneInformation() )
    {
      goto LABEL_32;
    }
    v10.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v9 )
      {
        ExLocalTimeToSystemTime(&Time, &v13);
        KeSetSystemTime((__int64)&v13, (__int64)&SystemTimea, 0);
        goto LABEL_31;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v10 = SystemTimea;
    }
    v13 = v10;
LABEL_31:
    PoNotifySystemTimeSet((__int64 *)&v13, (__int64 *)&SystemTimea);
    v8 = 0;
LABEL_32:
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    return v8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
    && (RtlIsMultiSessionSku() || RtlCapabilityCheck(0LL, &CapabilityName, HasCapability) < 0 || !HasCapability[0])
    || PsIsCurrentThreadInServerSilo() )
  {
    return -1073741727;
  }
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SystemTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( NewSystemTime )
    {
      if ( ((unsigned __int8)NewSystemTime & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = (__int64)NewSystemTime;
      if ( (unsigned __int64)NewSystemTime >= 0x7FFFFFFF0000LL )
        v6 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    }
    QuadPart = SystemTime->QuadPart;
    v13 = *SystemTime;
  }
  else
  {
    QuadPart = SystemTime->QuadPart;
    v13 = *SystemTime;
  }
  if ( HIDWORD(QuadPart) > 0x20000000 )
    return -1073741811;
  ExAcquireTimeRefreshLock(1u);
  ExpSetSystemTime(1, 0, 1LL, v13, (__int64 *)&SystemTimea);
  SeAuditSystemTimeChange(SystemTimea.QuadPart, v13.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( NewSystemTime )
    *NewSystemTime = SystemTimea;
  return 0;
}
