/*
 * XREFs of ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x1801E61F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180104BE4 (-_com_issue_error@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
PWSLayoutPolicyManager *__fastcall PWSLayoutPolicyManager::`vector deleting destructor'(
        PWSLayoutPolicyManager *this,
        char a2)
{
  OLECHAR *v4; // rcx
  OLECHAR *v5; // rcx
  OLECHAR *v6; // rcx
  HRESULT v7; // eax

  *(_QWORD *)this = &PWSLayoutPolicyManager::`vftable';
  v4 = (OLECHAR *)*((_QWORD *)this + 15);
  if ( v4 )
    SysFreeString(v4);
  v5 = (OLECHAR *)*((_QWORD *)this + 14);
  if ( v5 )
    SysFreeString(v5);
  v6 = (OLECHAR *)*((_QWORD *)this + 13);
  if ( v6 )
    SysFreeString(v6);
  v7 = VariantClear((VARIANTARG *)((char *)this + 80));
  if ( v7 < 0 )
    _com_issue_error((char *)(unsigned int)v7);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 56);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 32);
  *((_DWORD *)this + 7) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
