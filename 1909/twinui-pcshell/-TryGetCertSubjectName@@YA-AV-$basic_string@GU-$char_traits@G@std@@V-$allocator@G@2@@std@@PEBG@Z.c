/*
 * XREFs of ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BEF7C
 * Callers:
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BED44 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800BEAE8 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-L.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18011F2A4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013F548 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801E3D00 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall TryGetCertSubjectName(__int64 a1, const void *a2)
{
  char *v3; // rdi
  const char *v4; // r9
  const CERT_CONTEXT *CertificateInStore; // rax
  const CERT_CONTEXT *v6; // rsi
  DWORD NameStringW; // eax
  __int64 v8; // rdx
  const char *v9; // r9
  DWORD v10; // r14d
  HCRYPTMSG hCryptMsg; // [rsp+60h] [rbp-A0h] BYREF
  HCERTSTORE hCertStore; // [rsp+68h] [rbp-98h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  LPWSTR pszNameString; // [rsp+78h] [rbp-88h] BYREF
  char *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  const CERT_CONTEXT *v18; // [rsp+90h] [rbp-70h]
  _BYTE pvFindPara[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-58h]
  __int128 v21; // [rsp+D0h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]
  DWORD pcbData; // [rsp+1B0h] [rbp+B0h] BYREF
  int pvTypePara; // [rsp+1B8h] [rbp+B8h] BYREF

  v17 = -2LL;
  v14 = 0;
  hCryptMsg = 0LL;
  hCertStore = 0LL;
  if ( CryptQueryObject(1u, a2, 0x400u, 2u, 0, 0LL, 0LL, 0LL, &hCertStore, &hCryptMsg, 0LL)
    && CryptMsgGetParam(hCryptMsg, 6u, 0, 0LL, &pcbData) )
  {
    v3 = (char *)LocalAlloc(0x40u, pcbData);
    v16 = v3;
    if ( !v3 )
    {
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x1B,
        (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
        v4);
      __debugbreak();
    }
    if ( CryptMsgGetParam(hCryptMsg, 6u, 0, v3, &pcbData) )
    {
      memset_0(pvFindPara, 0, 0xD0uLL);
      v21 = *(_OWORD *)(v3 + 8);
      v20 = *(_OWORD *)(v3 + 24);
      CertificateInStore = CertFindCertificateInStore(hCertStore, 0x10001u, 0, 0xB0000u, pvFindPara, 0LL);
      v6 = CertificateInStore;
      v18 = CertificateInStore;
      if ( CertificateInStore )
      {
        pvTypePara = 33554435;
        NameStringW = CertGetNameStringW(CertificateInStore, 2u, 0, &pvTypePara, 0LL, 0);
        v10 = NameStringW;
        if ( NameStringW )
        {
          wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
            &pszNameString,
            v8,
            NameStringW,
            v9);
          if ( CertGetNameStringW(v6, 2u, 0, &pvTypePara, pszNameString, v10) )
          {
            std::wstring::wstring(a1, pszNameString);
            v14 = 1;
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pszNameString);
            CertFreeCertificateContext(v6);
            v16 = 0LL;
            LocalFree(v3);
            if ( hCryptMsg )
              CryptMsgClose(hCryptMsg);
            if ( hCertStore )
              CertCloseStore(hCertStore, 0);
            return a1;
          }
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pszNameString);
        }
      }
      if ( v6 )
        CertFreeCertificateContext(v6);
    }
    v16 = 0LL;
    LocalFree(v3);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v14 = 1;
  if ( hCryptMsg )
    CryptMsgClose(hCryptMsg);
  if ( hCertStore )
    CertCloseStore(hCertStore, 0);
  return a1;
}
