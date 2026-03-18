/*
 * XREFs of ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ @ 0x1C010DE50 (-RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01C9F74 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00FFC6C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C012E960 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorSizes::UpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v3; // rbx
  BOOL v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v12; // cx
  unsigned __int64 v13; // rax
  int v14; // esi
  int v15; // edi
  int v16; // [rsp+40h] [rbp+18h] BYREF

  v3 = (CCursorSizes *)((char *)this + 64);
  if ( a3
    || (CPushLock::AcquireLockShared((CCursorSizes *)((char *)this + 64)),
        v6 = PtInRect((_DWORD *)this + 1, (unsigned __int64)*a2),
        CPushLock::ReleaseLock(v3),
        !v6) )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
    v9 = MonitorFromPoint((unsigned __int64)*a2, 1LL, 0x12u);
    if ( v9 )
    {
      CPushLock::AcquireLockExclusive(v3);
      *(_OWORD *)((char *)this + 4) = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 28LL);
      v12 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL);
      if ( v12 >= 0x90u )
      {
        if ( v12 >= 0xC0u )
        {
          if ( v12 >= 0x120u )
            v13 = (-(__int64)(v12 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
          else
            v13 = 40LL;
        }
        else
        {
          v13 = 32LL;
        }
      }
      else
      {
        v13 = 24LL;
      }
      v14 = *(_DWORD *)((char *)this + v13);
      v15 = *(_DWORD *)this;
      *(_DWORD *)this = v14;
      CPushLock::ReleaseLock(v3);
      if ( v14 != v15 )
        zzzUpdateCursorImage();
    }
    if ( !v16 )
      UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  }
}
