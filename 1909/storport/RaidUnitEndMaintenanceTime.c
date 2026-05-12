/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x1C0040FB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C00065D8 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0quuutq @ 0x1C00404B8 (McTemplateK0quuutq.c)
 *     RaidUnitMaintenanceTime @ 0x1C0041134 (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v4 = *(_QWORD *)(a2 + 1744);
    if ( (*(_DWORD *)(v4 + 140) & 1) != 0 )
    {
      if ( (byte_1C0062741 & 1) != 0 )
      {
        McTemplateK0quuutq(
          (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(v4 + 136) == 0),
          *(_QWORD *)(a2 + 24),
          v3,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 96),
          *(_BYTE *)(a2 + 97),
          *(_BYTE *)(a2 + 98),
          *(_DWORD *)(v4 + 136) == 0,
          *(_DWORD *)(v4 + 136));
        v4 = *(_QWORD *)(a2 + 1744);
      }
      *(_DWORD *)(v4 + 140) &= ~1u;
      RaidUnitPoFxIdleComponent(a2, 0, 0, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 1744) + 136LL) )
        RaidUnitMaintenanceTime(a2);
      else
        *(_QWORD *)(*(_QWORD *)(a2 + 1744) + 128LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1736));
  }
}
