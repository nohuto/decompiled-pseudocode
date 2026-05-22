/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c093b505a3af32822560d58990d124b2__bool_Navigation::Server::IServerWindow_____ptr64_::_Do_call @ 0x18000D3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_c093b505a3af32822560d58990d124b2__bool_Navigation::Server::IServerWindow_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  char result; // al
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v3) < 0 )
    return 0;
  result = 1;
  if ( (unsigned int)v3 > 1 )
    return 0;
  return result;
}
