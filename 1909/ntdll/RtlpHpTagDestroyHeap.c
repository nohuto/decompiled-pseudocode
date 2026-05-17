/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x180050F74
 * Callers:
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpTaggableHeap @ 0x18004DCEC (RtlpHpTaggableHeap.c)
 *     RtlpWalkHeapInternal @ 0x180050FEC (RtlpWalkHeapInternal.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  signed __int64 v2; // r8
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 && RtlpHpTaggableHeap(a1) )
  {
    memset(v3, 0, 0x30uLL);
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal(a1, v3, v2) < 0 )
        break;
      if ( (BYTE2(v3[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_180163B58 + 8LL * LOWORD(v3[4]) - 8) + 32LL),
               -v3[1]);
    }
  }
}
