/*
 * XREFs of ?NdisPDPIFlushQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00BEFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisPDPIFlushQueue(struct _NDIS_PD_QUEUE *a1)
{
  void (__fastcall **v1)(struct _NDIS_PD_QUEUE *); // rdi

  v1 = (void (__fastcall **)(struct _NDIS_PD_QUEUE *))a1->PDPlatformReserved[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      105,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  v1[3](a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      106,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
}
