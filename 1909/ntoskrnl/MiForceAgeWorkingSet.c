/*
 * XREFs of MiForceAgeWorkingSet @ 0x1402C82E0
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x14012A498 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x140143398 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 7800LL)
                               + 2354LL));
}
