/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C0034D40
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C0035010 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C0035030 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C00362D0 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C00131F0 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0013A68 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0038914 (WPP_RECORDER_SF_dqL.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C0042BCC (XilCoreDeviceSlot_ClearDeviceContext.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  char v6; // r15
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // al
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 **v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 XilCoreDeviceSlotData; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax

  v3 = *(_QWORD *)(a1 + 48);
  v6 = 1;
  if ( a2 == 3 )
  {
    v7 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v7,
      12,
      55,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
    UsbDevice_SetDeviceDisabled(v3);
LABEL_3:
    v6 = 0;
    v8 = 3221225473LL;
    goto LABEL_4;
  }
  v10 = *(_BYTE *)(a1 + 60);
  if ( v10 != 1 && v10 != 11 )
  {
    v11 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v11, a3, 57);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0LL,
      0x100000LL,
      "Disable Slot Command failed",
      (__int64 *)(a1 + 24),
      0LL);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4120, 0LL, 0LL, 0LL);
    goto LABEL_3;
  }
  v12 = *(unsigned __int8 *)(a1 + 61);
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v12,
    12,
    56,
    (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
    *(_BYTE *)(a1 + 61),
    *(_QWORD *)v3);
  v14 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(v13) = 1;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v13);
  }
  v15 = (__int64 **)(v3 + 184);
  v16 = 30LL;
  do
  {
    if ( *v15 )
    {
      LOBYTE(v13) = 1;
      Endpoint_Disable(*v15, v13);
      *v15 = 0LL;
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = *(unsigned __int8 *)(v3 + 135);
  if ( *(_BYTE *)(v14 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((_QWORD *)(v14 + 16), v3);
    v18 = *(_QWORD *)(v14 + 88);
    if ( *(_BYTE *)(v18 + 80) )
      v19 = *(_QWORD *)(v18 + 24);
    else
      v19 = *(_QWORD *)(v18 + 72);
    *(_QWORD *)(v19 + 8 * v17) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v14 + 88));
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v3, (unsigned int)v17);
  }
  *(_WORD *)(v3 + 134) = 0;
  *(_QWORD *)(v3 + 160) = 0LL;
  v8 = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v3 + 456), 0, 0x60uLL);
    v21 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 528) = 0LL;
    *(_DWORD *)(v3 + 536) = 0;
    *(_DWORD *)(v3 + 540) = 0;
    *(_QWORD *)(v3 + 544) = 0LL;
    *(_QWORD *)(v3 + 496) = UsbDevice_EnableCompletion;
    v22 = *(_DWORD *)(v3 + 492) & 0xFFFF27FF;
    *(_QWORD *)(v3 + 504) = v3;
    *(_DWORD *)(v3 + 492) = v22 | 0x2400;
    Command_SendCommand(*(_QWORD *)(v21 + 144), v3 + 456);
    return;
  }
LABEL_4:
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
