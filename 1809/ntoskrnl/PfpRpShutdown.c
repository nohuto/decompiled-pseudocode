/*
 * XREFs of PfpRpShutdown @ 0x140866714
 * Callers:
 *     PfpParametersPropagate @ 0x140866B44 (PfpParametersPropagate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpRpControlRequestReset @ 0x14069F594 (PfpRpControlRequestReset.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 *i; // rdx
  void *v6; // r11
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 *j; // rdx
  void *v11; // rcx

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v3 = *(unsigned __int64 **)(a1 + 8);
  if ( !v3 )
    goto LABEL_5;
  v4 = *v3;
  if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v4 = *v3;
  if ( (v4 & 1) != 0 )
  {
LABEL_5:
    for ( i = v3 + 1;
          (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
          ++i )
    {
      v4 = *i;
      if ( (*i & 1) == 0 )
        goto LABEL_20;
    }
    v4 = 0LL;
  }
LABEL_20:
  while ( v4 )
  {
    v6 = (void *)v4;
    v7 = *(_QWORD *)(v4 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v8 = *(_QWORD *)(a1 + 8)
       + 8
       * ((HIBYTE(v7)
         + 37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7)
            + 37
            * (((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
              + 37
              * (37 * ((unsigned __int8)v7 + 11623883)
               + (unsigned __int8)((unsigned __int16)(*(_WORD *)(v4 + 8) & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)))))))) & ((*(_DWORD *)(a1 + 4) >> 5) - 1));
    v9 = (unsigned __int64 *)v4;
    v4 = *(_QWORD *)v4;
    if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v9;
    if ( (v4 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v8 + 8);
            (unsigned __int64)j < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
            ++j )
      {
        v4 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_19;
      }
      v4 = 0LL;
    }
LABEL_19:
    ExFreePoolWithTag(v6, 0);
  }
  v11 = *(void **)(a1 + 8);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveCriticalRegion();
  return PfpRpControlRequestReset(a1);
}
