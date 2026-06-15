/*
 * XREFs of ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007390
 * Callers:
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180005A6C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180006EA0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007210 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011847C (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180118550 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18000757C (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18000AD20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18003AC10 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetInitializedSystemEffectInterface(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int128 *a5,
        unsigned int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // r15
  __int128 *v17; // r12
  int SystemEffectClsidsForMode; // eax
  unsigned int v19; // edi
  void *v20; // rbx
  int v21; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // [rsp+40h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v30; // [rsp+B8h] [rbp+48h] BYREF
  int v31; // [rsp+C0h] [rbp+50h]
  int v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v28 = -2LL;
  v13 = 0LL;
  v25 = 0LL;
  v14 = a9;
  if ( a9 )
    *a9 = 0LL;
  v15 = a10;
  if ( a10 )
    *a10 = 0LL;
  v16 = a11;
  if ( a11 )
    *a11 = 0LL;
  if ( !a2 )
    goto LABEL_16;
  if ( !a7 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)a1) )
  {
    LODWORD(a9) = 0;
    pv = 0LL;
    v17 = a5;
    v27 = *a5;
    SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(a2, &v27, a6 != 0, &a9, &pv, 0);
    v19 = SystemEffectClsidsForMode;
    if ( SystemEffectClsidsForMode < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x467,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SystemEffectClsidsForMode);
      v20 = pv;
    }
    else
    {
      v20 = pv;
      if ( !(_DWORD)a9 )
      {
LABEL_14:
        CoTaskMemFree(v20);
        goto LABEL_15;
      }
      LODWORD(a11) = v32 == 1;
      *(_QWORD *)&v27 = pv;
      LODWORD(a10) = *(_DWORD *)(a1 + 156);
      v30 = v31;
      v21 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
              &v25,
              &v30,
              &a11,
              &a10,
              &a9,
              &v27);
      v19 = v21;
      if ( v21 < 0 )
      {
        v23 = 1137LL;
      }
      else
      {
        if ( !v15 && !v16 )
          goto LABEL_14;
        v27 = *v17;
        v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *, _QWORD, int, _QWORD *, _QWORD *))(*v25 + 24LL))(
                v25,
                *(_QWORD *)(a1 + 16),
                &v27,
                a6,
                a8,
                v15,
                v16);
        v19 = v21;
        if ( v21 >= 0 )
          goto LABEL_14;
        v23 = 1141LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v21);
    }
    CoTaskMemFree(v20);
    v13 = v25;
    goto LABEL_19;
  }
LABEL_15:
  v13 = v25;
LABEL_16:
  if ( v14 )
  {
    v24 = v13;
    v13 = 0LL;
    v25 = 0LL;
    *v14 = v24;
  }
  v19 = 0;
LABEL_19:
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  return v19;
}
