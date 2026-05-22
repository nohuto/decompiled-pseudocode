/*
 * XREFs of _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x18012EF8C
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801327D4 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180089054 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 */

LSTATUS __fastcall lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(__int64 a1, const WCHAR *a2, _WORD *a3)
{
  LSTATUS result; // eax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h]

  result = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\ISM\\6dof",
             a2,
             0x10u,
             0LL,
             *(PVOID *)a1,
             *(LPDWORD *)(a1 + 8));
  if ( !result )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v6);
      __debugbreak();
    }
    BYTE4(v8) = 2;
    *(float *)&v8 = (float)**(int **)a1 / 1000.0;
    return MPCConstantManager::ChangeConstant((__int64)MPCConstantManager::s_instance, 0x2000, a3, v8);
  }
  return result;
}
