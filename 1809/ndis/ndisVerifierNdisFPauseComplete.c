/*
 * XREFs of ndisVerifierNdisFPauseComplete @ 0x1C006A620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierNdisFPauseComplete(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD, void (__stdcall *)(NDIS_HANDLE)))ndisVerifierNdisDispatch->NdisFPauseComplete)(
           a1,
           *(_QWORD *)(a1 + 792),
           NdisFPauseComplete);
}
