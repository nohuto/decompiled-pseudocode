/*
 * XREFs of StorPortReady @ 0x1C003CC10
 * Callers:
 *     StorPortReadyVrfy @ 0x1C0078710 (StorPortReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001FA4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  __int64 v1; // rdi
  PSLIST_ENTRY v2; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C00622B0 & 0x200) != 0 )
    DbgLogRequest(v1, 19, retaddr, v1, 0LL, 0LL, 0LL);
  if ( v1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x16u,
        (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids,
        v1);
    }
    v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v1 + 1168));
    if ( v2 )
    {
      LODWORD(v2[1].Next) = 134684674;
      LODWORD(v2[2].Next) = 8;
      RaidQueueDeferredItem((char *)(v1 + 1088), v2);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00622B0 & 0x800) != 0 )
      DbgLogRequest(v1, 22, retaddr, 1082LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
