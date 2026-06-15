/*
 * XREFs of ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180010EC0
 * Callers:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180010B80 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x18012D520 (-OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180011410 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180054D20 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CDefaultDeviceManager::GetDefaultEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        struct IUnknown **a5)
{
  _QWORD *v5; // r15
  struct IUnknown *v8; // rdi
  struct IUnknown *v9; // rbx
  unsigned int v10; // r14d
  HRESULT v11; // esi
  __int64 v12; // rdx
  void *v13; // rax
  _QWORD *v14; // rcx
  struct IUnknown *v15; // rcx
  struct IUnknown *v16; // rsi
  struct IUnknown *v17; // r14
  int v18; // r15d
  struct IUnknown *v19; // rcx
  struct IUnknown *v20; // r15
  __int64 v21; // r14
  struct IUnknown *v22; // r14
  struct IUnknown *v23; // rax
  struct IUnknown *v25; // rcx
  unsigned __int16 *v26; // rdx
  char *v27; // r10
  int v28; // r8d
  int v29; // r9d
  unsigned int v30; // eax
  struct IUnknown *v31; // rcx
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  struct IUnknown *v36; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+64h] [rbp-9Ch]
  struct _FILETIME FileTime; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h]
  struct IUnknown *v45; // [rsp+80h] [rbp-80h] BYREF
  struct IUnknown **v46; // [rsp+88h] [rbp-78h]
  LPVOID ppv; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  FILETIME FileTime2; // [rsp+A8h] [rbp-58h] BYREF
  FILETIME v51; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v52; // [rsp+B8h] [rbp-48h]
  PROPVARIANT pvar; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h]
  SYSTEMTIME *v55; // [rsp+D0h] [rbp-30h]
  struct IUnknown *v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  SYSTEMTIME SystemTime; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 v59[16]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 v60[16]; // [rsp+118h] [rbp+18h] BYREF

  v57 = -2LL;
  v5 = a4;
  v52 = a4;
  v46 = a5;
  ppv = 0LL;
  v43 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  v49 = -1LL;
  v40 = 0;
  FileTime2 = 0LL;
  v9 = 0LL;
  v56 = 0LL;
  v10 = 0;
  v34 = 0;
  v51 = 0LL;
  v11 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  if ( v11 < 0 )
    goto LABEL_61;
  v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, a2, 1LL, &v43);
  if ( v11 < 0 )
    goto LABEL_61;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v43 + 24LL))(v43, &v39);
  if ( v11 < 0 )
    goto LABEL_61;
  if ( !v39 )
    goto LABEL_70;
  v11 = StringCchPrintfW(v60, 0xDuLL, L"Level:%x", a3);
  if ( v11 < 0 )
    goto LABEL_61;
  v12 = 0LL;
  v41 = 0;
  if ( !v39 )
  {
LABEL_105:
    if ( v8 )
    {
      v23 = v8;
      v8 = 0LL;
      v45 = 0LL;
LABEL_59:
      *v46 = v23;
    }
    else
    {
      v23 = *v46;
    }
    if ( v23 )
      goto LABEL_61;
LABEL_70:
    v11 = -2147023728;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v33 = 0LL;
    v36 = 0LL;
    pv = 0LL;
    FileTime = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v43 + 32LL))(v43, v12, &v33);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
      v31 = v33;
      if ( v33 )
        goto LABEL_126;
      goto LABEL_61;
    }
    v35 = 0;
    if ( (int)GetNeverSetAsDefaultProperty(v33, a2, a3, &v35) >= 0 && v35 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
      v25 = v33;
      if ( !v33 )
        goto LABEL_55;
      goto LABEL_74;
    }
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))v33->lpVtbl[1].Release)(v33, &pv);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
      v31 = v33;
      if ( v33 )
        goto LABEL_126;
      goto LABEL_61;
    }
    v13 = pv;
    if ( !v5 )
      break;
    v14 = (_QWORD *)*v5;
    if ( !*v5 )
      break;
    while ( 1 )
    {
      v26 = (unsigned __int16 *)v14[2];
      v27 = (char *)((_BYTE *)pv - (_BYTE *)v26);
      do
      {
        v28 = *(unsigned __int16 *)&v27[(_QWORD)v26];
        v29 = *v26 - v28;
        if ( v29 )
          break;
        ++v26;
      }
      while ( v28 );
      if ( !v29 )
        break;
      v14 = (_QWORD *)*v14;
      if ( !v14 )
        goto LABEL_13;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v36 )
      ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
    v25 = v33;
    if ( !v33 )
      goto LABEL_55;
LABEL_74:
    ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v25);
LABEL_55:
    v12 = (unsigned int)(v41 + 1);
    v41 = v12;
    if ( (unsigned int)v12 >= v39 )
    {
      if ( v9 && (!v8 || v10 > v40 || v10 >= 0x60000000) )
      {
        v23 = v9;
        v9 = 0LL;
        goto LABEL_59;
      }
      goto LABEL_105;
    }
  }
LABEL_13:
  v15 = v36;
  if ( v36 != v33 )
  {
    v16 = v36;
    v15 = 0LL;
    v36 = 0LL;
    if ( v33 )
    {
      ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v33->lpVtbl->QueryInterface)(
        v33,
        &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
        &v36);
      v15 = v36;
      v13 = pv;
    }
    if ( v16 )
    {
      ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
      v15 = v36;
      v13 = pv;
    }
  }
  if ( v15 )
  {
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))v15->lpVtbl[3].QueryInterface)(
            v15,
            a3,
            &v38);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
      v31 = v33;
      if ( !v33 )
        goto LABEL_61;
    }
    else
    {
      v37 = 0LL;
      *(_DWORD *)&SystemTime.wYear = 67137;
      *(_QWORD *)&SystemTime.wDayOfWeek = 65537LL;
      *(_DWORD *)&SystemTime.wSecond = 0;
      pvar = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v33->lpVtbl[1].AddRef)(
              v33,
              0LL,
              &v37);
      if ( v11 >= 0 )
      {
        v11 = ((__int64 (__fastcall *)(struct IUnknown *, void *, PROPVARIANT *))v37->lpVtbl[1].Release)(
                v37,
                &PKEY_Endpoint_CreationTime,
                &pvar);
        if ( v11 >= 0 )
        {
          if ( (_WORD)pvar != 65
            || (_DWORD)v54 != 16
            || !v55
            || (SystemTime = *v55, !SystemTimeToFileTime(&SystemTime, &FileTime)) )
          {
            v11 = -2147467259;
          }
        }
      }
      PropVariantClear(&pvar);
      if ( v37 )
        ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->Release)(v37);
      if ( v11 >= 0 )
      {
        v17 = v33;
        v37 = 0LL;
        v35 = 0;
        v48 = 0LL;
        v18 = StringCchPrintfW(v59, 0xDuLL, L"Level:%x", a3);
        if ( v18 < 0 )
          goto LABEL_37;
        v19 = v37;
        if ( v37 != v17 )
        {
          v20 = v37;
          v19 = 0LL;
          v37 = 0LL;
          if ( v17 )
          {
            ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v17->lpVtbl->QueryInterface)(
              v17,
              &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
              &v37);
            v19 = v37;
          }
          if ( v20 )
          {
            ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
            v19 = v37;
          }
        }
        if ( !v19 )
        {
          v18 = -2147024809;
          goto LABEL_38;
        }
        v35 = 8;
        v18 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int16 *, __int64, __int64 *, int *))v19->lpVtbl[5].QueryInterface)(
                v19,
                v59,
                11LL,
                &v48,
                &v35);
        if ( v18 < 0 )
        {
LABEL_37:
          v19 = v37;
          goto LABEL_38;
        }
        v19 = v37;
        if ( v35 == 8 )
        {
          v21 = v48;
          v44 = v48;
        }
        else
        {
          v18 = -2147024809;
LABEL_38:
          v21 = v44;
        }
        if ( v19 )
          ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
        if ( v18 < 0 )
        {
          v10 = v34;
          if ( v38 > v34 || v38 == v34 && CompareFileTime(&FileTime, &v51) == 1 )
          {
            v22 = v33;
            if ( v9 != v33 )
            {
              if ( v33 )
                ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->AddRef)(v33);
              if ( v9 )
                ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
              v9 = v22;
              v56 = v22;
            }
            v10 = v38;
            v34 = v38;
            v51 = FileTime;
          }
          goto LABEL_50;
        }
        if ( v21 > v49 )
        {
LABEL_95:
          v30 = v38;
        }
        else
        {
          if ( v21 != v49 )
            goto LABEL_99;
          v30 = v38;
          if ( v38 <= v40 )
          {
            if ( v38 == v40 && CompareFileTime(&FileTime, &FileTime2) == 1 )
              goto LABEL_95;
LABEL_99:
            v10 = v34;
LABEL_50:
            CoTaskMemFree(pv);
            pv = 0LL;
            if ( v36 )
              ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
            if ( v33 )
              ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v33);
            v5 = v52;
            goto LABEL_55;
          }
        }
        if ( v8 != v33 )
        {
          ATL::AtlComPtrAssign(&v45, v33);
          v8 = v45;
          v30 = v38;
        }
        v49 = v21;
        v40 = v30;
        FileTime2 = FileTime;
        goto LABEL_99;
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
      v31 = v33;
      if ( !v33 )
        goto LABEL_61;
    }
LABEL_126:
    ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v31);
    goto LABEL_61;
  }
  v11 = -2147024809;
  CoTaskMemFree(v13);
  pv = 0LL;
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  v31 = v33;
  if ( v33 )
    goto LABEL_126;
LABEL_61:
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v11;
}
