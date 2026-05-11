/*
 * XREFs of ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BEC8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000856C (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C0009244 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000A4A0 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000ABB0 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     memset @ 0x1C00113C0 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointDescriptor(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  bool v7; // zf
  unsigned __int16 v8; // r9
  unsigned int NamedPipeType; // r15d
  int PinFromEpIndex; // eax
  __int64 v11; // rdx
  unsigned __int16 v12; // r9
  __int64 v13; // r13
  ULONG Length; // eax
  unsigned int v15; // edi
  unsigned int v16; // ebx
  _DWORD *UserBuffer; // r14
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v18; // xmm0
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+28h] [rbp-50h]
  struct _KSPIN_DESCRIPTOR_EX *v22; // [rsp+40h] [rbp-38h] BYREF
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v23; // [rsp+48h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+48h]
  unsigned int v27; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v5 = *((_QWORD *)this + 4);
  v22 = 0LL;
  v6 = *(_QWORD *)(v5 + 16);
  v27 = -1;
  v28 = -1;
  v7 = CurrentStackLocation->Parameters.Create.Options == 4;
  *(_QWORD *)&v23.Volume = 0LL;
  *(_QWORD *)&v23.Sidetone = 0LL;
  if ( !v7 )
  {
    v25 = -1073741811;
    v8 = 17;
    v21 = 4;
LABEL_5:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      v8,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v21,
      -1073741811);
    goto LABEL_26;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    v25 = -1073741811;
    v8 = 18;
    v21 = NamedPipeType;
    goto LABEL_5;
  }
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v6 + 24));
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v27, &v22);
  v25 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v6 + 128), v27, &v28);
    v25 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      v13 = *(_QWORD *)(v6 + 168) + v28 * *(_DWORD *)(v6 + 164);
      PinFromEpIndex = CSidebandDevice::GetEndpointCapabilities(this, v27, &v23);
      v25 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        v15 = DestinationString.MaximumLength + 80;
        if ( !Length )
        {
          v16 = -1073741789;
          a2->IoStatus.Information = v15;
          v25 = -1073741789;
          goto LABEL_27;
        }
        if ( Length != v15 )
        {
          v25 = -1073741811;
          WPP_RECORDER_SF_dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v11,
            80LL,
            0x16u,
            (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
            DestinationString.MaximumLength + 80,
            -1073741811);
          goto LABEL_26;
        }
        UserBuffer = a2->UserBuffer;
        memset(UserBuffer, 0, 0x50uLL);
        *UserBuffer = v15;
        PinFromEpIndex = CSidebandDevice::GetDeviceContainerId(this, (struct _GUID *)(UserBuffer + 1));
        v25 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          *(_OWORD *)(UserBuffer + 5) = *(_OWORD *)*(_QWORD *)(v13 + 72);
          v18 = v23;
          UserBuffer[9] = *(_DWORD *)(v13 + 64);
          *((_QWORD *)UserBuffer + 8) = UserBuffer + 20;
          *(_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *)(UserBuffer + 10) = v18;
          *((_WORD *)UserBuffer + 28) = 0;
          *((_WORD *)UserBuffer + 29) = DestinationString.MaximumLength;
          RtlCopyUnicodeString((PUNICODE_STRING)(UserBuffer + 14), &DestinationString);
          PinFromEpIndex = CSidebandDevice::GetVolumePropertyBasicSupport(this, NamedPipeType, UserBuffer + 18, 0LL);
          v25 = PinFromEpIndex;
          if ( PinFromEpIndex == -1073741789 || PinFromEpIndex == -1073741275 )
          {
            PinFromEpIndex = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                               this,
                               NamedPipeType,
                               UserBuffer + 19,
                               0LL);
            v25 = PinFromEpIndex;
            if ( PinFromEpIndex == -1073741789 || PinFromEpIndex == -1073741275 )
            {
              v25 = 0;
              a2->IoStatus.Information = v15;
              goto LABEL_26;
            }
            v12 = 25;
          }
          else
          {
            v12 = 24;
          }
        }
        else
        {
          v12 = 23;
        }
      }
      else
      {
        v12 = 21;
      }
    }
    else
    {
      v12 = 20;
    }
  }
  else
  {
    v12 = 19;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v11,
    9u,
    v12,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    PinFromEpIndex);
LABEL_26:
  v16 = v25;
LABEL_27:
  a2->IoStatus.Status = v16;
  IofCompleteRequest(a2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v20) = v25;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      9u,
      0x10u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v20);
  }
  return v16;
}
