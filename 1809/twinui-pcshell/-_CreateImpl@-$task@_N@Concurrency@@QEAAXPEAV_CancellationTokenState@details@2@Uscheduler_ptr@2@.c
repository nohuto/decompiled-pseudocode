/*
 * XREFs of ?_CreateImpl@?$task@_N@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x180295994
 * Callers:
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180291880 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@?$_Ref_count_obj@U?$_Task_impl@_N@details@Concurrency@@@std@@QEAA@AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@4@@Z @ 0x180291748 (--$-0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@-$_Re_ea_180291748.c)
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x180296834 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Concurrency::task<bool>::_CreateImpl(_QWORD *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v6; // rcx
  __int64 v7; // r14
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  __int128 v11; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v12[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  std::_Ref_count_base **v15; // [rsp+88h] [rbp+38h]
  __int64 v16; // [rsp+90h] [rbp+40h]

  v16 = a3;
  *(_OWORD *)v12 = 0LL;
  v6 = *(volatile signed __int32 **)(a3 + 8);
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = *(volatile signed __int32 **)(a3 + 8);
  }
  v12[0] = *(std::_Ref_count_base **)a3;
  v12[1] = (std::_Ref_count_base *)v6;
  v13 = *(_QWORD *)(a3 + 16);
  v15 = v12;
  v14 = a2;
  v15 = (std::_Ref_count_base **)operator new(0x1C8uLL);
  v7 = std::_Ref_count_obj<Concurrency::details::_Task_impl<bool>>::_Ref_count_obj<Concurrency::details::_Task_impl<bool>>(
         (__int64)v15,
         &v14,
         (__int64 *)v12);
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  *a1 = v7 + 16;
  v8 = (std::_Ref_count_base *)a1[1];
  a1[1] = v7;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( a2 != 2 )
  {
    v11 = 0LL;
    v9 = a1[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
      v9 = a1[1];
    }
    *(_QWORD *)&v11 = *a1;
    *((_QWORD *)&v11 + 1) = v9;
    Concurrency::details::_Task_impl_base::_RegisterCancellation(v11, &v11);
  }
  v10 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
