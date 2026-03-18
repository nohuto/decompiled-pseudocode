/*
 * XREFs of CmpAddToDelayedClose @ 0x1406C54C0
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     CmpArmDelayedCloseTimer @ 0x14011E850 (CmpArmDelayedCloseTimer.c)
 */

void __fastcall CmpAddToDelayedClose(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  unsigned int v4; // eax
  bool v5; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = CmpDelayedLRUListHead;
  v3 = (_QWORD *)(a1 + 224);
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v3 = CmpDelayedLRUListHead;
  *(_QWORD *)(a1 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v2 + 8) = v3;
  CmpDelayedLRUListHead = a1 + 224;
  v4 = CmpDelayedCloseElements + 1;
  *(_BYTE *)(a1 + 64) |= 2u;
  ++qword_1409AEF38;
  v5 = v4 > CmpDelayedCloseSize;
  CmpDelayedCloseElements = v4;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  if ( v5 )
    CmpArmDelayedCloseTimer();
}
