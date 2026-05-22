/*
 * XREFs of ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E8E4C
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x1800E79C8 (-Get@-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileGitPtr::CopyLocal(AgileGitPtr *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi

  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
  }
  else
  {
    *a3 = 0LL;
    v6 = -2147024809;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
