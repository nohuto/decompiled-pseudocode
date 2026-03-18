/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x1C003C7E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C00182F0 (Endpoint_Enable.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // eax
  int v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[5]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v10);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v10[1] + 16LL),
         off_1C00562C0);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
  v5 = Endpoint_Enable(*(_QWORD *)(v3 + 176));
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xCu,
        0xEu,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        v9);
    }
    goto LABEL_6;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    LOBYTE(v6) = 1;
    v5 = -1073741810;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v6);
LABEL_6:
    *(_QWORD *)(v3 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             (unsigned int)v5);
  }
  *(_QWORD *)(v3 + 424) = a2;
  *(_BYTE *)(v3 + 432) = 0;
  memset((void *)(v3 + 456), 0, 0x60uLL);
  *(_QWORD *)(v3 + 528) = 0LL;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 540) = 0;
  *(_QWORD *)(v3 + 544) = 0LL;
  *(_QWORD *)(v3 + 496) = UsbDevice_EnableCompletion;
  v8 = *(_DWORD *)(v3 + 492) & 0xFFFF27FF;
  *(_QWORD *)(v3 + 504) = v3;
  *(_DWORD *)(v3 + 492) = v8 | 0x2400;
  return Command_SendCommand(v4, v3 + 456);
}
