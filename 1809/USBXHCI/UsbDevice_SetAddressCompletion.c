/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x1C0036B00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0013CC8 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C0038704 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dqdL @ 0x1C0038B30 (WPP_RECORDER_SF_dqdL.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C00430FC (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

void __fastcall UsbDevice_SetAddressCompletion(__int64 a1, int a2, __int64 *a3, int a4)
{
  __int64 v4; // rdi
  int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // r8d
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // eax
  int v17; // edx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rbp
  unsigned int v21; // eax
  int v22; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v23[5]; // [rsp+58h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    v7 = *(unsigned __int8 *)(v4 + 135);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v7,
      12,
      22,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *(_BYTE *)(v4 + 135),
      *(_QWORD *)v4);
    if ( (*(_DWORD *)(v4 + 492) & 0x200) != 0 )
    {
      UsbDevice_SetDeviceDisabled(v4);
      return;
    }
    v8 = *(_BYTE *)(v4 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_18;
  }
  v9 = *(_DWORD *)(v4 + 492);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( (v9 & 0x200) != 0 )
    {
      v17 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v17,
        12,
        24,
        (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v4);
    }
    else
    {
      memset(v23, 0, sizeof(v23));
      LOWORD(v23[0]) = 40;
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *))(WdfFunctions_01023 + 2128))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(v4 + 424),
        v23);
      v10 = v23[1];
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 136LL);
      v12 = *(_QWORD *)(v11 + 88);
      v13 = v11 + 16;
      v14 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(v13 + 64) && (*(_BYTE *)(v4 + 648) && *(_DWORD *)(v14 + 476) == 2 || *(_DWORD *)(v14 + 476) == 1) )
      {
        XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)v13, v4, &v22, 0LL);
        v16 = v22;
      }
      else
      {
        v16 = (unsigned __int8)*(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v4 + (*(_BYTE *)(v4 + 649) != 0
                                                                                         ? 608LL
                                                                                         : 600LL))
                                         + 12);
      }
      *(_DWORD *)(v10 + 28) = v16;
      WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v15, 23);
    }
    v8 = 0LL;
    goto LABEL_18;
  }
  WPP_RECORDER_SF_dqdL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(v4 + 135), (v9 >> 9) & 1, a4);
  if ( (*(_DWORD *)(v4 + 492) & 0x200) == 0 )
  {
    v8 = 3221225473LL;
LABEL_18:
    v18 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v18,
      v8);
    return;
  }
  v19 = *(_QWORD **)(v4 + 8);
  v20 = v19[18];
  if ( *(_BYTE *)(v4 + 432) )
  {
    Controller_HwVerifierBreakIfEnabled(
      v19,
      *(_QWORD *)v4,
      0LL,
      0x40000LL,
      "Set Address Command with BSR=1 failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4117, 0LL, 0LL, 0LL);
  }
  else
  {
    memset((void *)(v4 + 456), 0, 0x60uLL);
    *(_QWORD *)(v4 + 528) = 0LL;
    *(_DWORD *)(v4 + 536) = 0;
    *(_DWORD *)(v4 + 540) = 0;
    *(_QWORD *)(v4 + 544) = 0LL;
    *(_QWORD *)(v4 + 496) = UsbDevice_DisableCompletionReturnFailure;
    v21 = *(_DWORD *)(v4 + 492) & 0xFFFF2BFF;
    *(_QWORD *)(v4 + 504) = v4;
    *(_DWORD *)(v4 + 492) = v21 | 0x2800;
    *(_BYTE *)(v4 + 495) = *(_BYTE *)(v4 + 135);
    Command_SendCommand(v20, v4 + 456);
  }
}
