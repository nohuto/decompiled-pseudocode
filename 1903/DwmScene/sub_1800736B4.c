/*
 * XREFs of sub_1800736B4 @ 0x1800736B4
 * Callers:
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800736B4(__int64 a1, char a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // eax

  if ( a3 )
  {
    *(_QWORD *)a1 = &unk_1801E2770;
    *(_QWORD *)(a1 + 16) = &unk_1801E2778;
    std::wios::wios(a1 + 152);
  }
  std::wiostream::basic_iostream<wchar_t>(a1, a1 + 24, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::wstreambuf::wstreambuf(a1 + 24);
  *(_QWORD *)(a1 + 24) = &std::wstringbuf::`vftable';
  *(_QWORD *)(a1 + 128) = 0LL;
  v5 = (4 * ((a2 & 1) == 0)) | 2;
  if ( (a2 & 2) != 0 )
    v5 = 4 * ((a2 & 1) == 0);
  v6 = v5 | 8;
  if ( (a2 & 8) == 0 )
    v6 = v5;
  v7 = v6 | 0x10;
  if ( (a2 & 4) == 0 )
    v7 = v6;
  *(_DWORD *)(a1 + 136) = v7;
  return a1;
}
