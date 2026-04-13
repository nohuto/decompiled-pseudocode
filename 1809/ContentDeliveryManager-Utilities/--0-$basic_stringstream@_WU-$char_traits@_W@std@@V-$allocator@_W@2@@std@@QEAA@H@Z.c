/*
 * XREFs of ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x180095F0C
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800947D8 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180032B2C (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x180074E84 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi

  *a1 = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_istream<unsigned short>'};
  v2 = a1 + 2;
  a1[2] = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
  a1[19] = &std::wios::`vftable';
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 24;
  a1[1] = 0LL;
  v3 = a1 + 3;
  std::wios::init((std::ios_base *)((char *)a1 + *(int *)(*a1 + 4LL)), (__int64)(a1 + 3));
  *(_QWORD *)((char *)v2 + *(int *)(*v2 + 4LL)) = &std::basic_ostream<unsigned short>::`vftable';
  *(_DWORD *)((char *)v2 + *(int *)(*v2 + 4LL) - 4) = *(_DWORD *)(*v2 + 4LL) - 16;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_iostream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 32;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 152;
  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(v3);
  *v3 = &std::basic_stringbuf<unsigned short>::`vftable';
  v3[13] = 0LL;
  *((_DWORD *)v3 + 28) = 0;
  return a1;
}
