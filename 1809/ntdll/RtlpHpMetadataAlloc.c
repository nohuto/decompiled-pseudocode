/*
 * XREFs of RtlpHpMetadataAlloc @ 0x18006461C
 * Callers:
 *     RtlpHpHeapAllocate @ 0x1800635C0 (RtlpHpHeapAllocate.c)
 *     RtlpHpTagRunOnceInit @ 0x180064B80 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpTagContextAllocateTag @ 0x180064ED0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x180104210 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180104340 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801045C0 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180104CE0 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x18001DB14 (RtlpHpSegAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataHeapStart @ 0x180064718 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpAllocateHeap @ 0x1800649F0 (RtlpHpAllocateHeap.c)
 */

void *__fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // xmm0_8
  char *v8; // rax
  char v9; // dl
  __int64 v10; // rbx
  PVOID *v11; // rsi
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = *a4;
  v4 = v14;
  v8 = RtlpHpMetadataHeapCtxGet(&v14);
  *(_QWORD *)&v14 = v4;
  v9 = BYTE1(v4);
  v10 = 0LL;
  v11 = (PVOID *)v8;
  BYTE3(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  if ( BYTE1(v4) >= 2u )
    v9 = 2;
  BYTE1(v14) = v9;
  if ( (int)RtlpHpMetadataHeapStart(v8, &v14) >= 0 )
  {
    if ( a3 )
      return RtlpHpSegAlloc(
               (__int64)*v11 + (*((unsigned int *)*v11 + 68) < a1 ? 0xC0 : 0) + 256,
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return (void *)RtlpHpAllocateHeap(*v11);
  }
  return (void *)v10;
}
