/*
 * XREFs of RtlpHpMetadataCommit @ 0x180066ABC
 * Callers:
 *     RtlpHpHeapAllocate @ 0x1800635C0 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x180063B20 (RtlpHpHeapExtendContext.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800154AC (RtlpHpSegDescriptorValidate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  char *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  int v14; // r9d
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a4;
  v8 = RtlpHpMetadataHeapCtxGet(&v16);
  if ( (_WORD)a1 )
  {
    v10 = 0;
  }
  else
  {
    v9 = RtlCSparseBitmapBitmaskRead((__int64)&unk_180166908, 2 * ((a1 - qword_180166948) >> 20));
    if ( v9 )
      v10 = v9 - 1;
    else
      v10 = 2;
  }
  v11 = 192LL * v10 + *(_QWORD *)v8;
  v12 = RtlpHpSegDescriptorValidate(v11 + 256, a1);
  v13 = a3 >> 12;
  v14 = -(int)v13;
  if ( a5 )
    v14 = v13;
  return RtlpHpSegPageRangeCommit((__int64 *)(v11 + 256), v12, (unsigned int)(a2 - a1) >> 12, v14, 0, 0LL);
}
