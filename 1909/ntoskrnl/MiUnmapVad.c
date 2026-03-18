/*
 * XREFs of MiUnmapVad @ 0x1406605C4
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x14015B85C (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiCleanVad @ 0x14060C580 (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x14066B5E8 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140887064 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(__int64 a1, __int64 a2, int a3)
{
  __int64 v7; // rbx
  ULONG_PTR v8; // rax
  __int64 v9; // r14
  _KPROCESS *Process; // rcx

  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 )
  {
    v7 = **(_QWORD **)(a1 + 72);
    v8 = MiReferenceControlAreaFile(v7);
    v9 = *(_QWORD *)(v8 + 24);
    MiDereferenceControlAreaFile(v7, v8);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
      && (unsigned int)PfCheckDeprioritizeFile(
                         Process[1].ActiveGroupsMask,
                         v9,
                         (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                       + 1) == 1 )
    {
      a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL);
  return MiDeleteVad((unsigned int *)a1, a2, a3);
}
