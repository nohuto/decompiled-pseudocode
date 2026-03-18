/*
 * XREFs of NtSetSystemTime @ 0x1408CD2D0
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1408CC994 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeFieldsToTime @ 0x140127040 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013AF80 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x1401433CC (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x14015DA00 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140160BD0 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14017832C (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140566AC8 (ExpSetSystemTime.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x14066585C (ExAcquireTimeRefreshLock.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9E0 (RtlIsMultiSessionSku.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BEC18 (ExReleaseTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x14089D66C (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  LONGLONG QuadPart; // rax
  bool IsCurrentThreadInServerSilo; // bl
  NTSTATUS v9; // ebx
  char v10; // di
  LARGE_INTEGER v11; // rax
  char v12[8]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+60h] [rbp-28h] BYREF

  *(_DWORD *)&SourceString.Length = 2228256;
  SourceString.Buffer = L"systemManagement";
  if ( SystemTime )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || (int)RtlCapabilityCheck(0LL, &SourceString, v12) < 0 || !v12[0])
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
      v14 = *SystemTime;
    }
    else
    {
      QuadPart = SystemTime->QuadPart;
      v14 = *SystemTime;
    }
    if ( HIDWORD(QuadPart) > 0x20000000 )
      return -1073741811;
    ExAcquireTimeRefreshLock(1u);
    ExpSetSystemTime(1, 0, 1LL, v14, (struct _SINGLE_LIST_ENTRY *)&SystemTimea);
    SeAuditSystemTimeChange(SystemTimea.QuadPart, v14.QuadPart);
    ExReleaseTimeRefreshLock();
    if ( NewSystemTime )
      *NewSystemTime = SystemTimea;
    return 0;
  }
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  ExAcquireTimeRefreshLock(1u);
  if ( IsCurrentThreadInServerSilo )
  {
    ExpRefreshTimeZoneInformation(0);
    ExReleaseTimeRefreshLock();
    return 0;
  }
  v9 = -1073741811;
  v10 = ExpSystemIsInCmosMode;
  if ( (unsigned __int8)HalQueryRealTimeClock(&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && ExpRefreshTimeZoneInformation(0) )
  {
    v11.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v10 )
      {
        ExLocalTimeToSystemTime(&Time, &v14);
        KeSetSystemTime((struct _SINGLE_LIST_ENTRY *)&v14, (struct _SINGLE_LIST_ENTRY *)&SystemTimea, 0);
        goto LABEL_29;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v11 = SystemTimea;
    }
    v14 = v11;
LABEL_29:
    PoNotifySystemTimeSet((__int64 *)&v14, (__int64 *)&SystemTimea);
    v9 = 0;
  }
  ExReleaseTimeRefreshLock();
  return v9;
}
