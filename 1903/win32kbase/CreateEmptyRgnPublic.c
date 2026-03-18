/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C002CD20
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     InitUserScreen @ 0x1C00761B4 (InitUserScreen.c)
 *     UserSetDCVisRgn @ 0x1C007B360 (UserSetDCVisRgn.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    HmgSetOwner((unsigned int)RectRgnIndirect, 0, 4);
  }
  return RectRgnIndirect;
}
