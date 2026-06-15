/*
 * XREFs of ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010A860
 * Callers:
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010A684 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010A7A8 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AAA8 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AB60 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010B7B0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 * Callees:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000CAB0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18003DAF8 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180111288 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
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
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v25; // [rsp+40h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-28h]
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
  if ( a2 )
  {
    if ( !a7 || CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)a1) )
    {
      LODWORD(a9) = 0;
      pv = 0LL;
      v17 = a5;
      v27 = *a5;
      SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(a2, &v27, a6 != 0, &a9);
      v19 = SystemEffectClsidsForMode;
      if ( SystemEffectClsidsForMode < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          1113LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)SystemEffectClsidsForMode);
        v20 = pv;
LABEL_20:
        CoTaskMemFree(v20);
        v13 = v25;
        goto LABEL_26;
      }
      v20 = pv;
      if ( (_DWORD)a9 )
      {
        LODWORD(a11) = v32 == 1;
        *(_QWORD *)&v27 = pv;
        LODWORD(a10) = *(_DWORD *)(a1 + 156);
        v30 = v31;
        v21 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                &v25,
                &v30,
                (int *)&a11,
                (int *)&a10,
                (unsigned int *)&a9,
                (_OWORD **)&v27);
        v19 = v21;
        if ( v21 < 0 )
        {
          v22 = 1123LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            v22,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v21);
          goto LABEL_20;
        }
        if ( v15 || v16 )
        {
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
          if ( v21 < 0 )
          {
            v22 = 1127LL;
            goto LABEL_19;
          }
        }
      }
      CoTaskMemFree(v20);
    }
    v13 = v25;
  }
  if ( v14 )
  {
    v23 = v13;
    v13 = 0LL;
    v25 = 0LL;
    *v14 = v23;
  }
  v19 = 0;
LABEL_26:
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  return v19;
}
