/*
 * XREFs of MouseClassCheckWaitWakeEnabled @ 0x1C00042EC
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C0001910 (MouseClassPoRequestComplete.c)
 *     MouseClassPower @ 0x1C0001D70 (MouseClassPower.c)
 *     MouseStart @ 0x1C00026D0 (MouseStart.c)
 * Callees:
 *     <none>
 */

char __fastcall MouseClassCheckWaitWakeEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 72);
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
  LOBYTE(v2) = *(_BYTE *)(v2 + 345);
  KeReleaseSpinLock(v1, v3);
  return v2;
}
