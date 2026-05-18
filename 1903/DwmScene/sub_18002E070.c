/*
 * XREFs of sub_18002E070 @ 0x18002E070
 * Callers:
 *     sub_18002E710 @ 0x18002E710 (sub_18002E710.c)
 *     sub_18002E7A0 @ 0x18002E7A0 (sub_18002E7A0.c)
 *     sub_1800316AC @ 0x1800316AC (sub_1800316AC.c)
 *     sub_1800317E4 @ 0x1800317E4 (sub_1800317E4.c)
 * Callees:
 *     sub_180031C90 @ 0x180031C90 (sub_180031C90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E070(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  v3 = a1 - 128;
  *(_QWORD *)(a1 - 128) = &std::stringbuf::`vftable';
  sub_180031C90(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v3);
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
