/*
 * XREFs of XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C00487A8
 * Callers:
 *     UsbDevice_GetEndpointState @ 0x1C003B09C (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C003B110 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall XilCoreDeviceSlot_QueryEndpointContextInfo(__int64 a1)
{
  __int64 v1; // r8
  int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 *v5; // r9
  _DWORD *v6; // r10
  int v7; // edx
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // r8

  v1 = a1 + 608;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 100LL);
  v3 = a1 + 616;
  if ( (v2 & 4) != 0 )
  {
    if ( !*(_BYTE *)(v1 + 49) )
      v3 = v1;
    result = XilCoreUsbDevice_GetDeviceContextBufferVA(v3);
    v8 = ((unsigned int)(v7 - 1) + 1LL) << 6;
  }
  else
  {
    if ( !*(_BYTE *)(v1 + 49) )
      v3 = v1;
    result = XilCoreUsbDevice_GetDeviceContextBufferVA(v3);
    v8 = 32 * ((unsigned int)(v9 - 1) + 1LL);
  }
  v10 = result + v8;
  if ( v6 )
  {
    result = *(_DWORD *)v10 & 7;
    *v6 = result;
  }
  if ( v5 )
  {
    result = *(_QWORD *)(v10 + 8);
    *v5 = result;
  }
  return result;
}
