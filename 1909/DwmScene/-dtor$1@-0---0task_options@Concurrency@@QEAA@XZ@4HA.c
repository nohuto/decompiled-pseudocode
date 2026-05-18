/*
 * XREFs of ?dtor$1@?0???0task_options@Concurrency@@QEAA@XZ@4HA @ 0x180134357
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall `Concurrency::task_options::task_options'::`1'::dtor$1(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx

  v3 = *(_QWORD **)(a2 + 80);
  *v3 = &std::exception::`vftable';
  return o___std_exception_destroy((__int64)(v3 + 1));
}
