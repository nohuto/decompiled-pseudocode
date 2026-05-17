/*
 * XREFs of sub_1800876E4 @ 0x1800876E4
 * Callers:
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_1800876E4(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 504);
  if ( v1 )
  {
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
