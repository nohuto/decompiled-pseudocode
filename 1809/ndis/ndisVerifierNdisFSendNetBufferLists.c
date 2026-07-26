/*
 * XREFs of ndisVerifierNdisFSendNetBufferLists @ 0x1C006A6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierNdisFSendNetBufferLists(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))ndisVerifierNdisDispatch->NdisFSendNetBufferLists)(a1, a2);
}
