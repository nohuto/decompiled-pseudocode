/*
 * XREFs of ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x1803C3180
 * Callers:
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1803C36C0 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___ @ 0x1803C0638 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::ResetPlaceModeIdleTimer(WindowArrangementView *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v7; // [rsp+30h] [rbp+8h] BYREF
  WindowArrangementView *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 136);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  v8 = this;
  if ( this )
    _InterlockedIncrement((volatile signed __int32 *)this + 17);
  v7 = this;
  if ( this )
    _InterlockedIncrement((volatile signed __int32 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
  v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___(
         v4,
         v3,
         (__int64)v1,
         &v7);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x278,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v8);
}
