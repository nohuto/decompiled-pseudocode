/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18003E9F0
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18003E7A0 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGro_ea_18003E7A0.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180013A08 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18003DF00 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18003ED50 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800E1358 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E1704 (--$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsof.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        CSharedStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        int a4)
{
  HRESULT Instance; // eax
  int v9; // esi
  HRESULT v10; // eax
  int v11; // eax
  IUnknown *v12; // rcx
  IUnknown *v13; // rbx
  const WCHAR *v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  _WORD *v17; // rax
  _WORD *v18; // r9
  unsigned __int64 v19; // rax
  _WORD *v20; // rdx
  int v21; // r10d
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  char *v24; // rdi
  __int16 v25; // cx
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  LPVOID v28; // rdi
  size_t v29; // rsi
  __int64 v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v33; // rdi
  int v35; // eax
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // rbx
  int v40; // eax
  LPMALLOC v41; // rcx
  LPMALLOC v42; // rcx
  DWORD dwAuthnLevel; // [rsp+20h] [rbp-50h]
  DWORD dwAuthnLevela; // [rsp+20h] [rbp-50h]
  LPMALLOC *p_ppMalloc; // [rsp+40h] [rbp-30h] BYREF
  LPMALLOC ppMalloc; // [rsp+48h] [rbp-28h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-20h] BYREF
  __int64 (__fastcall ***v48[3])(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v48[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))-2LL;
  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_816e5b3e_5523_4efc_9223_98ec4214c3a0,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x372,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      dwAuthnLevel);
    goto LABEL_36;
  }
  v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x378,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10,
      dwAuthnLevela);
    goto LABEL_36;
  }
  v11 = ((__int64 (__fastcall *)(IUnknown *, struct STREAM_GROUP_DESCRIPTOR *))pProxy->lpVtbl[3].QueryInterface)(
          pProxy,
          a3);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11,
      dwAuthnLevela);
    goto LABEL_36;
  }
  v12 = (IUnknown *)*((_QWORD *)this + 11);
  v13 = pProxy;
  if ( v12 != pProxy )
  {
    if ( pProxy )
    {
      ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->AddRef)(pProxy);
      v12 = (IUnknown *)*((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 11) = v13;
    if ( v12 )
      ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  }
  v14 = *(const WCHAR **)a2;
  v15 = -1LL;
  do
    ++v15;
  while ( v14[v15] );
  *((_QWORD *)this + 7) = 0LL;
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v9 = -2147024362;
    goto LABEL_54;
  }
  *((_QWORD *)this + 7) = 0LL;
  if ( is_mul_ok(v16, 2uLL) )
  {
    v17 = CoTaskMemAlloc(2 * v16);
    v18 = v17;
    *((_QWORD *)this + 7) = v17;
    if ( !v17 )
    {
      v9 = -2147024882;
      goto LABEL_54;
    }
    v9 = 0;
    if ( v16 > 0x7FFFFFFF || v15 >= 0x7FFFFFFF )
    {
      if ( v15 != -1LL )
        *v17 = 0;
    }
    else
    {
      if ( !v14 )
      {
        v14 = &word_18015F720;
        v15 = 0LL;
      }
      if ( v16 )
      {
        v19 = v16;
        v20 = v18;
        v21 = 0;
        v22 = 0LL;
        v23 = v15 - v16;
        v24 = (char *)((char *)v14 - (char *)v18);
        while ( v23 + v19 )
        {
          v25 = *(_WORD *)((char *)v20 + (_QWORD)v24);
          if ( !v25 )
            break;
          *v20++ = v25;
          ++v22;
          if ( !--v19 )
          {
            --v20;
            --v22;
            v21 = -2147024774;
            break;
          }
        }
        *v20 = 0;
        v26 = v16 - v22;
        if ( v21 >= 0 && v26 > 1 && 2 * v26 > 2 )
          memset_0(&v18[v22 + 1], 0, 2 * v26 - 2);
      }
    }
  }
  else
  {
    v9 = -2147024362;
  }
  if ( v9 >= 0 )
  {
    v27 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
    v28 = CoTaskMemAlloc(v27 + 18);
    *((_QWORD *)this + 6) = v28;
    if ( v28 )
    {
      v29 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v29 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v28);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset_0(*((void **)this + 6), 0, v29);
      memcpy_0(*((void **)this + 6), *((const void **)a2 + 2), v27 + 18);
      v30 = *((_QWORD *)a2 + 7);
      if ( v30 )
      {
        v35 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 8LL))(v30, (char *)this + 72);
        v9 = v35;
        if ( v35 < 0 )
        {
          v36 = (unsigned int)v35;
          v37 = 219LL;
          goto LABEL_55;
        }
      }
      *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
      *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
      *((_DWORD *)this + 17) = *((_DWORD *)a2 + 2);
      *((_QWORD *)this + 18) = 0LL;
      *((_DWORD *)this + 38) = 0;
      *((_BYTE *)this + 64) = *((_BYTE *)a2 + 49);
      *((_BYTE *)this + 65) = *((_BYTE *)a2 + 50);
      v31 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))operator new(
                                                                   0x40uLL,
                                                                   (const struct std::nothrow_t *)&std::nothrow);
      v32 = v31;
      v48[0] = v31;
      if ( v31 )
      {
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v31, 0, 0);
        p_ppMalloc = (LPMALLOC *)(v32 + 5);
        v32[5] = 0LL;
        v32[6] = 0LL;
        v32[5] = (__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
        *((_DWORD *)v32 + 14) = a4;
      }
      else
      {
        v32 = 0LL;
      }
      *((_QWORD *)this + 10) = v32;
      if ( v32 )
        goto LABEL_34;
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x8007000ELL,
        dwAuthnLevela);
    }
    else
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x8007000ELL,
        dwAuthnLevela);
    }
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9,
      dwAuthnLevela);
    goto LABEL_36;
  }
LABEL_54:
  v36 = (unsigned int)v9;
  v37 = 211LL;
LABEL_55:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v37,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v36,
    dwAuthnLevela);
  if ( v9 < 0 )
    goto LABEL_56;
LABEL_34:
  v33 = *((_QWORD *)this + 9);
  if ( !v33 || *(_DWORD *)(v33 + 8) || *(_QWORD *)(v33 + 16) )
  {
LABEL_35:
    v9 = 0;
    goto LABEL_36;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>(v48, this);
  ppMalloc = 0LL;
  p_ppMalloc = &ppMalloc;
  v38 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&p_ppMalloc);
  v39 = v48[0];
  if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v48[0], v38) < 0
    || (LODWORD(p_ppMalloc) = 0,
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 55),
        (int)Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
               (char *)this + 440,
               &ppMalloc,
               v33 + 24,
               &p_ppMalloc) < 0)
    || (v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
                *(_QWORD *)&g_DeviceEnumerator,
                *((_QWORD *)this + 55)),
        v9 = v40,
        v40 >= 0) )
  {
    v42 = ppMalloc;
    if ( ppMalloc )
    {
      ppMalloc = 0LL;
      ((void (__fastcall *)(LPMALLOC))v42->lpVtbl->Release)(v42);
    }
    if ( v39 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v39)[2])(v39);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x390,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v40,
    dwAuthnLevela);
  v41 = ppMalloc;
  if ( ppMalloc )
  {
    ppMalloc = 0LL;
    ((void (__fastcall *)(LPMALLOC))v41->lpVtbl->Release)(v41);
  }
  if ( v39 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v39)[2])(v39);
LABEL_36:
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *, struct IUnknownVtbl *))pProxy->lpVtbl->Release)(pProxy, pProxy->lpVtbl);
  return (unsigned int)v9;
}
