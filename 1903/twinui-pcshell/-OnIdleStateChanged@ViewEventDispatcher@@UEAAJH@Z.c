/*
 * XREFs of ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x18026C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$SessionIdleStateChange@AEAH@ViewManagerInteropTraceLogging@@SAXAEAH@Z @ 0x180267B0C (--$SessionIdleStateChange@AEAH@ViewManagerInteropTraceLogging@@SAXAEAH@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273EE0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 *Ptr; // rdi
  __int64 *v5; // r14
  RTL_SRWLOCK *v6; // r15
  __int64 *v7; // rbx
  int MatchingViewEventRegistration; // eax
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  __int64 v12; // [rsp+70h] [rbp+38h] BYREF
  int v13; // [rsp+78h] [rbp+40h] BYREF
  __int64 *v14; // [rsp+80h] [rbp+48h] BYREF
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+50h]

  v13 = a2;
  ViewManagerInteropTraceLogging::SessionIdleStateChange<int &>((__int64)&v13);
  v3 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  v15 = this + 11;
  Ptr = (__int64 *)this[20].Ptr;
  v5 = &Ptr[(__int64)this[21].Ptr];
  if ( Ptr != v5 )
  {
    v6 = this - 24;
    do
    {
      v14 = (__int64 *)*Ptr;
      v7 = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(v6, v7, &v12);
      if ( MatchingViewEventRegistration >= 0 )
      {
        if ( (*(_BYTE *)(v12 + 24) & 2) == 0 )
        {
          v9 = *v7;
          if ( v13 )
            (*(void (__fastcall **)(__int64 *))(v9 + 824))(v7);
          else
            (*(void (__fastcall **)(__int64 *))(v9 + 832))(v7);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41F,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      ++Ptr;
    }
    while ( Ptr != v5 );
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
