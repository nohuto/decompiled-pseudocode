/*
 * XREFs of ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x180125040
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180051364 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1800FB98C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x180125708 (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::SendVisibilityChanged(CTaskWindow *this, __int64 a2)
{
  struct IUnknown *v4; // r9
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct IUnknown *v8; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v5 + 464LL))(v5, &v8);
    v4 = v8;
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 392LL))(v6, (unsigned int)(a2 & 1) + 3);
    v7 = (*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
    if ( v7 )
      CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
        v7,
        1u,
        (struct IImmersiveMonitor *)v8,
        *((struct IImmersiveApplicationInternal **)this + 16),
        a2);
  }
  else
  {
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      *((HWND *)this + 4),
      13,
      v4,
      *((struct IImmersiveApplicationInternal **)this + 16),
      a2);
    CTaskWindow::s_UpdateDelayedVisibilityTimestamp((CTaskWindow *)((char *)this + 32), a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
}
