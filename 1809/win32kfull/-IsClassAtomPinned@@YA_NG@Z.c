/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0022810
 * Callers:
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C011B8F0 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= gatomFirstPinned && a1 <= gatomLastPinned;
}
