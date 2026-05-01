/*
 * XREFs of ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018830C
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800259FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180017438 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(__int64 a1, float *a2)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  HMONITOR v6; // rbp
  HMONITOR v7; // r8
  int v8; // esi
  HMONITOR v9; // r8
  int v10; // edi
  HMONITOR v11; // r8
  int v12; // ebx
  HMONITOR v13; // r8
  int v14; // eax
  HRGN RectRgn; // rax
  __int64 v16; // r8
  HGDIOBJ v17; // rbx
  unsigned int v18; // edi
  int v19; // eax
  HGDIOBJ ho[2]; // [rsp+20h] [rbp-58h] BYREF
  RECT v22; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  ho[1] = (HGDIOBJ)-2LL;
  v4 = *(float *)(a1 + 196);
  v22.left = (int)v4;
  v5 = *(float *)(a1 + 200);
  v22.top = (int)v5;
  v22.right = (int)(float)(v4 + *(float *)(a1 + 204));
  v22.bottom = (int)(float)(v5 + *(float *)(a1 + 208));
  v6 = MonitorFromRect(&v22, 0);
  ho[0] = 0LL;
  v8 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
         (ExperienceManagerUtils *)(unsigned int)((int)a2[1] + (int)a2[3]),
         (__int64)v6,
         v7);
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
          (ExperienceManagerUtils *)(unsigned int)((int)*a2 + (int)a2[2]),
          (__int64)v6,
          v9);
  v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
          (ExperienceManagerUtils *)(unsigned int)(int)a2[1],
          (__int64)v6,
          v11);
  v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)(int)*a2, (__int64)v6, v13);
  RectRgn = CreateRectRgn(v14, v12, v10, v8);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
    ho,
    RectRgn);
  v17 = ho[0];
  if ( ho[0] )
  {
    LOBYTE(v16) = 1;
    v19 = (*(__int64 (__fastcall **)(_QWORD, HGDIOBJ, __int64))(**(_QWORD **)(a1 + 168) + 144LL))(
            *(_QWORD *)(a1 + 168),
            ho[0],
            v16);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1950LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v19);
    v18 = 0;
  }
  else
  {
    v18 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x80004005LL);
  }
  if ( v17 )
    DeleteObject(v17);
  return v18;
}
