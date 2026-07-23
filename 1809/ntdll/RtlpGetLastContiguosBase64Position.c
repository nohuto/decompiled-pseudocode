/*
 * XREFs of RtlpGetLastContiguosBase64Position @ 0x1800F8264
 * Callers:
 *     RtlValidateCorrelationVector @ 0x1800F8180 (RtlValidateCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x180087F30 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetLastContiguosBase64Position(_BYTE *a1)
{
  __int64 CorrelationVectorBufferLength; // rbx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned int v6; // r10d
  char v7; // cl
  __int64 v8; // rdi

  CorrelationVectorBufferLength = (int)RtlpGetCorrelationVectorBufferLength(a1);
  v5 = 0LL;
  do
  {
    v6 = v2;
    if ( v5 >= CorrelationVectorBufferLength )
      break;
    v7 = *(_BYTE *)(v5 + v4 + 1);
    if ( !v7 )
      break;
    if ( (unsigned __int8)(v7 - 43) <= 0x2Fu && (v8 = 0xFFFFFFC07FF1LL, _bittest64(&v8, (char)(v7 - 43)))
      || (unsigned __int8)(v7 - 97) <= 0x19u )
    {
      v3 = v2;
    }
    ++v2;
    ++v5;
  }
  while ( v3 == v6 );
  return v3;
}
