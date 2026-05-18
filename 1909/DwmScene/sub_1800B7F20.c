/*
 * XREFs of sub_1800B7F20 @ 0x1800B7F20
 * Callers:
 *     sub_1800B8400 @ 0x1800B8400 (sub_1800B8400.c)
 *     sub_1800B843C @ 0x1800B843C (sub_1800B843C.c)
 *     sub_1801049A4 @ 0x1801049A4 (sub_1801049A4.c)
 *     sub_180104CCC @ 0x180104CCC (sub_180104CCC.c)
 *     sub_18010522C @ 0x18010522C (sub_18010522C.c)
 * Callees:
 *     sub_180031DA0 @ 0x180031DA0 (sub_180031DA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B7F20(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  v3 = a1 - 128;
  *(_QWORD *)(a1 - 128) = &std::stringbuf::`vftable';
  sub_180031DA0(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v3);
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
