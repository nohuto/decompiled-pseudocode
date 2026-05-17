/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x18004E500
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x18004E410 (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18004E77C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18004E798 (RtlpCSparseBitmapPageCommit.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  void *v5; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = (void *)((a2 << v3) + *(_QWORD *)(a1 + 24));
  if ( (int)RtlpCSparseBitmapPageCommit(a1 + 16, 8 * (a2 << v3) / 0x8000, v7, &v8) < 0 )
    return 0LL;
  memmove(v5, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(v7);
  return v5;
}
