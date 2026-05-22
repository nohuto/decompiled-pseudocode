/*
 * XREFs of ??1BamoInputDeliveryServerPrincipal@@MEAA@XZ @ 0x180029AE0
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$0 @ 0x18012EFCE (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$0.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$1 @ 0x18012F11B (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$1.c)
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$0 @ 0x180130155 (_SystemCursorController--SystemCursorController_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoInputDeliveryServerPrincipal::~BamoInputDeliveryServerPrincipal(
        BamoInputDeliveryServerPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  volatile signed __int32 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 4);
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
      JUMPOUT(0x180029B31LL);
    }
    if ( !v5 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
