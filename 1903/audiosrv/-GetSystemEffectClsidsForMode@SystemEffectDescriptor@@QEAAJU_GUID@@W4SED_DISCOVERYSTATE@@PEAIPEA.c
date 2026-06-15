/*
 * XREFs of ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18000757C
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007390 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180061E4C (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000AB3C (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180044810 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSystemEffectClsidsForMode(
        __int64 a1,
        __int128 *a2,
        int a3,
        _DWORD *a4,
        SIZE_T cb,
        unsigned int a6)
{
  __int64 ChainDescriptorForMode; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v15 = *a2;
  ChainDescriptorForMode = SystemEffectDescriptor::GetChainDescriptorForMode(a1, &v15, a6);
  if ( !ChainDescriptorForMode && a3 == 1 )
    ChainDescriptorForMode = *(_QWORD *)(a1 + 16);
  *a4 = 0;
  v10 = (_QWORD *)cb;
  if ( cb )
    *(_QWORD *)cb = 0LL;
  if ( !ChainDescriptorForMode )
    return 0LL;
  v11 = 56LL;
  if ( a3 != 1 )
    v11 = 40LL;
  if ( !v10 || (v12 = *(int *)(v11 + ChainDescriptorForMode + 8), (int)v12 <= 0) )
  {
LABEL_14:
    *a4 = *(_DWORD *)(v11 + ChainDescriptorForMode + 8);
    return 0LL;
  }
  v13 = 0LL;
  cb = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&cb, v12, 16LL) >= 0 )
  {
    if ( cb <= 0x7FFFFFFF )
      v13 = CoTaskMemAlloc((unsigned int)cb);
    if ( v13 )
    {
      memcpy_0(v13, *(const void **)(v11 + ChainDescriptorForMode), 16LL * *(int *)(v11 + ChainDescriptorForMode + 8));
      *v10 = v13;
      CoTaskMemFree(0LL);
      goto LABEL_14;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  CoTaskMemFree(v13);
  return 2147942414LL;
}
