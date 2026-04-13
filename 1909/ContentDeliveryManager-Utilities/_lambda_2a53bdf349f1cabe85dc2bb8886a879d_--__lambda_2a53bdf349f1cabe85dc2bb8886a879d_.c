/*
 * XREFs of _lambda_2a53bdf349f1cabe85dc2bb8886a879d_::__lambda_2a53bdf349f1cabe85dc2bb8886a879d_ @ 0x18007DC70
 * Callers:
 *     _UnlockActionHelper::Execute_::_1_::dtor$2 @ 0x1800D199F (_UnlockActionHelper--Execute_--_1_--dtor$2.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$5 @ 0x1800D19EB (_UnlockActionHelper--Execute_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_2a53bdf349f1cabe85dc2bb8886a879d_::__lambda_2a53bdf349f1cabe85dc2bb8886a879d_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
