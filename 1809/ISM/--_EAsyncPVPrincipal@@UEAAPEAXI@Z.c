/*
 * XREFs of ??_EAsyncPVPrincipal@@UEAAPEAXI@Z @ 0x1800E9550
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

AsyncPVPrincipal *__fastcall AsyncPVPrincipal::`vector deleting destructor'(
        AsyncPVPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // si
  char *v6; // rdi
  char *v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v6 = (char *)this + 120;
  v7 = (char *)*((_QWORD *)this + 22);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v6;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *((_QWORD *)v6 + 7) = 0LL;
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
  {
    LOBYTE(a2) = v8 != (_QWORD)this + 56;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, a2);
    *((_QWORD *)this + 14) = 0LL;
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    v10 = _InterlockedDecrement(v9 + 2);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x1800E9620LL);
    }
    if ( !v10 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
