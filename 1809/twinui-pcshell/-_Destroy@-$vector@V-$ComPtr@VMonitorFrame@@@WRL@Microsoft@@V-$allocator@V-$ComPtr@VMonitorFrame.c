/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@0@Z @ 0x18027740C
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_MonitorFrame__const_&___ptr64__::_1_::catch$32 @ 0x180267A18 (_std--vector_Microsoft--WRL--ComPtr_MonitorFrame__std--allocator_Microsoft--WRL--ComPtr_MonitorF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
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
