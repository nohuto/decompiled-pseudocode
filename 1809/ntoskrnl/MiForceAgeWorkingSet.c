/*
 * XREFs of MiForceAgeWorkingSet @ 0x1402B3310
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140130D18 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x14013F310 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 7024LL)
                               + 2354LL));
}
