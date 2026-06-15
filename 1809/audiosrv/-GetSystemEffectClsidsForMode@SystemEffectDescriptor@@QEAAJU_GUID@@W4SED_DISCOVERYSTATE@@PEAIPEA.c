/*
 * XREFs of ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180111288
 * Callers:
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004CC48 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010A860 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 * Callees:
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18005E61C (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180110DAC (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSystemEffectClsidsForMode(
        __int64 a1,
        __int128 *a2,
        int a3,
        _DWORD *a4,
        LPVOID pv,
        int a6)
{
  __int64 ChainDescriptorForMode; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  LPVOID v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v15 = *a2;
  ChainDescriptorForMode = SystemEffectDescriptor::GetChainDescriptorForMode(a1, &v15, a6);
  if ( !ChainDescriptorForMode && a3 == 1 )
    ChainDescriptorForMode = *(_QWORD *)(a1 + 16);
  *a4 = 0;
  v10 = pv;
  if ( pv )
    *(_QWORD *)pv = 0LL;
  if ( ChainDescriptorForMode )
  {
    v11 = 56LL;
    if ( a3 != 1 )
      v11 = 40LL;
    if ( v10 )
    {
      v12 = *(int *)(v11 + ChainDescriptorForMode + 8);
      if ( (int)v12 > 0 )
      {
        pv = 0LL;
        if ( !ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&pv, v12) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            626LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          CoTaskMemFree(pv);
          return 2147942414LL;
        }
        v14 = pv;
        memcpy_0(pv, *(const void **)(v11 + ChainDescriptorForMode), 16LL * *(int *)(v11 + ChainDescriptorForMode + 8));
        *v10 = v14;
        CoTaskMemFree(0LL);
      }
    }
    *a4 = *(_DWORD *)(v11 + ChainDescriptorForMode + 8);
  }
  return 0LL;
}
