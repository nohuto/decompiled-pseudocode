/*
 * XREFs of RtlpHpMetadataCommit @ 0x18004F044
 * Callers:
 *     RtlpHpHeapAllocate @ 0x18004CA78 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x1800505C0 (RtlpHpHeapExtendContext.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x180044E1C (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180047490 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x18004CD1C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180051688 (RtlCSparseBitmapBitmaskRead.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  char *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  int v13; // r9d
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a4;
  v8 = RtlpHpMetadataHeapCtxGet(&v16);
  if ( (_WORD)a1 )
  {
    v9 = 0;
  }
  else
  {
    v15 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a1 - qword_180166A68) >> 20));
    if ( v15 )
      v9 = v15 - 1;
    else
      v9 = 2;
  }
  v10 = 192LL * v9 + *(_QWORD *)v8;
  v11 = RtlpHpSegDescriptorValidate(v10 + 256, a1);
  v12 = a3 >> 12;
  v13 = -(int)v12;
  if ( a5 )
    v13 = v12;
  return RtlpHpSegPageRangeCommit(v10 + 256, v11, (unsigned int)(a2 - a1) >> 12, v13, 0, 0LL);
}
