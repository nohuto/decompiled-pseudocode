/*
 * XREFs of ?MsixvcUpdatePolicyInternal@@YAJPEB_W0I0_K@Z @ 0x180003EA8
 * Callers:
 *     MsixvcUpdatePolicyString @ 0x180004490 (MsixvcUpdatePolicyString.c)
 *     MsixvcUpdatePolicyUInt64 @ 0x1800044E0 (MsixvcUpdatePolicyUInt64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002764 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180004AA0 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004B18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004B30 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180005E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180006730 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall MsixvcUpdatePolicyInternal(
        const wchar_t *a1,
        const wchar_t *a2,
        unsigned int a3,
        const wchar_t *a4,
        unsigned __int64 a5)
{
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int ActivationFactory; // eax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  HRESULT v14; // eax
  void *v15; // rdx
  unsigned int v16; // r8d
  IUnknown *v17; // rbx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  HSTRING v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdi
  HRESULT v30; // eax
  int v31; // edx
  unsigned int v32; // r8d
  HSTRING v33; // rbx
  __int64 v34; // rcx
  const wchar_t *v35; // rcx
  const wchar_t *v36; // rbx
  __int64 v37; // rax
  const wchar_t *v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rax
  const wchar_t *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  IUnknown *v46; // rcx
  int dwAuthnLevel; // [rsp+20h] [rbp-71h]
  int v49[2]; // [rsp+40h] [rbp-51h] BYREF
  char v50[8]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v51; // [rsp+50h] [rbp-41h] BYREF
  __int64 v52; // [rsp+58h] [rbp-39h] BYREF
  IUnknown *pProxy; // [rsp+60h] [rbp-31h] BYREF
  const wchar_t *v54; // [rsp+68h] [rbp-29h] BYREF
  const wchar_t *v55; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v56[2]; // [rsp+78h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-9h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v56[1] = -2LL;
  v54 = a1;
  v55 = a2;
  v56[0] = a4;
  pProxy = 0LL;
  v52 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v7 < 0 )
    goto LABEL_68;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4408fb32_c420_41c5_b6c1_edce489bb84d, &pProxy);
  v11 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v12 = (unsigned int)ActivationFactory;
    v13 = 50LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)v12);
    goto LABEL_62;
  }
  v14 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, (OLECHAR *)0xFFFFFFFFFFFFFFFFLL, 0, 3u, 0LL, 0x40u);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(retaddr, v15, v16, (const char *)(unsigned int)v14, dwAuthnLevel);
  v17 = pProxy;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v54);
  v19 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, _QWORD, __int64 *))v17->lpVtbl[17].AddRef)(
          v17,
          0LL,
          *(_QWORD *)(v18 + 24),
          &v52);
  v11 = v19;
  if ( v19 < 0 )
  {
    v12 = (unsigned int)v19;
    v13 = 52LL;
    goto LABEL_12;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v52 + 416LL))(v52, v50);
  v11 = v20;
  if ( v20 < 0 )
  {
    v12 = (unsigned int)v20;
    v13 = 55LL;
    goto LABEL_12;
  }
  if ( !v50[0] )
  {
    v11 = -2147024809;
    v12 = 2147942487LL;
    v13 = 56LL;
    goto LABEL_12;
  }
  v51 = 0LL;
  *(_QWORD *)v49 = 0LL;
  string = 0LL;
  v21 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v21 < 0 )
  {
LABEL_69:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
    JUMPOUT(0x18000447FLL);
  }
  v24 = string;
  v25 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = RoGetActivationFactory(v24, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &v51);
  v11 = v26;
  if ( v26 < 0 )
  {
    v27 = 60LL;
LABEL_55:
    v40 = (unsigned int)v26;
    goto LABEL_56;
  }
  v28 = v51;
  v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v55);
  v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v28 + 296LL))(
          v28,
          v52,
          *(_QWORD *)(v29 + 24),
          a3,
          v49);
  v11 = v26;
  if ( v26 < 0 )
  {
    v27 = 61LL;
    goto LABEL_55;
  }
  if ( *(_QWORD *)v49 )
  {
    v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)v49 + 216LL))(*(_QWORD *)v49, a5);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 84LL;
      goto LABEL_55;
    }
    if ( a4 )
    {
      v41 = *(_QWORD *)v49;
      v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v56);
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 200LL))(v41, *(_QWORD *)(v42 + 24));
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 88LL;
        goto LABEL_55;
      }
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v49 + 184LL))(*(_QWORD *)v49);
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 92LL;
        goto LABEL_55;
      }
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 56LL))(v51, *(_QWORD *)v49);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 95LL;
      goto LABEL_55;
    }
    goto LABEL_57;
  }
  string = 0LL;
  v30 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v30 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30, v31, v32);
LABEL_68:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    goto LABEL_69;
  }
  v33 = string;
  v34 = *(_QWORD *)v49;
  if ( *(_QWORD *)v49 )
  {
    *(_QWORD *)v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  *(_QWORD *)v49 = 0LL;
  v11 = RoActivateInstance(v33, &v54);
  if ( v11 >= 0 )
  {
    if ( *(_QWORD *)&GUID_7619d03f_b9b1_446c_aeb9_f126825fd333.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_7619d03f_b9b1_446c_aeb9_f126825fd333.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v35 = v54;
      *(_QWORD *)v49 = v54;
    }
    else
    {
      v11 = (**(__int64 (__fastcall ***)(const wchar_t *, GUID *, int *))v54)(
              v54,
              &GUID_7619d03f_b9b1_446c_aeb9_f126825fd333,
              v49);
      (*(void (__fastcall **)(const wchar_t *))(*(_QWORD *)v54 + 16LL))(v54);
      v35 = *(const wchar_t **)v49;
    }
    if ( v11 >= 0 )
    {
      v26 = (*(__int64 (__fastcall **)(const wchar_t *, __int64))(*(_QWORD *)v35 + 136LL))(v35, v52);
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 66LL;
        goto LABEL_55;
      }
      v36 = *(const wchar_t **)v49;
      v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v55);
      v26 = (*(__int64 (__fastcall **)(const wchar_t *, _QWORD))(*(_QWORD *)v36 + 152LL))(v36, *(_QWORD *)(v37 + 24));
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 67LL;
        goto LABEL_55;
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v49 + 168LL))(*(_QWORD *)v49, a3);
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 68LL;
        goto LABEL_55;
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)v49 + 216LL))(*(_QWORD *)v49, a5);
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 69LL;
        goto LABEL_55;
      }
      if ( a4 )
      {
        v38 = *(const wchar_t **)v49;
        v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v56);
        v26 = (*(__int64 (__fastcall **)(const wchar_t *, _QWORD))(*(_QWORD *)v38 + 200LL))(v38, *(_QWORD *)(v39 + 24));
        v11 = v26;
        if ( v26 < 0 )
        {
          v27 = 73LL;
          goto LABEL_55;
        }
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v49 + 184LL))(*(_QWORD *)v49);
        v11 = v26;
        if ( v26 < 0 )
        {
          v27 = 77LL;
          goto LABEL_55;
        }
      }
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 48LL))(v51, *(_QWORD *)v49);
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 80LL;
        goto LABEL_55;
      }
LABEL_57:
      v11 = 0;
      goto LABEL_58;
    }
  }
  v40 = (unsigned int)v11;
  v27 = 65LL;
LABEL_56:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    (const char *)v40);
LABEL_58:
  v43 = *(const wchar_t **)v49;
  if ( *(_QWORD *)v49 )
  {
    *(_QWORD *)v49 = 0LL;
    (*(void (__fastcall **)(const wchar_t *))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
LABEL_62:
  v45 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = pProxy;
  if ( pProxy )
  {
    pProxy = 0LL;
    ((void (__fastcall *)(IUnknown *))v46->lpVtbl->Release)(v46);
  }
  return (unsigned int)v11;
}
