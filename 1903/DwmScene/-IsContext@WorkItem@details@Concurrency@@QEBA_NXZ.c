/*
 * XREFs of ?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x18012472C
 * Callers:
 *     sub_18011ECFC @ 0x18011ECFC (sub_18011ECFC.c)
 *     sub_18011FBAC @ 0x18011FBAC (sub_18011FBAC.c)
 * Callees:
 *     <none>
 */

bool __fastcall Concurrency::details::WorkItem::IsContext(Concurrency::details::WorkItem *this)
{
  return *(_DWORD *)this == 1;
}
