/*
 * XREFs of ?dtor$1@?0???1_CancellationTokenState@details@Concurrency@@UEAA@XZ@4HA @ 0x1801311E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::_CancellationTokenState::~_CancellationTokenState'::`1'::dtor$1(
        __int64 a1,
        __int64 a2)
{
  j__Mtx_destroy_in_situ((_Mtx_t)(*(_QWORD *)(a2 + 64) + 24LL));
}
