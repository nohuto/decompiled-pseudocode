/*
 * XREFs of ?GetActiveView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@XZ @ 0x180059540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ @ 0x18005987C (-IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ViewHierarchy::GetActiveView(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( ViewHierarchy::IsConnectedToNavServer((ViewHierarchy *)(a1 - 16)) )
  {
    v9 = 0LL;
    v5 = *(_QWORD *)(a1 + 56);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v9);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        346LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    *a2 = 0LL;
    if ( a2 != &v9 )
    {
      *a2 = v9;
      v9 = 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
  }
  else
  {
    *v4 = 0LL;
  }
  return a2;
}
