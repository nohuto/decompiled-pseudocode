/*
 * XREFs of ?get_TabGroupId@CApplicationFrameWrapper@@UEAAJPEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180117BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180113574 (--$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@-$ComPtr@UIApplicationFrame.c)
 */

__int64 __fastcall CApplicationFrameWrapper::get_TabGroupId(
        CApplicationFrameWrapper *this,
        struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)a2 = 0uLL;
  v8 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IApplicationFrameProxy>::As<Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs>(
         (_QWORD *)this + 12,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *))(*(_QWORD *)v8 + 48LL))(
           v8,
           a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 337LL;
  }
  else
  {
    v5 = 336LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
