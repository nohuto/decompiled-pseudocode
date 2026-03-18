/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C003A180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0016B1C (XilDeviceSlot_SetDeviceContext.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C001B3F8 (Endpoint_SetLogIdentifier.c)
 *     UsbDevice_SetAddress @ 0x1C003B8A0 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbDevice_EnableCompletion(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // r10
  __int64 v7; // r15
  __int64 v8; // rdi
  char v9; // si
  unsigned int v10; // edi
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  _QWORD v22[5]; // [rsp+40h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(__int64 **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(v6[9], 4u, 0xCu, 0xFu, (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids, *(_QWORD *)v3);
    v9 = 1;
    v10 = *(_BYTE *)(v3 + 432) == 0 ? 0xC0000001 : 0;
LABEL_29:
    LOBYTE(a2) = 1;
    Endpoint_Disable(*(__int64 **)(v3 + 176), a2);
    if ( v9 )
    {
      v19 = *(_QWORD *)(v3 + 424);
      *(_QWORD *)(v3 + 424) = 0LL;
      (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v19,
        v10);
    }
    return;
  }
  v11 = *(_BYTE *)(a1 + 60);
  if ( v11 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(v6[9], 3u, 0xCu, 0x13u, (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids, v11);
      v11 = *(_BYTE *)(a1 + 60);
    }
    if ( v11 == 9 )
    {
      memset(v22, 0, sizeof(v22));
      v18 = *(_QWORD *)(v3 + 424);
      LOWORD(v22[0]) = 40;
      (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v18,
        v22);
      *(_DWORD *)(v22[1] + 32LL) |= 2u;
    }
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0LL, 0LL, 0LL);
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    v10 = -1073741823;
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dq(
      v6[9],
      a2,
      12,
      16,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v3);
  }
  *(_BYTE *)(v3 + 134) = 1;
  *(_BYTE *)(v3 + 135) = *(_BYTE *)(a1 + 61);
  Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 176));
  v12 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 135));
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v12;
      LODWORD(v20) = *(unsigned __int8 *)(v3 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xCu,
        0x11u,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        v20,
        v21);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0LL,
      0x20000LL,
      "Enable Slot command returned a SlotId value that is already in use",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4116, 0LL, 0LL, 0LL);
    v9 = 1;
    goto LABEL_29;
  }
  v13 = *(_QWORD *)(v7 + 48);
  if ( v13 )
    v14 = v13 + 4LL * *(unsigned __int8 *)(v3 + 135);
  else
    v14 = 0LL;
  *(_QWORD *)(v3 + 160) = v14;
  LOBYTE(v14) = 1;
  v15 = UsbDevice_SetAddress(v3, v14);
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v15;
      LODWORD(v20) = *(unsigned __int8 *)(v3 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xCu,
        0x12u,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        v20,
        v21);
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
    memset((void *)(v3 + 456), 0, 0x60uLL);
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4117, 0LL, 0LL, 0LL);
    }
    else
    {
      *(_QWORD *)(v3 + 504) = v3;
      *(_QWORD *)(v3 + 496) = UsbDevice_DisableCompletionReturnFailure;
      v17 = *(_DWORD *)(v3 + 492) & 0xFFFF2BFF;
      *(_QWORD *)(v3 + 528) = 0LL;
      *(_QWORD *)(v3 + 536) = 0LL;
      *(_DWORD *)(v3 + 492) = v17 | 0x2800;
      *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
      *(_QWORD *)(v3 + 544) = 0LL;
      Command_SendCommand(v16, v3 + 456);
    }
  }
}
