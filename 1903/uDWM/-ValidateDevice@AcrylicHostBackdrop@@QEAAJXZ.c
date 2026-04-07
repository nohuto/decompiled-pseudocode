/*
 * XREFs of ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x18000D418
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000D29C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028280 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x18000F13C (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  v2 = UdwmDcompVisual::ValidateDevice(v1, 0LL);
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
