/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x14000A588
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14000B270 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x140140FFC (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskWrite @ 0x14000A690 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x14000AC04 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegSegmentFree @ 0x1401547C4 (RtlpHpSegSegmentFree.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  __int64 HeapManager; // rax
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  _BOOL8 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  __int128 v15[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+20h]

  v3 = a2 + 2;
  v5 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( !v5 )
    return 0LL;
  v15[0] = *(_OWORD *)(a1 + 40);
  HeapManager = RtlpHpEnvGetHeapManager(v15);
  v9 = v8;
  v10 = HeapManager;
  v11 = v8 != 0x100000;
  v12 = 2 * ((unsigned __int64)(v5 - *(_QWORD *)(HeapManager + 72)) >> 20);
  v16 = v12 + 2 * ((unsigned __int64)v8 >> 20);
  if ( v12 >= v16 )
  {
LABEL_5:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v9 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    v13 = v5;
    v5 = 0LL;
  }
  else
  {
    while ( (int)RtlCSparseBitmapBitmaskWrite(v10 + 8, v12, v7, v11 + 1) >= 0 )
    {
      v12 += 2LL;
      if ( v12 >= v16 )
        goto LABEL_5;
    }
    v13 = 0LL;
  }
  if ( v5 )
    RtlpHpSegSegmentFree(a1);
  return v13;
}
