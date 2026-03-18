/*
 * XREFs of ?OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18020FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18020F8F8 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::OnChanged(void **a1)
{
  CGeometry2D::FreeCaches(a1);
  return 1LL;
}
