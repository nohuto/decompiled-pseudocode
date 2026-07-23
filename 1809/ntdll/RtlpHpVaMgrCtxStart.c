/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x18010D690
 * Callers:
 *     RtlHpHeapManagerStart @ 0x18010C56C (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1800644F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x18010DFFC (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // ebx
  unsigned int v10; // r8d
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  _BitScanForward((unsigned int *)&v5, 0x20u);
  v6 = a1 + 16;
  v7 = (a4 >> 20) + 1;
  if ( (a4 & 0xFFFFF) == 0 )
    v7 = a4 >> 20;
  *(_DWORD *)(v6 + 72) = v5;
  result = RtlCSparseBitmapStart(v6, v7 << 8, a4 >> 20, 1LL);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a1 = 0;
    v9 = 0;
    v11[0] = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 8) = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
    while ( 1 )
    {
      HIDWORD(v11[0]) = v9;
      v10 = 0x200000;
      if ( v9 == 3 )
        v10 = 0x40000000;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v11, v10);
      if ( (int)result < 0 )
        break;
      if ( ++v9 >= 4 )
        return 0LL;
    }
  }
  return result;
}
