/*
 * XREFs of ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x180083E20
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18002D90C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180037574 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
