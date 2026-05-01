/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180167508
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::__lambda_a34f77da1c118d252c6ac03565c5dcbb_ @ 0x18009C9E8 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--__lambda_a34f77da1c118d252c6ac03565c5dcbb_.c)
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800FF1B0 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     _lambda_be3e5d9dce35d2c8dbfa8485373731d5_::__lambda_be3e5d9dce35d2c8dbfa8485373731d5_ @ 0x1801C4A84 (_lambda_be3e5d9dce35d2c8dbfa8485373731d5_--__lambda_be3e5d9dce35d2c8dbfa8485373731d5_.c)
 *     ??1?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ @ 0x1801C4D8C (--1-$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ.c)
 *     Concurrency::details::_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___::_scalar_deleting_destructor_ @ 0x1801C5C30 (Concurrency--details--_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___--_s.c)
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x1801CD5A8 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180267F28 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1802737F0 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180312504 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
