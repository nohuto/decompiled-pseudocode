/*
 * XREFs of ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18012CA99
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `std::_Locinfo::_Locinfo'::`1'::dtor$1(__int64 a1, __int64 a2)
{
  std::string::_Tidy_deallocate((__int64 *)(*(_QWORD *)(a2 + 64) + 8LL));
}
