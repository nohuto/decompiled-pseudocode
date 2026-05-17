/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x180005EE0
 * Callers:
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_1800085C8 @ 0x1800085C8 (sub_1800085C8.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return sub_1800085C8();
  return result;
}
