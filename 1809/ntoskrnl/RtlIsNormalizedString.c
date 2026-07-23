/*
 * XREFs of RtlIsNormalizedString @ 0x14089A700
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1402F46A8 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     Normalization__IsNormalized @ 0x140899634 (Normalization__IsNormalized.c)
 *     RtlpGetNormalization @ 0x14089B764 (RtlpGetNormalization.c)
 */

NTSTATUS __stdcall RtlIsNormalizedString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PBOOLEAN Normalized)
{
  LONG v5; // edi
  __int64 v7; // rbx
  NTSTATUS result; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = SourceStringLength;
  if ( !SourceString )
    return -1073741811;
  if ( !Normalized )
    return -1073741811;
  v7 = -1LL;
  if ( SourceStringLength < -1 || !NormForm )
    return -1073741811;
  result = RtlpGetNormalization(NormForm, &v9);
  if ( result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( SourceString[v7] );
      v5 = v7 + 1;
    }
    return Normalization__IsNormalized(v9, (unsigned __int16 *)SourceString, v5, Normalized);
  }
  return result;
}
