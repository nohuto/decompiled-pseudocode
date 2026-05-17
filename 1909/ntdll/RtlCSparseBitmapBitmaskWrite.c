/*
 * XREFs of RtlCSparseBitmapBitmaskWrite @ 0x18004E6C4
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x18004E58C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18004E77C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18004E798 (RtlpCSparseBitmapPageCommit.c)
 *     RtlCSparseBitmapBitsClear @ 0x18004FFA8 (RtlCSparseBitmapBitsClear.c)
 */

__int64 __fastcall RtlCSparseBitmapBitmaskWrite(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  char v10; // di
  __int64 v11; // rsi
  __int64 v12; // r11
  signed __int64 v13; // rdx
  signed __int64 v14; // rax
  bool i; // zf
  signed __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF

  if ( a4 )
  {
    v7 = RtlpCSparseBitmapPageCommit(a1, (__int64)a2 / 0x8000, v18, &v19);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = a2 >> 6;
      v10 = a2 & 0x3F;
      v11 = a4 << v10;
      v12 = ~(3LL << v10);
      v13 = *(_QWORD *)(v8 + 8 * v9);
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v9), v11 | v12 & v13, v13);
      for ( i = v13 == v14; !i; i = v17 == v14 )
      {
        v17 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v9), v11 | v12 & v14, v14);
      }
      v7 = 0;
      RtlpCSparseBitmapUnlock(v18);
    }
    return (unsigned int)v7;
  }
  else
  {
    RtlCSparseBitmapBitsClear(a1, a2, 2LL);
    return 0LL;
  }
}
