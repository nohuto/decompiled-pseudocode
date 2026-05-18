/*
 * XREFs of sub_18008912C @ 0x18008912C
 * Callers:
 *     sub_180089F64 @ 0x180089F64 (sub_180089F64.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_18006303C @ 0x18006303C (sub_18006303C.c)
 *     sub_180088FBC @ 0x180088FBC (sub_180088FBC.c)
 *     sub_18008D16C @ 0x18008D16C (sub_18008D16C.c)
 *     sub_18011E078 @ 0x18011E078 (sub_18011E078.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008912C(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  v6[1] = -2LL;
  v6[2] = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18006303C(a1 + 16, a3);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 88) = sub_18008D16C(a1 + 88);
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  HIDWORD(v6[0]) = (unsigned __int64)(a1 + 120) >> 32;
  LODWORD(v6[0]) = 0;
  sub_180088FBC(a1 + 120, v6);
  v6[0] = a1 + 184;
  sub_18011E078(a1 + 184);
  *(_DWORD *)(a1 + 192) = 0;
  v6[0] = a1 + 200;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 200) = sub_180041C80();
  return a1;
}
