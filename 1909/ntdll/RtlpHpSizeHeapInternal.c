/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x180046C60
 * Callers:
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x180046D10 (RtlpHpExtrasGet.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x1800449D0 (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180044E1C (RtlpHpSegDescriptorValidate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180051688 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x1800843E0 (RtlpHpLargeAllocSize.c)
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
    v13 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_180166A68) >> 20));
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
