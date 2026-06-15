/*
 * XREFs of ??R?$_Func_class@XW4RegistryChangeKind@wil@@U_Nil@wistd@@U34@U34@U34@U34@U34@@wistd@@QEBAXW4RegistryChangeKind@wil@@@Z @ 0x1800FB45C
 * Callers:
 *     _lambda_1f7d91c801a964f38e999207b709b9ee_::operator() @ 0x1800FB3B8 (_lambda_1f7d91c801a964f38e999207b709b9ee_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_class<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::operator()(
        __int64 a1,
        int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 104);
  if ( !v2 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
