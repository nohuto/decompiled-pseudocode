/*
 * XREFs of ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C01FD5A8
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___ @ 0x1C01FC1B4 (CWindowGroupManager--_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___.c)
 *     ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FC518 (-AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C01FC7E4 (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C01FCC08 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD3B8 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z @ 0x1C01FD52C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD6A0 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

char __fastcall CWindowGroup::_UpdateWindowInternal(__int64 a1, struct CWindow *a2, unsigned int a3, char a4)
{
  char v8; // di
  CWindow *WindowFromRole; // rax
  __int64 v10; // rdx
  CWindowGroup *v11; // rcx
  struct CWindow *v12; // rbp
  char v13; // si
  char v14; // r9
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  WindowFromRole = (CWindow *)CWindowGroup::_GetWindowFromRole(a1, 1);
  v12 = WindowFromRole;
  if ( (a4 & 2) != 0 )
  {
    v13 = 0;
    v14 = 0;
  }
  else
  {
    if ( !WindowFromRole
      || a3 != 1
      || WindowFromRole == a2
      || (v13 = 1, !CWindow::CanTransferForeground(WindowFromRole, v10)) )
    {
      v13 = 0;
    }
    v14 = v13 ^ 1;
  }
  if ( (!v12 || (a4 & 1) == 0 || (v8 = CWindowGroup::_TemplateWindow(v11, a2, v12, v14)) != 0)
    && a3
    && (unsigned int)CWindowGroup::_UpdateWindowRole(a1, a2, a3) )
  {
    v13 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  if ( v8 && v13 )
    return CWindow::ForceForeground(a2);
  return v8;
}
