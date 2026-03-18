/*
 * XREFs of RootHub_Create @ 0x1C00687F4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015494 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall RootHub_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rdx
  int v6; // esi
  __int64 *v7; // rbx
  _QWORD v9[20]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v10[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v11; // [rsp+148h] [rbp+40h] BYREF

  v11 = a1;
  memset(v9, 0, sizeof(v9));
  v9[0] = 0x1000000A0LL;
  v9[1] = RootHub_UcxEvtClearHubFeature;
  v9[2] = RootHub_UcxEvtClearPortFeature;
  v9[3] = RootHub_UcxEvtGetHubStatus;
  v9[4] = RootHub_UcxEvtGetPortStatus;
  v9[5] = RootHub_UcxEvtSetHubFeature;
  v9[6] = RootHub_UcxEvtSetPortFeature;
  v9[7] = RootHub_UcxEvtGetPortErrorCount;
  v9[9] = RootHub_UcxEvtInterruptTransfer;
  v9[10] = RootHub_UcxEvtGetInfo;
  v9[11] = RootHub_UcxEvtGet20PortInfo;
  v9[12] = RootHub_UcxEvtGet30PortInfo;
  memset(&v9[13], 0, 0x38uLL);
  v9[19] = off_1C0056090;
  LODWORD(v9[13]) = 56;
  v9[16] = 0x100000001LL;
  memset(v10, 0, 0x38uLL);
  v5 = *(_QWORD *)(a2 + 8);
  v10[6] = off_1C0056248;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v6 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C0057688)(
         UcxDriverGlobals,
         v5,
         v9,
         v10,
         &v11);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 72),
        2u,
        0xBu,
        0xBu,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v6);
  }
  else
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v11,
                      off_1C0056248);
    *v7 = v11;
    v7[1] = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a2 + 72),
        4u,
        0xBu,
        0xAu,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v11,
        v7);
    *a3 = v7;
  }
  return (unsigned int)v6;
}
