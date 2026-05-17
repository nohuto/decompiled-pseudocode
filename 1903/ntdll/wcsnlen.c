/*
 * XREFs of wcsnlen @ 0x1800924A0
 * Callers:
 *     _wcslwr_s @ 0x18008E290 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x18008E770 (_wcsupr_s.c)
 *     sub_1800EB4E0 @ 0x1800EB4E0 (sub_1800EB4E0.c)
 *     sub_1800EB568 @ 0x1800EB568 (sub_1800EB568.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC7E0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EC9F0 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Source )
  {
    if ( !*Source )
      break;
    ++result;
  }
  return result;
}
