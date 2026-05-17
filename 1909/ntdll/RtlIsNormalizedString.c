/*
 * XREFs of RtlIsNormalizedString @ 0x1800FA330
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x18002BFC0 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     RtlpGetNormalization @ 0x18007E30C (RtlpGetNormalization.c)
 *     Normalization__IsNormalized @ 0x1800F9E3C (Normalization__IsNormalized.c)
 */

__int64 __fastcall RtlIsNormalizedString(unsigned int a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v5; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = -1LL;
  if ( a3 < -1 || !a1 )
    return 3221225485LL;
  result = RtlpGetNormalization(a1, &v9);
  if ( (int)result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( a2[v7] );
      v5 = v7 + 1;
    }
    return Normalization__IsNormalized(v9, a2, v5, a4);
  }
  return result;
}
