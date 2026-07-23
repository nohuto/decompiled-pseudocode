/*
 * XREFs of ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C550
 * Callers:
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14031C210 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x1400AFB60 (ExpTryAcquireSpinLockShared.c)
 *     PerfLogSpinLockAcquire @ 0x140313CB4 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // r9
  int v4; // r10d
  int v5; // r11d
  __int64 v7; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    __rdtsc();
  if ( !ExpTryAcquireSpinLockShared(a1) )
    return 0LL;
  ++*(_DWORD *)(v2 + 25024);
  if ( v3 )
  {
    v7 = __rdtsc();
    PerfLogSpinLockAcquire(v1, v7, v7 - v4, 0, v5, 2);
  }
  return 1LL;
}
