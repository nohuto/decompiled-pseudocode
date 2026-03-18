/*
 * XREFs of _lambda_4190402a2c2f59325fec7fff7b4602b2_::operator() @ 0x1C01FC2B0
 * Callers:
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C01FCD64 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD3B8 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C01FD3F4 (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z @ 0x1C01FD52C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD6A0 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

__int64 __fastcall lambda_4190402a2c2f59325fec7fff7b4602b2_::operator()(CWindowGroup **a1, struct CWindow *a2)
{
  struct CWindow *WindowFromRole; // rax
  CWindowGroup *v5; // rcx
  struct CWindow *v6; // rsi

  if ( *((_DWORD *)a2 + 6) == 1 )
  {
    WindowFromRole = (struct CWindow *)CWindowGroup::_GetWindowFromRole(*a1, 2LL);
    v6 = WindowFromRole;
    if ( WindowFromRole )
    {
      if ( CWindowGroup::_TemplateWindow(v5, WindowFromRole, a2, 1) )
        CWindowGroup::_UpdateWindowRole(*a1, v6, 1LL);
    }
  }
  CWindowGroup::_RemoveWindowAction(*a1, a2);
  return 0LL;
}
