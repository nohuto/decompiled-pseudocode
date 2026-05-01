/*
 * XREFs of _lambda_0b76205be84400ecfc27954a2135cf03_::operator() @ 0x1800928A8
 * Callers:
 *     wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03___ @ 0x18009240C (wil--ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03___.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800FCAC8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1802B3D18 (--$_Emplace_reallocate@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@st.c)
 *     ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x1802B3F24 (--$emplace@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$alloca.c)
 *     ??$make_shared@UKBViewInfo@@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1802B40EC (--$make_shared@UKBViewInfo@@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_0b76205be84400ecfc27954a2135cf03_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _BYTE v9[8]; // [rsp+28h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  RTL_SRWLOCK *v13; // [rsp+70h] [rbp+30h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(*(_QWORD *)a1 + 448LL, &v13);
  v2 = **(_QWORD **)(a1 + 16);
  v11 = **(_QWORD **)(a1 + 24);
  v12 = v2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 32) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 456LL);
    v5 = std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * const &,IApplicationFrameWrapper *,IApplicationFrameTitleBar *>(
           v9,
           v3,
           &v12,
           &v11);
    std::vector<std::shared_ptr<KBViewInfo>>::emplace<std::shared_ptr<KBViewInfo>>(*(_QWORD *)a1 + 456LL, &v11, v4, v5);
  }
  else
  {
    v6 = (_QWORD *)std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * const &,IApplicationFrameWrapper *,IApplicationFrameTitleBar *>(
                     v9,
                     v3,
                     &v12,
                     &v11);
    v7 = *(_QWORD *)a1 + 456LL;
    v8 = *(_QWORD **)(*(_QWORD *)a1 + 464LL);
    if ( *(_QWORD **)(*(_QWORD *)a1 + 472LL) == v8 )
    {
      std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo>>(v7, v8, v6);
    }
    else
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      *v8 = *v6;
      v8[1] = v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      *(_QWORD *)(v7 + 8) += 16LL;
    }
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
}
