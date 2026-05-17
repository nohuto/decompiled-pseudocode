/*
 * XREFs of RtlDeleteUmsThreadContext @ 0x1800F35D0
 * Callers:
 *     sub_1800F3BA0 @ 0x1800F3BA0 (sub_1800F3BA0.c)
 *     sub_1800F3C68 @ 0x1800F3C68 (sub_1800F3C68.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteUmsThreadContext(__int64 a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h]

  v2 = -1073741811;
  if ( a1 && (*(_DWORD *)(a1 + 1264) & 8) != 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 0;
  }
  return v2;
}
