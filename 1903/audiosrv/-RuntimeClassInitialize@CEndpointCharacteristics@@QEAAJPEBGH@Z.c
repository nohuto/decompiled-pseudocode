/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18005918C
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800590E0 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18000A1A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000AD88 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18001ADD8 (--1-$out_param_t@V-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$function_deleter@P6AXPEAX@Z$1-C.c)
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x18001ADFC (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180034CFC (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800574E0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x180058EC8 (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180059644 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180062434 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800BB7C8 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x18011C40C (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        int a3)
{
  char v6; // r15
  char v7; // r13
  int v8; // ebx
  struct IUnknown **v9; // r14
  struct IUnknown *v10; // rbx
  int v11; // eax
  int ClassFromEndpointId; // eax
  struct IPropertyStore **v13; // rsi
  int v14; // eax
  struct IUnknown *v15; // rax
  struct IUnknown *v16; // rcx
  int v17; // eax
  struct IUnknown *v18; // rcx
  int v19; // eax
  int v20; // eax
  char *v21; // rax
  __int64 v22; // rcx
  int Active; // eax
  __int64 v24; // rdx
  bool v25; // si
  __int64 v26; // rax
  int v27; // eax
  struct tWAVEFORMATEX *v29; // [rsp+38h] [rbp-49h] BYREF
  struct IUnknown *v30; // [rsp+40h] [rbp-41h] BYREF
  struct IUnknown *v31; // [rsp+48h] [rbp-39h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-31h] BYREF
  __int64 v33; // [rsp+58h] [rbp-29h]
  __int64 v34; // [rsp+60h] [rbp-21h]
  LPVOID ppv; // [rsp+68h] [rbp-19h] BYREF
  PROPVARIANT v36[3]; // [rsp+70h] [rbp-11h] BYREF
  void *v37; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v38[9]; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v40; // [rsp+E8h] [rbp+67h] BYREF
  int v41; // [rsp+100h] [rbp+7Fh] BYREF

  v38[1] = -2LL;
  v6 = 0;
  ppv = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v7 = 0;
  v40 = 0;
  *((_QWORD *)this + 26) = 0LL;
  pvar = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v8 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v8 >= 0 )
  {
    v9 = (struct IUnknown **)((char *)this + 16);
    v8 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)ppv + 40LL))(
           ppv,
           a2,
           (char *)this + 16);
    if ( v8 >= 0 )
    {
      v10 = *v9;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)this + 3,
        0LL);
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v10->lpVtbl[1].Release)(v10, (char *)this + 24);
      v8 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11C,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v11);
      if ( v8 >= 0 )
      {
        ClassFromEndpointId = GetClassFromEndpointId(a2);
        *((_DWORD *)this + 8) = ClassFromEndpointId;
        v13 = (struct IPropertyStore **)((char *)this + 40);
        if ( ClassFromEndpointId )
        {
          v15 = *v9;
          v37 = &unk_1801B7538;
          LODWORD(v29) = 1;
          v38[0] = v15;
          v14 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
                  (char *)this + 40,
                  v38,
                  &v29,
                  &v37);
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, char *))(*v9)->lpVtbl[1].AddRef)(
                  *v9,
                  2LL,
                  (char *)this + 40);
        }
        v8 = v14;
        if ( v14 >= 0 )
        {
          v16 = v30;
          if ( v30 != *v9 )
          {
            ATL::AtlComQIPtrAssign(&v30, *v9, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
            v16 = v30;
          }
          if ( !v16 )
            goto LABEL_13;
          v17 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, char *))v16->lpVtbl[1].Release)(
                  v16,
                  0LL,
                  (char *)this + 64);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x12D,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v17);
          v18 = v31;
          if ( v31 != *v9 )
          {
            ATL::AtlComQIPtrAssign(&v31, *v9, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
            v18 = v31;
          }
          if ( !v18 )
          {
LABEL_13:
            v8 = -2147467262;
            goto LABEL_50;
          }
          v8 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v18->lpVtbl[1].QueryInterface)(v18, &v41);
          if ( v8 >= 0 )
          {
            *((_DWORD *)this + 39) = v41 != 0;
            PropVariantClear(&pvar);
            if ( ((int (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))(*v13)->lpVtbl->GetValue)(
                   *v13,
                   &PKEY_Endpoint_KeywordDetector_ConnectorId,
                   &pvar) < 0
              || (v19 = 1, (_WORD)pvar != 19) )
            {
              v19 = 0;
            }
            *((_DWORD *)this + 46) = v19;
            memset(v36, 0, sizeof(v36));
            ((void (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))(*v13)->lpVtbl->GetValue)(
              *v13,
              &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
              v36);
            *((_BYTE *)this + 8590) = LOWORD(v36[0]) == 72;
            PropVariantClear(v36);
            v8 = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this, a3 != 0);
            if ( v8 >= 0 )
            {
              v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v13)->lpVtbl->GetValue)(
                     *v13,
                     &PKEY_AudioEngine_LatencyCoefficient,
                     &pvar);
              if ( v8 >= 0 )
              {
                if ( (_WORD)pvar == 19 )
                {
                  v20 = v33;
                }
                else
                {
                  if ( (_WORD)pvar )
                  {
                    v8 = -2147418113;
                    goto LABEL_50;
                  }
                  v20 = 0;
                }
                *((_DWORD *)this + 38) = v20;
                PropVariantClear(&pvar);
                if ( ((int (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v13)->lpVtbl->GetValue)(
                       *v13,
                       &PKEY_MMDEVAPI_ActiveTime,
                       &pvar) >= 0
                  && (_WORD)pvar == 21 )
                {
                  *((_QWORD *)this + 20) = v33;
                }
                else
                {
                  *((_QWORD *)this + 20) = 0LL;
                }
                *((_DWORD *)this + 43) = 0;
                *((_DWORD *)this + 45) = 0;
                *((_DWORD *)this + 47) = 0;
                if ( a3 )
                {
                  v8 = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this, (bool *)&v40);
                  if ( v8 < 0 )
                    goto LABEL_50;
                  v7 = v40;
                }
                v21 = (char *)this + 668;
                v22 = 4LL;
                do
                {
                  *(v21 - 384) = 1;
                  *v21 = 1;
                  v21[384] = 1;
                  v21 += 96;
                  --v22;
                }
                while ( v22 );
                if ( a3 && !v41 )
                {
                  v29 = 0LL;
                  Active = CSpatialProperties::MakeActive(
                             (struct IUnknown **)this + 203,
                             *((WCHAR **)this + 3),
                             v7,
                             *v13);
                  v25 = 0;
                  if ( Active >= 0 )
                  {
                    v26 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v36, (__int64)&v29);
                    v6 = 1;
                    v40 = 1;
                    v25 = (int)CEndpointCharacteristics::GetDeviceFormat(
                                 this,
                                 0LL,
                                 0LL,
                                 0,
                                 (struct tWAVEFORMATEX **)(v26 + 8)) >= 0;
                  }
                  if ( (v6 & 1) != 0 )
                    wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v36);
                  if ( v25 )
                  {
                    LOBYTE(v24) = 1;
                    CEndpointCharacteristics::SetSpatialAudioSettings((LPCWSTR *)this, v24, eHostProcessConnector, v29);
                  }
                  v27 = SpatialPolicy::DetectComboEndpoint((struct IMMDevice *)*v9);
                  if ( v27 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x186,
                      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                      (const char *)(unsigned int)v27);
                  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v29);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_50:
  PropVariantClear(&pvar);
  if ( v30 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
  if ( v31 )
    ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v8;
}
