/*
 * XREFs of MiForceAgeWorkingSet @ 0x1402C8580
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140129A78 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x140142E58 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x1400489B0 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 7800LL)
                               + 2354LL));
}
