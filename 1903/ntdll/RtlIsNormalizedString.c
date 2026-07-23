/*
 * XREFs of RtlIsNormalizedString @ 0x1800FA250
 * Callers:
 *     sub_18002BFC0 @ 0x18002BFC0 (sub_18002BFC0.c)
 * Callees:
 *     sub_18007DC6C @ 0x18007DC6C (sub_18007DC6C.c)
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 */

NTSTATUS __cdecl RtlIsNormalizedString(
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
  result = sub_18007DC6C(NormForm, &v9);
  if ( result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( SourceString[v7] );
      v5 = v7 + 1;
    }
    return sub_1800F9D5C(v9, (unsigned __int16 *)SourceString, v5, Normalized);
  }
  return result;
}
