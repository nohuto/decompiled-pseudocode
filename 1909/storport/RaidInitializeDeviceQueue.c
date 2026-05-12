/*
 * XREFs of RaidInitializeDeviceQueue @ 0x1C00181BC
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C00154BC (RaidUnitAllocateResources.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 */

void __fastcall RaidInitializeDeviceQueue(_DWORD *a1, __int64 a2, int a3)
{
  memset(a1, 0, 0xA8uLL);
  *((_QWORD *)a1 + 11) = a1 + 20;
  *((_QWORD *)a1 + 10) = a1 + 20;
  *((_QWORD *)a1 + 13) = a1 + 24;
  *((_QWORD *)a1 + 12) = a1 + 24;
  *((_QWORD *)a1 + 15) = a1 + 28;
  *((_QWORD *)a1 + 14) = a1 + 28;
  *((_QWORD *)a1 + 17) = a1 + 32;
  *((_QWORD *)a1 + 16) = a1 + 32;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 18);
  KeInitializeEvent((PRKEVENT)a1 + 2, NotificationEvent, 0);
  a1[1] = a3;
  *((_QWORD *)a1 + 1) = a2;
  *a1 = 11010306;
}
