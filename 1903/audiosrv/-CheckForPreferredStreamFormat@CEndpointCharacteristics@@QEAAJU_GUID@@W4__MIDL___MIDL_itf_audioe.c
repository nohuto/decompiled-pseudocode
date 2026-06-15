/*
 * XREFs of ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006D54
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180005ED0 (-DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180006EA0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000C208 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180118550 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::CheckForPreferredStreamFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType **v9; // r14
  int v10; // eax
  struct IAudioMediaType **v11; // rcx
  int StreamEffect; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v16; // rdx
  struct IAudioMediaType *v17; // rax
  struct IAudioSystemEffects2 **v18; // [rsp+20h] [rbp-50h]
  _QWORD v19[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v21 = -2LL;
  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v10 = CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3);
  v11 = a5;
  a5 = 0LL;
  if ( v10 )
  {
    v20 = *a2;
    if ( v11 )
      ((void (__fastcall *)(struct IAudioMediaType **))(*v11)[2].lpVtbl)(v11);
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                     this,
                     &v20,
                     0,
                     a3,
                     0LL,
                     (struct IAudioProcessingObject **)&a5,
                     0LL);
    v13 = StreamEffect;
    if ( StreamEffect >= 0 )
      goto LABEL_5;
    v16 = 7764LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)StreamEffect);
    goto LABEL_9;
  }
  if ( v11 )
    ((void (__fastcall *)(struct IAudioMediaType **))(*v11)[2].lpVtbl)(v11);
  StreamEffect = CEndpointCharacteristics::GetLfx(this, a3, 0LL, (struct IAudioProcessingObject **)&a5, v18);
  v13 = StreamEffect;
  if ( StreamEffect < 0 )
  {
    v16 = 7768LL;
    goto LABEL_16;
  }
LABEL_5:
  if ( !a5 )
  {
LABEL_10:
    v13 = 0;
    goto LABEL_9;
  }
  *(_QWORD *)&v20.Data1 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioMediaType **, GUID *, struct _GUID *))(*a5)->lpVtbl)(
         a5,
         &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7,
         &v20) < 0 )
  {
LABEL_18:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    goto LABEL_10;
  }
  v19[0] = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, _QWORD *))(**(_QWORD **)&v20.Data1 + 24LL))(
          *(_QWORD *)&v20.Data1,
          a4,
          v19);
  v13 = v14;
  if ( v14 >= 0 )
  {
    v17 = (struct IAudioMediaType *)v19[0];
    v19[0] = 0LL;
    *v9 = v17;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v19);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E61,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v19);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&a5);
  return v13;
}
