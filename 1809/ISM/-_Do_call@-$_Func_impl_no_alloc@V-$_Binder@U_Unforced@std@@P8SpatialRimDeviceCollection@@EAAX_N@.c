/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8SpatialRimDeviceCollection@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEAAX$$QEA_N@Z @ 0x180008F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (SpatialRimDeviceCollection::*)(bool),SpatialRimDeviceCollection *,std::_Ph<1> const &>,void,bool>::_Do_call(
        __int64 a1,
        _BYTE *a2)
{
  LOBYTE(a2) = *a2;
  return (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(a1 + 8))(
           *(_QWORD *)(a1 + 32) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(a1 + 8), 8)),
           a2);
}
