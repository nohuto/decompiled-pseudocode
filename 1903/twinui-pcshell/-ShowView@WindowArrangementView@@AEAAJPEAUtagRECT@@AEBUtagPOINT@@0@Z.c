/*
 * XREFs of ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803C3858
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803C3540 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x180386B50 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__&_ @ 0x1803C036C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__-_.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803C14CC (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x1803C19A8 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1803C1C10 (-GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1803C1FA8 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1803C36C0 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x1803C5154 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::ShowView(
        WindowArrangementView *this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  bool v4; // zf
  int PlaceModePoint; // eax
  unsigned int LastError; // edi
  int PrimaryMonitor; // eax
  __int64 v12; // rdx
  HRESULT v13; // eax
  IUnknown *v14; // rcx
  bool *v15; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  HWND v22; // rax
  const char *v23; // r9
  int v25; // eax
  struct IUnknown *v26; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v27; // [rsp+38h] [rbp-28h] BYREF
  WindowArrangementView *v28; // [rsp+40h] [rbp-20h] BYREF
  WindowArrangementView *v29; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v30[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v32; // [rsp+90h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+A0h] [rbp+40h] BYREF

  v4 = *((_DWORD *)this + 72) == 2;
  v27 = *a3;
  if ( !v4
    || (PlaceModePoint = WindowArrangementView::GetPlaceModePoint((__int64)this, 7, 0xFFFFFFFF, &v27),
        LastError = PlaceModePoint,
        PlaceModePoint >= 0) )
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    PrimaryMonitor = WindowArrangementView::GetPrimaryMonitor((IUnknown **)this, (struct IImmersiveMonitor **)&v26);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1141LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)PrimaryMonitor);
      goto LABEL_25;
    }
    PrimaryMonitor = WindowArrangementView::InitDragVisual(this, v26, a2, &v27, a4);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1142LL;
      goto LABEL_33;
    }
    if ( *((_DWORD *)this + 72) == 2 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v13 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_180500400,
              &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
              &ppvOut);
      LastError = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x47B,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_25:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
        return LastError;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 192LL))(*((_QWORD *)this + 10));
      v14 = (IUnknown *)*((_QWORD *)this + 2);
      v32 = 0;
      IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                     v14,
                                     0LL,
                                     (struct IImmersiveLauncher *)&v32,
                                     v15);
      if ( IsLauncherVisibleOnMonitor >= 0 )
      {
        if ( v32 )
          WindowArrangementView::EnablePlaceModeDropFeedback((__int64)this, 1, 0LL, 0LL);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x480,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
      }
      v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x487,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
    PrimaryMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9));
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1164LL;
      goto LABEL_33;
    }
    v21 = *((_DWORD *)this + 72);
    if ( v21 == 2 )
    {
      v22 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
      if ( !SetForegroundWindow(v22) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x491,
                      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
                      v23);
        goto LABEL_25;
      }
      WindowArrangementView::ShowPlaceModeFeedback((__int64)this + 48, 0, 0LL, 0);
    }
    else if ( v21 == 3 )
    {
      *((_BYTE *)this + 315) = 1;
      v29 = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 17);
      v28 = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 17);
      v25 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97____(
              v19,
              v18,
              v20,
              (__int64 *)&v28);
      LastError = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A7,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v28);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v29);
        goto LABEL_25;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 176LL))(*((_QWORD *)this + 10));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 80LL))(*((_QWORD *)this + 10), 0LL);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v28);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v29);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 176LL))(*((_QWORD *)this + 10));
      v30[0] = a3->x;
      v30[1] = a3->y;
      PrimaryMonitor = WindowArrangementView::UpdateView(this, v30, 0LL);
      LastError = PrimaryMonitor;
      if ( PrimaryMonitor < 0 )
      {
        v12 = 1199LL;
        goto LABEL_33;
      }
    }
    LastError = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x470,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)PlaceModePoint);
  return LastError;
}
