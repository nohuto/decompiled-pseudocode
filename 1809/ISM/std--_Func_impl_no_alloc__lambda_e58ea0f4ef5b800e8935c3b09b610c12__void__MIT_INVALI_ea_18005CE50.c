/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e58ea0f4ef5b800e8935c3b09b610c12__void__MIT_INVALIDATE_INPUT_MESSAGE_const_____ptr64_::_Do_call @ 0x18005CE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::_Func_impl_no_alloc__lambda_e58ea0f4ef5b800e8935c3b09b610c12__void__MIT_INVALIDATE_INPUT_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rdx
  _QWORD *v3; // r9
  __int64 v4; // r8
  unsigned __int64 result; // rax
  _QWORD *v6; // rcx

  v2 = *a2;
  v3 = *(_QWORD **)(a1 + 8);
  v4 = *v2;
  result = *v2 - 1;
  if ( result <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = (_QWORD *)v3[5];
    if ( v6 )
    {
      if ( v6[10] == v4 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 56LL))(v6, v2[1]);
    }
    v6 = (_QWORD *)v3[6];
    if ( v6 )
    {
      if ( v6[10] == v4 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 56LL))(v6, v2[1]);
    }
    v6 = (_QWORD *)v3[7];
    if ( v6 )
    {
      if ( v6[10] == v4 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 56LL))(v6, v2[1]);
    }
    v6 = (_QWORD *)v3[8];
    if ( v6 )
    {
      if ( v6[10] == v4 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 56LL))(v6, v2[1]);
    }
    v6 = (_QWORD *)v3[9];
    if ( v6 )
    {
      if ( v6[10] == v4 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 56LL))(v6, v2[1]);
    }
    v6 = (_QWORD *)v3[10];
    if ( v6 )
    {
      if ( v6[10] == v4 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 56LL))(v6, v2[1]);
    }
    v6 = (_QWORD *)v3[11];
    if ( v6 )
    {
      if ( v6[10] == v4 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 56LL))(v6, v2[1]);
    }
  }
  return result;
}
