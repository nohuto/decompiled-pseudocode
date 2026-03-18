/*
 * XREFs of EtwpDisableKernelTrace @ 0x1406C5A4C
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C55B8 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x1406C57B0 (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeCancelTimer2 @ 0x1400FAF50 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x1402851C4 (IoPerfReset.c)
 *     KeStopProfile @ 0x140295C40 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1402EC8F0 (DbgSetDebugPrintCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C5BD8 (EtwpUpdateFileInfoDriverState.c)
 *     AlpcUnregisterLogRoutine @ 0x14084B6A8 (AlpcUnregisterLogRoutine.c)
 *     WmiSetNetworkNotify @ 0x1408B43AC (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, int *a2, int a3, int a4)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int i; // ebx
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
  {
    v8 = *a2;
    if ( (*a2 & 0x20000) != 0 )
    {
      CmpTraceRoutine = 0LL;
      CmpTraceTxrRoutine = 0LL;
    }
    if ( (v8 & 0x100000) != 0 )
    {
      AlpcUnregisterLogRoutine();
      v8 = *a2;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      qword_1403FE830 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x4000000) != 0 )
    {
      qword_1403FE828 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x200) != 0 )
    {
      qword_1403FE820 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_1403FE810 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x400) != 0 )
      qword_140438700 = 0LL;
    v9 = a2[4];
    if ( (v9 & 1) != 0 )
    {
      qword_140438708 = 0LL;
      v9 = a2[4];
    }
    if ( (v9 & 2) != 0 )
      qword_140438710 = 0LL;
    v10 = *a2;
    if ( (*a2 & 0x200000) != 0 )
    {
      EtwpSplitIoNotifyRoutines = 0LL;
      v10 = *a2;
    }
    if ( (v10 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    v11 = a2[4];
    if ( (v11 & 0x400000) != 0 )
    {
      qword_1403FE7F0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x80000) != 0 )
    {
      qword_1403FE7F8 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x100000) != 0 )
    {
      qword_1403FE800 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x200000) != 0 )
    {
      qword_1403FE808 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x1000000) != 0 )
    {
      qword_140404B30 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x2000000) != 0 )
      qword_140404B38 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_140404B40 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    v12 = a2[1];
    if ( (v12 & 2) != 0 )
    {
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
      v12 = a2[1];
    }
    if ( (v12 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_14040A238 + 248 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
      ObpTraceFlags &= ~4u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)&EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, (_DWORD)a2, 0, a3, a4);
}
