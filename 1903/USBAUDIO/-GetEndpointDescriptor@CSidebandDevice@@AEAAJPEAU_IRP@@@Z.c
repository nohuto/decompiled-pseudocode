/*
 * XREFs of ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C994
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB7C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C00087E0 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C0009600 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000A5A0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000AB28 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000B3A0 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     memset @ 0x1C0012700 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointDescriptor(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  bool v7; // zf
  NTSTATUS v8; // ecx
  unsigned int v9; // ebx
  unsigned int NamedPipeType; // r15d
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int16 v13; // r9
  int PinFromEpIndex; // eax
  unsigned __int16 v15; // r9
  __int64 v16; // r13
  ULONG Length; // eax
  unsigned int v18; // edi
  _DWORD *UserBuffer; // r14
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v20; // xmm0
  unsigned int VolumePropertyBasicSupport; // eax
  __int64 v22; // rdx
  unsigned __int16 v23; // r9
  __int64 v25; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+28h] [rbp-50h]
  struct _KSPIN_DESCRIPTOR_EX *v27; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v29; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+48h]
  unsigned int v32; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v5 = *((_QWORD *)this + 4);
  v27 = 0LL;
  v6 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v32 = -1;
  v33 = -1;
  v7 = CurrentStackLocation->Parameters.Create.Options == 4;
  *(_QWORD *)&v29.Volume = 0LL;
  *(_QWORD *)&v29.Sidetone = 0LL;
  if ( !v7 )
  {
    v8 = -1073741811;
    v30 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        a3,
        0x11u,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        4,
        -1073741811);
      v8 = -1073741811;
    }
    goto LABEL_4;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    v8 = -1073741811;
    v30 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 18;
      v26 = NamedPipeType;
LABEL_8:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v11,
        v12,
        v13,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        v26,
        -1073741811);
LABEL_27:
      v8 = v30;
      goto LABEL_4;
    }
    goto LABEL_4;
  }
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v6 + 24));
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v32, &v27);
  v30 = PinFromEpIndex;
  v8 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_4;
    v15 = 19;
LABEL_26:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      v15,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      PinFromEpIndex);
    goto LABEL_27;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v6 + 128), v32, &v33);
  v30 = PinFromEpIndex;
  v8 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_4;
    v15 = 20;
    goto LABEL_26;
  }
  v16 = *(_QWORD *)(v6 + 168) + v33 * *(_DWORD *)(v6 + 164);
  PinFromEpIndex = CSidebandDevice::GetEndpointCapabilities(this, v32, &v29);
  v30 = PinFromEpIndex;
  v8 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_4;
    v15 = 21;
    goto LABEL_26;
  }
  v12 = 80LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v18 = DestinationString.MaximumLength + 80;
  if ( !Length )
  {
    v9 = -1073741789;
    a2->IoStatus.Information = v18;
    v8 = -1073741789;
    v30 = -1073741789;
    goto LABEL_40;
  }
  if ( Length == v18 )
  {
    UserBuffer = a2->UserBuffer;
    memset(UserBuffer, 0, 0x50uLL);
    *UserBuffer = v18;
    PinFromEpIndex = CSidebandDevice::GetDeviceContainerId(this, (struct _GUID *)(UserBuffer + 1));
    v30 = PinFromEpIndex;
    v8 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_4;
      v15 = 23;
      goto LABEL_26;
    }
    *(_OWORD *)(UserBuffer + 5) = *(_OWORD *)*(_QWORD *)(v16 + 72);
    v20 = v29;
    UserBuffer[9] = *(_DWORD *)(v16 + 64);
    *((_QWORD *)UserBuffer + 8) = UserBuffer + 20;
    *(_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *)(UserBuffer + 10) = v20;
    *((_WORD *)UserBuffer + 28) = 0;
    *((_WORD *)UserBuffer + 29) = DestinationString.MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(UserBuffer + 14), &DestinationString);
    VolumePropertyBasicSupport = CSidebandDevice::GetVolumePropertyBasicSupport(
                                   this,
                                   NamedPipeType,
                                   UserBuffer + 18,
                                   0LL);
    v30 = VolumePropertyBasicSupport;
    v8 = VolumePropertyBasicSupport;
    if ( VolumePropertyBasicSupport == -1073741789 || VolumePropertyBasicSupport == -1073741275 )
    {
      VolumePropertyBasicSupport = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                                     this,
                                     NamedPipeType,
                                     UserBuffer + 19,
                                     0LL);
      v30 = VolumePropertyBasicSupport;
      v8 = VolumePropertyBasicSupport;
      if ( VolumePropertyBasicSupport == -1073741789 || VolumePropertyBasicSupport == -1073741275 )
      {
        v30 = 0;
        a2->IoStatus.Information = v18;
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 25;
        goto LABEL_32;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 24;
LABEL_32:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        9u,
        v23,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        VolumePropertyBasicSupport);
LABEL_38:
      v8 = v30;
    }
    v9 = v8;
    goto LABEL_40;
  }
  v8 = -1073741811;
  v30 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 22;
    v26 = DestinationString.MaximumLength + 80;
    goto LABEL_8;
  }
LABEL_4:
  v9 = v8;
LABEL_40:
  a2->IoStatus.Status = v8;
  IofCompleteRequest(a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v25) = v30;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v30,
      9u,
      0x10u,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      v25);
  }
  return v9;
}
