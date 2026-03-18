/*
 * XREFs of Controller_InitiateRecovery @ 0x1C000EC78
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C0010DF0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C0009948 (Command_FailAllCommands.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000CCC8 (CommonBuffer_FlushWorkItems.c)
 *     Controller_DisableController @ 0x1C000E1E4 (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C00161D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     UsbDevice_ControllerGone @ 0x1C0039A50 (UsbDevice_ControllerGone.c)
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
  _DWORD v14[6]; // [rsp+40h] [rbp-58h] BYREF
  int v15; // [rsp+58h] [rbp-40h]

  result = 0LL;
  memset(v14, 0, sizeof(v14));
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xE5u, (__int64)&Context.Logger + 4);
  if ( (a3 & 2) != 0 )
  {
    result = a1[25].m128i_u32[2];
    if ( (unsigned int)result > 0xA )
    {
      a3 |= 4u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        result = WPP_RECORDER_SF_dd(a1[4].m128i_i64[1], 1u, 4u, 0xE6u, (__int64)&Context.Logger + 4, result, 10);
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
        ((void (__fastcall *)(__int64, __int64))qword_1C0057680)(UcxDriverGlobals, a1->m128i_i64[1]);
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
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xE7u, (__int64)&Context.Logger + 4);
        v12 = a1->m128i_i64[0];
        v14[0] = 28;
        *(_QWORD *)&v14[1] = 0x200000002LL;
        *(_QWORD *)&v14[3] = 0x200000002LL;
        v15 = 2;
        v14[5] = 1;
        (*(void (__fastcall **)(unsigned __int64, __int64, _DWORD *))(WdfFunctions_01023 + 232))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v12,
          v14);
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
      ((void (__fastcall *)(__int64, __int64))qword_1C0057670)(UcxDriverGlobals, a1->m128i_i64[1]);
      result = 4294967293LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = a3;
          return WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xE8u, (__int64)&Context.Logger + 4, v13);
        }
        return result;
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
