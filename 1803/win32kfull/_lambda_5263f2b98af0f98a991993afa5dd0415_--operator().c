/*
 * XREFs of _lambda_5263f2b98af0f98a991993afa5dd0415_::operator() @ 0x1C01FC328
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___ @ 0x1C01FC104 (CWindowGroupManager--_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___.c)
 * Callees:
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C01FC7E4 (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD3B8 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z @ 0x1C01FD52C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD6A0 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

__int64 __fastcall lambda_5263f2b98af0f98a991993afa5dd0415_::operator()(_QWORD *a1, CWindow *a2)
{
  int v2; // r8d
  unsigned int v5; // edi
  CWindowGroup *v6; // rcx

  v2 = *((_DWORD *)a2 + 6);
  v5 = v2 != 1 ? 0xC0000429 : 0;
  if ( v2 == 1 )
  {
    *(_QWORD *)a1[2] = CWindowGroup::_GetWindowFromRole(*a1, 2LL);
    if ( *(_QWORD *)a1[2] )
    {
      LOBYTE(v6) = CWindow::CanTransferForeground(a2);
      *(_BYTE *)a1[1] = (_BYTE)v6;
      if ( CWindowGroup::_TemplateWindow(v6, *(struct CWindow **)a1[2], a2, *(_BYTE *)a1[1] == 0) )
        CWindowGroup::_UpdateWindowRole(*a1, *(_QWORD *)a1[2], 1LL);
      else
        *(_BYTE *)a1[1] = 0;
    }
  }
  return v5;
}
