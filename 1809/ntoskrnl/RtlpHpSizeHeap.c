/*
 * XREFs of RtlpHpSizeHeap @ 0x1400BEA50
 * Callers:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpSizeHeapInternal @ 0x1400BEAE0 (RtlpHpSizeHeapInternal.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // r9d
  int v6; // r8d
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rsi

  v4 = *(_DWORD *)(a1 + 220);
  v5 = a3 | *(_DWORD *)(a1 + 20);
  v6 = 0;
  if ( v4 )
    LOBYTE(v6) = v4 == KeGetCurrentThread()[1].CurrentRunTime;
  v7 = v5 | 1;
  if ( !v6 )
    v7 = v5;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  result = RtlpHpSizeHeapInternal(a1, a2, v7, 0LL);
  v9 = result;
  if ( result != -1 && (v7 & 0x10000000) != 0 )
  {
    if ( RtlCompareMemory((const void *)(result + a2), CheckHeapFillPattern, 0x10uLL) == 16 )
      return v9;
    else
      return -1LL;
  }
  return result;
}
