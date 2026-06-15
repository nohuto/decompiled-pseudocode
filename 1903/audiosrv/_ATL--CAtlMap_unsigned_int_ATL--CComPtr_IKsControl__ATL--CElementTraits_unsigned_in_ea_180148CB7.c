/*
 * XREFs of _ATL::CAtlMap_unsigned_int_ATL::CComPtr_IKsControl__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_IKsControl_____::NewNode_::_1_::catch$0 @ 0x180148CB7
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006B8EB (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned_int_ATL::CComPtr_IKsControl__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_IKsControl_____::NewNode_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
