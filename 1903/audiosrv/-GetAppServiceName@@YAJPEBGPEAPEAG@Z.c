/*
 * XREFs of ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x18013E480
 * Callers:
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18013FA34 (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18000E130 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18004CAD0 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180051AD0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C1F54 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetAppServiceName(const unsigned __int16 *a1, unsigned __int16 **a2)
{
  HRESULT v3; // eax
  const char *v4; // r9
  char *v5; // r11
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbx
  const char *v9; // r9
  _WORD *v10; // rdi
  unsigned int v11; // esi
  unsigned __int64 i; // rax
  unsigned __int64 v13; // rsi
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // r14
  unsigned __int16 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  pv = 0LL;
  v3 = StringCchLengthW(a1, 0x41uLL, (unsigned __int64 *)&pv);
  v6 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v3);
    return v6;
  }
  v8 = (unsigned __int64)pv;
  if ( (unsigned __int64)pv > 0x1E )
    v8 = 30LL;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v5,
    v8,
    v4);
  v10 = pv;
  if ( pv )
  {
    for ( i = 0LL; i < v8; ++i )
    {
      if ( v10[i] == 95 )
        v10[i] = 46;
    }
    v13 = v8 + 7;
    if ( v8 == -8LL )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        3190LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v9);
      __debugbreak();
    }
    v14 = (unsigned __int16 *)CoTaskMemAlloc(2 * v13 + 2);
    v15 = v14;
    if ( v14 )
    {
      *v14 = 0;
      v14[v13] = 0;
    }
    v16 = v14;
    if ( v14 )
    {
      v19 = StringCchPrintfW(v14, v13 + 1, L"com.%s", v10);
      v11 = v19;
      if ( v19 >= 0 )
      {
        v16 = 0LL;
        *a2 = v15;
        v11 = 0;
        goto LABEL_21;
      }
      v18 = (unsigned int)v19;
      v17 = 197LL;
    }
    else
    {
      v11 = -2147024882;
      v17 = 195LL;
      v18 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)v18);
LABEL_21:
    if ( v16 )
      CoTaskMemFree(v16);
    CoTaskMemFree(v10);
    return v11;
  }
  v11 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB1,
    (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
    (const char *)0x8007000ELL);
  return v11;
}
