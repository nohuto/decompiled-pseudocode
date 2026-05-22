/*
 * XREFs of ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180089DF8
 * Callers:
 *     _lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator() @ 0x1800365F0 (_lambda_73ee74375a7aa9a7d53c1e011ef1d674_--operator().c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPCConstantManager *__fastcall MPCConstantManager::GetInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCConstantManager *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  return result;
}
