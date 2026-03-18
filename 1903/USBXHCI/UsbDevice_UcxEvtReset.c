/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1C003CC00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016864 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C003DC64 (WPP_RECORDER_SF_dqL.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // r14
  int v7; // edx
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // esi
  int v14; // edx
  __int64 **v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  char v18; // r8
  int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  void *v22; // rax
  char v24; // [rsp+28h] [rbp-70h]
  unsigned int v25; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v26[5]; // [rsp+48h] [rbp-50h] BYREF

  memset(v26, 0, sizeof(v26));
  LOWORD(v26[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v26);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v26[1] + 16LL),
         off_1C00562C0);
  v4 = v3;
  v5 = *(_QWORD **)(v3 + 8);
  v6 = v5[18];
  if ( !*(_BYTE *)(v3 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *(unsigned __int8 *)(v3 + 135);
      v8 = 59;
      v9 = *(_QWORD *)v3;
LABEL_27:
      v24 = v7;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_dq(v5[9], v7, 12, v8, (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids, v24, v9);
      return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               a2,
               0LL);
    }
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  v10 = v5[17] + 16LL;
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 72) + 8LL);
  if ( *(_BYTE *)(v10 + 64) && (*(_BYTE *)(v3 + 656) && *(_DWORD *)(v11 + 540) == 2 || *(_DWORD *)(v11 + 540) == 1) )
  {
    XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)v10, v3, 0LL, &v25);
    v13 = v25;
  }
  else
  {
    v13 = *(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v3 + (*(_BYTE *)(v3 + 657) != 0 ? 616LL : 608LL)) + 12) >> 27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *(unsigned __int8 *)(v4 + 135);
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v14, v12, 60);
  }
  if ( v13 < 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *(unsigned __int8 *)(v4 + 135);
      v8 = 61;
      v5 = *(_QWORD **)(v4 + 8);
      v9 = *(_QWORD *)v4;
      goto LABEL_27;
    }
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    v15 = (__int64 **)(v4 + 184);
    v16 = 30LL;
    do
    {
      if ( *v15 )
        Endpoint_Disable(*v15, 0LL);
      ++v15;
      --v16;
    }
    while ( v16 );
    *(_DWORD *)(v4 + 152) = 3;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  v17 = *(_QWORD *)(v4 + 8);
  v18 = *(_BYTE *)(v4 + 135);
  v19 = *(_DWORD *)(v4 + 492);
  *(_QWORD *)(v4 + 424) = a2;
  *(_BYTE *)(v4 + 432) = 1;
  v20 = (*(_QWORD *)(v17 + 336) >> 15) & 1LL;
  if ( ((*(_QWORD *)(v17 + 336) >> 15) & 1) != 0 )
    v21 = v19 & 0xFFFF03FF | 0x2800;
  else
    v21 = v19 & 0xFFFF03FF | 0x4400;
  v22 = UsbDevice_OnResetDisableCompletion;
  if ( !v20 )
    v22 = UsbDevice_DeviceResetCompletion;
  *(_QWORD *)(v4 + 496) = v22;
  *(_QWORD *)(v4 + 504) = v4;
  *(_DWORD *)(v4 + 492) = v21;
  *(_BYTE *)(v4 + 495) = v18;
  *(_QWORD *)(v4 + 528) = 0LL;
  *(_DWORD *)(v4 + 536) = 0;
  *(_DWORD *)(v4 + 540) = 0;
  *(_QWORD *)(v4 + 544) = 0LL;
  return Command_SendCommand(v6, v4 + 456);
}
