/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C003C550
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     RootHub_ClearPortResumeTime @ 0x1C0020EA4 (RootHub_ClearPortResumeTime.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0021508 (RootHub_DisableLPMForSlot.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C003C094 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 **v11; // rdi
  __int64 v12; // rbx
  __int64 v14; // rdx
  unsigned int v15; // eax
  _QWORD v16[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v16);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v16[1] + 16LL),
         off_1C00562C0);
  v5 = v3;
  v6 = *(_QWORD *)(v3 + 8);
  v7 = *(_QWORD *)(v6 + 144);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v6 + 72),
      v8,
      12,
      53,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
  }
  if ( !*(_BYTE *)(v5 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(v5 + 135);
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        v9,
        12,
        54,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        *(_BYTE *)(v5 + 135),
        *(_QWORD *)v5);
    }
    LOBYTE(v4) = 1;
    Endpoint_Disable(*(__int64 **)(v5 + 176), v4);
    v11 = (__int64 **)(v5 + 184);
    v12 = 30LL;
    do
    {
      if ( *v11 )
      {
        LOBYTE(v10) = 1;
        Endpoint_Disable(*v11, v10);
        *v11 = 0LL;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  if ( *(_BYTE *)(v5 + 568) )
    RootHub_DisableLPMForSlot(
      *(_QWORD **)(*(_QWORD *)(v5 + 8) + 152LL),
      *(_DWORD *)(v5 + 44),
      *(unsigned __int8 *)(v5 + 135));
  if ( *(_BYTE *)(v5 + 569) )
    RootHub_ClearPortResumeTime(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL), *(_DWORD *)(v5 + 44));
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v5 + 8)) )
  {
    UsbDevice_SetDeviceDisabled(v5, v14);
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  *(_QWORD *)(v5 + 424) = a2;
  *(_BYTE *)(v5 + 432) = 1;
  memset((void *)(v5 + 456), 0, 0x60uLL);
  *(_QWORD *)(v5 + 528) = 0LL;
  *(_DWORD *)(v5 + 536) = 0;
  *(_DWORD *)(v5 + 540) = 0;
  *(_QWORD *)(v5 + 544) = 0LL;
  *(_QWORD *)(v5 + 496) = UsbDevice_DisableCompletionReturnSuccess;
  v15 = *(_DWORD *)(v5 + 492) & 0xFFFF2BFF;
  *(_QWORD *)(v5 + 504) = v5;
  *(_DWORD *)(v5 + 492) = v15 | 0x2800;
  *(_BYTE *)(v5 + 495) = *(_BYTE *)(v5 + 135);
  return Command_SendCommand(v7, v5 + 456);
}
