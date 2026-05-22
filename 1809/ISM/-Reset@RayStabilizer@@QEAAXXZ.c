/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x1801030B4
 * Callers:
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1800F7CBC (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800FAD1C (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FC980 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1800FD410 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x180100920 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x1800F49CC (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXX.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  std::deque<RayStabilizationResult>::_Tidy(this);
  memset_0(v4, 0, sizeof(v4));
  v2 = v4[0];
  *((_BYTE *)this + 80) = 0;
  v3 = v4[1];
  *((_OWORD *)this + 3) = v2;
  *((_OWORD *)this + 4) = v3;
}
