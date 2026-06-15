/*
 * XREFs of GetPackedSysFx2List @ 0x1800070D0
 * Callers:
 *     VerifyCriticalProcessing @ 0x180006084 (VerifyCriticalProcessing.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     PackSysFx2List @ 0x180007168 (PackSysFx2List.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007210 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
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
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v7, 1, eHostProcessConnector, 0LL, 0LL, &v10);
  if ( ModeEffect >= 0 )
  {
    v5 = PackSysFx2List(v10, &v9);
    ModeEffect = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      *a3 |= v9;
      ModeEffect = 0;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  return (unsigned int)ModeEffect;
}
