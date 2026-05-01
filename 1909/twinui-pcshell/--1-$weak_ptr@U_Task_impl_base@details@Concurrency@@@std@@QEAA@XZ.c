/*
 * XREFs of ??1?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ @ 0x1801E3DAC
 * Callers:
 *     _Concurrency::details::_Task_impl_base::_RegisterCancellation_::_1_::dtor$0 @ 0x1801EC70D (_Concurrency--details--_Task_impl_base--_RegisterCancellation_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_19H1_::_1_::dtor$4 @ 0x180331CA4 (_TouchKeyboardExperienceManager--OnViewCreated_19H1_--_1_--dtor$4.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180186898 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::weak_ptr<Concurrency::details::_Task_impl_base>::~weak_ptr<Concurrency::details::_Task_impl_base>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
