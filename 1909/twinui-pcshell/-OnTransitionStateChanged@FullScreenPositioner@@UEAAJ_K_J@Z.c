/*
 * XREFs of ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18018CC10
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x18000C5F4 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___ @ 0x18018A708 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___.c)
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x18018B2A0 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18018E084 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

__int64 __fastcall FullScreenPositioner::OnTransitionStateChanged(FullScreenPositioner *this, __int64 a2, __int64 a3)
{
  FullScreenPositioner *v4; // rdi
  volatile int *v5; // rdx
  __int64 *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15[2]; // [rsp+20h] [rbp-18h] BYREF
  FullScreenPositioner *v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v19; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 == 4 && ((a3 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a3 != 3 )
  {
    if ( *((_QWORD *)this + 19) )
    {
      FullScreenPositionerLogging::TraceLoggingInfo("FullScreenPositioner - Overlay window has finished fading in so apply all pending positioning operations.");
      v4 = (FullScreenPositioner *)((char *)this - 184);
      FullScreenPositioner::ApplyPendingPositioningOperations(v4, v5);
    }
    else
    {
      v4 = (FullScreenPositioner *)((char *)this - 184);
    }
    v18 = 0LL;
    v19 = &v18;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v19);
    v7 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v4, v6);
    v10 = v7;
    if ( v7 < 0 )
    {
      v11 = (unsigned int)v7;
      v12 = 946LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      return (unsigned int)v10;
    }
    v13 = v18;
    *(_QWORD *)v15 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v16 = v4;
    v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___(
            v13,
            v8,
            v9,
            v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 959LL;
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  }
  return 0LL;
}
