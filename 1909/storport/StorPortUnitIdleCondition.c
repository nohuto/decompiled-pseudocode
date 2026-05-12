/*
 * XREFs of StorPortUnitIdleCondition @ 0x1C0007330
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00068B0 (RaidIsUnitControlSupported.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006938 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0pquuut @ 0x1C003FC44 (McTemplateK0pquuut.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C004136C (RaidUnitSendPoFxActiveToMiniport.c)
 */

void __fastcall StorPortUnitIdleCondition(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rdx

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0062741 & 1) != 0 )
      McTemplateK0pquuut(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleConditionStart,
        v4,
        **(_QWORD **)(a1 + 1744),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2);
    *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) &= ~2u;
    v5 = *(_QWORD *)(a1 + 1744);
    if ( (*(_DWORD *)(v5 + 32) & 0x80u) != 0 )
    {
      RaidUnitAdaptiveIdleTimeout(a1);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 56LL) = MEMORY[0xFFFFF78000000014];
      v5 = *(_QWORD *)(a1 + 1744);
    }
    if ( !*(_BYTE *)(a1 + 695) )
      *(_BYTE *)(a1 + 695) = 1;
    if ( (*(_DWORD *)(v5 + 32) & 4) != 0 && RaidIsUnitControlSupported(a1, 6) )
      RaidUnitSendPoFxActiveToMiniport(a1, v7, 0LL);
    PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1744), a2);
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0062741 & 1) != 0 )
        McTemplateK0pquuut(
          *(_QWORD *)(a1 + 24),
          (unsigned int)&EventUnitIdleConditionStop,
          v6,
          **(_QWORD **)(a1 + 1744),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a2);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
