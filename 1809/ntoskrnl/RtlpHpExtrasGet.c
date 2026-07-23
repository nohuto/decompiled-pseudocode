/*
 * XREFs of RtlpHpExtrasGet @ 0x1402FCC10
 * Callers:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpSizeHeapInternal @ 0x1400BEAE0 (RtlpHpSizeHeapInternal.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int128 *a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v7 = RtlpHpSizeHeapInternal(a1, a2, a3, v11);
  result = -1LL;
  if ( v7 != -1 )
  {
    result = 0LL;
    if ( a4 )
      *a4 = v7;
    if ( v11[0] )
    {
      v9 = a2 + v7;
      v10 = v9 + 16;
      if ( (a3 & 0x10000000) == 0 )
        v10 = v9;
      return (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return result;
}
