/*
 * XREFs of ?SetExecutingCollection@ContextBase@details@Concurrency@@QEAAXPEAV_TaskCollectionBase@23@@Z @ 0x18008C95C
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ContextBase::SetExecutingCollection(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *a2)
{
  *((_QWORD *)this + 12) = a2;
}
