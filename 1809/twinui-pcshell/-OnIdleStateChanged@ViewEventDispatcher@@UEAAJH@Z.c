/*
 * XREFs of ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x1802161D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$SessionIdleStateChange@AEAH@ViewManagerInteropTraceLogging@@SAXAEAH@Z @ 0x1802102B4 (--$SessionIdleStateChange@AEAH@ViewManagerInteropTraceLogging@@SAXAEAH@Z.c)
 *     ?IsSuspensionEnabled@ShellExperienceConfiguration@@YA_NXZ @ 0x180215D14 (-IsSuspensionEnabled@ShellExperienceConfiguration@@YA_NXZ.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v3; // rsi
  ShellExperienceConfiguration *v4; // rcx
  __int64 *Ptr; // rdi
  __int64 *v6; // r14
  RTL_SRWLOCK *v7; // r15
  __int64 *v8; // rbx
  int MatchingViewEventRegistration; // eax
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  __int64 v13; // [rsp+70h] [rbp+38h] BYREF
  int v14; // [rsp+78h] [rbp+40h] BYREF
  __int64 *v15; // [rsp+80h] [rbp+48h] BYREF
  RTL_SRWLOCK *v16; // [rsp+88h] [rbp+50h]

  v14 = a2;
  ViewManagerInteropTraceLogging::SessionIdleStateChange<int &>((__int64)&v14);
  v3 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  v16 = this + 13;
  if ( !ShellExperienceConfiguration::IsSuspensionEnabled(v4) )
  {
    Ptr = (__int64 *)this[22].Ptr;
    v6 = &Ptr[(__int64)this[23].Ptr];
    if ( Ptr != v6 )
    {
      v7 = this - 24;
      do
      {
        v15 = (__int64 *)*Ptr;
        v8 = v15;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
        v13 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(v7, v8, &v13);
        if ( MatchingViewEventRegistration >= 0 )
        {
          if ( (*(_BYTE *)(v13 + 24) & 2) == 0 )
          {
            v10 = *v8;
            if ( v14 )
              (*(void (__fastcall **)(__int64 *))(v10 + 816))(v8);
            else
              (*(void (__fastcall **)(__int64 *))(v10 + 824))(v8);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1127LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        ++Ptr;
      }
      while ( Ptr != v6 );
    }
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
