/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCStreamConnectionManagerImpl@@@std@@EEAAXXZ @ 0x18010D7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_Ref_count_obj<CStreamConnectionManagerImpl>::_Destroy(__int64 a1)
{
  void **result; // rax
  __int64 v2; // rcx

  result = &CStreamConnectionManagerImpl::`vftable';
  *(_QWORD *)(a1 + 16) = &CStreamConnectionManagerImpl::`vftable';
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    return (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
