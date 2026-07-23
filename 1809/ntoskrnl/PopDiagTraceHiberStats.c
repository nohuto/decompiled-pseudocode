/*
 * XREFs of PopDiagTraceHiberStats @ 0x1406DE8B0
 * Callers:
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     PopOpenPowerKey @ 0x140178C30 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x140567420 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140567454 (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x1406DEC7C (PopComputeDerivedHiberStats.c)
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
  v3 = qword_140418D10;
  qword_140418D50 -= qword_140418D38 + qword_140418D30;
  qword_140418D18 = v2 - (qword_140418D38 + qword_140418D30);
  dword_140418E1C = dword_140418904;
  dword_140418E18 = dword_140418988;
  v21 = qword_140418D10;
  dword_140418DC8 = PopQpcTimeInMs(&qword_140418BF8, &qword_140418C00);
  qword_140418C78 = (unsigned int)PopQpcTimeInMs(&qword_140418BC8, &qword_140418C80);
  PopComputeDerivedHiberStats(&qword_140418C38, v3, v22);
  v4 = 47LL;
  v5 = (unsigned __int64 *)v23;
  v20 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v23;
  v8 = qword_14090EFF8;
  do
  {
    v9 = *((_DWORD *)v8 + 2);
    v10 = (__int64 *)v22;
    if ( (v9 & 0x40000000) == 0 )
      v10 = &qword_140418C38;
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
  qword_140418D90 /= v3;
  qword_140418C40 /= v3;
  v15 = qword_140418D18 / v3 - (unsigned int)qword_140418C88 - (unsigned int)dword_140418C90;
  qword_140418E20 = v15;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140418D90, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140418C40, 4u);
    if ( qword_140418DB8 )
    {
      dword_1404188E4 += PopQpcTimeInMs(&qword_140418BE8, &qword_140418DC0);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_1404188E4, 4u);
    }
    qword_140418E28 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_140418E28, 8u);
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
