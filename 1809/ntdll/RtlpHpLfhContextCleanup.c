/*
 * XREFs of RtlpHpLfhContextCleanup @ 0x1800655B0
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhOwnerCleanup @ 0x180001DA8 (RtlpHpLfhOwnerCleanup.c)
 */

_QWORD *__fastcall RtlpHpLfhContextCleanup(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  _QWORD *result; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // r14
  __int64 v8; // r15

  v2 = (__int64 *)(a1 + 128);
  v3 = 129LL;
  do
  {
    result = (_QWORD *)*v2;
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
