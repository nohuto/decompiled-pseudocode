/*
 * XREFs of ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x180141E10
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x1800462F4 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4a7c0c4a26250dfb9f46eb61d34146e4___ @ 0x18013FC08 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_4a7c0c4a26250dfb9f46eb61d34146e4___.c)
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x180140760 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1801431E4 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

__int64 __fastcall FullScreenPositioner::OnTransitionStateChanged(FullScreenPositioner *this, __int64 a2, __int64 a3)
{
  FullScreenPositioner *v3; // rdi
  volatile int *v4; // rdx
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
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
    v3 = (FullScreenPositioner *)((char *)this - 184);
    if ( *((_QWORD *)this + 19) )
    {
      FullScreenPositionerLogging::TraceLoggingInfo("FullScreenPositioner - Overlay window has finished fading in so apply all pending positioning operations.");
      FullScreenPositioner::ApplyPendingPositioningOperations(v3, v4);
    }
    v17 = 0LL;
    v18 = &v17;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
    v6 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v3, v5);
    v9 = v6;
    if ( v6 < 0 )
    {
      v10 = (unsigned int)v6;
      v11 = 905LL;
LABEL_12:
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
    v15 = v3;
    v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4a7c0c4a26250dfb9f46eb61d34146e4___(
           v12,
           v7,
           v8,
           v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v14);
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 918LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
  return 0LL;
}
