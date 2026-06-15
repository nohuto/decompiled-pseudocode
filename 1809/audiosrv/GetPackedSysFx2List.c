/*
 * XREFs of GetPackedSysFx2List @ 0x18010FAFC
 * Callers:
 *     VerifyCriticalProcessing @ 0x180110564 (VerifyCriticalProcessing.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AB60 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     PackSysFx2List @ 0x1801100AC (PackSysFx2List.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetPackedSysFx2List(CEndpointCharacteristics *a1, struct _GUID *a2, _DWORD *a3)
{
  int ModeEffect; // ebx
  int v5; // eax
  struct _GUID v7; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v9; // [rsp+78h] [rbp+10h] BYREF
  struct IAudioSystemEffects2 *v10; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  v7 = *a2;
  v10 = 0LL;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v7, 1u, 0, 0LL, 0LL, &v10);
  if ( ModeEffect >= 0 )
  {
    v5 = PackSysFx2List(v10, &v9);
    ModeEffect = v5;
    if ( v5 >= 0 )
    {
      *a3 |= v9;
      ModeEffect = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        169LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return (unsigned int)ModeEffect;
}
