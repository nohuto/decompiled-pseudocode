/*
 * XREFs of _lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_::operator() @ 0x180093714
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9___::Run @ 0x180093B60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802B5BBC (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1802B707C (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_::operator()(struct IApplicationFrame **a1)
{
  int v2; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int FrameWrapper; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), &v9);
  v3 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1310LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( v9 && TouchKeyboardExperienceManager::IsFrameReady(v3, *a1) )
  {
    v8 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[2], *a1, &v8);
    if ( FrameWrapper >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
      FrameWrapper = v5;
      if ( v5 >= 0 )
        FrameWrapper = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52D,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  else
  {
    FrameWrapper = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)FrameWrapper;
}
