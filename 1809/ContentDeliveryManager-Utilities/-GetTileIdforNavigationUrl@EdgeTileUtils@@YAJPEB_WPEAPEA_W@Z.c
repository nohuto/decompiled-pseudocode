/*
 * XREFs of ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x180094D90
 * Callers:
 *     _lambda_2e8bb15b569abf147acfccd9115572b3_::operator() @ 0x180095954 (_lambda_2e8bb15b569abf147acfccd9115572b3_--operator().c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B88 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800947D8 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x180096D80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EdgeTileUtils::GetTileIdforNavigationUrl(const WCHAR *this, wchar_t *a2, wchar_t **a3)
{
  HRESULT v4; // eax
  int v5; // esi
  HRESULT v6; // eax
  wchar_t **v7; // r8
  const char *v8; // r9
  void *v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdx
  void **v12; // r14
  void *v13; // r15
  DWORD LastError; // edi
  int v15; // eax
  IUriBuilder *v16; // rdi
  IUri *v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned int v23; // r10d
  __int64 v24; // rcx
  IUri *v26; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-41h] BYREF
  IUriBuilder *ppIUriBuilder; // [rsp+48h] [rbp-39h] BYREF
  LPVOID v29; // [rsp+50h] [rbp-31h] BYREF
  IUri *ppURI; // [rsp+58h] [rbp-29h] BYREF
  BSTR bstrString; // [rsp+60h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-11h] BYREF
  wchar_t Buffer[4]; // [rsp+80h] [rbp-1h] BYREF
  wchar_t v35[4]; // [rsp+88h] [rbp+7h] BYREF
  char v36; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v33[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  ppURI = 0LL;
  v4 = CreateUri(this, 0, 0LL, &ppURI);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\edgetileutils.h",
      (const char *)(unsigned int)v4);
    goto LABEL_55;
  }
  ppIUriBuilder = 0LL;
  v6 = CreateIUriBuilder(ppURI, 0, 0LL, &ppIUriBuilder);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v27 = 0;
    v33[0] = 0LL;
    v26 = 0LL;
    v5 = ((__int64 (__fastcall *)(IUriBuilder *, unsigned int *, _QWORD *))ppIUriBuilder->lpVtbl->GetQuery)(
           ppIUriBuilder,
           &v27,
           v33);
    if ( v5 == 1 || !v27 )
    {
      v26 = ppURI;
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->AddRef)(ppURI);
    }
    else
    {
      if ( v5 < 0 )
      {
LABEL_51:
        if ( v26 )
          ((void (__fastcall *)(IUri *))v26->lpVtbl->Release)(v26);
        goto LABEL_53;
      }
      v29 = 0LL;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,0,std::nullptr_t>>>>(
        &pv,
        v33[0],
        v27);
      v9 = pv;
      if ( !pv )
      {
        v5 = -2147024882;
        v10 = 2147942414LL;
        v11 = 179LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\edgetileutils.h",
          (const char *)v10);
        if ( v9 )
          CoTaskMemFree(v9);
        if ( v29 )
          CoTaskMemFree(v29);
        goto LABEL_51;
      }
      *(_QWORD *)Buffer = &v29;
      *(_QWORD *)v35 = 0LL;
      v36 = 1;
      v5 = EdgeTileUtils::RemoveTelemetryQueryParams((EdgeTileUtils *)pv, v35, v7, v8);
      if ( v36 )
      {
        v12 = *(void ***)Buffer;
        v13 = **(void ***)Buffer;
        if ( **(_QWORD **)Buffer )
        {
          LastError = GetLastError();
          CoTaskMemFree(v13);
          SetLastError(LastError);
        }
        *v12 = *(void **)v35;
      }
      if ( v5 < 0 )
      {
        v10 = (unsigned int)v5;
        v11 = 182LL;
        goto LABEL_23;
      }
      v15 = ((__int64 (__fastcall *)(IUriBuilder *, LPVOID))ppIUriBuilder->lpVtbl->SetQuery)(ppIUriBuilder, v29);
      v5 = v15;
      if ( v15 < 0 )
      {
        v11 = 184LL;
LABEL_22:
        v10 = (unsigned int)v15;
        goto LABEL_23;
      }
      v16 = ppIUriBuilder;
      v17 = v26;
      v26 = 0LL;
      if ( v17 )
        ((void (__fastcall *)(IUri *))v17->lpVtbl->Release)(v17);
      v15 = ((__int64 (__fastcall *)(IUriBuilder *, _QWORD, _QWORD, IUri **))v16->lpVtbl->CreateUriSimple)(
              v16,
              0LL,
              0LL,
              &v26);
      v5 = v15;
      if ( v15 < 0 )
      {
        v11 = 185LL;
        goto LABEL_22;
      }
      CoTaskMemFree(v9);
      if ( v29 )
        CoTaskMemFree(v29);
    }
    bstrString = 0LL;
    v18 = ((__int64 (__fastcall *)(IUri *, BSTR *))v26->lpVtbl->GetAbsoluteUri)(v26, &bstrString);
    v5 = v18;
    if ( v18 < 0 )
    {
      v19 = (unsigned int)v18;
      v20 = 194LL;
LABEL_47:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\edgetileutils.h",
        (const char *)v19);
      goto LABEL_49;
    }
    v21 = 997LL;
    v22 = -1LL;
    do
      ++v22;
    while ( bstrString[v22] );
    if ( v22 && bstrString[v22 - 1] == 47 )
      --v22;
    v23 = 0;
    if ( v22 )
    {
      v24 = 0LL;
      do
      {
        v21 = (unsigned int)bstrString[v24] + 31 * (_DWORD)v21;
        v24 = ++v23;
      }
      while ( v23 < v22 );
    }
    *(_QWORD *)a2 = 0LL;
    v5 = StringCchPrintfW(Buffer, 13LL, L"%u%u", v21, 0);
    if ( v5 >= 0 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,0,std::nullptr_t>>>>(
        &pv,
        Buffer,
        -1LL);
      if ( !pv )
      {
        v5 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x81,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\edgetileutils.h",
          (const char *)0x8007000ELL);
LABEL_46:
        v19 = (unsigned int)v5;
        v20 = 196LL;
        goto LABEL_47;
      }
      *(_QWORD *)a2 = pv;
    }
    if ( v5 >= 0 )
    {
      v5 = 0;
LABEL_49:
      if ( bstrString )
        SysFreeString(bstrString);
      goto LABEL_51;
    }
    goto LABEL_46;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\edgetileutils.h",
    (const char *)(unsigned int)v6);
LABEL_53:
  if ( ppIUriBuilder )
    ((void (__fastcall *)(IUriBuilder *))ppIUriBuilder->lpVtbl->Release)(ppIUriBuilder);
LABEL_55:
  if ( ppURI )
    ((void (__fastcall *)(IUri *, struct IUriVtbl *))ppURI->lpVtbl->Release)(ppURI, ppURI->lpVtbl);
  return (unsigned int)v5;
}
