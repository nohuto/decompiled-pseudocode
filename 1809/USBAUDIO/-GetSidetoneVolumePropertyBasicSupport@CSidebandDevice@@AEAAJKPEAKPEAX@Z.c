/*
 * XREFs of ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000ABB0
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BEC8 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CBF8 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C0008D84 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetDbBasicSupportSideband @ 0x1C0025B68 (PropertyGetDbBasicSupportSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
        CSidebandDevice *this,
        __int64 a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  int PinFromEpIndex; // ebx
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  int DbBasicSupportSideband; // eax
  __int64 v15; // [rsp+28h] [rbp-28h]
  unsigned int v16; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v18; // [rsp+38h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+30h] BYREF

  v16 = -1;
  v17 = -1;
  v6 = a2;
  v20 = -1;
  v18 = -1;
  v8 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  v19 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x7Au,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, v6, &v16, &v19);
  if ( PinFromEpIndex < 0 )
  {
    v11 = 123;
LABEL_5:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      v11,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      PinFromEpIndex);
    goto LABEL_14;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v8 + 128), v16, &v17);
  if ( PinFromEpIndex < 0 )
  {
    v11 = 124;
    goto LABEL_5;
  }
  PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v17, (struct _KSFILTER_DESCRIPTOR *)(v8 + 128), &v20, &v18);
  if ( PinFromEpIndex < 0 )
  {
    v11 = 125;
    goto LABEL_5;
  }
  if ( v20 == -1 )
  {
    PinFromEpIndex = -1073741275;
    v11 = 126;
    goto LABEL_5;
  }
  DbBasicSupportSideband = PropertyGetDbBasicSupportSideband(
                             *(_QWORD *)(v8 + 200) + v20 * *(_DWORD *)(v8 + 196),
                             a3,
                             a4);
  PinFromEpIndex = DbBasicSupportSideband;
  if ( DbBasicSupportSideband < 0 )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0x7Fu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      DbBasicSupportSideband);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0x80u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v15);
  }
  return (unsigned int)PinFromEpIndex;
}
