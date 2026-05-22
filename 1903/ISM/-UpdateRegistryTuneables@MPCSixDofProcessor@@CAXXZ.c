/*
 * XREFs of ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801327D4
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18012E8B0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@st.c)
 *     wistd::__function::__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18012FAE0 (wistd--__function--__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(en_ea_18012FAE0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180089054 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@PEBG@Z @ 0x18012DEBC (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@PEBG@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x18012E3E0 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 *     _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x18012EF8C (_lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_--operator().c)
 */

void MPCSixDofProcessor::UpdateRegistryTuneables(void)
{
  const char *v0; // r9
  const char *v1; // r9
  const char *v2; // r9
  const char *v3; // r9
  const char *v4; // r9
  const char *v5; // r9
  const char *v6; // r9
  const char *v7; // r9
  const char *v8; // r9
  const char *v9; // r9
  const char *v10; // r9
  const char *v11; // r9
  const char *v12; // r9
  const char *v13; // r9
  const char *v14; // r9
  const char *v15; // r9
  const char *v16; // r9
  const char *v17; // r9
  const char *v18; // r9
  const char *v19; // r9
  _QWORD v20[2]; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int32 v21; // [rsp+B0h] [rbp-70h] BYREF
  unsigned __int32 v22; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned __int32 v23; // [rsp+B8h] [rbp-68h] BYREF
  unsigned __int32 v24; // [rsp+BCh] [rbp-64h] BYREF
  unsigned __int32 v25; // [rsp+C0h] [rbp-60h] BYREF
  unsigned __int32 v26; // [rsp+C4h] [rbp-5Ch] BYREF
  unsigned __int32 v27; // [rsp+C8h] [rbp-58h] BYREF
  unsigned __int32 v28; // [rsp+CCh] [rbp-54h] BYREF
  unsigned __int32 v29; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int32 v30; // [rsp+D4h] [rbp-4Ch] BYREF
  unsigned __int32 v31; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int32 v32; // [rsp+DCh] [rbp-44h] BYREF
  unsigned __int32 v33; // [rsp+E0h] [rbp-40h] BYREF
  unsigned __int32 v34; // [rsp+E4h] [rbp-3Ch] BYREF
  unsigned __int32 v35; // [rsp+E8h] [rbp-38h] BYREF
  unsigned __int32 v36; // [rsp+ECh] [rbp-34h] BYREF
  unsigned __int32 v37; // [rsp+F0h] [rbp-30h] BYREF
  unsigned __int32 v38[7]; // [rsp+F4h] [rbp-2Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp-8h]
  int pvData; // [rsp+120h] [rbp+0h] BYREF
  DWORD pcbData; // [rsp+128h] [rbp+8h] BYREF
  __int64 v42; // [rsp+130h] [rbp+10h] BYREF
  unsigned __int32 v43; // [rsp+138h] [rbp+18h] BYREF

  pvData = 0;
  v20[0] = &pvData;
  pcbData = 4;
  v20[1] = &pcbData;
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxLinearVelocity_X",
    L"HomeMaximumLinearVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxLinearVelocity_Y",
    L"HomeMaximumLinearVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxLinearVelocity_Z",
    L"HomeMaximumLinearVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxAngularVelocity_X",
    L"HomeMaximumAngularVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxAngularVelocity_Y",
    L"HomeMaximumAngularVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxAngularVelocity_Z",
    L"HomeMaximumAngularVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxLinearAcceleration_X",
    L"HomeMaximumLinearAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxLinearAcceleration_Y",
    L"HomeMaximumLinearAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxLinearAcceleration_Z",
    L"HomeMaximumLinearAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxAngularAcceleration_X",
    L"HomeMaximumAngularAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxAngularAcceleration_Y",
    L"HomeMaximumAngularAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxAngularAcceleration_Z",
    L"HomeMaximumAngularAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxWeightedDistance_X",
    L"HomeMaximumWeightedDistance_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxWeightedDistance_Y",
    L"HomeMaximumWeightedDistance_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeMaxWeightedDistance_Z",
    L"HomeMaximumWeightedDistance_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()((__int64)v20, L"HomeDistanceWeight", L"HomeDistanceWeight");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeAllowTimeBetweenClicksInMS",
    L"HomeAllowTimeBetweenClicksInSec");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeSecondClickLinearMultiplier",
    L"HomeSecondClickLinearMultiplier");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)v20,
    L"HomeSecondClickAngularMultiplier",
    L"HomeSecondClickAngularMultiplier");
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\ISM\\6dof",
          L"HomeCancelExceedThresholdMaxCount",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v0);
      __debugbreak();
    }
    LODWORD(v42) = pvData;
    BYTE4(v42) = 0;
    MPCConstantManager::ChangeConstant(
      (__int64)MPCConstantManager::s_instance,
      0x2000,
      L"HomeCancelExceedThresholdMaxCount",
      v42);
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v0);
    __debugbreak();
  }
  LODWORD(v42) = MPCConstantManager::GetStaticConstant<unsigned long>(
                   (__int64)MPCConstantManager::s_instance,
                   0x2000,
                   L"HomeCancelExceedThresholdMaxCount");
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v1);
    __debugbreak();
  }
  v43 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeSecondClickAngularMultiplier").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v2);
    __debugbreak();
  }
  v21 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeSecondClickLinearMultiplier").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v3);
    __debugbreak();
  }
  v22 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeAllowTimeBetweenClicksInSec").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v4);
    __debugbreak();
  }
  v23 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeDistanceWeight").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v5);
    __debugbreak();
  }
  v24 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumWeightedDistance_Z").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v6);
    __debugbreak();
  }
  v25 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumWeightedDistance_Y").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  v26 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumWeightedDistance_X").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v8);
    __debugbreak();
  }
  v27 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumLinearAcceleration_Z").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v9);
    __debugbreak();
  }
  v28 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumLinearAcceleration_Y").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
    __debugbreak();
  }
  v29 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumLinearAcceleration_X").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
    __debugbreak();
  }
  v30 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumAngularAcceleration_Z").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v12);
    __debugbreak();
  }
  v31 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumAngularAcceleration_Y").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
    __debugbreak();
  }
  v32 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumAngularAcceleration_X").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v14);
    __debugbreak();
  }
  v33 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumLinearVelocity_Z").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
    __debugbreak();
  }
  v34 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumLinearVelocity_Y").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v16);
    __debugbreak();
  }
  v35 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumLinearVelocity_X").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v17);
    __debugbreak();
  }
  v36 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumAngularVelocity_Z").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v18);
    __debugbreak();
  }
  v37 = MPCConstantManager::GetStaticConstant<float>(
          (__int64)MPCConstantManager::s_instance,
          0x2000,
          L"HomeMaximumAngularVelocity_Y").m128_u32[0];
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v19);
    __debugbreak();
  }
  v38[0] = MPCConstantManager::GetStaticConstant<float>(
             (__int64)MPCConstantManager::s_instance,
             0x2000,
             L"HomeMaximumAngularVelocity_X").m128_u32[0];
  ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged<float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,unsigned long>(
    (float *)v38,
    (float *)&v37,
    (float *)&v36,
    (float *)&v35,
    (float *)&v34,
    (float *)&v33,
    (float *)&v32,
    (float *)&v31,
    (float *)&v30,
    (float *)&v29,
    (float *)&v28,
    (float *)&v27,
    (float *)&v26,
    (float *)&v25,
    (float *)&v24,
    (float *)&v23,
    (float *)&v22,
    (float *)&v21,
    (float *)&v43,
    &v42);
}
