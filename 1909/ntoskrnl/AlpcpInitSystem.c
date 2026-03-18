/*
 * XREFs of AlpcpInitSystem @ 0x140785DDC
 * Callers:
 *     LpcInitSystem @ 0x140A1D354 (LpcInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400EAD20 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideList @ 0x140175A90 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     NtQuerySystemInformation @ 0x1405CB2E0 (NtQuerySystemInformation.c)
 *     ExCreateHandleTable @ 0x1406B7240 (ExCreateHandleTable.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x1407860D8 (AlpcpInitializeMessageLog.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *PoolWithTag; // rax
  int v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5[8]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD SystemInformation[16]; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E496C41u);
  AlpcpDummyEvent = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeEvent(PoolWithTag, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_1404463F8 = (__int64)&AlpcpPortList;
    AlpcpPortList = (__int64)&AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v5, 0, 0x78uLL);
    *((_QWORD *)&v5[3] + 1) = AlpcpOpenPort;
    LOWORD(v5[0]) = 120;
    *(_QWORD *)&v5[4] = AlpcpClosePort;
    *(_QWORD *)((char *)&v5[2] + 4) = 512LL;
    *((_QWORD *)&v5[4] + 1) = AlpcpDeletePort;
    HIDWORD(v5[2]) = 504;
    DWORD2(v5[0]) = 128;
    BYTE2(v5[0]) = BYTE2(v5[0]) & 0xCB | 0x10;
    *(__int128 *)((char *)v5 + 12) = AlpcpPortMapping;
    HIDWORD(v5[1]) = 2031617;
    v2 = ObCreateObjectTypeEx(&DestinationString, v5, 0LL, (__int16 *)0xF9, &AlpcPortObjectType);
    if ( v2 >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideListInternal(
        (__int64)&AlpcpLookasides,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateMessageFunction,
        (void (__stdcall *)(PVOID, ULONG))AlpcpFreeMessageFunction,
        0,
        840,
        1934453825,
        32,
        0);
      ExInitializePagedLookasideListInternal(
        (__int64)&unk_140503380,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateBuffer,
        (void (__stdcall *)(PVOID, ULONG))RtlpSysVolFree,
        0,
        128,
        1229155393,
        32,
        0);
      ExInitializePagedLookasideListInternal((__int64)&stru_140503400, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v2 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v2 >= 0 )
      {
        AlpcpRegionGranularity = SystemInformation[6];
        AlpcpViewGranularity = SystemInformation[2];
      }
      if ( AlpcpMessageLogEnabled )
      {
        AlpcpInitializeMessageLog(4096LL, 0x8000LL);
      }
      else
      {
        AlpcpMessageLogLock = 0LL;
        qword_140446478 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_140446468 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_140446498 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_140446418 = (__int64)&qword_140446410;
      qword_140446410 = (__int64)&qword_140446410;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
