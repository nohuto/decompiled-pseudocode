/*
 * XREFs of sub_18002EFD0 @ 0x18002EFD0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     sub_18007C640 @ 0x18007C640 (sub_18007C640.c)
 * Callees:
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_18002EFD0(_QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[10];
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *a1 )
    ZwClose(*a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
