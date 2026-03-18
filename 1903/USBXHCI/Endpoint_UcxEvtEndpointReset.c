/*
 * XREFs of Endpoint_UcxEvtEndpointReset @ 0x1C001C650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C001DAFC (WPP_RECORDER_SF_ddqd.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r8
  __int64 *v8; // rsi
  int v9; // edx
  int v10; // r8d
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C00561A8);
  if ( *(_DWORD *)(v4 + 1352) == 2 )
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected Reset Received on a Offloaded Endpoint",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c",
      2519);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_ddqd(*(_QWORD *)(v4 + 80), v5, v6, 56);
    }
    v7 = 3221225485LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a3,
             v7);
  }
  v8 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    a3,
                    off_1C0056090);
  memset(v8, 0, 0x70uLL);
  _m_prefetchw((const void *)(v4 + 32));
  v11 = *(_DWORD *)(v4 + 32);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v11 ^ 0x80, v11);
  }
  while ( v12 != v11 );
  if ( (v11 & 0x80u) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_ddqd(*(_QWORD *)(v4 + 80), v9, v10, 57);
    }
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a3,
             v7);
  }
  *v8 = v4;
  *(_QWORD *)(v4 + 272) = a3;
  *(_DWORD *)(v4 + 280) = 259;
  return ESM_AddEvent((PVOID)(v4 + 288));
}
