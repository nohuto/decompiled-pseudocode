/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x14010F094
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x14010EFA8 (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14010F148 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x14010F18C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14010F3D8 (RtlpCSparseBitmapPageCommit.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v4; // rdx
  void *v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v8[0] = 0LL;
  v8[1] = 0LL;
  v4 = a2 << v3;
  v9 = 0uLL;
  v6 = (void *)(v4 + *(_QWORD *)(a1 + 24));
  if ( (int)((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int128 *))RtlpCSparseBitmapPageCommit)(
              a1 + 16,
              8 * v4 / 0x8000,
              v8,
              &v9) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(v8);
  RtlCSparseBitmapLeaveLockingRegion(&v9);
  return v6;
}
