/*
 * XREFs of PsStartSiloMonitor @ 0x1407568E0
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
 *     PspGetServerSiloStatePointer @ 0x1402E9870 (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140601968 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x140756A84 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x14088CEBC (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi
  void *i; // rcx
  void *NextSilo; // rax
  char v6; // bp
  int v7; // r14d
  void *j; // rcx
  void *v9; // rax
  void *v10; // rdi
  __int64 *v11; // rax
  char v12; // si
  __int64 HostSilo; // rbp
  void *v15; // r8
  int v16; // ebp
  void *k; // rcx
  void *v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  _BYTE v21[48]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v15 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
        {
          v2 = -1073741637;
          goto LABEL_13;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_8;
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v21);
      HostSilo = PsGetHostSilo();
      v2 = PspInvokeCreateCallback(HostSilo, a1);
      if ( v2 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(HostSilo, a1);
      KiUnstackDetachProcess((__int64)v21, 0LL);
      if ( v2 >= 0 )
      {
LABEL_8:
        v6 = 0;
        v7 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v21);
        for ( j = 0LL; ; j = v10 )
        {
          v9 = PspGetNextSilo(j, 1);
          v10 = v9;
          if ( !v9 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v9) - 1) <= 2 )
          {
            ++v7;
            if ( (int)PspInvokeCreateCallback(v10, a1) < 0 )
              v6 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v21, 0LL);
        if ( v6 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v16 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v21);
            for ( k = 0LL; ; k = v19 )
            {
              v18 = PspGetNextSilo(k, 1);
              v19 = v18;
              if ( !v18 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v18) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v19, a1);
                ++v16;
              }
            }
            if ( v7 != v16 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v20 = PsGetHostSilo();
              PspInvokeCreateCallback(v20, a1);
            }
            KiUnstackDetachProcess((__int64)v21, 0LL);
          }
          v2 = -1073741248;
        }
        else
        {
          v11 = (__int64 *)qword_14040F388;
          if ( *(__int64 **)qword_14040F388 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v11;
          *v11 = a1;
          qword_14040F388 = a1;
        }
      }
    }
  }
LABEL_13:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
