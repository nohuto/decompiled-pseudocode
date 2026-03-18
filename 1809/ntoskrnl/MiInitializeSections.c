/*
 * XREFs of MiInitializeSections @ 0x14072B024
 * Callers:
 *     MiInitializePartition @ 0x14072AB48 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x14008A3E0 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400F3160 (InitializeSListHead.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  v2 = a1 + 1456;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 56) = v2 + 48;
  *(_QWORD *)(v2 + 48) = v2 + 48;
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  KeInitializeSemaphore((PRKSEMAPHORE)v2, 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1544) = a1 + 1536;
  *(_QWORD *)(a1 + 1536) = a1 + 1536;
  *(_QWORD *)(a1 + 1648) = a1 + 1640;
  *(_QWORD *)(a1 + 1640) = a1 + 1640;
  *(_QWORD *)(a1 + 1664) = a1 + 1656;
  *(_QWORD *)(a1 + 1656) = a1 + 1656;
  KeInitializeEvent((PRKEVENT)(a1 + 1336), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1680) = a1 + 1672;
  *(_QWORD *)(a1 + 1672) = a1 + 1672;
  KeInitializeEvent((PRKEVENT)(a1 + 1312), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1688), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1552), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 1744), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1776));
  *(_QWORD *)(a1 + 1400) = 1LL;
  *(_QWORD *)(a1 + 1368) = 0LL;
  *(_QWORD *)(a1 + 1408) = 0LL;
  *(_DWORD *)(a1 + 1440) = 0;
  v3 = *(_BYTE *)(a1 + 1447) & 0xFD;
  *(_QWORD *)(a1 + 1392) = a1;
  *(_BYTE *)(a1 + 1444) = -1;
  *(_BYTE *)(a1 + 1447) = v3 | 4;
  KeInitializeEvent((PRKEVENT)(a1 + 1416), NotificationEvent, 0);
  KeInitializeEvent(&stru_140438D50, NotificationEvent, 0);
}
