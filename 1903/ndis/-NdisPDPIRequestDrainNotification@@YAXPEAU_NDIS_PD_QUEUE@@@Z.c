/*
 * XREFs of ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C0120780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDPIRequestDrainNotification(struct _NDIS_PD_QUEUE *a1)
{
  void *v1; // rdx
  __int64 v3; // rdi

  v1 = a1->PDPlatformReserved[1];
  v3 = *((_QWORD *)v1 + 4);
  if ( !*((_QWORD *)v1 + 8) )
    ndisBugCheckEx(0x23uLL, 2uLL, (ULONG_PTR)a1->PDPlatformReserved[1], *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL));
  *((_BYTE *)v1 + 61) = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)v1 + 14, 1, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LOBYTE(v1) = 5;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v1,
        29,
        62,
        (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
        (char)a1);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LOBYTE(v1) = 5;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v1,
          29,
          61,
          (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
          (char)a1);
      }
    }
    (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 80) + 80LL))(a1);
  }
}
