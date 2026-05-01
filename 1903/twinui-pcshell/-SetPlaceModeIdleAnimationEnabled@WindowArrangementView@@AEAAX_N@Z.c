/*
 * XREFs of ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1803C32B8
 * Callers:
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x1803C26E0 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1803C36C0 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1803C45C0 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___ @ 0x1803C04BC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::SetPlaceModeIdleAnimationEnabled(WindowArrangementView *this, char a2)
{
  int v3; // edi
  char *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // eax
  char v8; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v10; // [rsp+40h] [rbp+18h] BYREF
  WindowArrangementView *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    v11 = this;
    if ( this )
      _InterlockedIncrement((volatile signed __int32 *)this + 17);
    v3 = *((_DWORD *)this + 77);
    v10 = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 17);
    v4 = (char *)this + 136;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    v6 = 3000;
    if ( !v3 )
      v6 = 1500;
    v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___(
           v5,
           v6,
           (__int64)v4,
           &v10);
    if ( v7 >= 0 )
    {
      v8 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x265,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v7);
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v10);
    if ( v8 )
      *((_DWORD *)this + 74) = 1;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    *((_DWORD *)this + 74) = 0;
  }
}
