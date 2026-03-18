/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x1402A7650
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  *(_QWORD *)(a1 + 8) |= 1uLL;
  LODWORD(v5) = 0;
  *a2 = a1;
  do
    KeYieldProcessorEx(&v5);
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return (unsigned int)v5;
}
