/*
 * XREFs of ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1C0100090
 * Callers:
 *     ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C007B5D0 (-ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisPDPIQueryCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1, union _NDIS_PD_COUNTER_VALUE *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 4);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x2Eu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, union _NDIS_PD_COUNTER_VALUE *))(*(_QWORD *)(v2 + 80) + 56LL))(
    *((_QWORD *)a1 + 6),
    a2);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x2Fu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
}
