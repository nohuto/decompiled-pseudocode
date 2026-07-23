/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x1400BEAE0
 * Callers:
 *     RtlpHpSizeHeap @ 0x1400BEA50 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasGet @ 0x1402FCC10 (RtlpHpExtrasGet.c)
 * Callees:
 *     RtlpHpLargeAllocSize @ 0x1400080E4 (RtlpHpLargeAllocSize.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14000DE34 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegSizeInternal @ 0x1400BEB90 (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x1400BEC10 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int128 *a1, __int64 a2, unsigned int a3, int *a4)
{
  int v8; // eax
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r10d
  _QWORD *HeapManager; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  if ( (_WORD)a2 )
  {
    v8 = 0;
  }
  else
  {
    v16 = *a1;
    HeapManager = RtlpHpEnvGetHeapManager(&v16);
    v15 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 1), 2 * ((unsigned __int64)(v14 - HeapManager[9]) >> 20));
    if ( !v15 )
      return RtlpHpLargeAllocSize((__int64)a1, a2, a3, a4);
    v8 = v15 - 1;
    if ( v8 == 2 )
      return RtlpHpLargeAllocSize((__int64)a1, a2, a3, a4);
  }
  v9 = RtlpHpSegDescriptorValidate(&a1[12 * v8 + 16], a2);
  if ( v9 )
    return RtlpHpSegSizeInternal(v11 + (int)a1 + 256, v9, a2, v10, (__int64)a4);
  else
    return -1LL;
}
