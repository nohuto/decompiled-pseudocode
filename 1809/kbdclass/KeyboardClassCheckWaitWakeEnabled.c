/*
 * XREFs of KeyboardClassCheckWaitWakeEnabled @ 0x1C0004864
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C0001330 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassPower @ 0x1C0001960 (KeyboardClassPower.c)
 *     KeyboardStart @ 0x1C00029E0 (KeyboardStart.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardClassCheckWaitWakeEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 72);
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
  LOBYTE(v2) = *(_BYTE *)(v2 + 362);
  KeReleaseSpinLock(v1, v3);
  return v2;
}
