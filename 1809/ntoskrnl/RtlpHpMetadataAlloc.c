/*
 * XREFs of RtlpHpMetadataAlloc @ 0x1400099CC
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140009ED8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x1401411D0 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpAllocateHeap @ 0x1400098C4 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataHeapStart @ 0x140009ACC (RtlpHpMetadataHeapStart.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140009E90 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 */

void *__fastcall RtlpHpMetadataAlloc(size_t a1, size_t a2, int a3, __int128 *a4)
{
  __int64 v7; // rbx
  _DWORD **v8; // rsi
  _QWORD *v9; // r9
  char v10; // dl
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = *a4;
  v7 = 0LL;
  v8 = (_DWORD **)RtlpHpMetadataHeapCtxGet(&v13);
  *(_QWORD *)&v13 = *v9;
  v10 = BYTE1(v13);
  BYTE3(v13) = 0;
  *((_QWORD *)&v13 + 1) = 0LL;
  if ( BYTE1(v13) >= 2u )
    v10 = 2;
  BYTE1(v13) = v10;
  if ( (int)RtlpHpMetadataHeapStart(v8, &v13) >= 0 )
  {
    if ( a3 )
      return (void *)RtlpHpSegAlloc(
                       (unsigned int)*v8 + 256 + ((unsigned int)(*v8)[68] < a1 ? 0xC0 : 0),
                       a1,
                       a2 < a1 ? 83886080 : 0x1000000);
    else
      return RtlpHpAllocateHeap(*v8, a1, 0x1000000, 0);
  }
  return (void *)v7;
}
