/*
 * XREFs of EtwDeleteSiloState @ 0x1408BA4E0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1408883D8 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExFreeCacheAwareRundownProtection @ 0x14010C960 (ExFreeCacheAwareRundownProtection.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwDeleteSiloState(char *P)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  signed __int64 *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed int i; // ecx
  unsigned int j; // edi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v9; // rcx
  void *v10; // rcx

  if ( !P )
    goto LABEL_19;
  v2 = *((_DWORD *)P + 4);
  v3 = 0;
  if ( v2 )
  {
    while ( *(_QWORD *)(*((_QWORD *)P + 57) + 8LL * v3) == 1LL )
    {
      if ( ++v3 >= v2 )
        goto LABEL_5;
    }
LABEL_19:
    KeBugCheck(0x11Du);
  }
LABEL_5:
  v4 = 0;
  v5 = (signed __int64 *)(P + 512);
  do
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v5, 0LL);
    for ( i = 0; (unsigned int)i < 3; ++i )
    {
      if ( (signed __int64 *)v5[2 * i - 6] != &v5[2 * i - 6] )
        goto LABEL_19;
    }
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegion();
    ++v4;
    v5 += 7;
  }
  while ( v4 < 0x40 );
  for ( j = 0; j < *((_DWORD *)P + 4); ++j )
  {
    v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*((_QWORD *)P + 56) + 8LL * j);
    if ( v9 )
      ExFreeCacheAwareRundownProtection(v9);
  }
  ExFreePoolWithTag(*((PVOID *)P + 517), 0x61777445u);
  ExFreePoolWithTag(*((PVOID *)P + 56), 0x61777445u);
  v10 = (void *)*((_QWORD *)P + 524);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x61777445u);
  ExFreePoolWithTag(P, 0x61777445u);
}
