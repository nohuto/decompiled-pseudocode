/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180042AD8
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180042D50 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180124DD0 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 * Callees:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180042984 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::_ReconcileViewWithVisibility(struct IImmersiveApplicationInternal **this)
{
  struct IImmersiveApplicationInternal *v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( this[7] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[17], (struct CTaskWindow::TASK_WINDOW *)(this + 5));
    v2 = this[7];
    v7 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v2)(
           v2,
           &GUID_35f1648c_265f_402c_b575_c9a325451df5,
           &v7);
    if ( v3 < 0 )
    {
      v4 = 1155LL;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v7 + 88LL))(v7, *((_DWORD *)this + 32) == 2);
      if ( v3 >= 0 )
      {
LABEL_4:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
        return;
      }
      v4 = 1159LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v3,
      v5);
    goto LABEL_4;
  }
}
