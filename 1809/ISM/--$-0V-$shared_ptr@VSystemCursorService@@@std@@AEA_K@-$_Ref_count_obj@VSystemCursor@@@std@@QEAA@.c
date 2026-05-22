/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@?$_Ref_count_obj@VSystemCursor@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_K@Z @ 0x180098114
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800956F4 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x180049CF8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<SystemCursor>::_Ref_count_obj<SystemCursor>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+28h] [rbp-30h]
  volatile signed __int32 *v10; // [rsp+30h] [rbp-28h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SystemCursor>::`vftable';
  v4 = a1 + 16;
  v5 = *a2;
  v9 = *a2;
  v10 = (volatile signed __int32 *)a2[1];
  v6 = v10;
  *a2 = 0LL;
  a2[1] = 0LL;
  v7 = *a3;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( v10 )
  {
    _InterlockedAdd(v10 + 3, 1u);
    v6 = v10;
    v5 = v9;
  }
  *(_QWORD *)v4 = v5;
  *(_QWORD *)(v4 + 8) = v6;
  *(_BYTE *)(v4 + 16) = 1;
  *(_QWORD *)(v4 + 24) = v7;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 32) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  *(_QWORD *)(v4 + 48) = 32512LL;
  *(_QWORD *)(v4 + 56) = 32512LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a1;
}
