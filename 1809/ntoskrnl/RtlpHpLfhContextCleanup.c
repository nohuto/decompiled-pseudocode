/*
 * XREFs of RtlpHpLfhContextCleanup @ 0x1401548C0
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1401545C4 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhOwnerCleanup @ 0x140154950 (RtlpHpLfhOwnerCleanup.c)
 */

__int64 __fastcall RtlpHpLfhContextCleanup(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // r14
  __int64 v8; // r15

  v2 = (__int64 *)(a1 + 128);
  v3 = 129LL;
  do
  {
    result = *v2;
    if ( (*v2 & 1) == 0 )
    {
      v5 = *v2;
      v6 = *(_BYTE *)(*v2 + 2);
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          RtlpHpLfhOwnerCleanup(a1, *(_QWORD *)(*(_QWORD *)(v5 + 96) + v7));
          v7 += 8LL;
          --v8;
        }
        while ( v8 );
      }
      result = RtlpHpLfhOwnerCleanup(a1, v5);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
