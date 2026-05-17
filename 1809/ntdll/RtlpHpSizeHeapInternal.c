/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x18005B290
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18001556C (RtlpHpReAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x18005B220 (RtlpHpExtrasGet.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800154AC (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegSizeInternal @ 0x180016158 (RtlpHpSegSizeInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 */

unsigned __int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v13; // rax

  if ( (_WORD)a2 )
  {
    v8 = 0;
  }
  else
  {
    v13 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((a2 - qword_180166948) >> 20));
    if ( !v13 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
    v8 = v13 - 1;
  }
  if ( v8 == 2 )
    return RtlpHpLargeAllocSize(a1, a2, a3, a4);
  v9 = 192LL * v8 + a1;
  v10 = RtlpHpSegDescriptorValidate(v9 + 256, a2);
  if ( v10 )
    return RtlpHpSegSizeInternal(v9 + 256, v10, a2, v11, a4);
  else
    return -1LL;
}
