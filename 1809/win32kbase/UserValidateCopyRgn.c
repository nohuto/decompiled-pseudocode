/*
 * XREFs of UserValidateCopyRgn @ 0x1C003A790
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     HmgValidHandle @ 0x1C003A810 (HmgValidHandle.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
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
        GreDeleteObject((HRGN)RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
