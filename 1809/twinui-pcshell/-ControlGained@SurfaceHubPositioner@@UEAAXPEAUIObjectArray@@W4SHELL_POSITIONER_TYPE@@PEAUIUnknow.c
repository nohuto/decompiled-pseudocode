/*
 * XREFs of ?ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180338640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180339BD8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SurfaceHubPositioner::ControlGained(__int64 a1, __int64 a2)
{
  char result; // al
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 440)
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          359LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)0x8000FFFFLL),
        (result = *(_BYTE *)(a1 + 440)) != 0) )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    (*(void (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)a2 + 32LL))(
      a2,
      0LL,
      &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
      &v8);
    v5 = SurfaceHubPositioner::_SetDefaultLayout((SurfaceHubPositioner *)(a1 - 112), v8, 1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        367LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v8 + 432LL))(v8, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        370LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v6);
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  return result;
}
