/*
 * XREFs of ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023E500
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___ @ 0x1C023D0C4 (CWindowGroupManager--_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___.c)
 *     ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023D40C (-AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C023D6D0 (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023DAE4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023E330 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C023E480 (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023E5FC (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

char __fastcall CWindowGroup::_UpdateWindowInternal(__int64 a1, CWindow *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // edi
  char v6; // r12
  char v9; // bl
  char v10; // si
  CWindow *WindowFromRole; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (a4 >> 1) & 2;
  v6 = a4;
  v9 = 1;
  v10 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  WindowFromRole = (CWindow *)CWindowGroup::_GetWindowFromRole(a1, 1);
  v16 = (__int64)WindowFromRole;
  if ( (v6 & 2) == 0 )
  {
    if ( WindowFromRole
      && a3 == 1
      && WindowFromRole != a2
      && CWindow::CanTransferForeground(WindowFromRole, v12, v14, v15) )
    {
      v10 = 1;
    }
    else
    {
      v10 = 0;
      v5 |= 1u;
    }
  }
  if ( (!v16 || (v6 & 1) == 0 || (v9 = CWindowGroup::_TemplateWindow(v13, (__int64)a2, v16, v5)) != 0)
    && a3
    && (unsigned int)CWindowGroup::_UpdateWindowRole(a1, a2, a3) )
  {
    v10 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  if ( v9 && v10 )
    return CWindow::ForceForeground(a2);
  return v9;
}
