/*
 * XREFs of MiCombineWorkingSetTail @ 0x1401226C0
 * Callers:
 *     MiCombinePte @ 0x140088F10 (MiCombinePte.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140122798 (MiReleaseWalkLocks.c)
 *     MiProcessCrcList @ 0x14061F320 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  if ( v1[1] )
  {
    MiReleaseWalkLocks(a1);
    MiProcessCrcList(
      v1[3],
      v1[4],
      v1[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL));
    v1[1] = 0LL;
  }
  return 0LL;
}
