/*
 * XREFs of KiInitializeProcessor @ 0x14057402C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x14057C260 (KiInitializeDynamicProcessorDpc.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeGate @ 0x14013A474 (KeInitializeGate.c)
 *     KiInitializeDpcList @ 0x14013BB4C (KiInitializeDpcList.c)
 *     KeInitializeThreadedDpc @ 0x140181220 (KeInitializeThreadedDpc.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  int v2; // ecx
  ULONG v3; // r9d
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  PVOID PoolWithTag; // rax
  size_t v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 22656);
    KiInitializeDpcList((_QWORD *)(a1 + 11816));
    *(_QWORD *)(a1 + 11832) = 0LL;
    *(_DWORD *)(a1 + 11840) = 0;
  }
  if ( KeDpcWatchdogPeriod )
  {
    KeInitializeThreadedDpc((PRKDPC)(a1 + 24408), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
    v2 = *(_DWORD *)(a1 + 36);
    *(_BYTE *)(a1 + 24409) = 2;
    if ( !*(_QWORD *)(a1 + 24464) )
      *(_WORD *)(a1 + 24410) = v2 + 1280;
    KeInitializeTimerEx((PKTIMER)(a1 + 24472), NotificationTimer);
    v3 = KeMaximumIncrement;
    v4 = KeMaximumIncrement;
    v5 = (KeMaximumIncrement + 10000 * (unsigned __int64)(unsigned int)KeDpcWatchdogPeriod - 1) / KeMaximumIncrement;
    if ( v5 > 0xFFFFFFFF )
      v5 = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 22764) = 0;
    *(_DWORD *)(a1 + 22760) = v5;
    v6 = v5 * v4 / 0x4E20;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    KeSetCoalescableTimer((PKTIMER)(a1 + 24472), (LARGE_INTEGER)-v3, v6, 0xFAu, (PKDPC)(a1 + 24408));
  }
  if ( KiDPCTimeout )
  {
    v7 = (10000LL * (unsigned int)KiDPCTimeout + (unsigned __int64)KeMaximumIncrement - 1) / KeMaximumIncrement;
    if ( v7 > 0xFFFFFFFF )
      LODWORD(v7) = -1;
    *(_DWORD *)(a1 + 23456) = v7;
  }
  if ( KiDpcWatchdogProfileArrayLength )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    8LL * (unsigned int)KiDpcWatchdogProfileArrayLength,
                    0x5057694Bu);
    *(_QWORD *)(a1 + 25000) = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = PoolWithTag;
      memset(PoolWithTag, 0, v9);
      v10 = KeMaximumIncrement;
      v11 = (10000LL * (unsigned int)KiDpcWatchdogProfileCumulativeDpcThreshold
           + (unsigned __int64)KeMaximumIncrement
           - 1)
          / KeMaximumIncrement;
      if ( v11 > 0xFFFFFFFF )
        LODWORD(v11) = -1;
      *(_DWORD *)(a1 + 22772) = v11;
      v12 = (10000LL * (unsigned int)KiDpcWatchdogProfileSingleDpcThreshold + v10 - 1) / v10;
      if ( v12 > 0xFFFFFFFF )
        LODWORD(v12) = -1;
      *(_DWORD *)(a1 + 23552) = v12;
    }
    else
    {
      *(_DWORD *)(a1 + 22772) = 0;
      *(_DWORD *)(a1 + 23552) = 0;
      *(_QWORD *)(a1 + 25008) = 0LL;
    }
  }
  return 0LL;
}
