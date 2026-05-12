/*
 * XREFs of StorPortBusy @ 0x1C003C2A0
 * Callers:
 *     StorPortBusyVrfy @ 0x1C0078150 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001FA4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     WPP_SF_qD @ 0x1C0038D8C (WPP_SF_qD.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  PSLIST_ENTRY v4; // rax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C00622B0 & 0x200) != 0 )
    DbgLogRequest(v3, 18, retaddr, v3, a2, 0LL, 0LL);
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 5384);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v6) = a2;
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x15u,
        (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids,
        v3,
        v6);
    }
    v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v3 + 1168));
    if ( v4 )
    {
      LODWORD(v4[1].Next) = 134684674;
      LODWORD(v4[2].Next) = 7;
      *((_DWORD *)&v4[2].Next + 2) = a2;
      RaidQueueDeferredItem((char *)(v3 + 1088), v4);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00622B0 & 0x800) != 0 )
      DbgLogRequest(v3, 22, retaddr, 1017LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
