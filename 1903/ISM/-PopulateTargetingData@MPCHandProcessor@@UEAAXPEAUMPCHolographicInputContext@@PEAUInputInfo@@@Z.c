/*
 * XREFs of ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180135E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084CA4 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ?ComputeHandBeamFromRelativePivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801346BC (-ComputeHandBeamFromRelativePivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULeg.c)
 *     ?ComputeHandBeamFromShoulderPivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180134BE4 (-ComputeHandBeamFromShoulderPivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULeg.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801367C0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@wil@@.c)
 */

void __fastcall MPCHandProcessor::PopulateTargetingData(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  struct BamoMPCConstantManagerClientPrincipal *v4; // r14
  const char *v7; // r9
  unsigned __int64 v8; // rdi
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  int v15; // eax
  char Static; // al
  const char *v17; // r9
  MPCHandProcessor *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  int v20; // [rsp+28h] [rbp-58h]
  float v21[4]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v22[4]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = MPCConstantManager::s_instance;
  v7 = (const char *)**(unsigned int **)(this + 24);
  *((_DWORD *)a3 + 21) = *((_DWORD *)a3 + 207);
  *((_DWORD *)a3 + 20) = (_DWORD)v7;
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  wil::Feature<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::ReportUsageToService();
  v8 = this & -(__int64)(this != 24);
  v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v4, v9, L"UseSphereCollideablePointsForHitTesting") )
  {
    v10 = *(_OWORD *)((char *)a3 + 1960);
    v11 = *(_OWORD *)((char *)a3 + 1976);
    v20 = *((_DWORD *)a3 + 333);
    v22[0] = v10;
    v12 = *(_OWORD *)((char *)a3 + 1992);
    v22[1] = v11;
    v13 = *(_OWORD *)((char *)a3 + 2008);
    v22[2] = v12;
    v19 = *(_QWORD *)((char *)a3 + 1324);
    v22[3] = v13;
    Windows::Foundation::Numerics::transform(v21, (float *)&v19, (float *)v22);
    Windows::Foundation::Numerics::transform((float *)&v19, v21, (float *)a2);
    LODWORD(v12) = v19;
    LODWORD(v13) = HIDWORD(v19);
    *((_DWORD *)a3 + 22) = 1;
    *((_DWORD *)a3 + 31) = v12;
    *((_DWORD *)a3 + 33) = v20;
    *((_DWORD *)a3 + 32) = v13;
    v14 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(this & -(__int64)(this != 24));
    *((_DWORD *)a3 + 34) = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v14, L"CollideableRadiusInMeters").m128_u32[0];
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(this & -(__int64)(this != 24));
    Static = MPCConstantManager::GetStaticConstant<bool>((__int64)v4, v15, L"UseRelativePivot");
    v18 = (MPCHandProcessor *)(this - 24);
    if ( Static )
      MPCHandProcessor::ComputeHandBeamFromRelativePivot(v18, a2, a3, v17);
    else
      MPCHandProcessor::ComputeHandBeamFromShoulderPivot(v18, a2, a3, v17);
  }
}
