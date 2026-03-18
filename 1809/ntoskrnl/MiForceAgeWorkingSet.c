/*
 * XREFs of MiForceAgeWorkingSet @ 0x1402B3020
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140130C28 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x14013F1F0 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 7024LL)
                               + 2354LL));
}
