/*
 * XREFs of ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1801CEB0C
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003F398 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x180041548 (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800415B0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1800821B0 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(
        CortanaDesktopExperienceView *a1,
        float *a2)
{
  ExperienceManagerUtils *v4; // r14
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  HMONITOR v7; // r8
  int v8; // esi
  HMONITOR v9; // r8
  HMONITOR v10; // r8
  int v11; // ebx
  HMONITOR v12; // r8
  int v13; // eax
  HRGN RectRgn; // rax
  __int64 v15; // r8
  HGDIOBJ v16; // rbx
  unsigned int v17; // edi
  int v18; // eax
  HGDIOBJ ho[2]; // [rsp+20h] [rbp-58h] BYREF
  RECT rc; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  ho[1] = (HGDIOBJ)-2LL;
  CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &rc);
  v4 = (ExperienceManagerUtils *)MonitorFromRect(&rc, 0);
  ho[0] = 0LL;
  v5 = (int)a2[1];
  v6 = (int)*a2;
  v8 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(v5 + (int)a2[3]), v4, v7);
  LODWORD(a2) = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(v6 + (int)a2[2]), v4, v9);
  v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v5, v4, v10);
  v13 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v6, v4, v12);
  RectRgn = CreateRectRgn(v13, v11, (int)a2, v8);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    ho,
    RectRgn);
  v16 = ho[0];
  if ( ho[0] )
  {
    LOBYTE(v15) = 1;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, HGDIOBJ, __int64))(**((_QWORD **)a1 + 21) + 144LL))(
            *((_QWORD **)a1 + 21),
            ho[0],
            v15);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x87B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v18);
    v17 = 0;
  }
  else
  {
    v17 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x879,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x80004005LL);
  }
  if ( v16 )
    DeleteObject(v16);
  return v17;
}
