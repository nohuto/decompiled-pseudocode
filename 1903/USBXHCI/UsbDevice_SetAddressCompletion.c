/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x1C003BCF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016864 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C003C094 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C003DA54 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dqdL @ 0x1C003DE80 (WPP_RECORDER_SF_dqdL.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

void __fastcall UsbDevice_SetAddressCompletion(__int64 a1, int a2, __int64 *a3)
{
  int v6; // r9d
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r14
  unsigned int v20; // eax
  int v21; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v22[5]; // [rsp+58h] [rbp-50h] BYREF

  memset(v22, 0, sizeof(v22));
  v7 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v7 + 135);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        v8,
        12,
        22,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(v7 + 135),
        *(_QWORD *)v7);
    }
    if ( (*(_DWORD *)(v7 + 492) & 0x200) != 0 )
    {
      UsbDevice_SetDeviceDisabled(v7);
      return;
    }
    v9 = *(_BYTE *)(v7 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( (*(_DWORD *)(v7 + 492) & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(unsigned __int8 *)(a1 + 61);
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_dq(
          *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
          v16,
          12,
          24,
          (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
          *(_BYTE *)(a1 + 61),
          *(_QWORD *)v7);
      }
    }
    else
    {
      LOWORD(v22[0]) = 40;
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *))(WdfFunctions_01023 + 2128))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(v7 + 424),
        v22);
      v10 = v22[1];
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 136LL);
      v12 = *(_QWORD *)(v11 + 88);
      v13 = v11 + 16;
      v14 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(v13 + 64) && (*(_BYTE *)(v7 + 656) && *(_DWORD *)(v14 + 540) == 2 || *(_DWORD *)(v14 + 540) == 1) )
      {
        XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)v13, v7, &v21, 0LL);
        v15 = v21;
      }
      else
      {
        v15 = (unsigned __int8)*(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v7 + (*(_BYTE *)(v7 + 657) != 0
                                                                                         ? 616LL
                                                                                         : 608LL))
                                         + 12);
      }
      *(_DWORD *)(v10 + 28) = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v15, 23);
    }
    v9 = 0LL;
    goto LABEL_24;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqdL(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      *(unsigned __int8 *)(v7 + 135),
      (*(_DWORD *)(v7 + 492) >> 9) & 1,
      v6);
  if ( (*(_DWORD *)(v7 + 492) & 0x200) == 0 )
  {
    v9 = 3221225473LL;
LABEL_24:
    v17 = *(_QWORD *)(v7 + 424);
    *(_QWORD *)(v7 + 424) = 0LL;
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v17,
      v9);
    return;
  }
  v18 = *(_QWORD **)(v7 + 8);
  v19 = v18[18];
  if ( *(_BYTE *)(v7 + 432) )
  {
    Controller_HwVerifierBreakIfEnabled(
      v18,
      *(_QWORD *)v7,
      0LL,
      0x40000LL,
      "Set Address Command with BSR=1 failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v7 + 8), 2, 4117, 0LL, 0LL, 0LL);
  }
  else
  {
    memset((void *)(v7 + 456), 0, 0x60uLL);
    *(_QWORD *)(v7 + 528) = 0LL;
    *(_DWORD *)(v7 + 536) = 0;
    *(_DWORD *)(v7 + 540) = 0;
    *(_QWORD *)(v7 + 544) = 0LL;
    *(_QWORD *)(v7 + 496) = UsbDevice_DisableCompletionReturnFailure;
    v20 = *(_DWORD *)(v7 + 492) & 0xFFFF2BFF;
    *(_QWORD *)(v7 + 504) = v7;
    *(_DWORD *)(v7 + 492) = v20 | 0x2800;
    *(_BYTE *)(v7 + 495) = *(_BYTE *)(v7 + 135);
    Command_SendCommand(v19, v7 + 456);
  }
}
