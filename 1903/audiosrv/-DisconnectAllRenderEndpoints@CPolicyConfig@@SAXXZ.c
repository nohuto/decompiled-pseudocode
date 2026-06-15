/*
 * XREFs of ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800DEAF8
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800E2B50 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180004DAC (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::DisconnectAllRenderEndpoints(void)
{
  unsigned int i; // ebx
  bool v1; // di
  void *v2; // [rsp+40h] [rbp-10h] BYREF
  char v3; // [rsp+48h] [rbp-8h]
  unsigned int v4; // [rsp+70h] [rbp+20h] BYREF
  __int64 v5; // [rsp+78h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+30h] BYREF
  __int64 v7; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v5) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v4) >= 0 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v7 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, i, &v7) >= 0 )
      {
        pv = 0LL;
        v2 = 0LL;
        v3 = 1;
        v1 = (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 40LL))(v7, &v2) >= 0;
        if ( v3 )
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            v2);
        if ( v1 )
          CPolicyConfig::DisconnectHelper((const unsigned __int16 *)pv);
        if ( pv )
          CoTaskMemFree(pv);
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
