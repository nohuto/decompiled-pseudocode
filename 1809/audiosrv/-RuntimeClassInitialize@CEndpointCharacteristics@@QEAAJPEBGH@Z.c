/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18004B7E0
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x18004B734 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012DF0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001EF78 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x18004BBA8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004ECF4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x180052FB0 (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180056328 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180057050 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x18010EDD4 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        int a3)
{
  char v6; // r12
  HRESULT v7; // ebx
  struct IUnknown **v8; // r14
  struct IUnknown *v9; // rbx
  int v10; // eax
  int ClassFromEndpointId; // eax
  struct IPropertyStore **v12; // rsi
  struct IUnknown *v13; // rcx
  int v14; // eax
  struct IUnknown *v15; // rcx
  int v16; // eax
  struct IUnknown *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  struct IUnknown *v25; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v26; // [rsp+38h] [rbp-48h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h]
  __int64 v29; // [rsp+50h] [rbp-30h]
  int v30; // [rsp+58h] [rbp-28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-20h] BYREF
  void *v32; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct tWAVEFORMATEX *v35; // [rsp+C0h] [rbp+40h] BYREF
  int v36; // [rsp+D8h] [rbp+58h] BYREF

  v33[1] = -2LL;
  ppv = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v6 = 0;
  LOBYTE(v35) = 0;
  *((_QWORD *)this + 26) = 0LL;
  pvar = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v7 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v7 >= 0 )
  {
    v8 = (struct IUnknown **)((char *)this + 16);
    v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)ppv + 40LL))(
           ppv,
           a2,
           (char *)this + 16);
    if ( v7 >= 0 )
    {
      v9 = *v8;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (char *)this + 24,
        0LL);
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v9->lpVtbl[1].Release)(v9, (char *)this + 24);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10C,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_40;
      }
      ClassFromEndpointId = GetClassFromEndpointId(a2);
      *((_DWORD *)this + 8) = ClassFromEndpointId;
      v12 = (struct IPropertyStore **)((char *)this + 40);
      v13 = *v8;
      if ( ClassFromEndpointId )
      {
        v32 = &unk_1801B24D8;
        v30 = 1;
        v33[0] = v13;
        v14 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
                (char *)this + 40,
                v33,
                &v30,
                &v32);
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, char *))v13->lpVtbl[1].AddRef)(
                v13,
                2LL,
                (char *)this + 40);
      }
      v7 = v14;
      if ( v14 >= 0 )
      {
        v15 = v25;
        if ( v25 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v25, *v8, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c);
          v15 = v25;
        }
        if ( !v15 )
          goto LABEL_49;
        v16 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, char *))v15->lpVtbl[1].Release)(
                v15,
                0LL,
                (char *)this + 64);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11D,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v16);
        v17 = v26;
        if ( v26 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v26, *v8, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
          v17 = v26;
        }
        if ( !v17 )
        {
LABEL_49:
          v7 = -2147467262;
          goto LABEL_40;
        }
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v17->lpVtbl[1].QueryInterface)(v17, &v36);
        v18 = 0;
        if ( v7 >= 0 )
        {
          LOBYTE(v18) = v36 != 0;
          *((_DWORD *)this + 39) = v18;
          PropVariantClear(&pvar);
          if ( ((int (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))(*v12)->lpVtbl->GetValue)(
                 *v12,
                 &PKEY_Endpoint_KeywordDetector_ConnectorId,
                 &pvar) < 0
            || (v19 = 1, (_WORD)pvar != 19) )
          {
            v19 = 0;
          }
          *((_DWORD *)this + 46) = v19;
          v7 = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this, a3 != 0);
          if ( v7 >= 0 )
          {
            v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v12)->lpVtbl->GetValue)(
                   *v12,
                   &PKEY_AudioEngine_LatencyCoefficient,
                   &pvar);
            if ( v7 >= 0 )
            {
              if ( (_WORD)pvar == 19 )
              {
                v20 = v28;
              }
              else
              {
                if ( (_WORD)pvar )
                {
                  v7 = -2147418113;
                  goto LABEL_40;
                }
                v20 = 0;
              }
              *((_DWORD *)this + 38) = v20;
              PropVariantClear(&pvar);
              if ( ((int (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v12)->lpVtbl->GetValue)(
                     *v12,
                     &PKEY_MMDEVAPI_ActiveTime,
                     &pvar) >= 0
                && (_WORD)pvar == 21 )
              {
                *((_QWORD *)this + 20) = v28;
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
                v7 = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this, (bool *)&v35);
                if ( v7 < 0 )
                  goto LABEL_40;
                v6 = (char)v35;
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
              if ( a3 && !v36 )
              {
                v35 = 0LL;
                if ( CSpatialProperties::MakeActive(
                       (CEndpointCharacteristics *)((char *)this + 1624),
                       *((const unsigned __int16 **)this + 3),
                       v6,
                       *v12) >= 0
                  && (int)CEndpointCharacteristics::GetDeviceFormat(this, 0LL, 0LL, 0, &v35) >= 0
                  && v35 )
                {
                  CEndpointCharacteristics::SetSpatialAudioSettings(this, 1, eHostProcessConnector, v35);
                }
                v23 = SpatialPolicy::DetectComboEndpoint((struct IMMDevice *)*v8);
                if ( v23 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x16F,
                    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                    (const char *)(unsigned int)v23);
              }
            }
          }
        }
      }
    }
  }
LABEL_40:
  PropVariantClear(&pvar);
  if ( v25 )
    ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
  if ( v26 )
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v7;
}
