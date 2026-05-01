/*
 * XREFs of wistd::__function::__func__lambda_0488a05ff636eeaf8fe541b85f6d8674__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__clone @ 0x1801098A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_0488a05ff636eeaf8fe541b85f6d8674__void___cdecl__SEB_EVENT_HEADER_const____::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_18042C9D8;
  *a2 = &off_18042C9D8;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
