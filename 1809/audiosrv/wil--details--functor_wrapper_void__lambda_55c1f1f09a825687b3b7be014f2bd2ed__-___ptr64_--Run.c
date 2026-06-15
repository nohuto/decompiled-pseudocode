/*
 * XREFs of wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__&___ptr64_::Run @ 0x180015670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180005440 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180053C98 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D8B8C (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  CEndpointCharacteristics **v3; // rax
  const struct tWAVEFORMATEX **v4; // rax
  const struct tWAVEFORMATEX *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rsi
  unsigned __int16 v8; // r8
  const struct tWAVEFORMATEX *v9; // rax
  __int64 v10; // rdx
  struct _GUID v11; // [rsp+40h] [rbp-20h] BYREF
  char v12; // [rsp+50h] [rbp-10h]
  LPVOID pv; // [rsp+80h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(**(_QWORD **)v1 + 108LL) )
  {
    v3 = *(CEndpointCharacteristics ***)(v1 + 8);
    if ( !*((_DWORD *)*v3 + 39) )
    {
      if ( CEndpointCharacteristics::GetVirtualSurroundEffectMode(*v3) )
      {
        v4 = *(const struct tWAVEFORMATEX ***)(v1 + 16);
        v5 = *v4;
        if ( (*v4)->nChannels < 8u && !(unsigned int)ValidateUncompressedWaveFormatEx(*v4) )
        {
          pv = 0LL;
          *(_QWORD *)&v11.Data1 = &pv;
          *(_QWORD *)v11.Data4 = 0LL;
          v12 = 1;
          **(_DWORD **)(v1 + 24) = CloneWaveFormat(v5, (struct tWAVEFORMATEX **)v11.Data4);
          if ( v12 )
          {
            v6 = **(void ***)&v11.Data1;
            v7 = *(_QWORD *)v11.Data4;
            if ( *(_QWORD *)v11.Data4 != **(_QWORD **)&v11.Data1 )
            {
              if ( v6 )
                CoTaskMemFree(v6);
              **(_QWORD **)&v11.Data1 = v7;
            }
          }
          if ( **(int **)(v1 + 24) >= 0 )
          {
            *((_WORD *)pv + 1) = 8;
            v8 = 8 * (*((_WORD *)pv + 7) >> 3);
            *((_WORD *)pv + 6) = v8;
            *((_DWORD *)pv + 2) = *((_DWORD *)pv + 1) * v8;
            v9 = (const struct tWAVEFORMATEX *)pv;
            if ( *(_WORD *)pv == 0xFFFE )
            {
              *((_DWORD *)pv + 5) = 1599;
              v9 = (const struct tWAVEFORMATEX *)pv;
            }
            v11 = *(struct _GUID *)*(_QWORD *)(v1 + 32);
            **(_DWORD **)(v1 + 24) = IsStreamFormatSupportedForMixFormat(
                                       **(struct CEndpointCharacteristics ***)(v1 + 8),
                                       &v11,
                                       *(_DWORD *)(**(_QWORD **)v1 + 20LL),
                                       **(const struct tWAVEFORMATEX ***)(v1 + 16),
                                       v9,
                                       0LL);
            if ( !**(_DWORD **)(v1 + 24) )
            {
              v14 = 0LL;
              wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v14);
              **(_DWORD **)(v1 + 24) = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                         g_PolicyManager,
                                         **(_QWORD **)(v1 + 40),
                                         &v14);
              if ( **(int **)(v1 + 24) >= 0 )
              {
                LOBYTE(v10) = 1;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 504LL))(v14, v10);
                wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
                  *(_QWORD *)(v1 + 16),
                  &pv);
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
            }
            **(_DWORD **)(v1 + 24) = 0;
          }
          if ( pv )
            CoTaskMemFree(pv);
        }
      }
    }
  }
  return 0LL;
}
