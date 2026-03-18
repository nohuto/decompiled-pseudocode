/*
 * XREFs of RtlpHpMetadataCommit @ 0x14019A47C
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x140136818 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x140159BB4 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x14001E790 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x14001F7D8 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140110A9C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1401158A0 (RtlCSparseBitmapBitmaskRead.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  __int128 *v8; // r9
  char *v9; // r14
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rsi
  int v14; // r9d
  _QWORD *HeapManager; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = *a4;
  v9 = RtlpHpMetadataHeapCtxGet(&v18);
  if ( (_WORD)a1 )
  {
    v10 = 0;
  }
  else
  {
    v18 = *v8;
    HeapManager = RtlpHpEnvGetHeapManager(&v18);
    v17 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((a1 - HeapManager[1]) >> 20));
    if ( v17 )
      v10 = v17 - 1;
    else
      v10 = 2;
  }
  v11 = RtlpHpSegDescriptorValidate(*(_QWORD *)v9 + 192LL * v10 + 256, a1);
  v13 = a3 >> 12;
  v14 = -(int)v13;
  if ( a5 )
    v14 = v13;
  return RtlpHpSegPageRangeCommit(v12 + 256, v11, (unsigned int)(a2 - a1) >> 12, v14, 0, 0LL);
}
