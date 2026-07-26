/*
 * XREFs of ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00FFE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00FE238 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C0100C34 (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall NdisPDPIFreeCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 6);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x2Cu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
  ndisCleanupPDCounter((struct NDIS_PD_COUNTER *)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 80) + 48LL))(v3);
  NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)a1);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x2Du, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
}
