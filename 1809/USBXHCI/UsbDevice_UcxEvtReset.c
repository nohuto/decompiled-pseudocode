/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1C0037920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0013CC8 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0038914 (WPP_RECORDER_SF_dqL.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C00430FC (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rbx
  _QWORD *v6; // r10
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 **v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  char v19; // r8
  int v20; // ecx
  __int64 v21; // rdx
  unsigned int v22; // ecx
  void *v23; // rax
  char v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  unsigned int v27; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v28[5]; // [rsp+48h] [rbp-40h] BYREF

  memset(v28, 0, sizeof(v28));
  LOWORD(v28[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v28);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v28[1] + 16LL),
         off_1C004F298);
  v5 = v3;
  v6 = *(_QWORD **)(v3 + 8);
  v7 = v6[18];
  if ( !*(_BYTE *)(v3 + 134) )
  {
    v8 = 59;
    v26 = *(_QWORD *)v3;
    v25 = *(_BYTE *)(v3 + 135);
    v9 = v6[9];
LABEL_23:
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_dq(v9, v4, 12, v8, (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids, v25, v26);
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v6[17] + 88LL) + 8LL);
  if ( *(_BYTE *)(v6[17] + 80LL) && (*(_BYTE *)(v3 + 648) && *(_DWORD *)(v10 + 476) == 2 || *(_DWORD *)(v10 + 476) == 1) )
  {
    XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)(v6[17] + 16LL), v3, 0LL, &v27);
    v13 = *(_QWORD *)(v5 + 8);
    v14 = v27;
  }
  else
  {
    v14 = *(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v3 + (*(_BYTE *)(v3 + 649) != 0 ? 608LL : 600LL)) + 12) >> 27;
  }
  LOBYTE(v11) = 4;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(v13 + 72), v11, v12, 60);
  v15 = *(_QWORD *)(v5 + 8);
  if ( v14 < 2 )
  {
    v8 = 61;
    v4 = *(unsigned __int8 *)(v5 + 135);
    v9 = *(_QWORD *)(v15 + 72);
    v26 = *(_QWORD *)v5;
    v25 = *(_BYTE *)(v5 + 135);
    goto LABEL_23;
  }
  if ( !Controller_IsControllerAccessible(v15) )
  {
    v16 = (__int64 **)(v5 + 184);
    v17 = 30LL;
    do
    {
      if ( *v16 )
        Endpoint_Disable(*v16, 0LL);
      ++v16;
      --v17;
    }
    while ( v17 );
    *(_DWORD *)(v5 + 152) = 3;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  v18 = *(_QWORD *)(v5 + 8);
  v19 = *(_BYTE *)(v5 + 135);
  v20 = *(_DWORD *)(v5 + 492);
  *(_QWORD *)(v5 + 424) = a2;
  *(_BYTE *)(v5 + 432) = 1;
  v21 = (*(_QWORD *)(v18 + 272) >> 15) & 1LL;
  if ( ((*(_QWORD *)(v18 + 272) >> 15) & 1) != 0 )
    v22 = v20 & 0xFFFF03FF | 0x2800;
  else
    v22 = v20 & 0xFFFF03FF | 0x4400;
  v23 = UsbDevice_OnResetDisableCompletion;
  if ( !v21 )
    v23 = UsbDevice_DeviceResetCompletion;
  *(_QWORD *)(v5 + 496) = v23;
  *(_QWORD *)(v5 + 504) = v5;
  *(_DWORD *)(v5 + 492) = v22;
  *(_BYTE *)(v5 + 495) = v19;
  *(_QWORD *)(v5 + 528) = 0LL;
  *(_DWORD *)(v5 + 536) = 0;
  *(_DWORD *)(v5 + 540) = 0;
  *(_QWORD *)(v5 + 544) = 0LL;
  return Command_SendCommand(v7, v5 + 456);
}
