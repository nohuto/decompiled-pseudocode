/*
 * XREFs of Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00654B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Endpoint_Create @ 0x1C0064D10 (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rax
  int v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  int v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int16 v20; // [rsp+44h] [rbp-3Ch]
  char v21; // [rsp+46h] [rbp-3Ah]
  _QWORD v22[6]; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v23)(__int64, unsigned int); // [rsp+78h] [rbp-8h]

  HIDWORD(v22[0]) = 0;
  HIWORD(v19) = 0;
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                                WPP_MAIN_CB.Dpc.ProcessorHistory,
                                a2,
                                off_1C00562C0)
                            + 135);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a1,
           off_1C0056428);
    v18 = a3;
    v15 = v8;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v9 + 72),
      4u,
      0xDu,
      0xAu,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      v15,
      v18);
  }
  v19 = 1287;
  v21 = 0;
  v20 = a3;
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1,
          off_1C0056428);
  v22[0] = 56LL;
  v22[1] = Endpoint_UcxEvtEndpointPurge;
  v22[2] = Endpoint_UcxEvtEndpointStart;
  v22[3] = Endpoint_UcxEvtEndpointAbort;
  v22[4] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v22[5] = Endpoint_UcxEvtDefaultEndpointUpdate;
  if ( Controller_IsSecureDevice(v10) )
    v23 = 0LL;
  else
    v23 = Endpoint_UcxEvtEndpointEnableForwardProgress;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C00576D0)(UcxDriverGlobals, a4, v22);
  v11 = Endpoint_Create(a1, a2, a4, (__int64)&v19, 0LL, 0LL);
  if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                                 a2,
                                 off_1C00562C0)
                             + 135);
    v13 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a1,
            off_1C0056428);
    LODWORD(v17) = v11;
    LODWORD(v16) = v12;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v13 + 72),
      2u,
      0xDu,
      0xBu,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      v16,
      v17);
  }
  return (unsigned int)v11;
}
