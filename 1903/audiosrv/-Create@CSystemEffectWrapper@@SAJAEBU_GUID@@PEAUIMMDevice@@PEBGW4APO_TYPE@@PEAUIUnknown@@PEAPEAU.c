/*
 * XREFs of ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180139B64
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180027920 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x1801385C0 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     ??0CSystemEffectWrapper@@QEAA@XZ @ 0x1801393D4 (--0CSystemEffectWrapper@@QEAA@XZ.c)
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180139FA8 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x18013BC28 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x18013BF3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

__int64 __fastcall CSystemEffectWrapper::Create(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v8; // rax
  unsigned __int64 v9; // rcx
  CSystemEffectWrapper *v10; // rax
  CSystemEffectWrapper *v11; // rcx

  v8 = AERTGetDLLRTHeap();
  v10 = (CSystemEffectWrapper *)AERTAllocate(v9, v8);
  if ( v10 )
    v11 = CSystemEffectWrapper::CSystemEffectWrapper(v10);
  else
    v11 = 0LL;
  if ( v11 )
    return CSystemEffectWrapper::Init(v11, a1, a2, a3, a4);
  else
    return 2147942414LL;
}
