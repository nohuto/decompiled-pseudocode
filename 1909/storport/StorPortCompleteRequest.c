/*
 * XREFs of StorPortCompleteRequest @ 0x1C003C3D0
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1C0078170 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C0001FE0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0002074 (RaidResumeUnitQueue.c)
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     RaidResumeAdapterQueue @ 0x1C0016230 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0017260 (RaidPauseAdapterQueue.c)
 *     WPP_SF_ddd @ 0x1C0038CEC (WPP_SF_ddd.c)
 */

char __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v10; // rdi
  __int64 Unit; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h]

  v5 = *(__int64 **)(a1 - 16);
  v6 = 0LL;
  HIBYTE(v16) = 0;
  v10 = *v5;
  if ( !*v5 )
    return (char)v5;
  if ( (qword_1C00622B0 & 0x40) != 0 )
    DbgLogRequest(
      v10,
      12,
      v10,
      a4 | (int)(*(_DWORD *)(v10 + 56) << 24) | (unsigned __int64)((a3 | (a2 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( a2 == 0xFF || a3 == 0xFF || a4 == 0xFF )
  {
    RaidPauseAdapterQueue(v10);
  }
  else
  {
    LOBYTE(v16) = a2;
    BYTE1(v16) = a3;
    BYTE2(v16) = a4;
    Unit = RaidAdapterFindUnit(v10, v16);
    v6 = Unit;
    if ( !Unit )
    {
      v5 = (__int64 *)&WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v5) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v5 & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          LODWORD(v14) = a4;
          LODWORD(v13) = a3;
          LOBYTE(v5) = WPP_SF_ddd(
                         (__int64)WPP_GLOBAL_Control->AttachedDevice,
                         0x19u,
                         (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids,
                         a2,
                         v13,
                         v14);
        }
      }
      return (char)v5;
    }
    RaidPauseUnitQueue(Unit);
  }
  LOBYTE(v5) = KeInsertQueueDpc(
                 (PRKDPC)(v10 + 1928),
                 (PVOID)(a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8)),
                 (PVOID)a5);
  if ( !(_BYTE)v5 )
  {
    if ( a2 == 0xFF || a3 == 0xFF || a4 == 0xFF )
      LOBYTE(v5) = RaidResumeAdapterQueue(v10);
    else
      LOBYTE(v5) = RaidResumeUnitQueue(v6);
  }
  return (char)v5;
}
