/*
 * XREFs of RtlpHpMetadataAlloc @ 0x140110968
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1401102C4 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140159BB4 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14005FD40 (RtlpHpSegAlloc.c)
 *     RtlpHpMetadataHeapStart @ 0x140110A68 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140110A9C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpAllocateHeap @ 0x140110AE4 (RtlpHpAllocateHeap.c)
 */

_WORD *__fastcall RtlpHpMetadataAlloc(size_t Size, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v7; // rbx
  PVOID *v8; // rsi
  _QWORD *v9; // r9
  char v10; // dl
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = *a4;
  v7 = 0LL;
  v8 = (PVOID *)RtlpHpMetadataHeapCtxGet(&v13);
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
      return RtlpHpSegAlloc(
               (__int64)*v8 + (*((unsigned int *)*v8 + 68) < Size ? 0xC0 : 0) + 256,
               Size,
               Size,
               a2,
               a2 < Size ? 83886080 : 0x1000000);
    else
      return (_WORD *)RtlpHpAllocateHeap(*v8);
  }
  return (_WORD *)v7;
}
