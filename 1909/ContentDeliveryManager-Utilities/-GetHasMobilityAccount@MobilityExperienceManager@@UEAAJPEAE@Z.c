/*
 * XREFs of ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x18009D140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180016944 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount(
        MobilityExperienceManager *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  HRESULT v8; // edx
  __int64 v9; // r8
  int (__fastcall ***v10)(_QWORD, GUID *, __int64); // rdi
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD **); // rdi
  _QWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // r14d
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  HRESULT v22; // eax
  HRESULT v23; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, _QWORD **); // rsi
  _QWORD *v26; // rcx
  int v27; // eax
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  HSTRING string1; // [rsp+28h] [rbp-59h] BYREF
  __int64 v32; // [rsp+30h] [rbp-51h] BYREF
  INT32 result; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-39h] BYREF
  __int64 v36; // [rsp+50h] [rbp-31h]
  unsigned int v37; // [rsp+58h] [rbp-29h] BYREF
  int *v38; // [rsp+60h] [rbp-21h]
  int v39; // [rsp+68h] [rbp-19h] BYREF
  _QWORD *v40; // [rsp+70h] [rbp-11h] BYREF
  int (__fastcall ***v41)(_QWORD, GUID *, __int64); // [rsp+78h] [rbp-9h] BYREF
  _QWORD v42[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v42[1] = -2LL;
  *a2 = 0;
  v35 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
LABEL_62:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x18009D609LL);
  }
  v35 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v35);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_58;
  }
  v41 = 0LL;
  v6 = *v35;
  v41 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD *, int (__fastcall ****)(_QWORD, GUID *, __int64)))(v6 + 96))(v35, &v41);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_56;
  }
  v42[0] = 0LL;
  v10 = v41;
  v5 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(
         v41,
         v8,
         v9);
  if ( v5 < 0
    || (v5 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64), _QWORD *))(*v10)[8])(v10, v42),
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_54;
  }
  v36 = v42[0];
  v38 = &v39;
  v39 = 0;
  v40 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v42[0] + 56LL))(v42[0], &v37);
  *v38 = v11;
  if ( v11 >= 0 && v37 )
  {
    v12 = v36;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v36 + 48LL);
    v14 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    }
    v15 = v13(v12, 0LL, &v40);
    *v38 = v15;
  }
  v16 = 0;
  v17 = v37;
  while ( 1 )
  {
    if ( *v38 < 0 || v16 == v17 )
      goto LABEL_39;
    v32 = 0LL;
    v18 = *v40;
    v32 = 0LL;
    v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v18 + 48))(v40, &v32);
    v5 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_49;
    }
    v34 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 **))v32)(
           v32,
           &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
           &v34) < 0 )
      goto LABEL_24;
    string1 = 0LL;
    v20 = *v34;
    string1 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v20 + 56))(v34, &string1);
    v5 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v21);
LABEL_44:
      if ( string1 )
        WindowsDeleteString(string1);
      if ( v34 )
        (*(void (__fastcall **)(__int64 *))(*v34 + 16))(v34);
LABEL_49:
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v29 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
      }
      goto LABEL_54;
    }
    result = 0;
    string = 0LL;
    v22 = WindowsCreateStringReference(L"consumers", 9u, &hstringHeader, &string);
    if ( v22 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
      goto LABEL_62;
    }
    v23 = WindowsCompareStringOrdinal(string1, string, &result);
    v5 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v23);
      string = 0LL;
      goto LABEL_44;
    }
    string = 0LL;
    if ( !result )
      break;
    if ( string1 )
      WindowsDeleteString(string1);
LABEL_24:
    if ( v34 )
      (*(void (__fastcall **)(__int64 *))(*v34 + 16))(v34);
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    ++v16;
    if ( *v38 >= 0 && v16 < v37 )
    {
      v24 = v36;
      v25 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v36 + 48LL);
      v26 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      }
      v27 = v25(v24, v16, &v40);
      *v38 = v27;
    }
  }
  *a2 = 1;
  if ( string1 )
    WindowsDeleteString(string1);
  if ( v34 )
    (*(void (__fastcall **)(__int64 *))(*v34 + 16))(v34);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
LABEL_39:
  v28 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
  }
  v5 = 0;
LABEL_54:
  if ( v42[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v42[0] + 16LL))(v42[0]);
LABEL_56:
  if ( v41 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64)))(*v41)[2])(v41);
LABEL_58:
  if ( v35 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v35 + 16LL))(v35, *v35);
  return (unsigned int)v5;
}
