/*
 * XREFs of StorPortUnitPowerNotRequiredStep1 @ 0x1C0044330
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C000617C (RaidUnitReenablePendingTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     McTemplateK0pquuutq @ 0x1C0041D40 (McTemplateK0pquuutq.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C00434E8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0044418 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep1(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-38h]
  char v6; // [rsp+28h] [rbp-30h]
  char v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      v8 = *(_BYTE *)(Context + 98);
      v7 = *(_BYTE *)(Context + 97);
      v6 = *(_BYTE *)(Context + 96);
      v5 = *(_DWORD *)(v4 + 56);
      McTemplateK0pquuutq((struct _MCGEN_TRACE_CONTEXT *)v4, v2, v3, **(_QWORD **)(Context + 1744), v5, v6, v7, v8);
    }
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 816) = 0;
    if ( *(_DWORD *)(Context + 920) && (*(_BYTE *)(Context + 449) & 0x40) != 0 )
      *(_BYTE *)(Context + 1734) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerNotRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
  }
}
