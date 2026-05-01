/*
 * XREFs of wil::details::functor_wrapper_void__lambda_ab35eac969ab3d22551b09e5f1abac9a__&_::Run @ 0x1800A4C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_ab35eac969ab3d22551b09e5f1abac9a____::Run(__int64 a1)
{
  __int64 v1; // rbx
  PCWSTR StringRawBuffer; // rax

  v1 = *(_QWORD *)(a1 + 8);
  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)v1, 0LL);
  ***(_BYTE ***)(v1 + 8) = (*(__int64 (__fastcall **)(_QWORD, PCWSTR))(**(_QWORD **)(*(_QWORD *)(v1 + 16) + 248LL) + 56LL))(
                             *(_QWORD *)(*(_QWORD *)(v1 + 16) + 248LL),
                             StringRawBuffer);
  return 0LL;
}
