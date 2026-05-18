/*
 * XREFs of sub_1800B7E10 @ 0x1800B7E10
 * Callers:
 *     sub_1800B82F0 @ 0x1800B82F0 (sub_1800B82F0.c)
 *     sub_1800B832C @ 0x1800B832C (sub_1800B832C.c)
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 *     sub_180104BBC @ 0x180104BBC (sub_180104BBC.c)
 *     sub_18010511C @ 0x18010511C (sub_18010511C.c)
 * Callees:
 *     sub_180031C90 @ 0x180031C90 (sub_180031C90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B7E10(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  v3 = a1 - 128;
  *(_QWORD *)(a1 - 128) = &std::stringbuf::`vftable';
  sub_180031C90(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v3);
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
