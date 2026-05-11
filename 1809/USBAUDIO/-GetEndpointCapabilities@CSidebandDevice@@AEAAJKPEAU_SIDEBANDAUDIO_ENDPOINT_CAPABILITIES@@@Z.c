/*
 * XREFs of ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C0009244
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BEC8 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007CF0 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008BD0 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C0008D84 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1C0009034 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointCapabilities(
        CSidebandDevice *this,
        __int64 a2,
        struct _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *a3)
{
  unsigned int v4; // ebx
  struct _KSFILTER_DESCRIPTOR *v6; // r14
  int BridgePinForDataPin; // eax
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  int NodeOfType; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r12d
  __int64 v18; // rdx
  int SidetoneNodes; // edi
  __int64 v20; // r8
  __int64 v21; // rdx
  int IsFeedbackSupported; // ebx
  int v23; // ecx
  unsigned __int16 v24; // r9
  unsigned int *v25; // [rsp+28h] [rbp-28h]
  unsigned int *v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+38h] [rbp-18h]
  unsigned int v29; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v31; // [rsp+48h] [rbp-8h] BYREF
  int v32; // [rsp+4Ch] [rbp-4h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a2;
  v6 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL);
  v33 = -1;
  v34 = -1;
  v32 = 0;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x2Eu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  BridgePinForDataPin = CSidebandDevice::GetBridgePinForDataPin(this, v6, v4, &v33);
  v9 = BridgePinForDataPin;
  if ( BridgePinForDataPin >= 0 )
  {
    v11 = v33;
    NodeOfType = CSidebandDevice::GetNodeOfType(this, v33, v4, v6, &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1, &v34);
    if ( NodeOfType >= 0 )
    {
      a3->Volume = 1;
      LODWORD(v25) = v11;
      WPP_RECORDER_SF_ddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        v13,
        0x30u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v25,
        v4,
        v34);
    }
    if ( NodeOfType == -1073741275 )
    {
      LODWORD(v27) = v4;
      LODWORD(v25) = v11;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        v13,
        0x31u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v25,
        v27);
    }
    v17 = CSidebandDevice::GetNodeOfType(this, v11, v4, v6, &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1, &v29);
    if ( v17 >= 0 )
    {
      a3->Mute = 1;
      LODWORD(v28) = v29;
      LODWORD(v27) = v4;
      LODWORD(v26) = v11;
      WPP_RECORDER_SF_ddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        0x32u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v26,
        v27,
        v28);
    }
    if ( v17 == -1073741275 )
    {
      LODWORD(v27) = v4;
      LODWORD(v26) = v11;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        0x33u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v26,
        v27);
    }
    SidetoneNodes = CSidebandDevice::GetSidetoneNodes(this, v11, v6, &v31, &v30);
    if ( SidetoneNodes >= 0 )
    {
      a3->Sidetone = 1;
      LODWORD(v27) = v30;
      LODWORD(v26) = v31;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        v20,
        0x34u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v26,
        v27);
    }
    if ( SidetoneNodes == -1073741275 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        9u,
        0x35u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    IsFeedbackSupported = CSidebandDevice::IsFeedbackSupported(this, *((struct _KSDEVICE **)this + 4), v4, &v32);
    if ( IsFeedbackSupported >= 0 )
    {
      v23 = v32;
      v24 = 54;
      a3->Feedback = v32;
      if ( !v23 )
        v24 = 55;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v21,
        9u,
        v24,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v26) = IsFeedbackSupported;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v21,
        9u,
        0x38u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v26);
    }
    return (unsigned int)IsFeedbackSupported;
  }
  else
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      0x2Fu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      BridgePinForDataPin);
    return v9;
  }
}
