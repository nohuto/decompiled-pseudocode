/*
 * XREFs of sub_18010E498 @ 0x18010E498
 * Callers:
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_18010E498(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 440) )
    return ZwFreeVirtualMemory();
  return result;
}
