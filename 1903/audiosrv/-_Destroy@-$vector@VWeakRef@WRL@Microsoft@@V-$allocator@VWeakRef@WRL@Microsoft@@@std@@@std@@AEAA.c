/*
 * XREFs of ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x1800D81B8
 * Callers:
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Emplace_reallocate_Microsoft::WRL::WeakRef_const_&__::_1_::catch$57 @ 0x180071670 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--_Emplace_realloc.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__const_&__::_1_::catch$32 @ 0x1800F1D54 (_std--vector_Microsoft--WRL--ComPtr_IDeviceGraphObjectsStore__std--allocator_Microsoft--WRL--Com.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      ++v4;
    }
    while ( v4 != a3 );
  }
  return result;
}
