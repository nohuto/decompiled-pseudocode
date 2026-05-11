/*
 * XREFs of USBParseGetAudioStreamingDataranges @ 0x1C002E20C
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C002E790 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x1C0012700 (memset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002AF40 (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetFirstStreamingAudioInterface @ 0x1C002BC14 (USBParseGetFirstStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C002BC4C (USBParseGetNextAudioInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002BDF0 (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C002BE64 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C002DE78 (USBParseConvertInterfaceToDataRange.c)
 */

__int64 __fastcall USBParseGetAudioStreamingDataranges(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        LONG a3,
        _QWORD *a4,
        __int64 a5)
{
  PUSB_INTERFACE_DESCRIPTOR i; // rax
  unsigned __int8 *p_bLength; // rdi
  UCHAR bNumEndpoints; // al
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax
  int v13; // ebp
  PUSB_INTERFACE_DESCRIPTOR FirstStreamingAudioInterface; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx
  UCHAR v17; // al
  PUSB_COMMON_DESCRIPTOR v18; // rax
  int v19; // eax
  __int64 (__fastcall **v20)(PVOID *); // rax
  __int64 v21; // rcx
  _QWORD v23[18]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v24[22]; // [rsp+B0h] [rbp-D8h] BYREF

  for ( i = USBParseGetFirstStreamingAudioInterface(a2, a3, 2); ; i = USBParseGetNextAudioInterface(a2, p_bLength) )
  {
    p_bLength = &i->bLength;
    if ( !i )
      break;
    bNumEndpoints = i->bNumEndpoints;
    if ( bNumEndpoints )
    {
      if ( bNumEndpoints != 1 )
        continue;
      EndpointDescriptor = USBParseGetEndpointDescriptor(a2, p_bLength, 0);
      if ( EndpointDescriptor )
      {
        if ( EndpointDescriptor[2] )
          continue;
      }
    }
    if ( p_bLength )
    {
      memset(v23, 0, 0x88uLL);
      memset(v24, 0, sizeof(v24));
      v24[2] = a1;
      v23[2] = v24;
      v13 = USBHwSelectStreamingAudioInterface((__int64)v23, p_bLength);
      goto LABEL_11;
    }
    break;
  }
  v13 = -1073741438;
LABEL_11:
  FirstStreamingAudioInterface = USBParseGetFirstStreamingAudioInterface(a2, a3, 2);
  if ( FirstStreamingAudioInterface )
  {
    v16 = a5 + 128;
    while ( 1 )
    {
      if ( v13 < 0 )
        return (unsigned int)v13;
      v17 = FirstStreamingAudioInterface->bNumEndpoints;
      if ( v17 )
      {
        if ( (v17 != 1
           || (v18 = USBParseGetEndpointDescriptor(a2, &FirstStreamingAudioInterface->bLength, 0)) != 0LL
           && *(_WORD *)&v18[2])
          && IsSupportedFormat(a2, &FirstStreamingAudioInterface->bLength, v15) )
        {
          *(_QWORD *)(v16 + 16) = p_bLength;
          v13 = USBParseConvertInterfaceToDataRange(a2, &FirstStreamingAudioInterface->bLength, v16 - 128);
          if ( v13 >= 0 )
            break;
        }
      }
LABEL_35:
      FirstStreamingAudioInterface = USBParseGetNextAudioInterface(a2, &FirstStreamingAudioInterface->bLength);
      if ( !FirstStreamingAudioInterface )
        return (unsigned int)v13;
    }
    v19 = *(_DWORD *)(v16 + 88) & 0xF000;
    if ( v19 )
    {
      if ( v19 == 4096 )
      {
        v20 = (__int64 (__fastcall **)(PVOID *))USBType2PinDispatch;
        *(_DWORD *)(v16 - 16) = 896;
LABEL_29:
        *(_QWORD *)v16 = v20;
LABEL_30:
        if ( *(_DWORD *)(v16 - 20) )
        {
          v13 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v16 - 8), ExFreePool);
          if ( v13 < 0 )
            ExFreePool(*(PVOID *)(v16 - 8));
        }
        if ( a4 )
        {
          *a4 = v16 - 128;
          *(_DWORD *)(v16 - 124) |= 2u;
          a4[1] = &unk_1C00183A8;
          a4 += 2;
          v16 += 232LL;
        }
        goto LABEL_35;
      }
      if ( v19 != 0x2000 )
        goto LABEL_30;
      v20 = &USBType3PinDispatch;
    }
    else
    {
      if ( *(char *)(*(_QWORD *)(v16 + 40) + 2LL) < 0 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        *(_QWORD *)v16 = &USBCapturePinDispatch;
        *(_DWORD *)(v16 - 16) = 12 * (*(_DWORD *)(v21 + 208) * (*(_DWORD *)(v16 + 92) + 12) + 232);
        goto LABEL_30;
      }
      v20 = &USBType1PinDispatch;
    }
    *(_DWORD *)(v16 - 16) = 984;
    goto LABEL_29;
  }
  return (unsigned int)v13;
}
