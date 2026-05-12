/*
 * XREFs of StorPortUnitActiveConditionStep1 @ 0x1C00072D0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitActiveConditionStep2 @ 0x1C0007354 (StorPortUnitActiveConditionStep2.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     McTemplateK0pquuut @ 0x1C0041BCC (McTemplateK0pquuut.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C00432DC (RaidUnitSendPoFxActiveToMiniport.c)
 */

void __fastcall StorPortUnitActiveConditionStep1(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
      McTemplateK0pquuut(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStart,
        v4,
        **(_QWORD **)(a1 + 1744),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 4) != 0 )
    {
      if ( (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
      {
        LOBYTE(v6) = 1;
        RaidUnitSendPoFxActiveToMiniport(a1, v5, v6);
      }
    }
    StorPortUnitActiveConditionStep2(a1, a2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
