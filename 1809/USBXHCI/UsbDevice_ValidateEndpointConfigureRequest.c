/*
 * XREFs of UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005530
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_ValidateEndpointConfigureRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int *v10; // rcx
  int v11; // r15d
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rax
  char v16; // [rsp+30h] [rbp-38h]
  unsigned int *v17; // [rsp+70h] [rbp+8h]

  v2 = 0LL;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 134) )
  {
    if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    {
      v7 = *(_DWORD *)(v3 + 84);
      if ( v7 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v7) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v7,
            12,
            34,
            (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
            *(_DWORD *)(v3 + 84));
        }
        v8 = *(_QWORD *)(a1 + 8);
        v9 = *(_DWORD *)(v8 + 564);
        if ( !v9 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v8 + 72),
            2u,
            0xCu,
            0x23u,
            (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids);
          return (unsigned int)-1073741637;
        }
        if ( (unsigned int)(v9 - 1) > 1 )
        {
          Debug_FreAssertMsg(
            "Unexpected offload mode value",
            0LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
            2550LL);
          return (unsigned int)-1073741823;
        }
        if ( !*(_BYTE *)(a1 + 650) )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v8 + 72),
            2u,
            0xCu,
            0x24u,
            (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids);
          return (unsigned int)-1073741790;
        }
        v7 = *(_DWORD *)(v3 + 84);
      }
      v10 = *(unsigned int **)(v3 + 88);
      v11 = 0;
      v17 = v10;
      v12 = 0;
      if ( v7 )
      {
        while ( 1 )
        {
          v13 = 0;
          if ( *(_DWORD *)(v3 + 24) )
          {
            while ( *(unsigned __int8 *)((*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                                           *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * v13),
                                           off_1C004F180)
                                       + 98) != *((_WORD *)v17 + 2) )
            {
              if ( ++v13 >= *(_DWORD *)(v3 + 24) )
                goto LABEL_23;
            }
            ++v11;
LABEL_23:
            v10 = v17;
          }
          v14 = *v10;
          if ( !(_DWORD)v14 )
            break;
          v7 = *(_DWORD *)(v3 + 84);
          v10 = (unsigned int *)((char *)v10 + v14);
          ++v12;
          v17 = v10;
          if ( v12 >= v7 )
            goto LABEL_26;
        }
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v7,
          12,
          37,
          (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
          *(_BYTE *)(a1 + 135),
          v12);
      }
      else
      {
LABEL_26:
        if ( v11 == v7 )
          return 0;
        v16 = v7;
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v7,
          12,
          38,
          (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
          *(_BYTE *)(a1 + 135),
          v16,
          v11);
      }
      return (unsigned int)-1073741811;
    }
    else
    {
      v5 = *(_DWORD *)(v3 + 24) != 0 ? 0xC000000E : 0;
      if ( *(_DWORD *)(v3 + 40) )
      {
        do
        {
          v6 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v2),
                 off_1C004F180);
          Endpoint_Disable(v6, 0LL);
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
      }
    }
  }
  else
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      12,
      33,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *(_BYTE *)(a1 + 135),
      *(_QWORD *)a1);
    return *(_DWORD *)(v3 + 24) != 0 ? 0xC0000001 : 0;
  }
  return v5;
}
