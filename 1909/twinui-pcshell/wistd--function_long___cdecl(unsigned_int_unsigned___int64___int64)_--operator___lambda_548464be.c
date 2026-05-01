/*
 * XREFs of wistd::function_long___cdecl(unsigned_int_unsigned___int64___int64)_::operator___lambda_548464be655e837fe70a6c635a8d08fa__void_ @ 0x18019ACBC
 * Callers:
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18019BA2C (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180126C94 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 __fastcall wistd::function_long___cdecl_unsigned_int_unsigned___int64___int64__::operator___lambda_548464be655e837fe70a6c635a8d08fa__void_(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 8) = &off_18044C030;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return result;
}
