/*
 * XREFs of sub_18004733C @ 0x18004733C
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     sub_180048BD4 @ 0x180048BD4 (sub_180048BD4.c)
 *     sub_18004AE3C @ 0x18004AE3C (sub_18004AE3C.c)
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 *     sub_18007013C @ 0x18007013C (sub_18007013C.c)
 *     sub_180076BD0 @ 0x180076BD0 (sub_180076BD0.c)
 *     sub_1800F0614 @ 0x1800F0614 (sub_1800F0614.c)
 * Callees:
 *     sub_180047CBC @ 0x180047CBC (sub_180047CBC.c)
 */

__int64 __fastcall sub_18004733C(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (a1[28] & 0x40000) != 0 ? 64 : 4;
  if ( a2 )
    return sub_180047CBC(a1);
  return result;
}
