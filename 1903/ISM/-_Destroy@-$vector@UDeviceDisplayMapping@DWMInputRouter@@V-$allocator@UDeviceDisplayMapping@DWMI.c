/*
 * XREFs of ?_Destroy@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@AEAAXPEAUDeviceDisplayMapping@DWMInputRouter@@0@Z @ 0x1800C5888
 * Callers:
 *     _std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::_Emplace_reallocate_DWMInputRouter::DeviceDisplayMapping__::_1_::catch$39 @ 0x1800C1F0C (_std--vector_DWMInputRouter--DeviceDisplayMapping_std--allocator_DWMInputRouter--DeviceDisplayMa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::vector<DWMInputRouter::DeviceDisplayMapping>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 1;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v4 += 2;
      result = v4 - 1;
    }
    while ( v4 - 1 != a3 );
  }
  return result;
}
