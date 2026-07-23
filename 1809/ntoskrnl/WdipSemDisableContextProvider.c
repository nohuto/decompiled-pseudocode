/*
 * XREFs of WdipSemDisableContextProvider @ 0x140718D6C
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140718CFC (WdipSemDisableContextProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemCaptureState @ 0x140173914 (WdipSemCaptureState.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     WdipSemEnableDisableTrace @ 0x140718FD4 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebp
  int v6; // r8d
  __int64 v7; // rbx
  __int32 v8; // ecx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14040DFA8, 0LL);
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v7 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v7 + 40) )
        {
          LOBYTE(v6) = *(_BYTE *)(v7 + 16);
          v3 = WdipSemEnableDisableTrace(v8, a1, v6, *(_QWORD *)(v7 + 24), *(_DWORD *)(v7 + 32), 1);
          if ( v3 >= 0 )
          {
            *(_BYTE *)(v7 + 48) = *(_BYTE *)(v7 + 16);
            *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 24);
            *(_DWORD *)(v7 + 64) = *(_DWORD *)(v7 + 32);
          }
        }
        else
        {
          v3 = WdipSemEnableDisableTrace(v8, a1, 0, 0, 0, 0);
          if ( v3 >= 0 )
            memset((void *)(v7 + 48), 0, 0x20uLL);
        }
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_14040DFA8, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
