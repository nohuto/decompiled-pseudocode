/*
 * XREFs of ?get_ViewMode@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x1800820A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_ViewMode(
        ApplicationViewBackedViewHostItem *this,
        enum Windows::Internal::Shell::Holographic::ViewMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 39);
  return 0LL;
}
