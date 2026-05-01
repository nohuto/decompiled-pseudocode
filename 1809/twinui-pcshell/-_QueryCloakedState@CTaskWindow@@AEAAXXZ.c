/*
 * XREFs of ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180125474
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180046010 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180124DD0 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::_QueryCloakedState(CTaskWindow *this)
{
  HWND v2; // rax
  CApplicationManagerUtility *v3; // rbx
  HWND v4; // rdx
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HWND)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
  v3 = (CApplicationManagerUtility *)v2;
  if ( v2 && DwmGetWindowAttribute(v2, 0xEu, &pvAttribute, 4u) >= 0 && CApplicationManagerUtility::IsValidWindow(v3, v4) )
    *((_BYTE *)this + 64) = (pvAttribute & 2) != 0;
}
