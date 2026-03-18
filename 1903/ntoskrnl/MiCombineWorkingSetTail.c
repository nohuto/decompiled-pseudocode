/*
 * XREFs of MiCombineWorkingSetTail @ 0x1402E6410
 * Callers:
 *     MiCombinePte @ 0x1402E5F10 (MiCombinePte.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140119A60 (MiReleaseWalkLocks.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx

  v4 = *(_QWORD **)(a1 + 160);
  if ( v4[1] )
  {
    MiReleaseWalkLocks(a1, a2, a3, a4);
    MiProcessCrcList(
      v4[3],
      v4[4],
      v4[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL));
    v4[1] = 0LL;
  }
  return 0LL;
}
