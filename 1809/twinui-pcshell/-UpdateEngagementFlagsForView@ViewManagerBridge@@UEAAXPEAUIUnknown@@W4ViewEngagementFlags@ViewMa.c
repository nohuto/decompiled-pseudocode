/*
 * XREFs of ?UpdateEngagementFlagsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4ViewEngagementFlags@ViewManagerInterop@Shell@Internal@Windows@@1@Z @ 0x18023AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::in1diag3 **__fastcall ViewManagerBridge::UpdateEngagementFlagsForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        int a4)
{
  wil::details::in1diag3 **result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v5 = a4;
  v6 = a3;
  if ( !*(_BYTE *)(a1 + 145) && a3 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    (**a2)(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v10);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 864LL))(v10, v6, v5);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        301LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    return (wil::details::in1diag3 **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  return result;
}
