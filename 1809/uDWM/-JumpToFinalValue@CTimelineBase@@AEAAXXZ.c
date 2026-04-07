/*
 * XREFs of ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180034DA8
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180034960 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x180034BE4 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180038E74 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180078984 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimelineBase::JumpToFinalValue(CTimelineBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // xmm0_8

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((double *)this + 3) < 0.0 )
    v3 = *((_QWORD *)this + 4);
  else
    v3 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = v3;
  *((_BYTE *)this + 72) = 1;
}
