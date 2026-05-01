/*
 * XREFs of ?_CreateImpl@?$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x18030D570
 * Callers:
 *     ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x18030B20C (--$_ThenImpl@_NV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@@-$task@_N@Concurrency@@AEBA-AV.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x1801EC678 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 *     ??$?0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@?$_Ref_count_obj@U?$_Task_impl@E@details@Concurrency@@@std@@QEAA@AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@4@@Z @ 0x18030A2E0 (--$-0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@-$_Re_ea_18030A2E0.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Concurrency::task<unsigned char>::_CreateImpl(__int64 *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v6; // rcx
  __int64 v7; // r14
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  __int64 v11[3]; // [rsp+28h] [rbp-38h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-20h]
  std::_Ref_count_base *v13[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF
  std::_Ref_count_base **v16; // [rsp+98h] [rbp+38h]
  __int64 v17; // [rsp+A0h] [rbp+40h]

  v17 = a3;
  *(_OWORD *)v13 = 0LL;
  v6 = *(volatile signed __int32 **)(a3 + 8);
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = *(volatile signed __int32 **)(a3 + 8);
  }
  v13[0] = *(std::_Ref_count_base **)a3;
  v13[1] = (std::_Ref_count_base *)v6;
  v14 = *(_QWORD *)(a3 + 16);
  v16 = v13;
  v15 = a2;
  v16 = (std::_Ref_count_base **)operator new(0x1C8uLL);
  v7 = std::_Ref_count_obj<Concurrency::details::_Task_impl<unsigned char>>::_Ref_count_obj<Concurrency::details::_Task_impl<unsigned char>>(
         (__int64)v16,
         &v15,
         (__int64 *)v13);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  *a1 = v7 + 16;
  v12 = (std::_Ref_count_base *)a1[1];
  v8 = v12;
  a1[1] = v7;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( a2 != 2 )
  {
    *(_OWORD *)v11 = 0LL;
    v9 = a1[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
      v9 = a1[1];
    }
    v11[0] = *a1;
    v11[1] = v9;
    Concurrency::details::_Task_impl_base::_RegisterCancellation(v11[0], v11);
  }
  v10 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
