/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x1C0037520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0015570 (Endpoint_Enable.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // eax
  int v11; // [rsp+28h] [rbp-40h]
  _QWORD v12[5]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v12);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(v12[1] + 16LL),
         off_1C004F298);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
  v5 = Endpoint_Enable(*(_QWORD *)(v3 + 176));
  v6 = *(_QWORD *)(v3 + 8);
  v7 = v5;
  if ( v5 < 0 )
  {
    v11 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 72),
      2u,
      0xCu,
      0xEu,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      v11);
LABEL_5:
    *(_QWORD *)(v3 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v7);
  }
  if ( !Controller_IsControllerAccessible(v6) )
  {
    LOBYTE(v8) = 1;
    v7 = -1073741810;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v8);
    goto LABEL_5;
  }
  *(_QWORD *)(v3 + 424) = a2;
  *(_BYTE *)(v3 + 432) = 0;
  memset((void *)(v3 + 456), 0, 0x60uLL);
  *(_QWORD *)(v3 + 528) = 0LL;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 540) = 0;
  *(_QWORD *)(v3 + 544) = 0LL;
  *(_QWORD *)(v3 + 496) = UsbDevice_EnableCompletion;
  v10 = *(_DWORD *)(v3 + 492) & 0xFFFF27FF;
  *(_QWORD *)(v3 + 504) = v3;
  *(_DWORD *)(v3 + 492) = v10 | 0x2400;
  return Command_SendCommand(v4, v3 + 456);
}
