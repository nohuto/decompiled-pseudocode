/*
 * XREFs of UserValidateCopyRgn @ 0x1C00872B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 *     HmgValidHandle @ 0x1C0087330 (HmgValidHandle.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v4; // rdx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject(RectRgnIndirect, v4);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
