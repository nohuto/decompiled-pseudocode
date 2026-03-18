/*
 * XREFs of PopDiagTraceHiberStats @ 0x1406DD630
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAD00 (EtwWrite.c)
 *     PopOpenPowerKey @ 0x140178B10 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x140566420 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140566454 (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x1406DD9FC (PopComputeDerivedHiberStats.c)
 */

char PopDiagTraceHiberStats()
{
  int v0; // eax
  HANDLE v1; // rsi
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 *v5; // r12
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r14
  _BYTE *Data; // r13
  __int64 *v8; // r15
  int v9; // ebx
  __int64 *v10; // rax
  unsigned int *v11; // rax
  unsigned __int64 v12; // rax
  int v13; // ebx
  ULONG DataSize; // edi
  unsigned __int64 v15; // rax
  REGHANDLE v16; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+58h] [rbp-B0h]
  _BYTE v22[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v23[384]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF

  v0 = PopOpenPowerKey((__int64)&KeyHandle);
  v1 = KeyHandle;
  if ( v0 < 0 )
    v1 = 0LL;
  KeyHandle = v1;
  v2 = PopCaptureTimeOnProcZero();
  v3 = qword_140417C70;
  qword_140417CB0 -= qword_140417C98 + qword_140417C90;
  qword_140417C78 = v2 - (qword_140417C98 + qword_140417C90);
  dword_140417D7C = dword_140417A64;
  dword_140417D78 = dword_140417AE8;
  v21 = qword_140417C70;
  dword_140417D28 = PopQpcTimeInMs(&qword_140417B58, &qword_140417B60);
  qword_140417BD8 = (unsigned int)PopQpcTimeInMs(&qword_140417B28, &qword_140417BE0);
  PopComputeDerivedHiberStats(&qword_140417B98, v3, v22);
  v4 = 47LL;
  v5 = (unsigned __int64 *)v23;
  v20 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v23;
  v8 = qword_14090DD58;
  do
  {
    v9 = *((_DWORD *)v8 + 2);
    v10 = (__int64 *)v22;
    if ( (v9 & 0x40000000) == 0 )
      v10 = &qword_140417B98;
    v11 = (unsigned int *)((char *)v10 + *v8);
    if ( (v9 & 2) != 0 )
      v12 = *(_QWORD *)v11;
    else
      v12 = *v11;
    *v5 = v12;
    if ( v9 < 0 )
      *v5 = v12 / v3;
    v13 = v9 & 0x20;
    DataSize = v13 != 0 ? 8 : 4;
    if ( v1 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)*(v8 - 1));
      ZwSetValueKey(v1, &DestinationString, 0, v13 != 0 ? 11 : 4, Data, DataSize);
      v4 = v20;
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v3 = v21;
    v8 += 3;
    p_Reserved->Reserved = 0;
    ++v5;
    p_Reserved += 4;
    v20 = --v4;
  }
  while ( v4 );
  qword_140417CF0 /= v3;
  qword_140417BA0 /= v3;
  v15 = qword_140417C78 / v3 - (unsigned int)qword_140417BE8 - (unsigned int)dword_140417BF0;
  qword_140417D80 = v15;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140417CF0, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140417BA0, 4u);
    if ( qword_140417D18 )
    {
      dword_140417A44 += PopQpcTimeInMs(&qword_140417B48, &qword_140417D20);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_140417A44, 4u);
    }
    qword_140417D88 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_140417D88, 8u);
    LOBYTE(v15) = ZwClose(KeyHandle);
  }
  if ( PopDiagHandleRegistered )
  {
    v16 = PopDiagHandle;
    LOBYTE(v15) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( (_BYTE)v15 )
      LOBYTE(v15) = EtwWrite(v16, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x2Fu, &UserData);
  }
  return v15;
}
