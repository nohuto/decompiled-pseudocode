/*
 * XREFs of PpmTryAcquireLock @ 0x14013F590
 * Callers:
 *     PoLatencySensitivityHint @ 0x14013F430 (PoLatencySensitivityHint.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

char __fastcall PpmTryAcquireLock(LARGE_INTEGER a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  NTSTATUS v3; // eax
  struct _KTHREAD *v4; // rcx
  LARGE_INTEGER v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = 0;
  v6.QuadPart = 0LL;
  v3 = KeWaitForSingleObject(&word_140418EC8, Executive, 0, 0, &v6);
  v4 = KeGetCurrentThread();
  if ( v3 )
  {
    KiLeaveGuardedRegionUnsafe((__int64)v4);
  }
  else
  {
    v2 = 1;
    PpmPerfPolicyLock = (__int64)v4;
  }
  return v2;
}
