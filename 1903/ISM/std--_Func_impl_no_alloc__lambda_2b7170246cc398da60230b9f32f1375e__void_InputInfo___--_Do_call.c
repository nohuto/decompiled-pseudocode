/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2b7170246cc398da60230b9f32f1375e__void_InputInfo___::_Do_call @ 0x1800BF0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_2b7170246cc398da60230b9f32f1375e__void_InputInfo___::_Do_call(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(*(_QWORD *)result + 68LL) == 3 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))Win32kInterop::s_pfnMTCallback)(*(_QWORD *)(a1 + 16) + 136LL, 0LL);
  return result;
}
