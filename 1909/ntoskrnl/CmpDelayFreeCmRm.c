/*
 * XREFs of CmpDelayFreeCmRm @ 0x1406BA994
 * Callers:
 *     CmpRunDownCmRM @ 0x1406BA870 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 */

void __fastcall CmpDelayFreeCmRm(_QWORD *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  v2 = (_QWORD *)qword_1404633C8;
  if ( *(PVOID **)qword_1404633C8 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v3 = CmpDelayFreeRMWorkItemActive == 0;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_1404633C8 = (__int64)a1;
  if ( v3 )
  {
    CmpDelayFreeRMWorkItemActive = 1;
    KiSetTimerEx((__int64)&CmpDelayFreeRMTimer, -300000000LL, 0, 0, (__int64)&CmpDelayFreeRMDpc);
  }
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
