/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x18012D848
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18002883C (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x180133D54 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180136CA8 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x18013B580 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013B6D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x18013E730 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x1800921E4 (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXX.c)
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
