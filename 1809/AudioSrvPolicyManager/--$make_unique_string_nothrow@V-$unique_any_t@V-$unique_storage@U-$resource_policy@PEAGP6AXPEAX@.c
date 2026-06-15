/*
 * XREFs of ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002E1C0
 * Callers:
 *     ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180030F80 (-GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     memcpy_s_0 @ 0x180037790 (memcpy_s_0.c)
 */

_QWORD *__fastcall wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        char *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  char *v6; // rax
  rsize_t v7; // rsi
  _WORD *v8; // rax
  _WORD *v9; // rbx
  _QWORD *result; // rax

  v2 = -1LL;
  if ( a2 )
  {
    v5 = 0x7FFFFFFFLL;
    v6 = a2;
    do
    {
      if ( !*(_WORD *)v6 )
        break;
      v6 += 2;
      --v5;
    }
    while ( v5 );
    v2 = (v6 - a2) >> 1;
  }
  v7 = v2;
  v8 = CoTaskMemAlloc(2 * v2 + 2);
  v9 = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      memcpy_s_0(v8, v7 * 2 + 2, a2, v7 * 2);
      v9[v7] = 0;
    }
    else
    {
      *v8 = 0;
    }
    v9[v7] = 0;
  }
  result = a1;
  *a1 = v9;
  return result;
}
