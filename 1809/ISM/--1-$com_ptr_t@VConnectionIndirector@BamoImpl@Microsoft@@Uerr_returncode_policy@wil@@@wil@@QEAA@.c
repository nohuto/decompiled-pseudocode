/*
 * XREFs of ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017764
 * Callers:
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor$0 @ 0x18012E6AD (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Join_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl_::_1_::dtor$0 @ 0x18012E855 (_Microsoft--BamoImpl--BamoPrincipalImpl--BamoPrincipalImpl_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  volatile signed __int32 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a1;
  if ( v4 )
  {
    v5 = _InterlockedDecrement(v4 + 2);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x1800177A9LL);
    }
    if ( !v5 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
