/*
 * XREFs of PopDiagTraceHiberStats @ 0x140724CD0
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     PopOpenPowerKey @ 0x140182514 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x1405960BC (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x1407250CC (PopComputeDerivedHiberStats.c)
 */

char PopDiagTraceHiberStats()
{
  int v0; // eax
  HANDLE v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 *v5; // r12
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r15
  _BYTE *Data; // r13
  __int64 *v8; // rsi
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rax
  int v12; // edi
  int v13; // edi
  unsigned __int64 v14; // rax
  REGHANDLE v15; // rbx
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v20; // [rsp+58h] [rbp-B0h]
  _QWORD v21[3]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v22[384]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF

  v21[0] = 0LL;
  v21[1] = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v0 = PopOpenPowerKey((__int64)&KeyHandle);
  v1 = KeyHandle;
  if ( v0 < 0 )
    v1 = 0LL;
  KeyHandle = v1;
  v2 = PopCaptureTimeOnProcZero();
  v3 = qword_140443630;
  qword_140443670 -= qword_140443658 + qword_140443650;
  qword_140443638 = v2 - (qword_140443658 + qword_140443650);
  dword_14044373C = dword_140443444;
  dword_140443738 = dword_1404434C8;
  v20 = qword_140443630;
  LODWORD(qword_1404436E8) = PopQpcTimeInMs(&qword_140443518, &qword_140443520);
  qword_140443598 = (unsigned int)PopQpcTimeInMs(&qword_1404434E8, &qword_1404435A0);
  PopComputeDerivedHiberStats(&qword_140443558, v3, v21);
  v4 = 47LL;
  v5 = (unsigned __int64 *)v22;
  v19 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v22;
  v8 = &qword_14094C420;
  do
  {
    v9 = *(v8 - 1);
    if ( (*(_DWORD *)v8 & 0x40000000) != 0 )
      v10 = (char *)v21 + v9;
    else
      v10 = (char *)&qword_140443558 + v9;
    if ( (*(_DWORD *)v8 & 2) != 0 )
      v11 = *(_QWORD *)v10;
    else
      v11 = *(unsigned int *)v10;
    *v5 = v11;
    v12 = *(_DWORD *)v8;
    if ( *(int *)v8 < 0 )
    {
      v4 = v19;
      *v5 = v11 / v3;
    }
    v13 = v12 & 0x20;
    if ( v1 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)*(v8 - 2));
      ZwSetValueKey(v1, &DestinationString, 0, v13 != 0 ? 11 : 4, Data, v13 != 0 ? 8 : 4);
      v4 = v19;
    }
    p_Reserved->Reserved = 0;
    v8 += 3;
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    ++v5;
    p_Reserved[-1].Reserved = v13 != 0 ? 8 : 4;
    Data += 8;
    v3 = v20;
    p_Reserved += 4;
    v19 = --v4;
  }
  while ( v4 );
  qword_1404436B0 /= v20;
  qword_140443560 /= v20;
  v14 = qword_140443638 / v20 - (unsigned int)qword_1404435A8 - (unsigned int)dword_1404435B0;
  qword_140443740 = v14;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_1404436B0, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140443560, 4u);
    if ( qword_1404436D8 )
    {
      dword_140443424 += PopQpcTimeInMs(&qword_140443508, &qword_1404436E0);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_140443424, 4u);
    }
    qword_140443748 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_140443748, 8u);
    LOBYTE(v14) = ZwClose(KeyHandle);
  }
  if ( PopDiagHandleRegistered )
  {
    v15 = PopDiagHandle;
    LOBYTE(v14) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( (_BYTE)v14 )
      LOBYTE(v14) = EtwWrite(v15, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x2Fu, &UserData);
  }
  return v14;
}
