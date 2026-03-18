/*
 * XREFs of WdipSemDisableContextProvider @ 0x1407191D0
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140719160 (WdipSemDisableContextProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     WdipSemCaptureState @ 0x140158E24 (WdipSemCaptureState.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WdipSemEnableDisableTrace @ 0x1407192DC (WdipSemEnableDisableTrace.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404355E8, 0LL);
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
  ExReleasePushLockEx((ULONG_PTR)&qword_1404355E8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
