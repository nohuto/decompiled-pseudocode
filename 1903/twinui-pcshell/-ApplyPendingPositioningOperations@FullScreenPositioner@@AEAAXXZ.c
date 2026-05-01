/*
 * XREFs of ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x18016BEEC
 * Callers:
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18016D880 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18016ECF4 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall FullScreenPositioner::ApplyPendingPositioningOperations(FullScreenPositioner *this)
{
  _QWORD *v2; // rax
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _QWORD *v6; // rax
  const void *v7; // rbx
  int v8; // eax
  __int64 *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  const void *v13; // [rsp+48h] [rbp+10h] BYREF

  while ( *((_QWORD *)this + 42) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 38);
    if ( v2 )
      v2 = (_QWORD *)*v2;
    v3 = *(volatile signed __int64 **)(*(_QWORD *)(v2[1] + 8 * (*((_QWORD *)this + 41) & (v2[2] - 1LL))) + 8LL);
    v12 = v3;
    if ( v3 )
    {
      v4 = *((_QWORD *)v3 + 8);
      while ( v4 >= 0 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64(v3 + 8, v4 + 1, v4);
        if ( v5 == v4 )
          goto LABEL_10;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
LABEL_10:
      v3 = v12;
    }
    v6 = (_QWORD *)*((_QWORD *)this + 38);
    if ( v6 )
      v6 = (_QWORD *)*v6;
    v13 = **(const void ***)(v6[1] + 8 * (*((_QWORD *)this + 41) & (v6[2] - 1LL)));
    v7 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    FullScreenPositionerLogging::TraceLoggingInfo(
      "FullScreenPositioner - Applying pending positioning operation: %p for view: %p",
      (const void *)v3,
      v7);
    v8 = (*(__int64 (__fastcall **)(const void *, volatile signed __int64 *))(*(_QWORD *)v7 + 320LL))(v7, v3);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B8,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8);
    v9 = *(__int64 **)(*((_QWORD *)this + 39) + 8 * (*((_QWORD *)this + 41) & (*((_QWORD *)this + 40) - 1LL)));
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v9 + 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
    if ( (*((_QWORD *)this + 42))-- == 1LL )
      *((_QWORD *)this + 41) = 0LL;
    else
      ++*((_QWORD *)this + 41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v12);
  }
}
