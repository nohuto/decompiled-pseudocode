/*
 * XREFs of ??_EAsyncHRESULTPrincipal@@UEAAPEAXI@Z @ 0x1800E9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

AsyncHRESULTPrincipal *__fastcall AsyncHRESULTPrincipal::`vector deleting destructor'(
        AsyncHRESULTPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // si
  char *v6; // rdi
  char *v7; // rcx
  volatile signed __int32 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v6 = (char *)this + 56;
  v7 = (char *)*((_QWORD *)this + 14);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v6;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *((_QWORD *)v6 + 7) = 0LL;
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = _InterlockedDecrement(v8 + 2);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x1800E9E5ALL);
    }
    if ( !v9 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
