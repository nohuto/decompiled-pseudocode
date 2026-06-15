/*
 * XREFs of ?Initialize@TelephonyController@@IEAAJXZ @ 0x18014A578
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x180149CBC (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800564B0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D24 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@IV?$CElementTraits@I@ATL@@@ATL@@QEAAPEAU__POSITION@@I@Z @ 0x180149A00 (-AddTail@-$CAtlList@IV-$CElementTraits@I@ATL@@@ATL@@QEAAPEAU__POSITION@@I@Z.c)
 *     ?GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z @ 0x18014A030 (-GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x18014B314 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$C.c)
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UIKsControl@@@2@@Z @ 0x18014B614 (-SetAt@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$CComP.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall TelephonyController::Initialize(TelephonyController *this)
{
  int v2; // r14d
  HRESULT v3; // edi
  unsigned int v4; // esi
  void (*v5)(void); // rax
  int ProviderId; // eax
  __int64 v7; // rax
  TelephonyController *v8; // rcx
  LPVOID pv; // [rsp+38h] [rbp-89h] BYREF
  LPVOID v11; // [rsp+40h] [rbp-81h] BYREF
  __int64 v12; // [rsp+48h] [rbp-79h] BYREF
  struct IKsControl *v13; // [rsp+50h] [rbp-71h] BYREF
  __int64 v14; // [rsp+58h] [rbp-69h] BYREF
  __int64 v15; // [rsp+60h] [rbp-61h] BYREF
  __int64 v16; // [rsp+68h] [rbp-59h] BYREF
  __int64 v17; // [rsp+70h] [rbp-51h] BYREF
  __int64 v18; // [rsp+78h] [rbp-49h] BYREF
  __int64 v19; // [rsp+80h] [rbp-41h] BYREF
  __int64 v20; // [rsp+88h] [rbp-39h]
  __int64 v21; // [rsp+90h] [rbp-31h] BYREF
  __int64 v22; // [rsp+98h] [rbp-29h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-9h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp-1h] BYREF
  unsigned int v28; // [rsp+C4h] [rbp+3h] BYREF
  LPVOID ppv; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v30[2]; // [rsp+D0h] [rbp+Fh] BYREF
  GUID v31; // [rsp+E0h] [rbp+1Fh] BYREF

  v30[1] = -2LL;
  ppv = 0LL;
  v30[0] = 0LL;
  v27 = 0;
  v2 = 0;
  v3 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         1u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v3 < 0 )
    goto LABEL_134;
  v3 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64, _QWORD *))(*(_QWORD *)ppv + 24LL))(ppv, 2LL, 9LL, v30);
  if ( v3 < 0 )
    goto LABEL_134;
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v30[0] + 24LL))(v30[0], &v27);
  if ( v3 < 0 )
    goto LABEL_134;
  v4 = 0;
  if ( !v27 )
  {
LABEL_67:
    v3 = -2147023728;
    goto LABEL_68;
  }
  while ( 1 )
  {
    v26 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v13 = 0LL;
    v23 = 0LL;
    v12 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v15 = 0LL;
    v11 = 0LL;
    pv = 0LL;
    v14 = 0LL;
    v31 = GUID_00000000_0000_0000_0000_000000000000;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v30[0] + 32LL))(v30[0], v4, &v26);
    if ( v3 < 0 )
      goto LABEL_104;
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v26 + 24LL))(
           v26,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL);
    if ( v3 < 0 )
    {
      if ( v14 )
      {
        v5 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
LABEL_36:
        v5();
        goto LABEL_37;
      }
      goto LABEL_37;
    }
    ProviderId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v18);
    if ( ProviderId < 0 )
      break;
    ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v17);
    if ( ProviderId < 0 )
      break;
    ProviderId = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
                   v17,
                   &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                   &v12);
    if ( ProviderId < 0 )
      break;
    ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v12 + 56LL))(v12, &v31);
    if ( ProviderId < 0 )
      break;
    v7 = *(_QWORD *)&v31.Data1 - *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1;
    if ( *(_QWORD *)&v31.Data1 == *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1 )
      v7 = *(_QWORD *)v31.Data4 - *(_QWORD *)GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data4;
    if ( !v7 )
    {
      v2 = 1;
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, &v21);
      if ( ProviderId < 0 )
        break;
      if ( !*((_QWORD *)this + 24) )
      {
        ProviderId = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 64LL))(v21, &v11);
        if ( ProviderId < 0 )
          break;
        ProviderId = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v11, &v25);
        if ( ProviderId < 0 )
          break;
        ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, char *))(*(_QWORD *)v25 + 24LL))(
                       v25,
                       &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                       23LL,
                       0LL,
                       (char *)this + 192);
        if ( ProviderId < 0 )
          break;
        if ( !*((_QWORD *)this + 24) )
          goto LABEL_73;
      }
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 88LL))(v12, &v14);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v23);
      if ( ProviderId < 0 )
        break;
      ProviderId = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
                     v23,
                     &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
                     &v16);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 64LL))(v16, &v15);
      if ( ProviderId < 0 )
        break;
      ProviderId = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
                     v15,
                     &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                     &v22);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 96LL))(v22, &v19);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 64LL))(v19, &pv);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v24);
      if ( ProviderId < 0 )
        break;
      ProviderId = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v24 + 24LL))(
                     v24,
                     &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
                     23LL);
      if ( ProviderId < 0 )
        break;
      if ( !v13 )
      {
LABEL_73:
        v3 = -2147023728;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree(v11);
        v11 = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v13 )
          ((void (__fastcall *)(struct IKsControl *))v13->lpVtbl->Release)(v13);
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        if ( v26 )
          goto LABEL_133;
        goto LABEL_134;
      }
      ProviderId = TelephonyController::GetProviderId(v8, v13, &v28);
      if ( ProviderId < 0 )
        break;
      ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::SetAt(
        (char *)this + 120,
        v28,
        &v13);
      ATL::CAtlList<unsigned int,ATL::CElementTraits<unsigned int>>::AddTail((__int64 *)this + 3, v28);
    }
    if ( v14 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
      goto LABEL_36;
    }
LABEL_37:
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v11);
    v11 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v13 )
      ((void (__fastcall *)(struct IKsControl *))v13->lpVtbl->Release)(v13);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( ++v4 >= v27 )
    {
      if ( v2 )
        goto LABEL_68;
      goto LABEL_67;
    }
  }
  v3 = ProviderId;
LABEL_104:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v11);
  v11 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v13 )
    ((void (__fastcall *)(struct IKsControl *))v13->lpVtbl->Release)(v13);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
LABEL_133:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_134:
  ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAll((char *)this + 120);
  ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)this + 24);
  if ( *((_QWORD *)this + 24) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 24, 0LL);
LABEL_68:
  if ( v30[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v3;
}
