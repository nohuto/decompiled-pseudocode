/*
 * XREFs of ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180036DEC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800AF65C (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800370A8 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(CTopLevelWindow *this, unsigned int a2)
{
  unsigned int v3; // ebx
  CText *v4; // rcx
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = (CText *)*((_QWORD *)this + 64);
  if ( v4 )
  {
    CText::SetBackgroundColor(v4, a2);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 64LL))(*((_QWORD *)this + 64));
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x130Bu, v7);
  }
  return v3;
}
