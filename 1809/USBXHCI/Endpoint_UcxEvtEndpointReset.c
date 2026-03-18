/*
 * XREFs of Endpoint_UcxEvtEndpointReset @ 0x1C00193A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C001A73C (WPP_RECORDER_SF_ddqd.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r8
  __int64 *v8; // rsi
  int v9; // r8d
  signed __int32 v10; // eax
  int v11; // edx
  signed __int32 v12; // ett

  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C004F180);
  if ( *(_DWORD *)(v4 + 1352) == 2 )
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected Reset Received on a Offloaded Endpoint",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c",
      2519);
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_ddqd(*(_QWORD *)(v4 + 80), v5, v6, 56);
    v7 = 3221225485LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a3,
             v7);
  }
  v8 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    a3,
                    off_1C004F068);
  memset(v8, 0, 0x70uLL);
  _m_prefetchw((const void *)(v4 + 32));
  v10 = *(_DWORD *)(v4 + 32);
  v11 = 256;
  do
  {
    v12 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v10 ^ 0x100, v10);
  }
  while ( v12 != v10 );
  if ( (v10 & 0x100) != 0 )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_ddqd(*(_QWORD *)(v4 + 80), v11, v9, 57);
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
