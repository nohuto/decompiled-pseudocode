/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x18005CD00
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x18005CC10 (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18005D4B4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18005D4D0 (RtlpCSparseBitmapPageCommit.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v5; // rdx
  void *v6; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 72);
  v5 = a2 << v3;
  v6 = (void *)(v5 + *(_QWORD *)(a1 + 16));
  if ( (int)RtlpCSparseBitmapPageCommit(a1, 8 * v5 / 0x8000, v8, &v9) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(v8);
  return v6;
}
