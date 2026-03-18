/*
 * XREFs of PipDmgFlushQueueAndRestartDevices @ 0x140873714
 * Callers:
 *     PipDmgConsoleUnlockCallback @ 0x140873660 (PipDmgConsoleUnlockCallback.c)
 *     PipDmgReevaluateQueue @ 0x1408737E0 (PipDmgReevaluateQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14087381C (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiDmaGuardQueueFlush @ 0x14087BAE8 (PiDmaGuardQueueFlush.c)
 *     PipDgqFreeEntry @ 0x14087BBEC (PipDgqFreeEntry.c)
 */

PVOID *PipDmgFlushQueueAndRestartDevices()
{
  PVOID *v0; // rbx
  PVOID v1; // rcx
  PVOID *result; // rax
  _QWORD *v3; // rax
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-8h]

  P = 0LL;
  p_P = 0LL;
  if ( !PipDmaGuardPolicy || PipDmaGuardPolicy == 3 )
    KeBugCheckEx(0xCAu, 0x11uLL, 0LL, 0LL, 0LL);
  p_P = &P;
  P = &P;
  PiDmaGuardQueueFlush(&P);
  v0 = (PVOID *)P;
  if ( P == &P )
    goto LABEL_6;
  do
  {
    v1 = v0[2];
    v0 = (PVOID *)*v0;
    PipDmgRequestRestartOnBlockedDevice(v1);
  }
  while ( v0 != &P );
  while ( 1 )
  {
    v0 = (PVOID *)P;
LABEL_6:
    result = &P;
    if ( v0 == &P )
      break;
    if ( v0[1] != &P || (v3 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P = *v0;
    v3[1] = &P;
    PipDgqFreeEntry(v0);
  }
  return result;
}
