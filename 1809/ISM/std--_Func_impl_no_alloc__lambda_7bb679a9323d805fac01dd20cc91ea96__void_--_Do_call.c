/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x180043F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x18004447C (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18004CC74 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // r8d
  int v3; // edx
  MPCCursorManager *v4; // rbx
  _DWORD *v5; // rcx
  ISMTracing *v6; // rcx
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  bool v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  LOBYTE(a1) = v2;
  v3 = *(_DWORD *)(v1 + 2152);
  *(_DWORD *)(v1 + 2152) = v2;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v2) & 1) != 0 )
  {
    v4 = *(MPCCursorManager **)(v1 + 1896);
    if ( v4 )
    {
      if ( *((_BYTE *)v4 + 64) )
      {
        *((_BYTE *)v4 + 56) = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) == 1;
        MPCCursorManager::UpdateMouseBinding(v4);
        LODWORD(a1) = *(_DWORD *)(v1 + 2152);
      }
    }
  }
  v8 = a1 & 1;
  v7 = (a1 & 2) != 0;
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(v6, &v8, &v7);
    }
  }
}
