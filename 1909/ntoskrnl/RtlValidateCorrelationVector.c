/*
 * XREFs of RtlValidateCorrelationVector @ 0x1408D4860
 * Callers:
 *     <none>
 * Callees:
 *     strncmp @ 0x14019FC70 (strncmp.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x140312514 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1408D4A1C (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1408D4A40 (RtlpGetLastContiguosBase64Position.c)
 */

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1, __int64 a2, __int64 a3)
{
  int LastContiguosBase64Position; // esi
  __int64 v5; // rdx
  int CorrelationVectorEndPosition; // eax
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  __int64 v12; // rdx

  if ( !a1 || (int)RtlpGetCorrelationVectorBufferLength(a1, a2, a3) < 0 )
    return 3221225485LL;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position(a1);
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)a1, v5);
  if ( *a1 == 1 )
  {
    if ( LastContiguosBase64Position != 15 )
      return 3221225485LL;
  }
  else if ( *a1 == 2 && LastContiguosBase64Position != 21 )
  {
    return 3221225485LL;
  }
  v8 = LastContiguosBase64Position + 1;
  v9 = v8;
  if ( a1[v8 + 1] != 46 )
    return 3221225485LL;
  v10 = CorrelationVectorEndPosition;
  while ( v9 < v10 )
  {
    if ( a1[v9 + 1] == 46 )
    {
      ++v8;
      ++v9;
      v11 = 0;
      v12 = v8;
      if ( v9 < v10 )
      {
        do
        {
          if ( (unsigned __int8)(a1[v9 + 1] - 48) > 9u )
            break;
          ++v8;
          ++v9;
          ++v11;
        }
        while ( v9 < v10 );
        if ( v11 && v11 <= 10 && (v11 != 10 || strncmp(&a1[v12 + 1], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
