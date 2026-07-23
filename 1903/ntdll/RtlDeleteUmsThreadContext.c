/*
 * XREFs of RtlDeleteUmsThreadContext @ 0x1800F35D0
 * Callers:
 *     sub_1800F3BA0 @ 0x1800F3BA0 (sub_1800F3BA0.c)
 *     sub_1800F3C68 @ 0x1800F3C68 (sub_1800F3C68.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteUmsThreadContext(PVOID BaseAddress)
{
  unsigned int v2; // [rsp+38h] [rbp+10h]

  v2 = -1073741811;
  if ( BaseAddress && (*((_DWORD *)BaseAddress + 316) & 8) != 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0;
  }
  return v2;
}
