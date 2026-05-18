/*
 * XREFs of sub_18002E180 @ 0x18002E180
 * Callers:
 *     sub_18002E820 @ 0x18002E820 (sub_18002E820.c)
 *     sub_18002E8B0 @ 0x18002E8B0 (sub_18002E8B0.c)
 *     sub_1800317BC @ 0x1800317BC (sub_1800317BC.c)
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 * Callees:
 *     sub_180031DA0 @ 0x180031DA0 (sub_180031DA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E180(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  v3 = a1 - 128;
  *(_QWORD *)(a1 - 128) = &std::stringbuf::`vftable';
  sub_180031DA0(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v3);
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
