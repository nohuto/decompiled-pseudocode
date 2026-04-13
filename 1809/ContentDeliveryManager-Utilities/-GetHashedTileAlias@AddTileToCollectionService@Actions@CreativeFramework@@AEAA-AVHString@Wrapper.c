/*
 * XREFs of ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x18008563C
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800850FC (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180066114 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006F088 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180074AAC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086F6C (--$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@.c)
 *     ??$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008703C (--$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
const WCHAR *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(
        __int64 a1,
        const WCHAR *a2,
        char *a3,
        char *a4)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void **v11; // rax
  unsigned __int64 v12; // r8
  const WCHAR *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rbx
  int v26; // eax
  HSTRING string; // [rsp+38h] [rbp-69h] BYREF
  __int64 v29; // [rsp+40h] [rbp-61h] BYREF
  int v30; // [rsp+48h] [rbp-59h]
  __int64 v31; // [rsp+50h] [rbp-51h] BYREF
  __int64 v32; // [rsp+58h] [rbp-49h] BYREF
  __int64 v33; // [rsp+60h] [rbp-41h] BYREF
  __int64 v34; // [rsp+68h] [rbp-39h] BYREF
  __int64 v35; // [rsp+70h] [rbp-31h] BYREF
  const WCHAR *v36[3]; // [rsp+78h] [rbp-29h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v39; // [rsp+A8h] [rbp+7h]
  _BYTE v40[32]; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v36[1] = (const WCHAR *)-2LL;
  v36[2] = a2;
  v30 = 0;
  v39 = 7LL;
  v38 = 0LL;
  LOWORD(Src[0]) = 0;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&a4[2 * v8] );
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&a3[2 * v9] );
  v10 = v8 + v9 + 2;
  if ( v10 != 7 && std::wstring::_Grow(Src, v10, 1) )
  {
    v38 = 0LL;
    v11 = Src;
    if ( v39 >= 8 )
      v11 = (void **)Src[0];
    *(_WORD *)v11 = 0;
  }
  if ( *(_WORD *)a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&a3[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::append(Src, a3, v12);
  std::wstring::append(Src, (char *)L"_", 1uLL);
  if ( *(_WORD *)a4 )
  {
    do
      ++v7;
    while ( *(_WORD *)&a4[2 * v7] );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::append(Src, a4, v7);
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>((const WCHAR *)&v33);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>(&v35);
  v29 = 0LL;
  v13 = (const WCHAR *)Src;
  if ( v39 >= 8 )
    v13 = (const WCHAR *)Src[0];
  v36[0] = v13;
  v14 = v33;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v40, v36);
  v29 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 120LL))(
          v14,
          *(_QWORD *)(v15 + 24),
          0LL,
          &v29);
  v17 = retaddr;
  if ( v16 < 0 )
    goto LABEL_40;
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>(&v34);
  v18 = v34;
  WindowsDeleteString(0LL);
  string = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 64LL))(v18, &string);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x1E9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_42;
  }
  v32 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v35 + 48LL))(v35, string, &v32);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x1ED,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_43;
  }
  v31 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v32 + 64LL))(v32, v29, &v31);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x1EF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v23);
    JUMPOUT(0x1800859C1LL);
  }
  *(_QWORD *)a2 = 0LL;
  v30 = 1;
  v25 = v33;
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  v26 = (*(__int64 (__fastcall **)(__int64, __int64, const WCHAR *))(*(_QWORD *)v25 + 96LL))(v25, v31, a2);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v26);
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x1E4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_41;
  }
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v39 >= 8 )
    operator delete(Src[0]);
  return a2;
}
