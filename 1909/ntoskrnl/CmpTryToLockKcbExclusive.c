/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x140669A7C
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  char v3; // bl
  _KLOCK_ENTRY *v4; // rax

  v1 = (volatile signed __int32 *)(a1 + 48);
  v3 = 1;
  v4 = (_KLOCK_ENTRY *)KeAbPreAcquire(a1 + 48, 0LL, 1);
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
    *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  }
  return v3;
}
