/*
 * XREFs of ?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x18012483C
 * Callers:
 *     sub_18011EE0C @ 0x18011EE0C (sub_18011EE0C.c)
 *     sub_18011FCBC @ 0x18011FCBC (sub_18011FCBC.c)
 * Callees:
 *     <none>
 */

bool __fastcall Concurrency::details::WorkItem::IsContext(Concurrency::details::WorkItem *this)
{
  return *(_DWORD *)this == 1;
}
