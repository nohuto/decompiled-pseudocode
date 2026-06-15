/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x1800298F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<std::function<void (void)>>::_Delete_this(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
