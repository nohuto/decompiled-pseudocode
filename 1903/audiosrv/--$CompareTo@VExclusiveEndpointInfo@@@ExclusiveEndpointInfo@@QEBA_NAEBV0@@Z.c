/*
 * XREFs of ??$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800FF2C8
 * Callers:
 *     ?CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z @ 0x1800FFA40 (-CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801005A4 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801005A4.c)
 * Callees:
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x18010216C (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

bool __fastcall ExclusiveEndpointInfo::CompareTo<ExclusiveEndpointInfo>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  return (!*(_WORD *)a1 || !*(_WORD *)a2 || !(unsigned int)_o__wcsicmp(a1, a2))
      && SimpleWildcardStringCompare(
           (const unsigned __int16 *const)(a1 + 402),
           a2,
           (const unsigned __int16 *const)(a2 + 402),
           a4)
      && *(_DWORD *)(a1 + 924) == *(_DWORD *)(a2 + 924);
}
