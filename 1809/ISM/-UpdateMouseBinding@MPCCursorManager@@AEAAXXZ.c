/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18004CC74
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180043194 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180043F00 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x180043F90 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x18004CE78 (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v3; // rcx
  _BYTE *v4; // rdi
  char v5; // bl
  bool v6; // dl
  bool v7; // zf
  char v8; // al
  const char *v9; // r9
  const char *v10; // r9
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  unsigned __int8 v13; // dl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  v4 = (char *)this + 66;
  v5 = *((_BYTE *)this + 66);
  v6 = (*((_BYTE *)Instance + 2152) & 1) == 0;
  v7 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v6;
  if ( v7 || !v6 )
  {
    v8 = v5;
    if ( v5 )
    {
      if ( !(unsigned int)MITDisableMouseIntercept(v3) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x140,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
        __debugbreak();
      }
      *v4 = 0;
      v8 = 0;
    }
  }
  else
  {
    v8 = v5;
    if ( !v5 )
    {
      if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x13A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v9);
        JUMPOUT(0x18004CD9ELL);
      }
      *v4 = 1;
      v8 = 1;
    }
  }
  if ( v5 != v8 )
  {
    v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v11 )
    {
      if ( *v11 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
          v12,
          (const bool *)this + 66,
          (const bool *)this + 56,
          (const bool *)this + 65);
      }
    }
  }
  *((_DWORD *)this + 8) = 0;
  v13 = *v4 == 0;
  *(_OWORD *)this = 0uLL;
  *((_OWORD *)this + 1) = 0u;
  MPCCursorManager::UpdateCursorVisibility(this, v13, 1u, 1);
}
