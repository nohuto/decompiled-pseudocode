/*
 * XREFs of ??_GBamoMPCManagerPrincipal@@MEAAPEAXI@Z @ 0x18003ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

BamoMPCManagerPrincipal *__fastcall BamoMPCManagerPrincipal::`scalar deleting destructor'(
        BamoMPCManagerPrincipal *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = _InterlockedDecrement(v7 + 2);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x18003ED81LL);
    }
    if ( !v8 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
