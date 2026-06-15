/*
 * XREFs of wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__&_::Run @ 0x180048C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800058A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007840 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18000C540 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001BC50 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed____::Run(__int64 a1)
{
  __int64 v1; // rbx
  const struct tWAVEFORMATEX **v3; // rax
  const struct tWAVEFORMATEX *v4; // rdi
  void *v5; // rcx
  unsigned __int16 v6; // r8
  const struct tWAVEFORMATEX *v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rdx
  void **v10; // rdx
  LPVOID v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  struct _GUID v14; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  LPVOID pv; // [rsp+80h] [rbp+20h] BYREF
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(**(_QWORD **)v1 + 140LL) )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(v1 + 8) + 56LL))(**(_QWORD **)(v1 + 8)) )
    {
      if ( (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode(**(CEndpointCharacteristics ***)(v1 + 8)) )
      {
        v3 = *(const struct tWAVEFORMATEX ***)(v1 + 16);
        v4 = *v3;
        if ( (*v3)->nChannels < 8u && !(unsigned int)ValidateUncompressedWaveFormatEx(*v3) )
        {
          pv = 0LL;
          *(_QWORD *)&v14.Data1 = &pv;
          *(_QWORD *)v14.Data4 = 0LL;
          v15 = 1;
          **(_DWORD **)(v1 + 24) = CloneWaveFormat(v4, (struct tWAVEFORMATEX **)v14.Data4);
          if ( v15 )
          {
            v5 = **(void ***)&v14.Data1;
            **(_QWORD **)&v14.Data1 = *(_QWORD *)v14.Data4;
            if ( v5 )
              CoTaskMemFree(v5);
          }
          if ( **(int **)(v1 + 24) >= 0 )
          {
            *((_WORD *)pv + 1) = 8;
            v6 = 8 * (*((_WORD *)pv + 7) >> 3);
            *((_WORD *)pv + 6) = v6;
            *((_DWORD *)pv + 2) = *((_DWORD *)pv + 1) * v6;
            v7 = (const struct tWAVEFORMATEX *)pv;
            if ( *(_WORD *)pv == 0xFFFE )
            {
              *((_DWORD *)pv + 5) = 1599;
              v7 = (const struct tWAVEFORMATEX *)pv;
            }
            v14 = *(struct _GUID *)*(_QWORD *)(v1 + 32);
            **(_DWORD **)(v1 + 24) = IsStreamFormatSupportedForMixFormat(
                                       **(struct CEndpointCharacteristics ***)(v1 + 8),
                                       &v14,
                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(**(_QWORD **)v1 + 52LL),
                                       **(const struct tWAVEFORMATEX ***)(v1 + 16),
                                       v7,
                                       0LL);
            v8 = *(_DWORD **)(v1 + 24);
            if ( !*v8 )
            {
              v17 = 0LL;
              wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v17);
              **(_DWORD **)(v1 + 24) = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                         g_PolicyManager,
                                         **(_QWORD **)(v1 + 40),
                                         &v17);
              if ( **(int **)(v1 + 24) >= 0 )
              {
                LOBYTE(v9) = 1;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 504LL))(v17, v9);
                v10 = *(void ***)(v1 + 16);
                v11 = pv;
                pv = 0LL;
                v12 = *v10;
                *v10 = v11;
                if ( v12 )
                  CoTaskMemFree(v12);
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
              v8 = *(_DWORD **)(v1 + 24);
            }
            *v8 = 0;
          }
          v13 = pv;
          pv = 0LL;
          if ( v13 )
            CoTaskMemFree(v13);
        }
      }
    }
  }
  return 0LL;
}
