/*
 * XREFs of ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x180024B34
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180024B68 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJXZ @ 0x180023B34 (-ValidateDevice@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AcrylicHostBackdrop::ValidateDevice(AcrylicHostBackdrop *this)
{
  UdwmDcompVisual *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 24) )
    return 0LL;
  v1 = (UdwmDcompVisual *)*((_QWORD *)this + 2);
  if ( !v1 )
    return 0LL;
  v2 = UdwmDcompVisual::ValidateDevice(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (unsigned int)"windows\\dwm\\udwm\\acrylichostbackdrop.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
