/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18010E040
 * Callers:
 *     _std::vector_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_____::_Emplace_reallocate_CEndpointCharacteristics_____ptr64_&___ptr64__::_1_::catch$38 @ 0x18006F98F (_std--vector_wil--com_ptr_t_CEndpointCharacteristics_wil--err_returncode_policy__std--allocator_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Destroy(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      if ( *v4 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
      ++v4;
    }
    while ( v4 != a3 );
  }
  return result;
}
