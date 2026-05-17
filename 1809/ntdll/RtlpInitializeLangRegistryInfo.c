/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x18004CBF0
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EEC40 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18004B7A8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(unsigned __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo(a1);
  return result;
}
