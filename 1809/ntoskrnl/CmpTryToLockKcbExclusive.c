/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x1405D9B30
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateRegistryRoot @ 0x1409C4FAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  char v3; // bl
  _KLOCK_ENTRY *v4; // rax

  v1 = (volatile signed __int32 *)(a1 + 40);
  v3 = 1;
  v4 = (_KLOCK_ENTRY *)KeAbPreAcquire(a1 + 40, 0LL, 1);
  if ( _interlockedbittestandset64(v1, 0LL) )
  {
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v1, v4);
    return 0;
  }
  else
  {
    if ( v4 )
      v4->AcquiredByte |= 1u;
    *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  }
  return v3;
}
