/*
 * XREFs of KeFoldProcessStatisticsThread @ 0x14008D88C
 * Callers:
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x14008E430 (RtlTimelineBitmapMerge.c)
 */

signed __int64 __fastcall KeFoldProcessStatisticsThread(__int64 a1)
{
  __int64 v1; // r10
  signed __int64 result; // rax
  __int64 v3; // r11
  _QWORD *v4; // r10
  __int64 v5; // r11
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 544);
  *(_DWORD *)(v1 + 620) += *(_DWORD *)(a1 + 652);
  *(_DWORD *)(v1 + 624) += *(_DWORD *)(a1 + 732);
  *(_DWORD *)(v1 + 628) += *(_DWORD *)(a1 + 132);
  *(_QWORD *)(v1 + 592) += *(_QWORD *)(a1 + 72);
  *(_QWORD *)(v1 + 600) += *(unsigned int *)(a1 + 340);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1208), *(_QWORD *)(a1 + 1448));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1216), *(_QWORD *)(a1 + 1456));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1224), *(_QWORD *)(a1 + 1464));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1232), *(_QWORD *)(a1 + 1472));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1240), *(_QWORD *)(a1 + 1480));
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1248), *(_QWORD *)(a1 + 1488));
  v3 = *(_QWORD *)(a1 + 1968);
  if ( v3 )
  {
    RtlTimelineBitmapMerge(*(_QWORD *)(v1 + 1848) + 272LL, v3 + 192);
    v6 = v5 - (_QWORD)v4;
    v7 = 4LL;
    do
    {
      v8 = 2LL;
      do
      {
        *v4 += *(_QWORD *)((char *)v4 + v6);
        v4[18] += *(_QWORD *)((char *)v4 + v6 + 64);
        result = *(_QWORD *)((char *)v4 + v6 + 128);
        v4[26] += result;
        ++v4;
        --v8;
      }
      while ( v8 );
      --v7;
    }
    while ( v7 );
  }
  return result;
}
