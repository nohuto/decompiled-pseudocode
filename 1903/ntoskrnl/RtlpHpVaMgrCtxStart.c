/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x140179ABC
 * Callers:
 *     RtlHpHeapManagerStart @ 0x1401799EC (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140159F14 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x140179B84 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  int v10; // ebx
  unsigned int v11; // r8d
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+28h] [rbp-20h]

  _BitScanForward(&v5, 0x20u);
  v6 = (a4 >> 20) + 1;
  *(_DWORD *)(a1 + 24) = v5;
  if ( (a4 & 0xFFFFF) == 0 )
    v6 = a4 >> 20;
  result = RtlCSparseBitmapStart(a1 + 32, v6 << 8, a2, 1LL);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    v12[0] = -1;
    *(_DWORD *)a1 = a2;
    v10 = 0;
    *(_QWORD *)(a1 + 8) = a3;
    v13 = 0LL;
    while ( 1 )
    {
      v12[1] = v10;
      v11 = 0x200000;
      if ( v10 == 3 )
        v11 = 0x40000000;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v12, v11);
      if ( (int)result < 0 )
        break;
      if ( ++v10 >= 4 )
        return 0LL;
    }
  }
  return result;
}
