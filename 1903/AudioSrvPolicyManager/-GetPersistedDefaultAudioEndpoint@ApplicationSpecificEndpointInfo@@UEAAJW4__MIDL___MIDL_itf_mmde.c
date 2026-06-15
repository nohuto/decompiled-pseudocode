/*
 * XREFs of ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180027CCC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002F704 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char *a4)
{
  void *v4; // rbx
  char *v9; // rdx
  __int64 v10; // rdx
  char *v11; // rdx
  unsigned int v12; // edi
  bool v13; // di
  DWORD LastError; // edi
  int updated; // eax
  void *v16; // rax
  void *v18; // [rsp+20h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-30h] BYREF
  void *v20; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0LL;
  if ( a2 == 1 )
  {
    v9 = *(char **)(a1 + 8LL * (int)a3 + 96);
    if ( !v9 )
      goto LABEL_18;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v9,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    v4 = pv;
    if ( !pv )
    {
      v10 = 188LL;
LABEL_9:
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_19;
    }
  }
  else
  {
    if ( a2 )
      goto LABEL_18;
    v11 = *(char **)(a1 + 8LL * (int)a3 + 168);
    if ( !v11 )
      goto LABEL_18;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v20,
      v11,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    v4 = v20;
    if ( !v20 )
    {
      v10 = 196LL;
      goto LABEL_9;
    }
  }
  v18 = 0LL;
  v13 = (int)mmdDevGetMMDeviceFromInterfaceId(v4, &v18) >= 0;
  if ( v18 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( !v13 )
  {
    if ( v4 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v4);
      SetLastError(LastError);
    }
    v18 = 0LL;
    updated = ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId(a1, a2, a3, &v18);
    v12 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)updated);
      v4 = v18;
      goto LABEL_19;
    }
    v4 = v18;
  }
LABEL_18:
  v16 = v4;
  v4 = 0LL;
  v12 = 0;
  *(_QWORD *)a4 = v16;
LABEL_19:
  if ( v4 )
    CoTaskMemFree(v4);
  return v12;
}
