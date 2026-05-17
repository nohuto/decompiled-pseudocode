/*
 * XREFs of sub_18006E8DC @ 0x18006E8DC
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E8DC(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
