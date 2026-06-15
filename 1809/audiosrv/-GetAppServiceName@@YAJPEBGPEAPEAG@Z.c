/*
 * XREFs of ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x180138740
 * Callers:
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18013AE24 (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800320C0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800DB5F8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetAppServiceName(const unsigned __int16 *a1, unsigned __int16 **a2)
{
  HRESULT v3; // eax
  char *v4; // r11
  unsigned int v5; // ebx
  unsigned __int64 v7; // rsi
  _WORD *v8; // rdi
  unsigned int v9; // esi
  unsigned __int64 i; // rax
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r14
  unsigned __int16 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  pv = 0LL;
  v3 = StringCchLengthW(a1, 0x41uLL, (unsigned __int64 *)&pv);
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      168LL,
      (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v3);
    return v5;
  }
  v7 = (unsigned __int64)pv;
  if ( (unsigned __int64)pv > 0x1E )
    v7 = 30LL;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v4,
    v7);
  v8 = pv;
  if ( pv )
  {
    for ( i = 0LL; i < v7; ++i )
    {
      if ( v8[i] == 95 )
        v8[i] = 46;
    }
    v11 = (unsigned __int16 *)CoTaskMemAlloc(2 * v7 + 16);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 0;
      v11[v7 + 7] = 0;
    }
    v13 = v11;
    if ( v11 )
    {
      v16 = StringCchPrintfW(v11, v7 + 8, L"com.%s", v8);
      v9 = v16;
      if ( v16 >= 0 )
      {
        v13 = 0LL;
        *a2 = v12;
        v9 = 0;
        goto LABEL_19;
      }
      v15 = (unsigned int)v16;
      v14 = 197LL;
    }
    else
    {
      v9 = -2147024882;
      v14 = 195LL;
      v15 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v14,
      (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)v15);
LABEL_19:
    if ( v13 )
      CoTaskMemFree(v13);
    CoTaskMemFree(v8);
    return v9;
  }
  v9 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    177LL,
    (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
    (const char *)0x8007000ELL);
  return v9;
}
