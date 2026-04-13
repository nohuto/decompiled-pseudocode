/*
 * XREFs of _lambda_8db6d4bee1849959d8282bc6736eef1f_::operator() @ 0x18000DFF4
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_8db6d4bee1849959d8282bc6736eef1f____Windows::Internal::CHSTRINGResult_::Run @ 0x1800183A0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_8db6d4bee184995.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180016294 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180018DF4 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Sec.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall lambda_8db6d4bee1849959d8282bc6736eef1f_::operator()(__int64 a1, __int64 a2)
{
  int v4; // edi
  HRESULT v5; // eax
  int ActivationFactory; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  const WCHAR *StringRawBuffer; // rax
  HRESULT v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  HRESULT v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rdi
  _QWORD *v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  int v32; // eax
  HSTRING v33; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // r9
  __int64 v39; // rdx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  HSTRING v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // r9
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v48; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v49; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+70h] [rbp-98h] BYREF
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  __int64 v53; // [rsp+80h] [rbp-88h] BYREF
  int v54; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v55; // [rsp+90h] [rbp-78h] BYREF
  __int64 v56; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-40h] BYREF
  int v63; // [rsp+D0h] [rbp-38h] BYREF
  int v64; // [rsp+D4h] [rbp-34h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING v66; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING newString[2]; // [rsp+E8h] [rbp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING string; // [rsp+110h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  newString[1] = (HSTRING)-2LL;
  v66 = 0LL;
  v4 = 0;
  v55 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    goto LABEL_128;
  v55 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v55);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_69;
  }
  v62 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v55 + 96LL))(v55, &v62);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_67;
  }
  v53 = 0LL;
  v9 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(v62);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 546LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_65;
  }
  v53 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v62 + 64LL))(v62, &v53);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 548LL;
    goto LABEL_12;
  }
  LODWORD(v47) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 56LL))(v53, &v47);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 550LL;
    goto LABEL_12;
  }
  v11 = 0;
  if ( !(_DWORD)v47 )
  {
LABEL_62:
    if ( WindowsDuplicateString(v66, newString) >= 0 )
    {
      v33 = *(HSTRING *)(a2 + 16);
      *(HSTRING *)(a2 + 16) = newString[0];
      WindowsDeleteString(v33);
    }
    v7 = v4;
    goto LABEL_65;
  }
  while ( 1 )
  {
    v52 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v53 + 48LL))(v53, v11, &v52);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_125;
    }
    v61 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 48LL))(v52, &v61);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_122;
    }
    v60 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v61)(
            v61,
            &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
            &v60);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_119;
    }
    v48 = 0LL;
    v15 = v60;
    WindowsDeleteString(0LL);
    v48 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 56LL))(v15, &v48);
    v7 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x234,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_117;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v48, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"consumers", -1, 0) == 2 )
      break;
LABEL_55:
    WindowsDeleteString(v48);
    v48 = 0LL;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    if ( ++v11 >= (unsigned int)v47 )
      goto LABEL_62;
  }
  v51 = 0LL;
  string = 0LL;
  v18 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager",
          0x45u,
          &hstringHeader,
          &string);
  if ( v18 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
LABEL_128:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
LABEL_129:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    JUMPOUT(0x18000E9B4LL);
  }
  v19 = v51;
  v51 = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = RoGetActivationFactory(string, &GUID_6aca7c92_a581_4479_9c10_752eff44fd34, &v51);
  v7 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x239,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_114;
  }
  v50 = 0LL;
  string = 0LL;
  v21 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebTokenRequest",
          0x38u,
          &hstringHeader,
          &string);
  if ( v21 < 0 )
    goto LABEL_129;
  v22 = v50;
  v50 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = RoGetActivationFactory(string, &GUID_6cf2141c_0ff0_4c67_b84f_99ddbe4a72c9, &v50);
  v7 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_111;
  }
  v59 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 48LL))(v52, &v59);
  v7 = v24;
  if ( v24 >= 0 )
  {
    v49 = 0LL;
    v46 = 0LL;
    v25 = v50;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_1800D4378);
    v27 = v49;
    v49 = 0LL;
    if ( v27 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v27 + 16LL))(v27, *v27);
    v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD **))(*(_QWORD *)v25 + 56LL))(
            v25,
            v59,
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(v26 + 24),
            0,
            &v49);
    v7 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x243,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v28);
LABEL_103:
      if ( v46 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      if ( v49 )
        (*(void (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
      goto LABEL_108;
    }
    v58 = 0LL;
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *))(*(_QWORD *)v51 + 56LL))(
            v51,
            v49,
            v52,
            &v58);
    v7 = v29;
    if ( v29 < 0 )
    {
      v44 = 582LL;
    }
    else
    {
      v30 = v46;
      v46 = 0LL;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v31 = v58;
      v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult *> *>(v58);
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 64LL))(v31, &v46);
      if ( v7 < 0 )
      {
        v45 = (unsigned int)v7;
        v44 = 584LL;
LABEL_99:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v45);
LABEL_100:
        if ( v58 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        goto LABEL_103;
      }
      v29 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v46 + 56LL))(v46, &v63);
      v7 = v29;
      if ( v29 >= 0 )
      {
        if ( v63 )
        {
          v56 = 0LL;
          v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 64LL))(v46, &v56);
          v7 = v32;
          if ( v32 < 0 )
          {
            v35 = 605LL;
          }
          else
          {
            v32 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v56 + 48LL))(v56, &v64);
            v7 = v32;
            if ( v32 >= 0 )
            {
              v4 = v64;
              if ( v56 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
              if ( v58 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
              if ( v46 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
              if ( v49 )
                (*(void (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
              if ( v59 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
              if ( v50 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
              if ( v51 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
              goto LABEL_55;
            }
            v35 = 607LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v35,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v32);
          v36 = v56;
          goto LABEL_93;
        }
        v57 = 0LL;
        v37 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 48LL))(v46, &v57);
        v7 = v37;
        if ( v37 < 0 )
        {
          v38 = (unsigned int)v37;
          v39 = 591LL;
LABEL_81:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v38);
LABEL_92:
          v36 = v57;
LABEL_93:
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          goto LABEL_100;
        }
        v54 = 0;
        v40 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v57 + 56LL))(v57, &v54);
        v7 = v40;
        if ( v40 < 0 )
        {
          v38 = (unsigned int)v40;
          v39 = 593LL;
          goto LABEL_81;
        }
        if ( v54 != 1 )
        {
          v7 = -2147418113;
          v38 = 2147549183LL;
          v39 = 594LL;
          goto LABEL_81;
        }
        v65 = 0LL;
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v57 + 48LL))(v57, 0LL, &v65);
        v7 = v41;
        if ( v41 >= 0 )
        {
          v41 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v65 + 48LL))(v65, &v66);
          v7 = v41;
          if ( v41 >= 0 )
          {
            if ( WindowsDuplicateString(v66, newString) >= 0 )
            {
              v43 = *(HSTRING *)(a2 + 16);
              *(HSTRING *)(a2 + 16) = newString[0];
              WindowsDeleteString(v43);
            }
            v7 = 0;
            goto LABEL_90;
          }
          v42 = 597LL;
        }
        else
        {
          v42 = 596LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v42,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v41);
LABEL_90:
        if ( v65 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        goto LABEL_92;
      }
      v44 = 587LL;
    }
    v45 = (unsigned int)v29;
    goto LABEL_99;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v24);
LABEL_108:
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
LABEL_111:
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
LABEL_114:
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
LABEL_117:
  WindowsDeleteString(v48);
  v48 = 0LL;
LABEL_119:
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
LABEL_122:
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
LABEL_125:
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
LABEL_65:
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
LABEL_67:
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
LABEL_69:
  if ( v55 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v55 + 16LL))(v55, *v55);
  return (unsigned int)v7;
}
