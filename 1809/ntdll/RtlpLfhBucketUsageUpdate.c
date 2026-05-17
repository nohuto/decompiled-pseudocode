/*
 * XREFs of RtlpLfhBucketUsageUpdate @ 0x180064884
 * Callers:
 *     RtlpHpLfhBucketUpdateStats @ 0x1800647F4 (RtlpHpLfhBucketUpdateStats.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpLfhBucketUsageUpdate(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  signed __int64 v5; // rax
  signed __int64 v6; // rdx
  __int16 v7; // cx
  signed __int64 v9; // [rsp+8h] [rbp+8h]

  v3 = a2;
  do
  {
    v5 = *(_QWORD *)(a1 + 8 * v3 + 128);
    v6 = v5;
    v9 = v5;
    if ( (v5 & 1) == 0 )
      break;
    if ( a3 )
    {
      if ( (BYTE2(v5) & 0x1Fu) > 0x10 || WORD1(v5) > 0xFF00u )
        return v6;
      v7 = WORD1(v5) + 33;
      goto LABEL_6;
    }
    if ( WORD1(v5) > 1u )
    {
      v7 = WORD1(*(_QWORD *)(a1 + 8 * v3 + 128)) - 1;
LABEL_6:
      WORD1(v9) = v7;
      v6 = v9;
    }
  }
  while ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v3 + 128), v6, v5) );
  return v6;
}
