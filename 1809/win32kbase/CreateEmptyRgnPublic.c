/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0019D40
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C00298B0 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
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
