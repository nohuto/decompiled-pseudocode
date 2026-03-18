/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C0015FC0
 * Callers:
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00163A4 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // edi
  SURFACE *v5; // rax
  struct OBJECT *v6; // rbx
  __int64 v7; // r8

  v2 = a2;
  LOBYTE(a2) = 5;
  v4 = 0;
  v5 = (SURFACE *)HmgShareLockCheck(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v5) || v2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v7) = 5;
      v4 = HmgSetOwner(a1, v2, v7);
    }
    HmgDecrementShareReferenceCountEx(v6);
  }
  return v4;
}
