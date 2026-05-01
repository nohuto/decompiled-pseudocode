/*
 * XREFs of ?Release@Data_t@_bstr_t@@QEAAKXZ @ 0x180165ED0
 * Callers:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180167534 (-_Free@_bstr_t@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall _bstr_t::Data_t::Release(_bstr_t::Data_t *this, const struct std::nothrow_t *a2)
{
  unsigned __int32 v3; // edi
  OLECHAR *v4; // rcx
  void *v5; // rcx

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v3 && this )
  {
    v4 = *(OLECHAR **)this;
    if ( v4 )
    {
      SysFreeString(v4);
      *(_QWORD *)this = 0LL;
    }
    v5 = (void *)*((_QWORD *)this + 1);
    if ( v5 )
    {
      operator delete(v5, a2);
      *((_QWORD *)this + 1) = 0LL;
    }
    operator delete(this, (const struct std::nothrow_t *)0x18);
  }
  return v3;
}
