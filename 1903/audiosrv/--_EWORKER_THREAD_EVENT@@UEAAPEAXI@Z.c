/*
 * XREFs of ??_EWORKER_THREAD_EVENT@@UEAAPEAXI@Z @ 0x180105160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

WORKER_THREAD_EVENT *__fastcall WORKER_THREAD_EVENT::`vector deleting destructor'(WORKER_THREAD_EVENT *this, char a2)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
