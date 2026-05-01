/*
 * XREFs of ??$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA?AV?$unique_ptr@Vunique_animation_clock@@U?$default_delete@Vunique_animation_clock@@@std@@@0@AEBU_GUID@@AEBH$$QEAH@Z @ 0x1802663AC
 * Callers:
 *     ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180267600 (-AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802686B4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x180266890 (--0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z.c)
 */

_QWORD *__fastcall std::make_unique<unique_animation_clock,_GUID const &,int const &,int,0>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  unique_animation_clock *v7; // [rsp+40h] [rbp+18h]

  v7 = (unique_animation_clock *)operator new(0x14uLL);
  *a1 = unique_animation_clock::unique_animation_clock(v7, &AnimationClock_TabSwitch, 0x3E8u, *a4);
  return a1;
}
