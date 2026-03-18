/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x14010A178
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiDecrementControlAreaCount @ 0x1400BF8A4 (MiDecrementControlAreaCount.c)
 *     MiClearFilePointer @ 0x14010A278 (MiClearFilePointer.c)
 */

int __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v3; // edx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _DISPATCHER_HEADER *v7; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 1) == 0 && (v3 & 0x100) == 0 )
    {
      v4 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v3 | 1;
      MiClearFilePointer(a1);
      MiRemoveUnusedSegment(a1);
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1288));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
      v5 = *(_QWORD **)(v4 + 1496);
      v6 = (_QWORD *)(a1 + 8);
      if ( *v5 != v4 + 1488 )
        __fastfail(3u);
      *v6 = v4 + 1488;
      *(_QWORD *)(a1 + 16) = v5;
      *v5 = v6;
      *(_QWORD *)(v4 + 1496) = v6;
      *(_DWORD *)(a1 + 56) |= 0x8000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
      KeReleaseSemaphoreEx(v4 + 1456, 0, 1, v7, 0);
      LODWORD(v1) = MiDecrementControlAreaCount(v4, (volatile signed __int64 *)(v4 + 1288));
    }
  }
  return (int)v1;
}
