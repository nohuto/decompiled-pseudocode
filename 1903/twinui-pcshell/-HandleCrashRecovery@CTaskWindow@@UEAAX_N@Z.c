/*
 * XREFs of ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x18014E330
 * Callers:
 *     <none>
 * Callees:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180045110 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1801219B0 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::HandleCrashRecovery(struct IImmersiveApplicationInternal **this, char a2)
{
  _BOOL8 v4; // rbp
  struct IUnknown *v5; // r9
  struct IImmersiveApplicationInternal *v6; // rsi
  void (__fastcall *v7)(struct IImmersiveApplicationInternal *, struct IUnknown **); // rbx
  struct IUnknown *v8; // [rsp+60h] [rbp+8h] BYREF

  if ( this[6] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[16], (struct CTaskWindow::TASK_WINDOW *)(this + 4));
  }
  else
  {
    v4 = *((_BYTE *)this + 56) == 0;
    v5 = 0LL;
    v8 = 0LL;
    v6 = this[16];
    if ( v6 )
    {
      v7 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IUnknown **))(*(_QWORD *)v6 + 464LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
      v7(v6, &v8);
      v6 = this[16];
      v5 = v8;
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      (HWND)this[4],
      0xDu,
      v5,
      v6,
      v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  }
  if ( *((_BYTE *)this + 56) )
  {
    if ( !a2 )
      (*((void (__fastcall **)(struct IImmersiveApplicationInternal **, _QWORD))*this + 20))(this, 0LL);
  }
}
