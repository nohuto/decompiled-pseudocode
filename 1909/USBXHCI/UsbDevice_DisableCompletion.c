/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C0039E40
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C003A140 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C003A160 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C003B4A0 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C0015C68 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C00161D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00165C0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C003C094 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C003DC64 (WPP_RECORDER_SF_dqL.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C00485B4 (XilCoreDeviceSlot_ClearDeviceContext.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  char v6; // r15
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // cl
  int v11; // edx
  int v12; // edx
  __int64 v13; // r13
  __int64 **v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int64 XilCoreDeviceSlotData; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax

  v3 = *(_QWORD *)(a1 + 48);
  v6 = 1;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *(unsigned __int8 *)(v3 + 135);
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v7,
        12,
        55,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(v3 + 135),
        *(_QWORD *)v3);
    }
    UsbDevice_SetDeviceDisabled(v3);
LABEL_5:
    v6 = 0;
    v8 = 3221225473LL;
    goto LABEL_6;
  }
  v10 = *(_BYTE *)(a1 + 60);
  if ( v10 != 1 && v10 != 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v11, a3, 57);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0LL,
      0x100000LL,
      "Disable Slot Command failed",
      (__int64 *)(a1 + 24),
      0LL);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4120, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v12,
      12,
      56,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v3);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(a2) = 1;
    Endpoint_Disable(*(__int64 **)(v3 + 176), a2);
  }
  v14 = (__int64 **)(v3 + 184);
  v15 = 30LL;
  do
  {
    if ( *v14 )
    {
      LOBYTE(a2) = 1;
      Endpoint_Disable(*v14, a2);
      *v14 = 0LL;
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  v16 = *(unsigned __int8 *)(v3 + 135);
  if ( *(_BYTE *)(v13 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((_QWORD *)(v13 + 16), v3);
    *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(*(_QWORD *)(v13 + 88)) + 8 * v16) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v13 + 88));
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v3, (unsigned int)v16);
  }
  *(_WORD *)(v3 + 134) = 0;
  *(_QWORD *)(v3 + 160) = 0LL;
  v8 = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v3 + 456), 0, 0x60uLL);
    v18 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 528) = 0LL;
    *(_DWORD *)(v3 + 536) = 0;
    *(_DWORD *)(v3 + 540) = 0;
    *(_QWORD *)(v3 + 544) = 0LL;
    *(_QWORD *)(v3 + 496) = UsbDevice_EnableCompletion;
    v19 = *(_DWORD *)(v3 + 492) & 0xFFFF27FF;
    *(_QWORD *)(v3 + 504) = v3;
    *(_DWORD *)(v3 + 492) = v19 | 0x2400;
    Command_SendCommand(*(_QWORD *)(v18 + 144), v3 + 456);
    return;
  }
LABEL_6:
  if ( a3 == 1 )
    v8 = 3221225473LL;
  if ( v6 )
  {
    v9 = *(_QWORD *)(v3 + 424);
    *(_QWORD *)(v3 + 424) = 0LL;
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v9,
      v8);
  }
}
