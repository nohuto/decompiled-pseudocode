/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x18005B6A4
 * Callers:
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x18005B71C (RtlpWalkHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x180064740 (RtlpHpTaggableHeap.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  signed __int64 v2; // r8
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 && (unsigned int)RtlpHpTaggableHeap() )
  {
    memset(v3, 0, 0x30uLL);
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal(a1, v3, v2) < 0 )
        break;
      if ( (BYTE2(v3[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_180163AB8 + 8LL * LOWORD(v3[4]) - 8) + 32LL),
               -v3[1]);
    }
  }
}
