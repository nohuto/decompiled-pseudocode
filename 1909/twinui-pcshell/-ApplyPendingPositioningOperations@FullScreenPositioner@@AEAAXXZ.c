/*
 * XREFs of ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x18018B2A0
 * Callers:
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18018CC10 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18018CA84 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18018E084 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 *     ?pop_front@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAAXXZ @ 0x18018E608 (-pop_front@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall FullScreenPositioner::ApplyPendingPositioningOperations(FullScreenPositioner *this, volatile int *a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  volatile signed __int64 *v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _QWORD *v8; // rax
  const void *v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int64 *v12; // [rsp+50h] [rbp+8h] BYREF
  const void *v13; // [rsp+58h] [rbp+10h] BYREF

  while ( *((_QWORD *)this + 42) )
  {
    v3 = (_QWORD *)((char *)this + 304);
    v4 = (_QWORD *)*((_QWORD *)this + 38);
    if ( v4 )
      v4 = (_QWORD *)*v4;
    v5 = *(volatile signed __int64 **)(*(_QWORD *)(v4[1] + 8 * (*((_QWORD *)this + 41) & (v4[2] - 1LL))) + 8LL);
    v12 = v5;
    if ( v5 )
    {
      v6 = *((_QWORD *)v5 + 8);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64(v5 + 8, v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
LABEL_11:
      v5 = v12;
    }
    v8 = (_QWORD *)*v3;
    if ( *v3 )
      v8 = (_QWORD *)*v8;
    v13 = **(const void ***)(v8[1] + 8 * (*((_QWORD *)this + 41) & (v8[2] - 1LL)));
    v9 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    FullScreenPositionerLogging::TraceLoggingInfo(
      "FullScreenPositioner - Applying pending positioning operation: %p for view: %p",
      (const void *)v5,
      v9);
    v10 = (*(__int64 (__fastcall **)(const void *, volatile signed __int64 *))(*(_QWORD *)v9 + 320LL))(v9, v5);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B8,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v10);
    std::deque<positioningOperationInfo>::pop_front((char *)this + 304);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v12);
  }
}
