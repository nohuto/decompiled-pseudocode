/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x1C0029C54
 * Callers:
 *     USBType1StateChangePin @ 0x1C0005120 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0005450 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0005E90 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00063D0 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002CE9C (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C0011080 (memmove.c)
 *     memset @ 0x1C00113C0 (memset.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0028AF0 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C00297EC (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwFreePipes @ 0x1C0029F9C (USBHwFreePipes.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002AA90 (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r13
  unsigned __int8 v5; // bp
  int v6; // edi
  __int64 v7; // rax
  _QWORD *v8; // r12
  char v9; // al
  __int64 EndpointDescriptor; // rax
  struct _URB *PoolWithTag; // rax
  struct _URB *v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int i; // edx
  __int64 v17; // r13
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rsi
  unsigned int NumberOfPipes; // edx
  PVOID v23; // rax
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]
  unsigned int Size; // [rsp+A0h] [rbp+18h]
  int v28; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v25 = v2;
  v5 = 0;
  v6 = -1073741808;
  v26 = *(_QWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v26 + 16);
  v8 = *(_QWORD **)(v7 + 72);
  if ( !*(_BYTE *)(v7 + 64) && !*(_BYTE *)(v7 + 67) )
  {
    v9 = a2[4];
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        EndpointDescriptor = USBParseGetEndpointDescriptor(v8[5], a2, 0LL);
        if ( !EndpointDescriptor || !*(_WORD *)(EndpointDescriptor + 4) )
          v5 = 1;
      }
    }
    else
    {
      v5 = 1;
    }
    if ( *(_BYTE *)(v2 + 47) && !v5 )
      return USBHwSelectStreamingAudioInterfaceSideband(a1, (__int64)a2);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      8u,
      0x26u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      a1,
      v5);
    v28 = (unsigned __int8)a2[4];
    Size = 24 * v28 + 56;
    PoolWithTag = (struct _URB *)ExAllocatePoolWithTag((POOL_TYPE)512, Size, 0x41627845u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_44;
    memset(PoolWithTag, 0, Size);
    v14 = v8[5];
    v15 = 0;
    for ( i = *(unsigned __int8 *)(v14 + 4); v15 < i; ++v15 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v8[2] + 16LL * v15) + 2LL) == a2[2] )
        break;
    }
    if ( v15 == i )
      goto LABEL_37;
    v17 = *(_QWORD *)(a1 + 16);
    v13->UrbSelectInterface.Interface.InterfaceNumber = a2[2];
    v13->UrbSelectInterface.Interface.Length = 24 * (v28 + 1);
    v13->UrbSelectInterface.Interface.AlternateSetting = a2[3];
    if ( v5 )
    {
      if ( v28 )
        v13->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 0;
      goto LABEL_26;
    }
    v18 = *(_QWORD *)(v17 + 144);
    v19 = *(_DWORD *)(v18 + 216) & 0xF000;
    switch ( v19 )
    {
      case 0:
        goto LABEL_21;
      case 0x1000:
        v13->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 3872;
        break;
      case 0x2000:
LABEL_21:
        v13->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 500 * *(_DWORD *)(v18 + 220);
        if ( !*(_QWORD *)(v18 + 176) )
          v13->UrbSelectInterface.Interface.Pipes[0].PipeFlags |= 8u;
        break;
    }
LABEL_26:
    v13->UrbHeader.Length = Size;
    v13->UrbHeader.Function = 1;
    v13->UrbSelectInterface.ConfigurationHandle = (USBD_CONFIGURATION_HANDLE)v8[3];
    v20 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v26 + 40), v13, 0LL);
    if ( v13->UrbHeader.Status < 0 )
      v20 = -1073741808;
    v6 = v20;
    if ( v20 >= 0 )
    {
      v21 = *(_QWORD *)(v17 + 152);
      if ( !v5 )
      {
        NumberOfPipes = v13->UrbSelectInterface.Interface.NumberOfPipes;
        *(_DWORD *)(v21 + 56) = NumberOfPipes;
        *(_QWORD *)(v21 + 64) = v13->UrbSelectInterface.Interface.Pipes[0].PipeHandle;
        if ( NumberOfPipes > 0x14 )
        {
          v6 = -1073741438;
        }
        else
        {
          USBHwFreePipes(a1);
          v23 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * *(unsigned int *)(v21 + 56), 0x41627845u);
          *(_QWORD *)(v21 + 72) = v23;
          if ( !v23 )
            v6 = -1073741670;
        }
        if ( v6 >= 0 )
          memmove(*(void **)(v21 + 72), &v13->UrbOSFeatureDescriptorRequest.UrbLink, 24LL * *(unsigned int *)(v21 + 56));
      }
    }
    v2 = v25;
LABEL_37:
    ExFreePool(v13);
    goto LABEL_39;
  }
  v6 = -1073741632;
LABEL_39:
  if ( v6 < 0 )
  {
LABEL_44:
    LODWORD(v24) = v6;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      8u,
      0x27u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      a1,
      v24);
  }
  if ( v5 )
  {
    if ( *(_BYTE *)(v2 + 47) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x28u,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
  }
  return (unsigned int)v6;
}
