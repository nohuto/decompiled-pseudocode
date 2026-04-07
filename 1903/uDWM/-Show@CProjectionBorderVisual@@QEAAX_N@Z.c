/*
 * XREFs of ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18008AB90
 * Callers:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18000AE9C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F830 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800392B8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectionBorderVisual::Show(CProjectionBorderVisual *this, char a2)
{
  __int64 v2; // rax

  if ( *((_BYTE *)this + 296) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 296) = a2;
    (*(void (__fastcall **)(CProjectionBorderVisual *, __int64))(v2 + 24))(this, 0x4000LL);
  }
}
