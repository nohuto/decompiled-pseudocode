/*
 * XREFs of Concurrency::details::_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___::_Exec @ 0x1801EC100
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?lock@?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEBA?AV?$shared_ptr@U_Task_impl_base@details@Concurrency@@@2@XZ @ 0x1801ECE18 (-lock@-$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEBA-AV-$shared_ptr@U_Task_impl_bas.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___::_Exec(
        __int64 a1)
{
  __int64 v1; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v2; // [rsp+40h] [rbp-18h]

  std::weak_ptr<Concurrency::details::_Task_impl_base>::lock(a1 + 192, &v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v1 + 8LL))(v1, 0LL, 0LL, 0LL, v1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
