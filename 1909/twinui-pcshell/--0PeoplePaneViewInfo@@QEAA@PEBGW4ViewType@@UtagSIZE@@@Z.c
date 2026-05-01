/*
 * XREFs of ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x18023E5B4
 * Callers:
 *     ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEBUtagSIZE@@@Z @ 0x18023E3A8 (--$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA-AV-$shared_ptr@UPeo.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180241AA0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall PeoplePaneViewInfo::PeoplePaneViewInfo(__int64 a1, _WORD *a2, int a3, __int64 a4)
{
  std::wstring::wstring(a1, a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a4;
  *(_DWORD *)(a1 + 60) = a3;
  *(_QWORD *)(a1 + 72) = 0LL;
  return a1;
}
