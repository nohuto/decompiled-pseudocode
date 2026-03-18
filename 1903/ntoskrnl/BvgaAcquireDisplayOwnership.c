/*
 * XREFs of BvgaAcquireDisplayOwnership @ 0x140292920
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x140292B60 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *BvgaAcquireDisplayOwnership())(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = BvgaResetDisplayParameters;
  if ( BvgaResetDisplayParameters && BvgaDisplayState == 2 )
    result = (__int64 (__fastcall *)(_QWORD))BvgaResetDisplayParameters(80LL);
  BvgaDisplayState = 0;
  return result;
}
