/*
 * XREFs of MiSelectCfgBitMap @ 0x1405F582C
 * Callers:
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1405F731C (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x140650C58 (MiSelectBitMapForImage.c)
 */

__int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 v5; // ax

  v3 = *(_QWORD *)(a1 + 1064);
  if ( v3
    && ((v5 = *(_WORD *)(v3 + 8), v5 == 332) || v5 == 452)
    && a2 < 0x100000000LL
    && (!a3 || !(unsigned int)MiSelectBitMapForImage(a3)) )
  {
    return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 424LL;
  }
  else
  {
    return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 392LL;
  }
}
