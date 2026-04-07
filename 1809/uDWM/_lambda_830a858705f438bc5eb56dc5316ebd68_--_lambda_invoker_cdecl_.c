/*
 * XREFs of _lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_ @ 0x1800B3970
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18004C2E6 (InitOnceBeginInitialize_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

int lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_()
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
