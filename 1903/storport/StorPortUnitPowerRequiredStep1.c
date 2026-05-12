/*
 * XREFs of StorPortUnitPowerRequiredStep1 @ 0x1C00410B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0004FC4 (RaidUnitReenablePendingTimer.c)
 *     RaidIsUnitControlSupported @ 0x1C0006860 (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0pquuutx @ 0x1C003EA90 (McTemplateK0pquuutx.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C0040170 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0041218 (StorPortUnitPowerRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerRequiredStep1(__int64 Context)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // [rsp+20h] [rbp-38h]
  char v8; // [rsp+28h] [rbp-30h]
  char v9; // [rsp+30h] [rbp-28h]
  char v10; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( *(_QWORD *)(Context + 1768) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1488) + 32LL) & 0x20) != 0
        || *(char *)(*(_QWORD *)(Context + 24) + 108LL) < 0 )
      {
        v2 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 1768)) / 0x2710uLL;
        *(_QWORD *)(Context + 1776) += v2;
        if ( v2 >= 0x2710 )
          ++*(_DWORD *)(Context + 1816);
        if ( !*(_QWORD *)(Context + 1744) )
          *(_QWORD *)(Context + 1744) = *(_QWORD *)(*(_QWORD *)(Context + 24) + 5272LL);
      }
      *(_QWORD *)(Context + 1768) = 0LL;
    }
    ++*(_DWORD *)(Context + 1808);
    if ( StorEtwLoggingEnabled && (byte_1C0061741 & 1) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      v10 = *(_BYTE *)(Context + 98);
      v9 = *(_BYTE *)(Context + 97);
      v8 = *(_BYTE *)(Context + 96);
      v7 = *(_DWORD *)(v4 + 56);
      McTemplateK0pquuutx((struct _MCGEN_TRACE_CONTEXT *)v4, v2, v3, **(_QWORD **)(Context + 1488), v7, v8, v9, v10);
    }
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1488) + 32LL) |= 8u;
    v5 = *(_QWORD *)(Context + 1488);
    v6 = *(_DWORD *)(v5 + 32);
    if ( (v6 & 0x10) != 0 )
    {
      *(_DWORD *)(v5 + 32) = v6 & 0xFFFFFFEF;
      v5 = *(_QWORD *)(Context + 1488);
    }
    else
    {
      *(_DWORD *)(Context + 584) = 1;
    }
    if ( (*(_DWORD *)(v5 + 32) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1480));
  }
}
