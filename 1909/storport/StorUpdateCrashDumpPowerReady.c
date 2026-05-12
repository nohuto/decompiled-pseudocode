/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x1C00166B0
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00109C8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015CFC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0016284 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorPortAdapterIdleState @ 0x1C0041880 (StorPortAdapterIdleState.c)
 *     StorPortUnitIdleState @ 0x1C0041BB0 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C00167E0 (RaidGetStorPoFxComponent.c)
 */

char __fastcall StorUpdateCrashDumpPowerReady(__int64 a1)
{
  char v1; // si
  __int64 v2; // rbx
  char v3; // di
  char v4; // r14
  __int64 v6; // r9
  _DWORD *StorPoFxComponent; // rax
  unsigned int v8; // edx
  __int64 v9; // r9
  int v11; // eax
  _DWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 5080);
  v3 = 1;
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 109) & 0x40) != 0
    || *(_DWORD *)(a1 + 268) == 4
    && !*(_DWORD *)(a1 + 100)
    && ((v11 = *(_DWORD *)(a1 + 312), v11 == 5) || v11 == 17 || (*(_BYTE *)(a1 + 108) & 0x28) == 0x28)
    || (v6 = *(_QWORD *)(a1 + 5024)) != 0
    && ((v12 = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(v6 + 8), 0LL)) == 0LL
     || *v12 >= 2u && *(_DWORD *)(v14 + 16) > v12[9]
     || *v12 == 1 && (*(_BYTE *)(a1 + 108) & 0x20) != 0 && *(_DWORD *)(v14 + 16) > v13) )
  {
    v1 = 0;
  }
  else
  {
    if ( !v2 )
    {
      v3 = 0;
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(v2 + 450) & 4) == 0
      && (*(_DWORD *)(v2 + 492) != 4 || *(_DWORD *)(v2 + 948) || (*(_BYTE *)(v2 + 449) & 0x44) != 0x44) )
    {
      if ( !RaidUnitCheckAndAcquirePoFx(v2) )
        goto LABEL_15;
      StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(*(_QWORD *)(v2 + 1744) + 8LL), 0LL);
      if ( !StorPoFxComponent
        || *StorPoFxComponent >= 2u && *(_DWORD *)(v9 + 16) > StorPoFxComponent[9]
        || *StorPoFxComponent == 1 && (*(_BYTE *)(v2 + 449) & 0x40) != 0 && *(_DWORD *)(v9 + 16) > v8 )
      {
        v3 = 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1736));
LABEL_14:
      if ( v3 )
        goto LABEL_15;
      goto LABEL_22;
    }
    v3 = 0;
  }
LABEL_22:
  v4 = 0;
LABEL_15:
  *(_BYTE *)(a1 + 4973) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1734) = v3;
    *(_BYTE *)(v2 + 1735) = v4;
  }
  return v3;
}
