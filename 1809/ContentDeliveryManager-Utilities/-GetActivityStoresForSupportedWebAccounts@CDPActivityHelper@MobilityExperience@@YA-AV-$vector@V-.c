/*
 * XREFs of ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180045628
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180046668 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180031A74 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x18004531C (-TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800495A8 (-_Reallocate@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  int v5; // r15d
  unsigned int v6; // r14d
  __int64 i; // rdx
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // r14d
  unsigned int v14; // eax
  bool v15; // cl
  wil::details::in1diag3 *v16; // r10
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v33; // [rsp+28h] [rbp-80h] BYREF
  __int64 v34; // [rsp+30h] [rbp-78h]
  unsigned int v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37[3]; // [rsp+48h] [rbp-60h] BYREF
  int v38; // [rsp+60h] [rbp-48h]
  __int64 v39; // [rsp+68h] [rbp-40h]
  __int64 v40; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v42; // [rsp+C0h] [rbp+18h]
  int v43; // [rsp+C8h] [rbp+20h] BYREF

  v40 = -2LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v34 = a2;
  v35 = 0;
  v36 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v43);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4C9,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
LABEL_54:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)v14);
LABEL_55:
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
  }
  v37[2] = a2;
  v5 = v43;
  v42 = v43;
  v38 = v43;
  v39 = 0LL;
  v6 = 3;
  for ( i = v35; (_DWORD)i != v5; i = ++v35 )
  {
    v8 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      i = v35;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, i, &v36);
    v10 = retaddr;
    if ( v9 < 0 )
      goto LABEL_53;
    v11 = v36;
    v37[1] = v36;
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
    MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(v37, v11);
    v12 = v37[0];
    if ( v37[0] )
    {
      v13 = v6 | 4;
      v33 = 0LL;
      v14 = CDPGetActivityStoreForAccount(v37[0], &v33);
      v15 = (int)(v14 + 0x80000000) >= 0 && v14 != -2147221243;
      v16 = retaddr;
      if ( v15 )
        goto LABEL_54;
      v17 = v33;
      if ( v33 )
      {
        v18 = a1[1];
        if ( (unsigned __int64)&v33 >= v18 || *a1 > (unsigned __int64)&v33 )
        {
          v26 = a1[2];
          if ( v18 == v26 && !((__int64)(v26 - v18) >> 3) )
          {
            v27 = (__int64)(v18 - *a1) >> 3;
            if ( v27 == 0x1FFFFFFFFFFFFFFFLL )
              std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
            v28 = v27 + 1;
            v29 = (v26 - *a1) >> 3;
            v30 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v29 >> 1) >= v29 )
              v30 = v29 + (v29 >> 1);
            if ( v30 >= v28 )
              v28 = v30;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v28);
            v17 = v33;
          }
          *(_QWORD *)a1[1] = v17;
          v17 = v33;
          if ( v33 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
            goto LABEL_39;
          }
        }
        else
        {
          v19 = ((__int64)&v33 - *a1) >> 3;
          v20 = a1[2];
          if ( v18 == v20 && !((__int64)(v20 - v18) >> 3) )
          {
            v21 = (__int64)(v18 - *a1) >> 3;
            if ( v21 == 0x1FFFFFFFFFFFFFFFLL )
              goto LABEL_55;
            v22 = v21 + 1;
            v23 = (v20 - *a1) >> 3;
            v24 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v23 >> 1) >= v23 )
              v24 = v23 + (v23 >> 1);
            if ( v24 >= v22 )
              v22 = v24;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v22);
          }
          v25 = *(_QWORD *)(*a1 + 8 * v19);
          *(_QWORD *)a1[1] = v25;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
          v5 = v42;
LABEL_39:
          v17 = v33;
        }
        a1[1] += 8LL;
      }
      v6 = v13 & 0xFFFFFFFB;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v12 = v37[0];
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return a1;
}
