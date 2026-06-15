/*
 * XREFs of ?CheckForPreferredStreamFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800CF098
 * Callers:
 *     ?HandleOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x1800D2DA8 (-HandleOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AAA8 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010B7B0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CheckForPreferredStreamFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        __int32 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType **v9; // rsi
  int StreamEffect; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  struct IAudioMediaType **v13; // rcx
  int v14; // eax
  struct IAudioSystemEffects2 **v16; // [rsp+20h] [rbp-50h]
  __int64 v17[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v19 = -2LL;
  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(a1, a3) )
  {
    v18 = *a2;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                     a1,
                     &v18,
                     0,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     (struct IAudioProcessingObject **)&a5,
                     0LL);
    v11 = StreamEffect;
    if ( StreamEffect < 0 )
    {
      v12 = 3344LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)StreamEffect);
LABEL_13:
      v13 = a5;
      goto LABEL_17;
    }
  }
  else
  {
    StreamEffect = CEndpointCharacteristics::GetLfx(
                     a1,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     (struct IAudioProcessingObject **)&a5,
                     v16);
    v11 = StreamEffect;
    if ( StreamEffect < 0 )
    {
      v12 = 3348LL;
      goto LABEL_6;
    }
  }
  v13 = a5;
  if ( a5 )
  {
    v17[0] = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioMediaType **, GUID *, __int64 *))(*a5)->lpVtbl)(
           a5,
           &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7,
           v17) >= 0 )
    {
      *(_QWORD *)&v18.Data1 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct _GUID *))(*(_QWORD *)v17[0] + 24LL))(
              v17[0],
              a4,
              &v18);
      v11 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          3358LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v14);
        if ( *(_QWORD *)&v18.Data1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v18.Data1 + 16LL))(*(_QWORD *)&v18.Data1);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
        goto LABEL_13;
      }
      *v9 = *(struct IAudioMediaType **)&v18.Data1;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
    v13 = a5;
  }
  v11 = 0;
LABEL_17:
  if ( v13 )
    ((void (__fastcall *)(struct IAudioMediaType **, struct IAudioMediaType *))(*v13)[2].lpVtbl)(v13, *v13);
  return v11;
}
