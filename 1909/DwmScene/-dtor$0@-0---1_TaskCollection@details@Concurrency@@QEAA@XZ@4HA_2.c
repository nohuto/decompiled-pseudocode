/*
 * XREFs of ?dtor$0@?0???1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA_2 @ 0x180134B83
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::_TaskCollection::~_TaskCollection'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  j__Mtx_destroy_in_situ((_Mtx_t)(*(_QWORD *)(a2 + 80) + 88LL));
}
