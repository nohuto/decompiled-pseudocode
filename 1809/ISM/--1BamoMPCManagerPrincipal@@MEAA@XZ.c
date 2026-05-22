/*
 * XREFs of ??1BamoMPCManagerPrincipal@@MEAA@XZ @ 0x18003EC70
 * Callers:
 *     _MPCManager::MPCManager_::_1_::dtor$0 @ 0x18012F9CC (_MPCManager--MPCManager_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoMPCManagerPrincipal::~BamoMPCManagerPrincipal(
        BamoMPCManagerPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 4);
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
      JUMPOUT(0x18003ECDELL);
    }
    if ( !v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
