/*
 * XREFs of UserValidateCopyRgn @ 0x1C008B690
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     HmgValidHandle @ 0x1C008B710 (HmgValidHandle.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject((HPALETTE)RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
