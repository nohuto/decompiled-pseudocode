/*
 * XREFs of RtlpHpSegReAlloc @ 0x180045D7C
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegDescriptorValidate @ 0x180044E1C (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpReallocMove @ 0x180045F38 (RtlpHpReallocMove.c)
 *     RtlpHpExtrasSetPresent @ 0x180046E04 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpExtrasMove @ 0x180046E9C (RtlpHpExtrasMove.c)
 *     RtlpHpSegPageRangeCommit @ 0x180047490 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18009C730 (RtlpHpVsContextGrowInPlace.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned __int8 v13; // cl

  v8 = RtlpHpSegDescriptorValidate(a1, a3);
  if ( !v8 )
    return -1LL;
  v10 = *(_QWORD *)(a4 + 32);
  v11 = (v10 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v11 << 12) < v10 )
    return 0LL;
  v12 = (unsigned int)(v11 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  v13 = *(_BYTE *)(v8 + 24) & 0xC;
  if ( v13 >= 8u || v12 > *(unsigned __int8 *)(v8 + 31) )
  {
    if ( v13 != 12
      || *(_QWORD *)(a4 + 24) <= *(_QWORD *)a4
      || v10 > 0x20000
      || (v9 = RtlpHpVsContextGrowInPlace(*(PRTL_SRWLOCK *)(a1 + 32), a2)) == 0 )
    {
      if ( (a2 & 0x2000000) == 0 )
        return RtlpHpReallocMove(*(_QWORD *)(a1 + 56), a3, a4, a2);
      return 0LL;
    }
    if ( *(_DWORD *)(a4 + 16) )
    {
      RtlpHpExtrasMove(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
      RtlpHpExtrasSetPresent(*(_QWORD *)(a1 + 56), v9, a2);
    }
  }
  else
  {
    if ( (unsigned int)v11 > (unsigned __int16)~*(_WORD *)(v8 + 28) && (int)RtlpHpSegPageRangeCommit(a1, 0, 0LL) < 0 )
      return 0LL;
    if ( *(_DWORD *)(a4 + 16) )
      RtlpHpExtrasMove(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
    if ( v12 < *(unsigned __int8 *)(v8 + 31) )
      RtlpHpSegPageRangeShrink(a1, v8, v12, a2);
    *(_DWORD *)(v8 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
    return a3;
  }
  return v9;
}
