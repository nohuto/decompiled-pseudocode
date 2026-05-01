/*
 * XREFs of wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_unsigned___int64___int64)_::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_unsigned___int64___int64)_ @ 0x180092748
 * Callers:
 *     ??$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVShellFeedsExperienceManagerImpl@@P84@EAAJI_K_J@Z@Z @ 0x180091E50 (--$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotification.c)
 *     wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_unsigned___int64___int64)_::__move @ 0x180096530 (wistd--__function--__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(un_ea_180096530.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl_unsigned_int_unsigned___int64___int64__::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl_unsigned_int_unsigned___int64___int64__(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_18044C5A0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a1 + 8 != a2 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 16);
  return result;
}
