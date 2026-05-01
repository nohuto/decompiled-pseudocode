/*
 * XREFs of ??_G_CancellationTokenRegistration@details@Concurrency@@MEAAPEAXI@Z @ 0x1801C5D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ @ 0x1801C4F64 (--1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ.c)
 */

Concurrency::details::_CancellationTokenRegistration *__fastcall Concurrency::details::_CancellationTokenRegistration::`scalar deleting destructor'(
        Concurrency::details::_CancellationTokenRegistration *this,
        char a2)
{
  Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
