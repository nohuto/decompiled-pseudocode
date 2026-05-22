/*
 * XREFs of ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x18000DA14
 * Callers:
 *     ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18000D900 (-OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18000D9C0 (-OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewHierarchy::AddViewsOnProxyConnection(ViewHierarchy *this)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  char *v7; // rsi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = (_QWORD *)((char *)this + 80);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 40LL))(v2, v3);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_16;
  if ( *v3 )
  {
    v7 = (char *)this + 8;
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 64LL))(*v3, (char *)this + 8);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v15 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v3 + 48LL))(*v3, &v15);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x18000DBB4LL);
    }
    v10 = 0;
    if ( v15 > 0 )
    {
      while ( 1 )
      {
        v16 = 0LL;
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v3 + 56LL))(*v3, v10, &v16);
        if ( v11 < 0 )
          break;
        v12 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 24LL))(v7, *v3, v10, v16);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x65,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        if ( (int)++v10 >= v15 )
          return;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v11);
LABEL_16:
      wil::details::in1diag3::FailFast_Hr(
        v6,
        (void *)0x58,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
  }
}
