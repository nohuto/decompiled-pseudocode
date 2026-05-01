/*
 * XREFs of ?Hide@XamlLauncher@@UEAAJXZ @ 0x1802F2920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007D800 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::Hide(XamlLauncher *this)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 208);
  if ( !*v1 )
    return 2147943568LL;
  v6 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(v1, &v6);
  v4 = v3;
  if ( v3 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return v4;
}
