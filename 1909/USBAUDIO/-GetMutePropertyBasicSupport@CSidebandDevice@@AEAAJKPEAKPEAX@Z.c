/*
 * XREFs of ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000AF38
 * Callers:
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D45C (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008EE4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000A5A0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetBooleanBasicSupportSideband @ 0x1C00265A8 (PropertyGetBooleanBasicSupportSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetMutePropertyBasicSupport(
        CSidebandDevice *this,
        __int64 a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rdi
  int PinFromEpIndex; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  int NodeOfType; // eax
  unsigned __int16 v15; // r9
  unsigned int *v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v19; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = -1;
  v18 = -1LL;
  v6 = a2;
  v8 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  v19 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x6Du,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, v6, &v20, &v19);
  v11 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                       this,
                       (struct _KSFILTER_DESCRIPTOR *)(v8 + 128),
                       v20,
                       (unsigned int *)&v18);
    v11 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      NodeOfType = CSidebandDevice::GetNodeOfType(
                     this,
                     (unsigned int)v18,
                     v20,
                     (struct _KSFILTER_DESCRIPTOR *)(v8 + 128),
                     &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1,
                     (unsigned int *)&v18 + 1);
      v11 = NodeOfType;
      if ( NodeOfType >= 0 )
      {
        NodeOfType = PropertyGetBooleanBasicSupportSideband(
                       *(_QWORD *)(v8 + 200) + (unsigned int)(HIDWORD(v18) * *(_DWORD *)(v8 + 196)),
                       a3,
                       a4);
        v11 = NodeOfType;
        if ( NodeOfType >= 0 )
          goto LABEL_18;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v11;
        v15 = 113;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v11;
        v15 = 112;
      }
      LODWORD(v17) = NodeOfType;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        9u,
        v15,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
        v17);
      goto LABEL_18;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v11;
    v12 = 111;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v11;
    v12 = 110;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v10,
    9u,
    v12,
    (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
    PinFromEpIndex,
    v18,
    v19);
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      0x72u,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
      v17);
  }
  return v11;
}
