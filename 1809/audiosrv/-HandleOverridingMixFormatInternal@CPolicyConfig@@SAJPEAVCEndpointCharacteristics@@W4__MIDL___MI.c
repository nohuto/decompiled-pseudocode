/*
 * XREFs of ?HandleOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x1800D2DA8
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CheckForPreferredStreamFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800CF098 (-CheckForPreferredStreamFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_aud.c)
 *     ?SetOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D5890 (-SetOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::HandleOverridingMixFormatInternal(
        struct CEndpointCharacteristics *a1,
        __int32 a2,
        struct _GUID *a3,
        struct IAudioMediaType *a4)
{
  struct IAudioMediaType *v7; // rbx
  const struct tWAVEFORMATEX *v8; // rax
  struct _GUID v10; // [rsp+40h] [rbp-18h] BYREF
  struct IAudioMediaType *v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = *a3;
  CheckForPreferredStreamFormat(a1, &v10, a2, a4, &v11);
  v7 = v11;
  if ( v11 )
    v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->GetAudioFormat)(v11);
  else
    v8 = 0LL;
  v10 = *a3;
  CPolicyConfig::SetOverridingMixFormatInternal(
    a1,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
    &v10,
    v8);
  if ( v7 )
    ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->Release)(v7);
  return 0LL;
}
