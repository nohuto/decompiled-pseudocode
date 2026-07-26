/*
 * XREFs of ndisMInvokeInitialize @ 0x1C00C932C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C001CDC0 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // esi
  NdisStopwatch v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 3792);
  memset(&v7, 0, sizeof(v7));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xE5u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v2);
  v7.QpcStartTime = KeQueryPerformanceCounter(&v7.QpFrequency);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v2 + 136))(a1, *(_QWORD *)(v2 + 64), a2);
  v7.QpcLastStopTime = KeQueryPerformanceCounter(0LL);
  NdisTraceLoggingDeviceInitialized(a1, &v7, v5 != 0 ? 0xB : 0, v5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0xE6u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v2, v5);
  return v5;
}
