/*
 * XREFs of sub_18010A694 @ 0x18010A694
 * Callers:
 *     sub_180038840 @ 0x180038840 (sub_180038840.c)
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_180044D74 @ 0x180044D74 (sub_180044D74.c)
 *     sub_1800450F0 @ 0x1800450F0 (sub_1800450F0.c)
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_18004580C @ 0x18004580C (sub_18004580C.c)
 *     sub_180045AF0 @ 0x180045AF0 (sub_180045AF0.c)
 *     sub_18004622C @ 0x18004622C (sub_18004622C.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_180046FB0 @ 0x180046FB0 (sub_180046FB0.c)
 *     sub_180047014 @ 0x180047014 (sub_180047014.c)
 *     sub_180047C74 @ 0x180047C74 (sub_180047C74.c)
 *     sub_180047CBC @ 0x180047CBC (sub_180047CBC.c)
 *     sub_180048BD4 @ 0x180048BD4 (sub_180048BD4.c)
 *     sub_180048DF4 @ 0x180048DF4 (sub_180048DF4.c)
 *     sub_180048F6C @ 0x180048F6C (sub_180048F6C.c)
 *     sub_18004AB8C @ 0x18004AB8C (sub_18004AB8C.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 *     sub_180050634 @ 0x180050634 (sub_180050634.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     sub_18006E5C8 @ 0x18006E5C8 (sub_18006E5C8.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     sub_18008045C @ 0x18008045C (sub_18008045C.c)
 *     sub_18009BF80 @ 0x18009BF80 (sub_18009BF80.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 *     sub_1800EFD8C @ 0x1800EFD8C (sub_1800EFD8C.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 *     sub_18010C01C @ 0x18010C01C (sub_18010C01C.c)
 * Callees:
 *     sub_1801016A0 @ 0x1801016A0 (sub_1801016A0.c)
 */

__int64 __fastcall sub_18010A694(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_180162800 != a2 )
  {
    qword_180162818 = a5;
    qword_180162820 = a6;
    dword_1801627F8 = a1;
    qword_180162800 = a2;
    qword_180162808 = a3;
    qword_180162810 = a4;
    return sub_1801016A0(a1, a2, a3);
  }
  return result;
}
