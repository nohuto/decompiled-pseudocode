/*
 * XREFs of ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C006414C
 * Callers:
 *     imp_WdfCollectionRemove @ 0x1C00618A0 (imp_WdfCollectionRemove.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C00619D0 (imp_WdfCollectionRemoveItem.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0064228 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxCollectionInternal::CleanupEntry(FxCollectionInternal *this, FX_POOL_TRACKER *Entry)
{
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *Pool; // rcx

  Blink = Entry->Link.Blink;
  if ( (_LIST_ENTRY **)Blink->Blink != &Entry->Link.Blink
    || (Pool = (_LIST_ENTRY *)Entry->Pool, (_LIST_ENTRY **)Pool->Flink != &Entry->Link.Blink) )
  {
    __fastfail(3u);
  }
  Pool->Flink = Blink;
  Blink->Blink = Pool;
  if ( Entry )
    FxPoolFree(Entry);
  --this->m_Count;
}
