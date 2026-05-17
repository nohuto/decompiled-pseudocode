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

__int64 __fastcall sub_1800EF484(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&unk_180163BE0);
      v5 = 28LL;
      if ( *(_DWORD *)(a1 + 16) != -571548178 )
        v5 = 208LL;
      if ( *(_WORD *)(v5 + a1) == 0xFFFF )
        v6 = -1073741811;
      else
        v6 = sub_1800F1080(a1, a2);
      RtlLeaveCriticalSection((__int64)&unk_180163BE0);
      return v6;
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
