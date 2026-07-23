/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14071C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpGetCurrentUserUILanguage @ 0x14071C150 (ExpGetCurrentUserUILanguage.c)
 */

NTSTATUS __stdcall NtQueryDefaultUILanguage(LANGID *LanguageId)
{
  LANGID *v1; // rdi

  v1 = LanguageId;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LanguageId = (LANGID *)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v1 < 0x7FFFFFFF0000LL )
      LanguageId = v1;
    *LanguageId = *LanguageId;
  }
  if ( (int)ExpGetCurrentUserUILanguage(LanguageId, v1) < 0 )
    *v1 = WORD1(NlsMbCodePageTag);
  return 0;
}
