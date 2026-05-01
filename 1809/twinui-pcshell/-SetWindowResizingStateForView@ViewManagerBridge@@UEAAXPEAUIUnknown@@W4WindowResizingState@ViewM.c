/*
 * XREFs of ?SetWindowResizingStateForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180235160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::in1diag3 **__fastcall ViewManagerBridge::SetWindowResizingStateForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  wil::details::in1diag3 **result; // rax
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  if ( !*(_BYTE *)(a1 + 145) )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    (**a2)(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v9);
    LOBYTE(v6) = a3 == 1;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 800LL))(v9, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        361LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    return (wil::details::in1diag3 **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  return result;
}
