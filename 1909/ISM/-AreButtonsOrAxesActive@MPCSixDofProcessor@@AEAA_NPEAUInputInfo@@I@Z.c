/*
 * XREFs of ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x18012FBCC
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180131BE0 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 */

bool __fastcall MPCSixDofProcessor::AreButtonsOrAxesActive(
        MPCSixDofProcessor *this,
        struct InputInfo *a2,
        char a3,
        const char *a4)
{
  struct BamoMPCConstantManagerClientPrincipal *v6; // rdi
  float v7; // xmm6_4
  unsigned __int64 v8; // rcx
  int v9; // eax
  struct BamoMPCConstantManagerClientPrincipal *v10; // rdi
  float v11; // xmm7_4
  unsigned __int64 v12; // rsi
  int v13; // eax
  const char *v14; // r9
  float v15; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v16; // rbx
  float v17; // xmm6_4
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( ((unsigned __int8)~a3 & *((_BYTE *)a2 + 728) & 0x3F) != 0 )
    return 1;
  if ( *((_BYTE *)a2 + 771) )
  {
    v6 = MPCConstantManager::s_instance;
    v7 = *((float *)a2 + 190);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
      __debugbreak();
    }
    v8 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
    if ( v7 > MPCConstantManager::GetStaticConstant<float>((__int64)v6, v9, L"TriggerDeadzone").m128_f32[0] )
      return 1;
  }
  if ( !*((_BYTE *)a2 + 772) )
    return 0;
  v10 = MPCConstantManager::s_instance;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 188)) & _xmm);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v12 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v13 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 48LL))(v12);
  if ( v11 > MPCConstantManager::GetStaticConstant<float>((__int64)v10, v13, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  v15 = *((float *)a2 + 189);
  v16 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v14);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 48LL))(v12);
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm);
  return v17 > MPCConstantManager::GetStaticConstant<float>((__int64)v16, v18, L"ThumbstickDeadzone").m128_f32[0];
}
