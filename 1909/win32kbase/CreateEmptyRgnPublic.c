/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0016040
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0049B60 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 */

__int64 CreateEmptyRgnPublic()
{
  __int64 RectRgnIndirect; // rbx
  __int64 v1; // r8

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    LOBYTE(v1) = 4;
    HmgSetOwner(RectRgnIndirect, 0LL, v1);
  }
  return RectRgnIndirect;
}
