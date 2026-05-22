/*
 * XREFs of ?FlushInteresting@TwoFingerGestureRecognizer@@UEAAXW4GestureType@@@Z @ 0x18010CB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::FlushInteresting(__int64 a1, unsigned int a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 24LL))(a1 + 16);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 88) + 24LL))(a1 + 88, a2);
}
