/*
 * XREFs of ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180010BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x180010C78 (-AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x180010D38 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnProxyCreated(ViewHierarchy *this, struct IMessageProxy *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMessageProxy *v10; // [rsp+30h] [rbp+8h] BYREF

  ViewHierarchy::RemoveListListenerReference(this);
  if ( *((struct IMessageProxy **)this + 8) != a2 )
  {
    v10 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v10);
    v4 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 8))(
         *((_QWORD *)this + 8),
         &GUID_b2ef2dce_3e3b_4944_9447_e7f2772f3ad3,
         (char *)this + 72);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v6,
      v8);
    __debugbreak();
  }
  ViewHierarchy::AddViewsOnProxyConnection(this);
  return 0LL;
}
