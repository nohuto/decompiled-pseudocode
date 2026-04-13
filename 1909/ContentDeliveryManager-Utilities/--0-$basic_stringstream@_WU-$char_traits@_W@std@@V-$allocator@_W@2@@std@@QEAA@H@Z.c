/*
 * XREFs of ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x180099BE8
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x18009846C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180033A10 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x180076868 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
        __int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_istream<unsigned short>'};
  *(_QWORD *)(a1 + 16) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
  *(_QWORD *)(a1 + 152) = &std::wios::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 24;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::wios::init((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), a1 + 24);
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &std::basic_ostream<unsigned short>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v2 + a1 + 12) = v2 - 16;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_iostream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 32;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>((_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &std::basic_stringbuf<unsigned short>::`vftable';
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  return a1;
}
