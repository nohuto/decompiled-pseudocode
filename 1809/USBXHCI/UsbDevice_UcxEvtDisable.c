/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C00372B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     RootHub_ClearPortResumeTime @ 0x1C001D4F4 (RootHub_ClearPortResumeTime.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001DB74 (RootHub_DisableLPMForSlot.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 **v10; // rdi
  __int64 v11; // rbx
  unsigned int v13; // eax
  _QWORD v14[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v14);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v14[1] + 16LL),
         off_1C004F298);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 144);
  v6 = *(_QWORD *)v3;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v4 + 72),
    v6,
    12,
    53,
    (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
    *(_BYTE *)(v3 + 135),
    *(_QWORD *)v3);
  if ( !*(_BYTE *)(v3 + 134) )
  {
    v7 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v7,
      12,
      54,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
    LOBYTE(v8) = 1;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v8);
    v10 = (__int64 **)(v3 + 184);
    v11 = 30LL;
    do
    {
      if ( *v10 )
      {
        LOBYTE(v9) = 1;
        Endpoint_Disable(*v10, v9);
        *v10 = 0LL;
      }
      ++v10;
      --v11;
    }
    while ( v11 );
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  if ( *(_BYTE *)(v3 + 568) )
    RootHub_DisableLPMForSlot(
      *(_QWORD **)(*(_QWORD *)(v3 + 8) + 152LL),
      *(_DWORD *)(v3 + 44),
      *(unsigned __int8 *)(v3 + 135));
  if ( *(_BYTE *)(v3 + 569) )
    RootHub_ClearPortResumeTime(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 152LL), *(_DWORD *)(v3 + 44));
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    UsbDevice_SetDeviceDisabled(v3);
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             0LL);
  }
  *(_QWORD *)(v3 + 424) = a2;
  *(_BYTE *)(v3 + 432) = 1;
  memset((void *)(v3 + 456), 0, 0x60uLL);
  *(_QWORD *)(v3 + 528) = 0LL;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 540) = 0;
  *(_QWORD *)(v3 + 544) = 0LL;
  *(_QWORD *)(v3 + 496) = UsbDevice_DisableCompletionReturnSuccess;
  v13 = *(_DWORD *)(v3 + 492) & 0xFFFF2BFF;
  *(_QWORD *)(v3 + 504) = v3;
  *(_DWORD *)(v3 + 492) = v13 | 0x2800;
  *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
  return Command_SendCommand(v5, v3 + 456);
}
