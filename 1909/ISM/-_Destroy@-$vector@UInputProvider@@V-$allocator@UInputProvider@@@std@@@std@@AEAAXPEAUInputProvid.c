/*
 * XREFs of ?_Destroy@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXPEAUInputProvider@@0@Z @ 0x180052610
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$59 @ 0x18003C2A7 (_std--vector_InputProvider_std--allocator_InputProvider___--_Emplace_reallocate_InputProvider__-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::vector<InputProvider>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 2;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v4 += 3;
      result = v4 - 2;
    }
    while ( v4 - 2 != a3 );
  }
  return result;
}
