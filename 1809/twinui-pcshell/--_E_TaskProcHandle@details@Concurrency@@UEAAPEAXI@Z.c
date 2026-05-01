/*
 * XREFs of ??_E_TaskProcHandle@details@Concurrency@@UEAAPEAXI@Z @ 0x180294730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Concurrency::details::_TaskProcHandle *__fastcall Concurrency::details::_TaskProcHandle::`vector deleting destructor'(
        Concurrency::details::_TaskProcHandle *this,
        char a2)
{
  *(_QWORD *)this = &Concurrency::details::_TaskProcHandle::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
