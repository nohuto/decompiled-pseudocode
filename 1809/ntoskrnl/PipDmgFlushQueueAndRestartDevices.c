/*
 * XREFs of PipDmgFlushQueueAndRestartDevices @ 0x14083A604
 * Callers:
 *     PipDmgConsoleUnlockCallback @ 0x14083A550 (PipDmgConsoleUnlockCallback.c)
 *     PipDmgReevaluateQueue @ 0x14083A6C4 (PipDmgReevaluateQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14083A700 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiDmaGuardQueueFlush @ 0x140841C44 (PiDmaGuardQueueFlush.c)
 *     PipDgqFreeEntry @ 0x140841D48 (PipDgqFreeEntry.c)
 */

PVOID *PipDmgFlushQueueAndRestartDevices()
{
  PVOID *v0; // rbx
  PVOID v1; // rcx
  PVOID *result; // rax
  _QWORD *v3; // rax
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF

  if ( !PipDmaGuardPolicy || PipDmaGuardPolicy == 3 )
    KeBugCheckEx(0xCAu, 0x11uLL, 0LL, 0LL, 0LL);
  P[1] = P;
  P[0] = P;
  PiDmaGuardQueueFlush(P);
  v0 = (PVOID *)P[0];
  if ( P[0] == P )
    goto LABEL_6;
  do
  {
    v1 = v0[2];
    v0 = (PVOID *)*v0;
    PipDmgRequestRestartOnBlockedDevice(v1);
  }
  while ( v0 != P );
  while ( 1 )
  {
    v0 = (PVOID *)P[0];
LABEL_6:
    result = P;
    if ( v0 == P )
      break;
    if ( v0[1] != P || (v3 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v3[1] = P;
    PipDgqFreeEntry(v0);
  }
  return result;
}
