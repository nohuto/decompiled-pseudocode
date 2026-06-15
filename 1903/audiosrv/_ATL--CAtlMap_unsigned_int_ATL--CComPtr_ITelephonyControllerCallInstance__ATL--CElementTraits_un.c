/*
 * XREFs of _ATL::CAtlMap_unsigned_int_ATL::CComPtr_ITelephonyControllerCallInstance__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_ITelephonyControllerCallInstance_____::SetAt_::_1_::catch$0 @ 0x1801491A6
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006B8EB (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180148DF4 (-RemoveAtPos@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned_int_ATL::CComPtr_ITelephonyControllerCallInstance__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_ITelephonyControllerCallInstance_____::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::RemoveAtPos(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
