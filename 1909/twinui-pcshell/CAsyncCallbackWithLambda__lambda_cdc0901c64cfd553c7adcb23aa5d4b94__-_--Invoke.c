/*
 * XREFs of CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&_::Invoke @ 0x180048A90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94____::Invoke(__int64 a1)
{
  __int64 v3; // rax

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 112LL) + 488LL))(*(_QWORD *)(a1 + 48) + 112LL);
  if ( IsPPIEdition() )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(v3 + 176) )
      (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(v3 + 168) + 72LL))(**(_QWORD **)(v3 + 168));
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
