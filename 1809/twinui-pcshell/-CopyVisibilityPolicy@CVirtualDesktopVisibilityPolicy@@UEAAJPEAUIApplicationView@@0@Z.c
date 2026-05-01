/*
 * XREFs of ?CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z @ 0x180380B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x180380864 (-AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::CopyVisibilityPolicy(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(this, a3, a2) )
  {
    v6 = -2147019873;
    v7 = 245LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a3 + 200LL))(a3, v12);
  if ( v9 < 0 )
  {
    v10 = 247LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 200LL))(a2, v13);
  if ( v9 < 0 )
  {
    v10 = 248LL;
    goto LABEL_6;
  }
  v11 = v12[0] - v13[0];
  if ( v12[0] == v13[0] )
    v11 = v12[1] - v13[1];
  if ( v11 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 208LL))(a2, v12);
    if ( v9 < 0 )
    {
      v10 = 251LL;
      goto LABEL_6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           a2);
    if ( v6 < 0 )
    {
      v7 = 252LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
