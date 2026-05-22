/*
 * XREFs of ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x180010C78
 * Callers:
 *     ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180010AE0 (-OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180010BF0 (-OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewHierarchy::AddViewsOnProxyConnection(ViewHierarchy *this)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  char *v6; // r14
  int v7; // eax
  int v8; // eax
  unsigned int i; // esi
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = (_QWORD *)((char *)this + 80);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 40LL))(v2, v3);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v5,
      v13);
    __debugbreak();
  }
  if ( *v3 )
  {
    v6 = (char *)this + 8;
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 64LL))(*v3, (char *)this + 8);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v7,
        v13);
      __debugbreak();
    }
    v15 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v3 + 48LL))(*v3, &v15);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x92,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v8,
        v13);
      __debugbreak();
    }
    for ( i = 0; (int)i < v15; ++i )
    {
      v16 = 0LL;
      v10 = *v3;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v16);
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 56LL))(v10, i, &v16);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x96,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v11,
          v13);
        __debugbreak();
      }
      v12 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(v6, *v3, i, v16);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x97,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v12,
          v13);
        __debugbreak();
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v16);
    }
  }
}
