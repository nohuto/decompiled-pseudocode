/*
 * XREFs of MiTerminateEnclave @ 0x14085B980
 * Callers:
 *     NtTerminateEnclave @ 0x14085C860 (NtTerminateEnclave.c)
 * Callees:
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiTerminateHardwareEnclave @ 0x14085BA24 (MiTerminateHardwareEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14088F3E4 (PsDereferenceVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14088F69C (PsTerminateVsmEnclave.c)
 */

__int64 __fastcall MiTerminateEnclave(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v8; // rsi
  unsigned int v9; // ebx

  v3 = *(_DWORD *)(a2 + 64);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 8) == 0 )
      MiTerminateHardwareEnclave(a1, a2);
    return 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(volatile signed __int64 **)(a2 + 72);
    if ( _InterlockedIncrement64(v8 + 2) <= 1 )
      __fastfail(0xEu);
    MiUnlockVad((__int64)CurrentThread, a2);
    v9 = PsTerminateVsmEnclave(v8, a3);
    PsDereferenceVsmEnclave((PVOID)v8);
    MiLockVad((__int64)CurrentThread, a2);
    return v9;
  }
}
