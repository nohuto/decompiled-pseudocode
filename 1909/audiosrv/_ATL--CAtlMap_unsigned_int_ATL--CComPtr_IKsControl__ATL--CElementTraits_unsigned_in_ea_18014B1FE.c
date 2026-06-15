/*
 * XREFs of _ATL::CAtlMap_unsigned_int_ATL::CComPtr_IKsControl__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_IKsControl_____::SetAt_::_1_::catch$0 @ 0x18014B1FE
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18014AF08 (-RemoveAtPos@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned_int_ATL::CComPtr_IKsControl__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_IKsControl_____::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAtPos(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
