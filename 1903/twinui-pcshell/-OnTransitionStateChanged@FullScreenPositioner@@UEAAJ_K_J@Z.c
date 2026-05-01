/*
 * XREFs of ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18016D880
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180012394 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___ @ 0x18016B368 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___.c)
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x18016BEEC (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18016ECF4 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

__int64 __fastcall FullScreenPositioner::OnTransitionStateChanged(FullScreenPositioner *this, __int64 a2, __int64 a3)
{
  FullScreenPositioner *v4; // rdi
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  volatile signed __int32 *v8; // r8
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  FullScreenPositioner *v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v18; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 == 4 && ((a3 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a3 != 3 )
  {
    if ( *((_QWORD *)this + 19) )
    {
      FullScreenPositionerLogging::TraceLoggingInfo("FullScreenPositioner - Overlay window has finished fading in so apply all pending positioning operations.");
      v4 = (FullScreenPositioner *)((char *)this - 184);
      FullScreenPositioner::ApplyPendingPositioningOperations(v4);
    }
    else
    {
      v4 = (FullScreenPositioner *)((char *)this - 184);
    }
    v17 = 0LL;
    v18 = &v17;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
    v6 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v4, v5);
    v9 = v6;
    if ( v6 < 0 )
    {
      v10 = (unsigned int)v6;
      v11 = 946LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)v10);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      return (unsigned int)v9;
    }
    v12 = v17;
    *(_QWORD *)v14 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v15 = v4;
    v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___(
           v12,
           v7,
           v8,
           v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v14);
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 959LL;
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
  return 0LL;
}
