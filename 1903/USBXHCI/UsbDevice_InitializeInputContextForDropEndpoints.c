/*
 * XREFs of UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C0005AFC
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C00056D8 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C003D6BC (WPP_RECORDER_SF_dddddd.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForDropEndpoints(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbp
  __int64 i; // rdi
  int v7; // edx
  int v8; // r11d
  __int64 v9; // r14
  char v10; // al
  __int64 DeviceContextBufferVA; // rax
  int v12; // r11d
  __int64 v13; // r9
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-58h]

  v4 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
  if ( v4 )
    v5 = *(_DWORD **)(v4 + 16);
  else
    v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 40); i = (unsigned int)(i + 1) )
  {
    v8 = *(_DWORD *)((*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * i),
                       off_1C00561A8)
                   + 144);
    *v5 |= 1 << v8;
    if ( *(_BYTE *)(a1 + 657) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v7,
          12,
          42,
          (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
          *(_BYTE *)(a1 + 135),
          v8);
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_BYTE *)(a1 + 657);
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 88) + 100LL) & 4) != 0 )
      {
        DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(a1 + (v10 != 0 ? 616LL : 608LL));
        v13 = ((unsigned int)(v12 - 1) + 1LL) << 6;
      }
      else
      {
        DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(a1 + (v10 != 0 ? 616LL : 608LL));
        v13 = 32 * ((unsigned int)(v12 - 1) + 1LL);
      }
      v14 = DeviceContextBufferVA + v13;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dddddd(
          *(_QWORD *)(v9 + 72),
          *(unsigned __int8 *)(v14 + 2),
          *(unsigned __int16 *)(v14 + 6),
          (*(_DWORD *)(v14 + 4) >> 3) & 7,
          v16,
          *(_BYTE *)(a1 + 135),
          v12,
          (*(_DWORD *)(v14 + 4) >> 3) & 7,
          *(_WORD *)(v14 + 6),
          *(_BYTE *)(v14 + 2),
          *(_BYTE *)v14 & 7);
    }
  }
  return 0LL;
}
