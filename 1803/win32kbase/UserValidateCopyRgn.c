/*
 * XREFs of UserValidateCopyRgn @ 0x1C0064270
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C001E910 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     HmgValidHandle @ 0x1C00642F0 (HmgValidHandle.c)
 */

HRGN __fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  HRGN RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn(RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject((HBRUSH)RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
