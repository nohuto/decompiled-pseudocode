/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x140757A14
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406CA164 (CmpQueryHiveRedirectionFileList.c)
 */

NTSTATUS CmpInitializeSystemHivesLoad()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  PVOID PoolWithTag; // r14
  UNICODE_STRING *v4; // rsi
  _DWORD *v5; // rdi
  unsigned int i; // ebx
  __int64 v7; // rsi
  int v8; // eax
  NTSTATUS result; // eax
  _DWORD *v10; // rax
  __int64 v11; // rcx
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+80h] [rbp-88h]
  int v16; // [rsp+88h] [rbp-80h]
  __int128 v17; // [rsp+90h] [rbp-78h]
  char v18; // [rsp+A8h] [rbp-60h] BYREF

  CmpNoWrite = 0;
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  v0 = 0;
  v1 = &unk_1403FFEA0;
  do
  {
    v2 = 19LL * v0;
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 14], NotificationEvent, 0);
    if ( !*(v1 - 16) )
      *(v1 - 16) = *(v1 - 18);
    *(_QWORD *)&Destination.Length = 0x800000LL;
    Destination.Buffer = (wchar_t *)&v18;
    RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\");
    RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v1 - 17));
    RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v1 - 16));
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x32364D43u);
    if ( !PoolWithTag )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, v0, 0LL);
    *(v1 - 1) = 0LL;
    *((_WORD *)v1 - 3) = 128;
    *v1 = PoolWithTag;
    v4 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17];
    if ( !CmpQueryHiveRedirectionFileList(&Destination, v4) || *((_WORD *)v1 - 4) == 2 )
    {
      *(v1 - 1) = 0LL;
      *v1 = PoolWithTag;
      *((_WORD *)v1 - 3) = 128;
      RtlAppendUnicodeToString(v4, L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString(v4, (PCWSTR)*(v1 - 18));
    }
    v1 += 19;
    ++v0;
  }
  while ( v0 < 7 );
  v5 = &unk_1403FFE30;
  if ( CmpShareSystemHives )
  {
    v10 = &unk_1403FFE30;
    v11 = 7LL;
    do
    {
      if ( *((_QWORD *)v10 - 4) )
        *v10 |= 0x8000u;
      v10 += 38;
      --v11;
    }
    while ( v11 );
  }
  CmpSpecialBootCondition = 1;
  for ( i = 0; i < 7; ++i )
  {
    if ( (*v5 & 1) != 0 || CmpInitRmLogOnLoad || CmpForceSynchronousMachineHiveLoad || ((i - 2) & 0xFFFFFFFA) == 0 )
    {
      v7 = i;
      KeSetEvent((struct _KEVENT *)((char *)&stru_1403FFE50 + 152 * i), 0, 0);
    }
    else
    {
      v7 = i;
    }
    LODWORD(v14) = 48;
    *((_QWORD *)&v14 + 1) = 0LL;
    v16 = 512;
    v15 = 0LL;
    v17 = 0LL;
    v8 = PsCreateSystemThreadEx(
           (__int64)&Handle,
           0x1FFFFF,
           &v14,
           CmpRegistryProcess,
           0LL,
           (__int64)CmpLoadHiveThread,
           v7,
           0LL,
           0LL);
    if ( v8 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, i, v8);
    result = ZwClose(Handle);
    v5 += 38;
  }
  return result;
}
