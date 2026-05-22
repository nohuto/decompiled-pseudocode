/*
 * XREFs of ?IsStartOfCapture@MPCHandProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180135820
 * Callers:
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180136984 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 */

char __fastcall MPCHandProcessor::IsStartOfCapture(
        unsigned __int64 this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  struct BamoMPCConstantManagerClientPrincipal *v4; // rsi
  char v5; // bl
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = MPCConstantManager::s_instance;
  v5 = 0;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 24)) + 48LL))(this & -(__int64)(this != 24));
  if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v4, v7, L"UseSphereCollideablePointsForHitTesting") )
    return *((_BYTE *)a2 + 224) != 0;
  if ( (*(_DWORD *)a2 & 0x662600) != 0 )
    return *((_DWORD *)a2 + 16) == 2;
  return v5;
}
