/*
 * XREFs of ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18029A9A0
 * Callers:
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18029C3C0 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007A0F0 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::GetCortanaVisibleMonitor(XamlLauncher *this, HMONITOR *a2)
{
  _QWORD *v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (_QWORD *)((char *)this + 184);
  if ( !*v3 )
    return 2147943568LL;
  v9 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(v3, &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 670LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v9 + 64LL))(v9, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 671LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v6;
}
