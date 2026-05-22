/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8SpatialGraphDriverClient@Holographic@Internal@Windows@@EAAXAEAVV2NodePropertyRequest@456@J@ZPEAV3456@AEBU?$_Ph@$00@2@AEBU?$_Ph@$01@2@@std@@XAEAVV2NodePropertyRequest@Holographic@Internal@Windows@@J@std@@EEAAXAEAVV2NodePropertyRequest@Holographic@Internal@Windows@@$$QEAJ@Z @ 0x1801607E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2NodePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2NodePropertyRequest &,long>::_Do_call(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 8))(
           *(_QWORD *)(a1 + 32) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(a1 + 8), 8)),
           a2,
           *a3);
}
