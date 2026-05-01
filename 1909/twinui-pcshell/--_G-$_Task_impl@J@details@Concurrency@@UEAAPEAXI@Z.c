/*
 * XREFs of ??_G?$_Task_impl@J@details@Concurrency@@UEAAPEAXI@Z @ 0x1801E4D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_Task_impl@J@details@Concurrency@@UEAA@XZ @ 0x1801E3BC4 (--1-$_Task_impl@J@details@Concurrency@@UEAA@XZ.c)
 */

Concurrency::details::_Task_impl_base *__fastcall Concurrency::details::_Task_impl<long>::`scalar deleting destructor'(
        Concurrency::details::_Task_impl_base *a1,
        char a2)
{
  Concurrency::details::_Task_impl<long>::~_Task_impl<long>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1B8);
  return a1;
}
