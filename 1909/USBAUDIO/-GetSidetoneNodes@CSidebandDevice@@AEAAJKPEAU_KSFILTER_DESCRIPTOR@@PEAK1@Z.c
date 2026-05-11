/*
 * XREFs of ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C00090CC
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C0009600 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B12C (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000B3A0 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DCC4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007EB0 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C0008D4C (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 *     ?RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0009550 (-RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNEC.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneNodes(
        CSidebandDevice *this,
        unsigned int a2,
        struct _KSFILTER_DESCRIPTOR *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v6; // r12d
  int v7; // esi
  unsigned int v8; // edi
  int v11; // ebx
  __int64 ConnectionsCount; // rdx
  int Flink; // ecx
  const KSTOPOLOGY_CONNECTION *Connections; // r9
  __int64 v15; // r8
  ULONG *p_ToNodePin; // rax
  unsigned int v17; // ecx
  const struct KSTOPOLOGY_CONNECTION *v18; // r8
  int v19; // eax
  __int64 v20; // r8
  struct _LIST_ENTRY *v21; // rbx
  _QWORD *v22; // rdx
  struct _LIST_ENTRY *v23; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+38h] [rbp-18h]
  struct _LIST_ENTRY P; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int *v31; // [rsp+A8h] [rbp+58h]

  v31 = a4;
  v6 = -1;
  v30 = -1;
  v7 = -1;
  v8 = -1;
  v11 = -1073741275;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
      9u,
      0x27u,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
  ConnectionsCount = a3->ConnectionsCount;
  Flink = 0;
  if ( (_DWORD)ConnectionsCount )
  {
    Connections = a3->Connections;
    v15 = (unsigned int)ConnectionsCount;
    P.Flink = (struct _LIST_ENTRY *)1;
    p_ToNodePin = &Connections->ToNodePin;
    do
    {
      if ( *(p_ToNodePin - 1) == -1 && *p_ToNodePin == a2 )
        Flink = (int)P.Flink;
      p_ToNodePin += 4;
      --v15;
    }
    while ( v15 );
    if ( Flink )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = &Connections[v17];
        if ( v18->ToNode == -1 && v18->ToNodePin == a2 )
          break;
        v17 += LODWORD(P.Flink);
        if ( v17 >= (unsigned int)ConnectionsCount )
          goto LABEL_17;
      }
      v19 = CSidebandDevice::RecurseToCaptureBridgePin(this, a3, v18, &v30);
      v6 = v30;
      v11 = v19;
LABEL_17:
      if ( v11 >= 0 )
      {
        P.Blink = &P;
        P.Flink = &P;
        if ( (int)CSidebandDevice::GetNodesInPath(this, v6, a2, &P) < 0 )
          goto LABEL_40;
        v21 = P.Flink;
        if ( P.Flink == &P )
          goto LABEL_40;
        do
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v28) = v21[1].Flink;
            LODWORD(v27) = v6;
            LODWORD(v26) = a2;
            WPP_RECORDER_SF_ddd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              ConnectionsCount,
              v20,
              0x29u,
              (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
              v26,
              v27,
              v28);
          }
          v22 = *(const GUID **)((char *)&a3->NodeDescriptors->Type + LODWORD(v21[1].Flink) * a3->NodeDescriptorSize);
          if ( *v22 == *(_QWORD *)&GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data1
            && v22[1] == *(_QWORD *)GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data4
            && v7 == -1 )
          {
            v7 = (int)v21[1].Flink;
          }
          if ( *v22 == *(_QWORD *)&GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data1
            && v22[1] == *(_QWORD *)GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data4
            && v8 == -1 )
          {
            v8 = (unsigned int)v21[1].Flink;
          }
          v23 = v21->Flink;
          if ( v21->Flink->Blink != v21 || (Blink = v21->Blink, Blink->Flink != v21) )
            __fastfail(3u);
          Blink->Flink = v23;
          v23->Blink = Blink;
          ExFreePoolWithTag(v21, 0x66627845u);
          v21 = P.Flink;
        }
        while ( P.Flink != &P );
        if ( v7 == -1 && v8 == -1 )
        {
LABEL_40:
          v11 = -1073741275;
        }
        else
        {
          v11 = 0;
          *v31 = v7;
          *a5 = v8;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v11;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          ConnectionsCount,
          9u,
          0x28u,
          (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
          v11);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v26) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      ConnectionsCount,
      9u,
      0x2Au,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
      v26);
  }
  return (unsigned int)v11;
}
