/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C002CE88
 * Callers:
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CF00 (-bDIBSection@SURFACE@@QEAAHXZ.c)
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
