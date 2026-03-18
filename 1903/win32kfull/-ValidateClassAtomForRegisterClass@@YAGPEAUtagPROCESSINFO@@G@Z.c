/*
 * XREFs of ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0123AD4
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0097760 (InternalRegisterClassEx.c)
 * Callees:
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0095D38 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0098140 (-IsClassAtomPinned@@YA_NG@Z.c)
 */

__int64 __fastcall ValidateClassAtomForRegisterClass(struct tagPROCESSINFO *a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx
  struct tagPROCESSINFO *v5; // r8

  v3 = 0;
  if ( IsClassAtomPinned(a2) || v4 < 0xC000u || IsClassAtomRegistered(v5, a2) )
    return a2;
  return v3;
}
