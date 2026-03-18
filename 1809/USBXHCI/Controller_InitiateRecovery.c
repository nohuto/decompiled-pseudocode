/*
 * XREFs of Controller_InitiateRecovery @ 0x1C000C898
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C000E620 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C0007AC8 (Command_FailAllCommands.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000AAB4 (CommonBuffer_FlushWorkItems.c)
 *     Controller_DisableController @ 0x1C000BE88 (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C00136DC (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     UsbDevice_ControllerGone @ 0x1C0034988 (UsbDevice_ControllerGone.c)
 */

__int64 __fastcall Controller_InitiateRecovery(__m128i *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  bool i; // zf
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  unsigned int j; // esi
  __int64 v12; // rdx
  __int64 v13; // [rsp+28h] [rbp-70h]
  int v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+44h] [rbp-54h]
  __int64 v16; // [rsp+4Ch] [rbp-4Ch]
  int v17; // [rsp+54h] [rbp-44h]
  int v18; // [rsp+58h] [rbp-40h]

  result = WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xE2u, (__int64)&Context.Logger + 4);
  if ( (a3 & 2) != 0 )
  {
    result = a1[21].m128i_u32[1];
    if ( (unsigned int)result > 0xA )
    {
      a3 |= 4u;
      result = WPP_RECORDER_SF_dd(
                 a1[4].m128i_i64[1],
                 1u,
                 4u,
                 0xE3u,
                 (__int64)&Context.Logger + 4,
                 a1[21].m128i_i32[1],
                 10);
    }
  }
  for ( i = a3 == 0; !i; i = a3 == 0 )
  {
    if ( (a3 & 0x18) != 0 )
    {
      v8 = *(_DWORD *)(a2 + 84);
      if ( (v8 & 2) == 0 )
      {
        Command_FailAllCommands(a1[9].m128i_i64[0]);
        KeFlushQueuedDpcs();
        v9 = (_QWORD *)a1[7].m128i_i64[1];
        if ( v9 )
          CommonBuffer_FlushWorkItems(v9);
        v10 = a1[8].m128i_i64[1];
        for ( j = 1; j <= *(_DWORD *)(v10 + 96); ++j )
        {
          if ( *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(v10) + 8LL * j) )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(__int64, __int64))qword_1C0050640)(UcxDriverGlobals, a1->m128i_i64[1]);
        if ( (a3 & 8) != 0 )
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 696))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a1->m128i_i64[0],
            2LL);
        *(_DWORD *)(a2 + 84) |= 2u;
        v8 = *(_DWORD *)(a2 + 84);
      }
      if ( (v8 & 4) == 0 && (a3 & 0x10) != 0 )
      {
        WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xE4u, (__int64)&Context.Logger + 4);
        v12 = a1->m128i_i64[0];
        v15 = 0x200000002LL;
        v16 = 0x200000002LL;
        v14 = 28;
        v18 = 2;
        v17 = 1;
        (*(void (__fastcall **)(unsigned __int64, __int64, int *))(WdfFunctions_01023 + 232))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v12,
          &v14);
        *(_DWORD *)(a2 + 84) |= 4u;
      }
      result = 4294967264LL;
    }
    else if ( (a3 & 4) != 0 )
    {
      Controller_DisableController(a1);
      (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 696))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        a1->m128i_i64[0],
        2LL);
      result = 4294967288LL;
    }
    else if ( (a3 & 1) != 0 )
    {
      Controller_InternalReset(a1);
      result = 4294967294LL;
    }
    else if ( (a3 & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, __int64))qword_1C0050630)(UcxDriverGlobals, a1->m128i_i64[1]);
      result = 4294967293LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        LODWORD(v13) = a3;
        return WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xE5u, (__int64)&Context.Logger + 4, v13);
      }
      (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 696))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        a1->m128i_i64[0],
        2LL);
      result = 4294967263LL;
    }
    a3 &= result;
  }
  return result;
}
