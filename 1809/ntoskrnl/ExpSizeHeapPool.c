/*
 * XREFs of ExpSizeHeapPool @ 0x1401B7B34
 * Callers:
 *     ViPostPoolAllocation @ 0x140926ADC (ViPostPoolAllocation.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     ExpRemoveTagForBigPages @ 0x14013E560 (ExpRemoveTagForBigPages.c)
 */

__int64 __fastcall ExpSizeHeapPool(unsigned __int64 a1)
{
  int v1; // eax
  ULONG_PTR v2; // r10
  int v3; // edx
  __int64 v5[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  if ( (a1 & 0xFFF) != 0 )
    return 16LL * (unsigned __int8)*(_WORD *)(a1 - 14);
  v1 = MiDeterminePoolType(a1);
  v3 = 0;
  if ( v1 != 32 )
    v3 = v1;
  ExpRemoveTagForBigPages(v2, v3, 0, &v9, (int *)&v8, v5, &v7, &v6);
  return v5[0];
}
