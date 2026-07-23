/*
 * XREFs of sub_1800EF484 @ 0x1800EF484
 * Callers:
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     sub_1800F1080 @ 0x1800F1080 (sub_1800F1080.c)
 */

__int64 __fastcall sub_1800EF484(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( HeapHandle )
  {
    if ( (HeapHandle[29] & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&stru_180163BE0);
      v4 = 7LL;
      if ( HeapHandle[4] != -571548178 )
        v4 = 52LL;
      if ( LOWORD(HeapHandle[v4]) == 0xFFFF )
        v5 = -1073741811;
      else
        v5 = sub_1800F1080(HeapHandle);
      RtlLeaveCriticalSection(&stru_180163BE0);
      return v5;
    }
  }
  else
  {
    dword_180163CCC = *(_DWORD *)(a2 + 12);
    qword_180163CE8 = *(_QWORD *)(a2 + 40);
    qword_180163CE0 = *(_QWORD *)(a2 + 32);
    qword_180163CD8 = *(_QWORD *)(a2 + 24);
    dword_180163CD0 = *(_DWORD *)(a2 + 16);
    sub_18006790C((__int64)sub_1800F1080, a2, 0);
    return 0LL;
  }
}
