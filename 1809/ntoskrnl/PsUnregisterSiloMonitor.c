/*
 * XREFs of PsUnregisterSiloMonitor @ 0x14088CCE0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x1402E983C (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x1402E9870 (PspGetServerSiloStatePointer.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x140601968 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x140890714 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x1408907AC (PspStorageRemoveObject.c)
 */

void __fastcall PsUnregisterSiloMonitor(void (__fastcall **P)(_QWORD))
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v3)(_QWORD); // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v6; // rsi
  __int64 HostSilo; // rax
  PVOID *v8; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v10; // r8
  int v11; // ebx
  _BYTE v12[48]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v3 = *P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( P[4] )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v12);
      for ( i = 0LL; ; i = v6 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v6 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          ((void (__fastcall **)(void *))P)[4](v6);
      }
      if ( *((_BYTE *)P + 16) )
      {
        HostSilo = PsGetHostSilo();
        P[4](HostSilo);
      }
      KiUnstackDetachProcess((__int64)v12, 0LL);
      v3 = *P;
    }
    if ( *((void (__fastcall ***)(_QWORD))v3 + 1) != P || (v8 = (PVOID *)P[1], *v8 != P) )
      __fastfail(3u);
    *v8 = v3;
    *((_QWORD *)v3 + 1) = v8;
    *P = 0LL;
    P[1] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v12);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v10) = 1;
    v11 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v10, 0LL);
    KiUnstackDetachProcess((__int64)v12, 0LL);
    if ( v11 )
    {
      if ( v11 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
