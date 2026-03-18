/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C003DB54
 * Callers:
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001CE84 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(unsigned int a1, int a2)
{
  unsigned int v4; // edi
  SURFACE *v5; // rax
  struct OBJECT *v6; // rbx

  v4 = 0;
  v5 = (SURFACE *)HmgShareLockCheck(a1, 5);
  v6 = v5;
  if ( v5 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v5) || a2) && (a1 & 0x800000) == 0 )
      v4 = HmgSetOwner(a1, a2, 5);
    HmgDecrementShareReferenceCountEx(v6, 0LL);
  }
  return v4;
}
