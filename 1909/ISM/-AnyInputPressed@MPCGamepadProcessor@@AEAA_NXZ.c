/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801371EC
 * Callers:
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180137B10 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180137B30 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138CD0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 */

char __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  char v4; // bl
  struct BamoMPCConstantManagerClientPrincipal *v6; // rbp
  double v7; // xmm7_8
  char *v8; // rsi
  int v9; // eax
  const char *v10; // r9
  struct BamoMPCConstantManagerClientPrincipal *v11; // rbp
  double v12; // xmm7_8
  int v13; // eax
  const char *v14; // r9
  struct BamoMPCConstantManagerClientPrincipal *v15; // rbp
  double v16; // xmm7_8
  int v17; // eax
  const char *v18; // r9
  struct BamoMPCConstantManagerClientPrincipal *v19; // rbp
  double v20; // xmm7_8
  int v21; // eax
  const char *v22; // r9
  struct BamoMPCConstantManagerClientPrincipal *v23; // rbp
  double v24; // xmm6_8
  int v25; // eax
  const char *v26; // r9
  double v27; // xmm6_8
  struct BamoMPCConstantManagerClientPrincipal *v28; // rdi
  int v29; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( *((_DWORD *)this + 1676) )
    return 1;
  v6 = MPCConstantManager::s_instance;
  *(_QWORD *)&v7 = *((_QWORD *)this + 844) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v8 = (char *)this + 32;
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 4) + 48LL))((char *)this + 32);
  if ( v7 > MPCConstantManager::GetStaticConstant<float>((__int64)v6, v9, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  v11 = MPCConstantManager::s_instance;
  *(_QWORD *)&v12 = *((_QWORD *)this + 843) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 48LL))(v8);
  if ( v12 > MPCConstantManager::GetStaticConstant<float>((__int64)v11, v13, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  v15 = MPCConstantManager::s_instance;
  *(_QWORD *)&v16 = *((_QWORD *)this + 841) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v14);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 48LL))(v8);
  if ( v16 > MPCConstantManager::GetStaticConstant<float>((__int64)v15, v17, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  v19 = MPCConstantManager::s_instance;
  *(_QWORD *)&v20 = *((_QWORD *)this + 842) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v18);
    __debugbreak();
  }
  v21 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 48LL))(v8);
  if ( v20 > MPCConstantManager::GetStaticConstant<float>((__int64)v19, v21, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  v23 = MPCConstantManager::s_instance;
  v24 = *((double *)this + 839);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v22);
    __debugbreak();
  }
  v25 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 48LL))(v8);
  if ( v24 > MPCConstantManager::GetStaticConstant<float>((__int64)v23, v25, L"TriggerDeadzone").m128_f32[0] )
    return 1;
  v27 = *((double *)this + 840);
  v28 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v26);
    __debugbreak();
  }
  v29 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 48LL))(v8);
  if ( v27 > MPCConstantManager::GetStaticConstant<float>((__int64)v28, v29, L"TriggerDeadzone").m128_f32[0] )
    return 1;
  return v4;
}
