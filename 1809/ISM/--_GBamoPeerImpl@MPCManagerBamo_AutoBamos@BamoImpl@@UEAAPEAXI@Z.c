/*
 * XREFs of ??_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180016BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *__fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::`scalar deleting destructor'(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v6 )
  {
    v7 = _InterlockedDecrement(v6 + 2);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x180016C1ALL);
    }
    if ( !v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
