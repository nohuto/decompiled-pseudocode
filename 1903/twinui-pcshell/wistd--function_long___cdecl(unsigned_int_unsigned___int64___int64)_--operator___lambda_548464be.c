/*
 * XREFs of wistd::function_long___cdecl(unsigned_int_unsigned___int64___int64)_::operator___lambda_548464be655e837fe70a6c635a8d08fa__void_ @ 0x18017BB8C
 * Callers:
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18017C8E8 (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function_long___cdecl_unsigned_int_unsigned___int64___int64__::operator___lambda_548464be655e837fe70a6c635a8d08fa__void_(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_QWORD *)(a1 + 8) = &off_18042D158;
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
