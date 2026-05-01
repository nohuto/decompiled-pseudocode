/*
 * XREFs of ?RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1801C3300
 * Callers:
 *     <none>
 * Callees:
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x1801C48B4 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::RaisePresentationNotReady(
        ApplicationViewBackedViewHostItem *this)
{
  if ( *((_BYTE *)this + 149) )
    ApplicationViewBackedViewHostItem::_FirePresentationReadinessEvent(
      (ApplicationViewBackedViewHostItem *)((char *)this - 16),
      0);
  return 0LL;
}
