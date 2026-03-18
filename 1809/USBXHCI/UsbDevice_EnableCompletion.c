/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C0035050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0013F38 (XilDeviceSlot_SetDeviceContext.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C00182C8 (Endpoint_SetLogIdentifier.c)
 *     UsbDevice_SetAddress @ 0x1C00366DC (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbDevice_EnableCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // r10
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  char v10; // si
  unsigned int v11; // edi
  unsigned __int8 v12; // al
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  _QWORD v23[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(__int64 **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_i(v6[9], 4u, 0xCu, 0xFu, (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids, *(_QWORD *)v3);
    v10 = 1;
    v11 = *(_BYTE *)(v3 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_19;
  }
  v12 = *(_BYTE *)(a1 + 60);
  if ( v12 != 1 )
  {
    WPP_RECORDER_SF_d(v6[9], 3u, 0xCu, 0x13u, (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids, v12);
    if ( *(_BYTE *)(a1 + 60) == 9 )
    {
      memset(v23, 0, sizeof(v23));
      v19 = *(_QWORD *)(v3 + 424);
      LOWORD(v23[0]) = 40;
      (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v19,
        v23);
      *(_DWORD *)(v23[1] + 32LL) |= 2u;
    }
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0LL, 0LL, 0LL);
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    v11 = -1073741823;
    goto LABEL_19;
  }
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_dq(
    v6[9],
    a2,
    12,
    16,
    (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
    *(_BYTE *)(a1 + 61),
    *(_QWORD *)v3);
  *(_BYTE *)(v3 + 134) = 1;
  *(_BYTE *)(v3 + 135) = *(_BYTE *)(a1 + 61);
  Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 176));
  v13 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 135));
  v11 = v13;
  if ( v13 < 0 )
  {
    LODWORD(v22) = v13;
    LODWORD(v21) = *(unsigned __int8 *)(v3 + 135);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xCu,
      0x11u,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      v21,
      v22);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0LL,
      0x20000LL,
      "Enable Slot command returned a SlotId value that is already in use",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4116, 0LL, 0LL, 0LL);
    v10 = 1;
LABEL_19:
    LOBYTE(v9) = 1;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v9);
    if ( v10 )
    {
      v20 = *(_QWORD *)(v3 + 424);
      *(_QWORD *)(v3 + 424) = 0LL;
      (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v20,
        v11);
    }
    return;
  }
  v14 = *(_QWORD *)(v7 + 48);
  if ( v14 )
    v15 = v14 + 4LL * *(unsigned __int8 *)(v3 + 135);
  else
    v15 = 0LL;
  *(_QWORD *)(v3 + 160) = v15;
  LOBYTE(v15) = 1;
  v16 = UsbDevice_SetAddress(v3, v15);
  if ( v16 < 0 )
  {
    LODWORD(v22) = v16;
    LODWORD(v21) = *(unsigned __int8 *)(v3 + 135);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xCu,
      0x12u,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      v21,
      v22);
    v17 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
    memset((void *)(v3 + 456), 0, 0x60uLL);
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4117, 0LL, 0LL, 0LL);
    }
    else
    {
      *(_QWORD *)(v3 + 504) = v3;
      *(_QWORD *)(v3 + 496) = UsbDevice_DisableCompletionReturnFailure;
      v18 = *(_DWORD *)(v3 + 492) & 0xFFFF2BFF;
      *(_QWORD *)(v3 + 528) = 0LL;
      *(_QWORD *)(v3 + 536) = 0LL;
      *(_DWORD *)(v3 + 492) = v18 | 0x2800;
      *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
      *(_QWORD *)(v3 + 544) = 0LL;
      Command_SendCommand(v17, v3 + 456);
    }
  }
}
