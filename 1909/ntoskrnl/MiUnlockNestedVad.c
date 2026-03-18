/*
 * XREFs of MiUnlockNestedVad @ 0x14089B0DC
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiFreeVadRange @ 0x1400E71E8 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiUpControlAreaRefs @ 0x1402BA560 (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402E539C (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  return KeAbPostRelease(v1);
}
