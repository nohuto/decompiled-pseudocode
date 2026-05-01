/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180013E24
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180013DC0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x18016D720 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 * Callees:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180013FA0 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::_ReconcileViewWithVisibility(struct IImmersiveApplicationInternal **this)
{
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( this[7] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[17], (struct CTaskWindow::TASK_WINDOW *)(this + 5));
    v5 = 0LL;
    v2 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))this[7])(
           this[7],
           &GUID_35f1648c_265f_402c_b575_c9a325451df5,
           &v5);
    if ( v2 < 0 )
    {
      v3 = 1172LL;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v5 + 88LL))(v5, *((_DWORD *)this + 32) == 2);
      if ( v2 >= 0 )
      {
LABEL_4:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
        return;
      }
      v3 = 1176LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v2,
      -2);
    goto LABEL_4;
  }
}
