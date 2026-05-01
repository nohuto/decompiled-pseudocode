/*
 * XREFs of ?lock@?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEBA?AV?$shared_ptr@U_Task_impl_base@details@Concurrency@@@2@XZ @ 0x1801ECE18
 * Callers:
 *     _lambda_6f5f86943447a9eee0358fb4a1366934_::operator() @ 0x1800AAA78 (_lambda_6f5f86943447a9eee0358fb4a1366934_--operator().c)
 *     Concurrency::details::_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___::_Exec @ 0x1801EC100 (Concurrency--details--_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___--_E.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18001EFAC (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<Concurrency::details::_Task_impl_base>::lock(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
