/*
 * XREFs of ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000A804
 * Callers:
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C708 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008BD0 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetBooleanBasicSupportSideband @ 0x1C0025450 (PropertyGetBooleanBasicSupportSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetMutePropertyBasicSupport(
        CSidebandDevice *this,
        __int64 a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // rdi
  int PinFromEpIndex; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned __int16 v13; // r9
  unsigned int *v15; // [rsp+28h] [rbp-40h]
  unsigned int v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-34h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v18; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = -1;
  v16 = -1;
  v17 = -1;
  v6 = a2;
  v7 = *((_QWORD *)this + 4);
  v18 = 0LL;
  v9 = *(_QWORD *)(v7 + 16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x6Du,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, v6, &v19, &v18);
  v12 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), v19, &v16);
    v12 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                         this,
                         v16,
                         v19,
                         (struct _KSFILTER_DESCRIPTOR *)(v9 + 128),
                         &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1,
                         &v17);
      v12 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = PropertyGetBooleanBasicSupportSideband(
                           *(_QWORD *)(v9 + 200) + v17 * *(_DWORD *)(v9 + 196),
                           a3,
                           a4);
        v12 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
          goto LABEL_12;
        v13 = 113;
      }
      else
      {
        v13 = 112;
      }
    }
    else
    {
      v13 = 111;
    }
  }
  else
  {
    v13 = 110;
  }
  LODWORD(v15) = PinFromEpIndex;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v11,
    9u,
    v13,
    (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
    v15);
LABEL_12:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = v12;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      0x72u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v15);
  }
  return v12;
}
