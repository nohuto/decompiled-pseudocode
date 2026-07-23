/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x140170438
 * Callers:
 *     RtlHpHeapManagerStart @ 0x140170368 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14014154C (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x140170508 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // ebx
  unsigned int v12; // r8d
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  _BitScanForward(&v5, 0x20u);
  v7 = (a4 >> 20) + 1;
  *(_DWORD *)(a1 + 88) = v5;
  v9 = a1 + 16;
  if ( (a4 & 0xFFFFF) == 0 )
    v7 = a4 >> 20;
  result = RtlCSparseBitmapStart(v9, v7 << 8, a2, 1LL);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a1 = a2;
    v11 = 0;
    v13[0] = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 8) = a3;
    v13[1] = 0LL;
    v13[2] = 0LL;
    while ( 1 )
    {
      HIDWORD(v13[0]) = v11;
      v12 = 0x200000;
      if ( v11 == 3 )
        v12 = 0x40000000;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v13, v12);
      if ( (int)result < 0 )
        break;
      if ( ++v11 >= 4 )
        return 0LL;
    }
  }
  return result;
}
