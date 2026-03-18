/*
 * XREFs of PopDiagTraceHiberStats @ 0x140726B70
 * Callers:
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     PopOpenPowerKey @ 0x140182C04 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x1405960BC (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x140726F6C (PopComputeDerivedHiberStats.c)
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
  v3 = qword_1404435B0;
  qword_1404435F0 -= qword_1404435D8 + qword_1404435D0;
  qword_1404435B8 = v2 - (qword_1404435D8 + qword_1404435D0);
  dword_1404436BC = dword_1404433C4;
  dword_1404436B8 = dword_140443448;
  v20 = qword_1404435B0;
  LODWORD(qword_140443668) = PopQpcTimeInMs(&qword_140443498, &qword_1404434A0);
  qword_140443518 = (unsigned int)PopQpcTimeInMs(&qword_140443468, &qword_140443520);
  PopComputeDerivedHiberStats(&qword_1404434D8, v3, v21);
  v4 = 47LL;
  v5 = (unsigned __int64 *)v22;
  v19 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v22;
  v8 = &qword_14094BE90;
  do
  {
    v9 = *(v8 - 1);
    if ( (*(_DWORD *)v8 & 0x40000000) != 0 )
      v10 = (char *)v21 + v9;
    else
      v10 = (char *)&qword_1404434D8 + v9;
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
  qword_140443630 /= v20;
  qword_1404434E0 /= v20;
  v14 = qword_1404435B8 / v20 - (unsigned int)qword_140443528 - (unsigned int)dword_140443530;
  qword_1404436C0 = v14;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140443630, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_1404434E0, 4u);
    if ( qword_140443658 )
    {
      dword_1404433A4 += PopQpcTimeInMs(&qword_140443488, &qword_140443660);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_1404433A4, 4u);
    }
    qword_1404436C8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_1404436C8, 8u);
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
