/*
 * XREFs of UsbDevice_GetEndpointOffloadInformation @ 0x1C003AE58
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C000EB58 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_GetEndpointOffloadInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // edi
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v14; // r9d
  __int64 v15; // rdx

  result = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(result + 128);
  if ( *(_DWORD *)(result + 628) == 1 )
  {
    result = *(_QWORD *)(v9 + 32);
    v8 = *(_QWORD *)(result + 8LL * *(unsigned int *)(v9 + 64));
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v4),
                 off_1C00561A8);
      v10 = result;
      if ( *(unsigned __int8 *)(result + 98) == *(_WORD *)(a3 + 4) )
        break;
      if ( ++v4 >= *(_DWORD *)(a2 + 24) )
        return result;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 628LL) == 1 )
    {
      v11 = *(_DWORD *)(result + 1352);
      if ( v11 == 2 )
      {
        Debug_FreAssertMsg(
          (__int64)"Endpoint is already offloaded",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
          1260);
      }
      else
      {
        v12 = *(_QWORD *)v10;
        if ( *(_DWORD *)(*(_QWORD *)v10 + 628LL) == 2 )
        {
          Debug_FreAssertMsg(
            (__int64)"Invalid current offload state",
            v11 == 1,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
            1267);
          v12 = *(_QWORD *)v10;
        }
        *(_DWORD *)(v10 + 1352) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded(v12);
      }
    }
    DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(a1 + (*(_BYTE *)(a1 + 657) != 0 ? 616LL : 608LL));
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 628LL);
    *(_DWORD *)(a3 + 10) = v14;
    *(_BYTE *)(a3 + 14) = *(_BYTE *)(DeviceContextBufferVA + 6);
    *(_DWORD *)(a3 + 14) ^= (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFF00;
    *(_DWORD *)(a3 + 14) = (*(_DWORD *)DeviceContextBufferVA << 8) ^ (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFFFF;
    *(_BYTE *)(a3 + 18) = *(_BYTE *)(DeviceContextBufferVA + 12);
    *(_BYTE *)(a3 + 19) = *(_BYTE *)(a1 + 135);
    *(_DWORD *)(a3 + 18) ^= (*(_DWORD *)(a3 + 18) ^ (*(_DWORD *)DeviceContextBufferVA >> 9)) & 0x10000;
    result = *(unsigned int *)(a3 + 18);
    *(_DWORD *)(a3 + 18) = result ^ (result ^ (*(unsigned __int8 *)(a1 + 137) << 17)) & 0x20000;
    if ( v14 == 1 )
    {
      v15 = *(_QWORD *)(v10 + 88);
      *(_QWORD *)(a3 + 22) = *(_QWORD *)(*(_QWORD *)(v15 + 176) + 24LL);
      *(_QWORD *)(a3 + 38) = *(unsigned int *)(*(_QWORD *)(v15 + 176) + 44LL);
      *(_QWORD *)(a3 + 30) = *(_QWORD *)(*(_QWORD *)(v15 + 176) + 16LL);
      *(_DWORD *)(a3 + 46) = *(_DWORD *)(v15 + 200);
      *(_DWORD *)(a3 + 50) = *(_DWORD *)(v9 + 64);
      *(_QWORD *)(a3 + 54) = *(_QWORD *)(*(_QWORD *)(v8 + 144) + 24LL);
      *(_QWORD *)(a3 + 70) = *(unsigned int *)(*(_QWORD *)(v8 + 144) + 44LL);
      *(_QWORD *)(a3 + 62) = *(_QWORD *)(*(_QWORD *)(v8 + 144) + 16LL);
      result = *(unsigned int *)(v8 + 120);
      *(_DWORD *)(a3 + 78) = result;
    }
  }
  return result;
}
