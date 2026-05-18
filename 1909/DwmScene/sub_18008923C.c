/*
 * XREFs of sub_18008923C @ 0x18008923C
 * Callers:
 *     sub_18008A074 @ 0x18008A074 (sub_18008A074.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_18006314C @ 0x18006314C (sub_18006314C.c)
 *     sub_1800890CC @ 0x1800890CC (sub_1800890CC.c)
 *     sub_18008D27C @ 0x18008D27C (sub_18008D27C.c)
 *     sub_18011E188 @ 0x18011E188 (sub_18011E188.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008923C(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  v6[1] = -2LL;
  v6[2] = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18006314C(a1 + 16, a3);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 88) = sub_18008D27C(a1 + 88);
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  HIDWORD(v6[0]) = (unsigned __int64)(a1 + 120) >> 32;
  LODWORD(v6[0]) = 0;
  sub_1800890CC(a1 + 120, v6);
  v6[0] = a1 + 184;
  sub_18011E188(a1 + 184);
  *(_DWORD *)(a1 + 192) = 0;
  v6[0] = a1 + 200;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 200) = sub_180041D90();
  return a1;
}
