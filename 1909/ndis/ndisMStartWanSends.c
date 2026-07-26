/*
 * XREFs of ndisMStartWanSends @ 0x1C008C2A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?NdisMWanSendComplete@@YAXPEAXPEAU_NDIS_WAN_PACKET@@H@Z @ 0x1C0089020 (-NdisMWanSendComplete@@YAXPEAXPEAU_NDIS_WAN_PACKET@@H@Z.c)
 */

char __fastcall ndisMStartWanSends(_QWORD *a1)
{
  struct _NDIS_WAN_PACKET **v2; // rsi
  struct _NDIS_WAN_PACKET *v3; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned int v6; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      12,
      (struct _GUID *)&WPP_c4b8547a309735784b57b6d8d23f8bd6_Traceguids,
      (char)a1);
  v2 = (struct _NDIS_WAN_PACKET **)(a1 + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (struct _NDIS_WAN_PACKET *)v2 )
      break;
    Flink = v3->WanPacketQueue.Flink;
    if ( (struct _NDIS_WAN_PACKET *)v3->WanPacketQueue.Flink->Blink != v3
      || (Blink = v3->WanPacketQueue.Blink, (struct _NDIS_WAN_PACKET *)Blink->Flink != v3) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v3->WanPacketQueue.Blink = &v3->WanPacketQueue;
    v3->WanPacketQueue.Flink = &v3->WanPacketQueue;
    a1[65] = 0LL;
    KeReleaseSpinLockFromDpcLevel(a1 + 12);
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *, struct _NDIS_WAN_PACKET *))(a1[470] + 200LL))(
           a1[3],
           v3->MacReserved1,
           v3);
    if ( v6 != 259 )
      NdisMWanSendComplete(a1, v3, v6);
    KeAcquireSpinLockAtDpcLevel(a1 + 12);
    a1[65] = KeGetCurrentThread();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      13,
      (struct _GUID *)&WPP_c4b8547a309735784b57b6d8d23f8bd6_Traceguids,
      (char)a1);
  return 0;
}
