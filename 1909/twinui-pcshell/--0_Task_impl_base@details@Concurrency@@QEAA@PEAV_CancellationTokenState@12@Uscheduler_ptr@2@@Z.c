/*
 * XREFs of ??0_Task_impl_base@details@Concurrency@@QEAA@PEAV_CancellationTokenState@12@Uscheduler_ptr@2@@Z @ 0x1801E37E0
 * Callers:
 *     ??$?0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@?$_Ref_count_obj@U?$_Task_impl@J@details@Concurrency@@@std@@QEAA@AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@4@@Z @ 0x1801E0354 (--$-0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@-$_Ref_count_obj@U.c)
 *     ??$?0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@?$_Ref_count_obj@U?$_Task_impl@E@details@Concurrency@@@std@@QEAA@AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@4@@Z @ 0x18030A2E0 (--$-0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@-$_Re_ea_18030A2E0.c)
 *     ??$?0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@?$_Ref_count_obj@U?$_Task_impl@_N@details@Concurrency@@@std@@QEAA@AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@4@@Z @ 0x18030A388 (--$-0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@-$_Re_ea_18030A388.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall Concurrency::details::_Task_impl_base::_Task_impl_base(__int64 a1, __int64 a2, __int64 *a3)
{
  volatile signed __int32 *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12
  std::_Ref_count_base *v9; // rcx

  *(_QWORD *)a1 = &Concurrency::details::_Task_impl_base::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)(a1 + 32), 2);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v6 = (volatile signed __int32 *)a3[1];
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = (volatile signed __int32 *)a3[1];
  }
  v7 = *a3;
  v8 = a3[2];
  _Cnd_init_in_situ((_Cnd_t)(a1 + 136));
  _Mtx_init_in_situ((_Mtx_t)(a1 + 208), 2);
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  *(_QWORD *)(a1 + 288) = v7;
  *(_QWORD *)(a1 + 296) = v6;
  *(_QWORD *)(a1 + 304) = v8;
  *(_DWORD *)(a1 + 312) = 0;
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 352) = a1;
  *(_WORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 120) = a2;
  if ( a2 != 2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a1;
}
