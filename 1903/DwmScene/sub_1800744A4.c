/*
 * XREFs of sub_1800744A4 @ 0x1800744A4
 * Callers:
 *     sub_180075088 @ 0x180075088 (sub_180075088.c)
 *     sub_180075110 @ 0x180075110 (sub_180075110.c)
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 * Callees:
 *     sub_18007E5C4 @ 0x18007E5C4 (sub_18007E5C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800744A4(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  v3 = a1 - 128;
  *(_QWORD *)(a1 - 128) = &std::wstringbuf::`vftable';
  sub_18007E5C4(a1 - 128);
  std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(v3);
  return std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(a1 - 120);
}
