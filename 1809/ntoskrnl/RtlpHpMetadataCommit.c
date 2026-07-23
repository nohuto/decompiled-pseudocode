/*
 * XREFs of RtlpHpMetadataCommit @ 0x14019224C
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1401363A8 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1401411D0 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x140009E90 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpSegPageRangeCommit @ 0x14000C594 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14000DE34 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegDescriptorValidate @ 0x1400BEC10 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  __int128 *v8; // r9
  _QWORD *v9; // r14
  _QWORD *HeapManager; // rax
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // rsi
  int v16; // r9d
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = *a4;
  v9 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v18);
  if ( (_WORD)a1 )
  {
    v12 = 0;
  }
  else
  {
    v18 = *v8;
    HeapManager = RtlpHpEnvGetHeapManager(&v18);
    v11 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 1), 2 * ((a1 - HeapManager[9]) >> 20));
    if ( v11 )
      v12 = v11 - 1;
    else
      v12 = 2;
  }
  v13 = RtlpHpSegDescriptorValidate(*v9 + 192LL * v12 + 256, a1);
  v15 = a3 >> 12;
  v16 = -(int)v15;
  if ( a5 )
    v16 = v15;
  return RtlpHpSegPageRangeCommit(v14 + 256, v13, (unsigned int)(a2 - a1) >> 12, v16, 0, 0LL);
}
