/*
 * XREFs of ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0226078
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___ @ 0x1C0224C34 (CWindowGroupManager--_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___.c)
 *     ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0224FA0 (-AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C0225254 (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C022565C (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0225E88 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C0225FFC (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0226174 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

char __fastcall CWindowGroup::_UpdateWindowInternal(__int64 a1, CWindow *a2, unsigned int a3, unsigned int a4)
{
  int v5; // edi
  char v6; // r12
  char v9; // bl
  char v10; // si
  CWindow *WindowFromRole; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (a4 >> 1) & 2;
  v6 = a4;
  v9 = 1;
  v10 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  WindowFromRole = (CWindow *)CWindowGroup::_GetWindowFromRole(a1, 1);
  v14 = (__int64)WindowFromRole;
  if ( (v6 & 2) == 0 )
  {
    if ( WindowFromRole && a3 == 1 && WindowFromRole != a2 && CWindow::CanTransferForeground(WindowFromRole, v12) )
    {
      v10 = 1;
    }
    else
    {
      v10 = 0;
      LOBYTE(v5) = v5 | 1;
    }
  }
  if ( (!v14 || (v6 & 1) == 0 || (v9 = CWindowGroup::_TemplateWindow(v13, (__int64)a2, v14, v5)) != 0)
    && a3
    && (unsigned int)CWindowGroup::_UpdateWindowRole(a1, a2, a3) )
  {
    v10 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  if ( v9 && v10 )
    return CWindow::ForceForeground(a2);
  return v9;
}
