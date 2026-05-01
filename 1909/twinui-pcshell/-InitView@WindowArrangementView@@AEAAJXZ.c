/*
 * XREFs of ?InitView@WindowArrangementView@@AEAAJXZ @ 0x1803E1A64
 * Callers:
 *     ?Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1803E1B70 (-Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1803E11B0 (-GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1803E1440 (-InitDragData@WindowArrangementView@@AEAAJXZ.c)
 *     ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x1803E182C (-InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1803EA218 (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 */

__int64 __fastcall WindowArrangementView::InitView(WindowArrangementView *this)
{
  char *v2; // rbx
  int Instance; // eax
  unsigned int v4; // ebx
  int PrimaryMonitor; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 72) != 2
    || (v2 = (char *)this + 104,
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13),
        Instance = DragData_CreateInstance(
                     *((_QWORD *)this + 2),
                     *((_QWORD *)this + 15),
                     *((_QWORD *)this + 11),
                     3LL,
                     &GUID_b5c79aaf_cbb3_4765_befd_5e2ef070c692,
                     v2),
        v4 = Instance,
        Instance >= 0) )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    PrimaryMonitor = WindowArrangementView::GetPrimaryMonitor((IUnknown **)this, (struct IImmersiveMonitor **)&v9);
    v4 = PrimaryMonitor;
    if ( PrimaryMonitor >= 0 )
    {
      PrimaryMonitor = WindowArrangementView::InitDragData(this);
      v4 = PrimaryMonitor;
      if ( PrimaryMonitor >= 0 )
      {
        PrimaryMonitor = WindowArrangementView::InitDropFeedback(this, v9);
        v4 = PrimaryMonitor;
        if ( PrimaryMonitor >= 0 )
        {
LABEL_11:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
          return v4;
        }
        v6 = 966LL;
      }
      else
      {
        v6 = 965LL;
      }
    }
    else
    {
      v6 = 962LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)PrimaryMonitor);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)Instance);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3BD,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)v4);
  return v4;
}
