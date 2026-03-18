/*
 * XREFs of WdipSemEnableContextProvider @ 0x140744B0C
 * Callers:
 *     WdipSemEnableContextProviders @ 0x140744AB0 (WdipSemEnableContextProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     WdipSemEnableDisableTrace @ 0x1407174EC (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  __int64 v4; // rbx
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // r15
  int v10; // r14d

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140435208, 0LL);
  if ( !a1 )
  {
    v2 = -1073741811;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_BYTE *)(a1 + 18);
    v6 = *(_BYTE *)(v4 + 48);
    v7 = *(_QWORD *)(v4 + 56);
    v8 = *(_DWORD *)(v4 + 64);
    if ( v5 <= v6 )
      v5 = *(_BYTE *)(v4 + 48);
    v9 = v7 | *(_QWORD *)(a1 + 24);
    v10 = v8 | *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(v4 + 69) && v9 == v7 && v5 == v6 && v10 == v8 )
      goto LABEL_8;
    v2 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           a1,
           v5,
           v7 | *(_QWORD *)(a1 + 24),
           v10,
           1);
    if ( v2 >= 0 )
    {
      *(_BYTE *)(v4 + 69) = 1;
      *(_QWORD *)(v4 + 56) = v9;
      *(_BYTE *)(v4 + 48) = v5;
      *(_DWORD *)(v4 + 64) = v10;
LABEL_8:
      ++*(_DWORD *)(v4 + 72);
    }
  }
LABEL_9:
  ExReleasePushLockEx((ULONG_PTR)&qword_140435208, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
