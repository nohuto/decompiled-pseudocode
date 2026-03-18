/*
 * XREFs of _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C0224E40
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___ @ 0x1C0224B84 (CWindowGroupManager--_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___.c)
 * Callees:
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C0225254 (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0225E88 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C0225FFC (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0226174 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

__int64 __fastcall lambda_a3dfffe89e22da34bf9580289d018c81_::operator()(_QWORD *a1, CWindow *a2)
{
  int v2; // r8d
  unsigned int v5; // edi
  bool CanTransferForeground; // al
  __int64 v7; // rcx

  v2 = *((_DWORD *)a2 + 6);
  v5 = v2 != 1 ? 0xC0000429 : 0;
  if ( v2 == 1 )
  {
    *(_QWORD *)a1[2] = CWindowGroup::_GetWindowFromRole(*a1, 2LL);
    if ( *(_QWORD *)a1[2] )
    {
      CanTransferForeground = CWindow::CanTransferForeground(a2);
      if ( (unsigned __int8)CWindowGroup::_TemplateWindow(v7, *(_QWORD *)a1[2], a2, !CanTransferForeground) )
        CWindowGroup::_UpdateWindowRole(*a1, *(_QWORD *)a1[2], 1LL);
      else
        *(_BYTE *)a1[1] = 0;
    }
  }
  return v5;
}
