/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18011E220
 * Callers:
 *     _lambda_7015787212d530e04e17b0823ea9804b_::operator() @ 0x180067078 (_lambda_7015787212d530e04e17b0823ea9804b_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18003AC10 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005F170 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x18011E5B8 (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18011E6A8 (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18011E76C (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  _OWORD *v9; // rdi
  _OWORD *v10; // rbx
  int DefaultEffectChainClsids; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v21; // [rsp+40h] [rbp-89h] BYREF
  int v22; // [rsp+48h] [rbp-81h] BYREF
  BOOL v23; // [rsp+50h] [rbp-79h] BYREF
  int v24; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-69h] BYREF
  __int64 v26; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v27; // [rsp+70h] [rbp-59h] BYREF
  LPVOID v28; // [rsp+78h] [rbp-51h] BYREF
  _OWORD *v29; // [rsp+80h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-41h] BYREF
  struct _GUID *v31; // [rsp+90h] [rbp-39h]
  _QWORD v32[3]; // [rsp+98h] [rbp-31h] BYREF
  struct _GUID v33; // [rsp+B0h] [rbp-19h] BYREF
  struct IPropertyStore *v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v35 = -2LL;
  v31 = a4;
  v34 = a2;
  *(_QWORD *)&v33.Data1 = this;
  v28 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v10 = 0LL;
  v29 = 0LL;
  if ( !EffectPolicy::IsMicArray(a2, a6) || EffectPolicy::IsValidMicArrayForAEC(this, a3[12], a2, a6) )
  {
    DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                 (SystemEffectDescriptor *)a3,
                                 (struct CAudioSignalProcessingModeArray *)v32,
                                 &v21,
                                 (struct _GUID **)&pv);
    v12 = DefaultEffectChainClsids;
    v9 = pv;
    if ( DefaultEffectChainClsids >= 0 )
    {
      v23 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)this + 2 * *((int *)a3 + 12) + 9,
              v31) != -1;
      v29 = v9;
      v22 = 1;
      v24 = 2;
      DefaultEffectChainClsids = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                   &v27,
                                   &v24,
                                   &v23,
                                   &v22,
                                   &v21,
                                   &v29);
      v12 = DefaultEffectChainClsids;
      if ( DefaultEffectChainClsids >= 0 )
      {
        v10 = *(_OWORD **)(*(_QWORD *)&v33.Data1 + 16LL);
        v29 = v10;
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        v33 = *v31;
        if ( (*(int (__fastcall **)(_QWORD *, _OWORD *, struct _GUID *, __int64, _DWORD, _QWORD, __int64 *))(*v27 + 24LL))(
               v27,
               v10,
               &v33,
               1LL,
               *((_DWORD *)a3 + 12),
               0LL,
               &v26) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v26 + 24LL))(
               v26,
               &v28,
               &v25,
               0LL) >= 0 )
        {
          *((_DWORD *)a6 + 9) = 0;
          if ( v25 )
          {
            v14 = 0;
            v15 = v28;
            v16 = v25;
            do
            {
              v17 = *v15 - *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v15 == *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v17 = v15[1] - *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v17 )
              {
                v14 |= 2u;
                *((_DWORD *)a6 + 9) = v14;
              }
              v18 = *v15 - *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v15 == *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v18 = v15[1] - *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( v18 )
              {
                v14 = *((_DWORD *)a6 + 9);
              }
              else
              {
                v14 |= 4u;
                *((_DWORD *)a6 + 9) = v14;
              }
              v19 = *v15 - *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v15 == *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v19 = v15[1] - *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v19 )
              {
                v14 |= 8u;
                *((_DWORD *)a6 + 9) = v14;
              }
              v15 += 2;
              --v16;
            }
            while ( v16 );
          }
        }
        if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*((_DWORD *)a3 + 12) == 3 || (*((_BYTE *)a6 + 36) & 2) != 0) )
        {
          EffectPolicy::IsIntegratedAudioDevice(v34, (int *)a6 + 10);
          if ( *((_DWORD *)a6 + 1) == 2 && *((_DWORD *)a6 + 10) )
          {
            *(_DWORD *)a5 = 2;
            *((_DWORD *)a6 + 16) = 0;
          }
          else if ( (*((_BYTE *)a6 + 36) & 8) != 0 )
          {
            *(_DWORD *)a5 = 0;
            *((_DWORD *)a6 + 16) = 9;
          }
          else
          {
            *(_DWORD *)a5 = 3;
            *((_DWORD *)a6 + 16) = 7;
          }
        }
        else
        {
          *(_DWORD *)a5 = 2;
          *((_DWORD *)a6 + 16) = 8;
        }
        goto LABEL_37;
      }
      v13 = 320LL;
    }
    else
    {
      v13 = 311LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids);
    goto LABEL_38;
  }
  *(_DWORD *)a5 = 2;
  *((_DWORD *)a6 + 16) = 5;
LABEL_37:
  *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
  v12 = 0;
LABEL_38:
  if ( v10 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v32);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v27 + 16LL))(v27, *v27);
  CoTaskMemFree(v9);
  CoTaskMemFree(v28);
  return v12;
}
