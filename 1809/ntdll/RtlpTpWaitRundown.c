/*
 * XREFs of RtlpTpWaitRundown @ 0x180030624
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002F8A0 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitFinalizationCallback @ 0x180030820 (RtlpTpWaitFinalizationCallback.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall RtlpTpWaitRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
