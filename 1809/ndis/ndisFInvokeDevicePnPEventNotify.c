/*
 * XREFs of ndisFInvokeDevicePnPEventNotify @ 0x1C00B8EB0
 * Callers:
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00B8DF0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00BDB3C (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __fastcall ndisFInvokeDevicePnPEventNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // edi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 8);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x7Bu, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v4);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 272))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x7Cu, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v4);
}
