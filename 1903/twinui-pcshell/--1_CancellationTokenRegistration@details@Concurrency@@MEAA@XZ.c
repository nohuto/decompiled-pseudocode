/*
 * XREFs of ??1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ @ 0x1801C4F64
 * Callers:
 *     Concurrency::details::_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___::_scalar_deleting_destructor_ @ 0x1801C5C30 (Concurrency--details--_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___--_s.c)
 *     ??_G_CancellationTokenRegistration@details@Concurrency@@MEAAPEAXI@Z @ 0x1801C5D70 (--_G_CancellationTokenRegistration@details@Concurrency@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration(
        Concurrency::details::_CancellationTokenRegistration *this)
{
  *(_QWORD *)this = &Concurrency::details::_CancellationTokenRegistration::`vftable';
  _Mtx_destroy_in_situ((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 96));
  _Cnd_destroy_in_situ((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 24));
  *(_QWORD *)this = &Concurrency::details::_RefCounter::`vftable';
}
