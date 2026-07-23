/*
 * XREFs of KeInitializeTimerTable @ 0x14072ADB8
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x14017EB98 (KiInitializeTimer2Data.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     KiInitializeForceIdle @ 0x14072AEF8 (KiInitializeForceIdle.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1)
{
  unsigned __int8 v2; // cl
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rdi
  void *v7; // rsi
  __int64 v8; // rcx
  PVOID PoolWithTag; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = (unsigned __int8)off_1403FF5A0[0]() != 0;
    }
    KiInitializeTimer2Data();
  }
  v2 = *(_BYTE *)(a1 + 208);
  if ( !KiPendingTimerBitmaps[2 * v2 + 1] )
  {
    v6 = 0x4000LL;
    if ( v2 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v7 = 0LL;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x4000uLL, 0x6254654Bu);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        memset(PoolWithTag, 0, 0x4000uLL);
        v2 = *(_BYTE *)(a1 + 208);
      }
    }
    else
    {
      v7 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v6 = 32LL;
    }
    v8 = 2LL * v2;
    KiPendingTimerBitmaps[v8] = 8 * v6;
    KiPendingTimerBitmaps[v8 + 1] = (__int64)v7;
  }
  *(_DWORD *)(a1 + 11892) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 22832), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 22888) )
    *(_WORD *)(a1 + 22834) = *(_DWORD *)(a1 + 36) + 1280;
  v3 = a1 + 14472;
  v4 = 256LL;
  do
  {
    *(_QWORD *)(v3 - 8) = 0LL;
    *(_QWORD *)(v3 + 8) = v3;
    *(_QWORD *)v3 = v3;
    *(_DWORD *)(v3 + 20) = -1;
    *(_DWORD *)(v3 + 16) = 0;
    v3 += 32LL;
    --v4;
  }
  while ( v4 );
  KiInitializeForceIdle(a1);
  return 0LL;
}
