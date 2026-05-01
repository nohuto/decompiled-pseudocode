/*
 * XREFs of ?RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18021B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x18021C898 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::RaisePresentationNotReady(
        ApplicationViewBackedViewHostItem *this)
{
  if ( *((_BYTE *)this + 237) )
    ApplicationViewBackedViewHostItem::_FirePresentationReadinessEvent(
      (ApplicationViewBackedViewHostItem *)((char *)this - 16),
      0);
  return 0LL;
}
