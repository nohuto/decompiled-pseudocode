/*
 * XREFs of ?GetProxy@InternalContextBase@details@Concurrency@@UEAAPEAUIThreadProxy@3@XZ @ 0x180019920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Concurrency::IThreadProxy *__fastcall Concurrency::details::InternalContextBase::GetProxy(
        Concurrency::details::InternalContextBase *this)
{
  return (struct Concurrency::IThreadProxy *)*((_QWORD *)this + 27);
}
