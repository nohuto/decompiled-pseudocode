/*
 * XREFs of ?get_ViewMode@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4ViewMode@2345@@Z @ 0x180087940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_ViewMode(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        enum Windows::Internal::Shell::Holographic::ViewMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 101);
  return 0LL;
}
