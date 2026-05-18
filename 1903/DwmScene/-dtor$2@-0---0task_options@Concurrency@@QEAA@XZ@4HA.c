/*
 * XREFs of ?dtor$2@?0???0task_options@Concurrency@@QEAA@XZ@4HA @ 0x180134253
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::task_options::task_options'::`1'::dtor$2(__int64 a1, __int64 a2)
{
  std::string::_Tidy_deallocate((__int64 *)(*(_QWORD *)(a2 + 80) + 24LL));
}
