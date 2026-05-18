/*
 * XREFs of ?SetExecutingCollection@ContextBase@details@Concurrency@@QEAAXPEAV_TaskCollectionBase@23@@Z @ 0x18008C84C
 * Callers:
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ContextBase::SetExecutingCollection(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *a2)
{
  *((_QWORD *)this + 12) = a2;
}
