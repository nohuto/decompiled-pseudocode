/*
 * XREFs of ??1BamoAsyncResult_string_Principal@@MEAA@XZ @ 0x1800674E4
 * Callers:
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$0 @ 0x18003CDA9 (_SystemCursorController--SystemCursorController_--_1_--dtor$0.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$0 @ 0x18003CFFD (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$2 @ 0x1801229CC (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$2.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$2 @ 0x18012324C (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$2.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$1 @ 0x180123940 (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall BamoAsyncResult_string_Principal::~BamoAsyncResult_string_Principal(
        BamoAsyncResult_string_Principal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx

  v4 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v4 )
    Microsoft::BamoImpl::BamoImplObject::Release(v4, a2, a3, a4);
}
