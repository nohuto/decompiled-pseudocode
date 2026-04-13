/*
 * XREFs of ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x180098864
 * Callers:
 *     _lambda_4a924f41398b24a36e92e39351e8429b_::operator() @ 0x180099490 (_lambda_4a924f41398b24a36e92e39351e8429b_--operator().c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800982AC (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x18009A748 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
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
  HRESULT (__stdcall *CreateUriSimple)(IUriBuilder *, DWORD, DWORD_PTR, IUri **); // rsi
  IUri *v18; // rcx
  struct IUriVtbl *lpVtbl; // rax
  int v20; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int64 v24; // r8
  unsigned int v25; // r10d
  __int64 v26; // rcx
  IUri *v28; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-41h] BYREF
  IUriBuilder *ppIUriBuilder; // [rsp+48h] [rbp-39h] BYREF
  LPVOID v31; // [rsp+50h] [rbp-31h] BYREF
  BSTR bstrString; // [rsp+58h] [rbp-29h] BYREF
  IUri *ppURI; // [rsp+60h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-11h] BYREF
  wchar_t Buffer[4]; // [rsp+80h] [rbp-1h] BYREF
  wchar_t v37[4]; // [rsp+88h] [rbp+7h] BYREF
  char v38; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v35[1] = -2LL;
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
    v29 = 0;
    v35[0] = 0LL;
    v28 = 0LL;
    v5 = ((__int64 (__fastcall *)(IUriBuilder *, unsigned int *, _QWORD *))ppIUriBuilder->lpVtbl->GetQuery)(
           ppIUriBuilder,
           &v29,
           v35);
    if ( v5 == 1 || !v29 )
    {
      v28 = ppURI;
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->AddRef)(ppURI);
    }
    else
    {
      if ( v5 < 0 )
      {
LABEL_51:
        if ( v28 )
          ((void (__fastcall *)(IUri *))v28->lpVtbl->Release)(v28);
        goto LABEL_53;
      }
      v31 = 0LL;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
        &pv,
        v35[0],
        v29);
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
        if ( v31 )
          CoTaskMemFree(v31);
        goto LABEL_51;
      }
      *(_QWORD *)Buffer = &v31;
      *(_QWORD *)v37 = 0LL;
      v38 = 1;
      v5 = EdgeTileUtils::RemoveTelemetryQueryParams((EdgeTileUtils *)pv, v37, v7, v8);
      if ( v38 )
      {
        v12 = *(void ***)Buffer;
        v13 = **(void ***)Buffer;
        if ( **(_QWORD **)Buffer )
        {
          LastError = GetLastError();
          CoTaskMemFree(v13);
          SetLastError(LastError);
        }
        *v12 = *(void **)v37;
      }
      if ( v5 < 0 )
      {
        v10 = (unsigned int)v5;
        v11 = 182LL;
        goto LABEL_23;
      }
      v15 = ((__int64 (__fastcall *)(IUriBuilder *, LPVOID))ppIUriBuilder->lpVtbl->SetQuery)(ppIUriBuilder, v31);
      v5 = v15;
      if ( v15 < 0 )
      {
        v11 = 184LL;
LABEL_22:
        v10 = (unsigned int)v15;
        goto LABEL_23;
      }
      v16 = ppIUriBuilder;
      CreateUriSimple = ppIUriBuilder->lpVtbl->CreateUriSimple;
      v18 = v28;
      v28 = 0LL;
      if ( v18 )
        ((void (__fastcall *)(IUri *))v18->lpVtbl->Release)(v18);
      v15 = ((__int64 (__fastcall *)(IUriBuilder *, _QWORD, _QWORD, IUri **))CreateUriSimple)(v16, 0LL, 0LL, &v28);
      v5 = v15;
      if ( v15 < 0 )
      {
        v11 = 185LL;
        goto LABEL_22;
      }
      CoTaskMemFree(v9);
      if ( v31 )
        CoTaskMemFree(v31);
    }
    bstrString = 0LL;
    lpVtbl = v28->lpVtbl;
    bstrString = 0LL;
    v20 = ((__int64 (__fastcall *)(IUri *, BSTR *))lpVtbl->GetAbsoluteUri)(v28, &bstrString);
    v5 = v20;
    if ( v20 < 0 )
    {
      v21 = (unsigned int)v20;
      v22 = 194LL;
LABEL_47:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\edgetileutils.h",
        (const char *)v21);
      goto LABEL_49;
    }
    v23 = 997LL;
    v24 = -1LL;
    do
      ++v24;
    while ( bstrString[v24] );
    if ( v24 && bstrString[v24 - 1] == 47 )
      --v24;
    v25 = 0;
    if ( v24 )
    {
      v26 = 0LL;
      do
      {
        v23 = (unsigned int)bstrString[v26] + 31 * (_DWORD)v23;
        v26 = ++v25;
      }
      while ( v25 < v24 );
    }
    *(_QWORD *)a2 = 0LL;
    v5 = StringCchPrintfW(Buffer, 13LL, L"%u%u", v23, 0);
    if ( v5 >= 0 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
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
        v21 = (unsigned int)v5;
        v22 = 196LL;
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
