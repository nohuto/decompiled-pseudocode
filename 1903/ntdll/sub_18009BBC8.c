/*
 * XREFs of sub_18009BBC8 @ 0x18009BBC8
 * Callers:
 *     sub_18006B424 @ 0x18006B424 (sub_18006B424.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18009BBC8(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = 8LL;
  do
  {
    if ( *a1 )
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
    ++a1;
    --v2;
  }
  while ( v2 );
  return result;
}
