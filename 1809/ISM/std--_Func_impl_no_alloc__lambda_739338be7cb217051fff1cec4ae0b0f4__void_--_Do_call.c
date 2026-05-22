/*
 * XREFs of std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180043F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180043030 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x180044540 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18004CC74 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rdi
  MPCCursorManager *v2; // rbx
  _DWORD *v3; // rcx
  ISMTracing *v4; // rcx
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v1 + 2136) = *(_DWORD *)(a1 + 8);
  v2 = *(MPCCursorManager **)(v1 + 1896);
  if ( v2 && *((_BYTE *)v2 + 64) )
  {
    *((_BYTE *)v2 + 56) = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) == 1;
    MPCCursorManager::UpdateMouseBinding(v2);
  }
  MPCHolographicInputManager::UpdateDoubleClickValues((MPCHolographicInputManager *)v1);
  v5 = *(_DWORD *)(v1 + 2136) == 1;
  v3 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(v4, &v5);
    }
  }
}
