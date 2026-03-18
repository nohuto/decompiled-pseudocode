/*
 * XREFs of UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0006500
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_ValidateEndpointConfigureRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int *v10; // rcx
  int v11; // r12d
  unsigned int v12; // r13d
  unsigned int v13; // eax
  __int64 v14; // rax
  char v16; // [rsp+30h] [rbp-38h]
  unsigned int v17; // [rsp+70h] [rbp+8h]
  unsigned int *v18; // [rsp+80h] [rbp+18h]

  v2 = 0LL;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        a2,
        12,
        33,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)a1);
    }
    return *(_DWORD *)(v3 + 24) != 0 ? 0xC0000001 : 0;
  }
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v5 = *(_DWORD *)(v3 + 24) != 0 ? 0xC000000E : 0;
    if ( *(_DWORD *)(v3 + 40) )
    {
      do
      {
        v6 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v2),
               off_1C00561A8);
        Endpoint_Disable(v6, 0LL);
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
    }
    return v5;
  }
  v7 = *(_DWORD *)(v3 + 84);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        12,
        34,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_DWORD *)(v3 + 84));
    }
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_DWORD *)(v8 + 628);
    if ( !v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v8 + 72),
          2u,
          0xCu,
          0x23u,
          (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids);
      return (unsigned int)-1073741637;
    }
    if ( (unsigned int)(v9 - 1) > 1 )
    {
      Debug_FreAssertMsg(
        "Unexpected offload mode value",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
        2575LL);
      return (unsigned int)-1073741823;
    }
    if ( !*(_BYTE *)(a1 + 658) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v8 + 72),
          2u,
          0xCu,
          0x24u,
          (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids);
      return (unsigned int)-1073741790;
    }
    v7 = *(_DWORD *)(v3 + 84);
  }
  v10 = *(unsigned int **)(v3 + 88);
  v11 = 0;
  v18 = v10;
  v12 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v13 = 0;
      v17 = 0;
      if ( *(_DWORD *)(v3 + 24) )
      {
        while ( *(unsigned __int8 *)((*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023
                                                                                                 + 1616))(
                                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                                       *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * v13),
                                       off_1C00561A8)
                                   + 98) != *((_WORD *)v18 + 2) )
        {
          v13 = v17 + 1;
          v17 = v13;
          if ( v13 >= *(_DWORD *)(v3 + 24) )
          {
            v10 = v18;
            goto LABEL_30;
          }
        }
        ++v11;
        v10 = v18;
      }
LABEL_30:
      v14 = *v10;
      if ( !(_DWORD)v14 )
        break;
      v7 = *(_DWORD *)(v3 + 84);
      v10 = (unsigned int *)((char *)v10 + v14);
      ++v12;
      v18 = v10;
      if ( v12 >= v7 )
        goto LABEL_32;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        12,
        37,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(a1 + 135),
        v12);
    }
  }
  else
  {
LABEL_32:
    if ( v11 == v7 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = v7;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        12,
        38,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(a1 + 135),
        v16,
        v11);
    }
  }
  return (unsigned int)-1073741811;
}
