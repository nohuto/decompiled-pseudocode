/*
 * XREFs of sub_180081630 @ 0x180081630
 * Callers:
 *     sub_18002F270 @ 0x18002F270 (sub_18002F270.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     TpReleasePool @ 0x180081400 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180081740 @ 0x180081740 (sub_180081740.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_180081630(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 **v4; // rdx

  v2 = a1[7];
  if ( v2 )
  {
    ZwClose(v2);
    a1[7] = 0LL;
  }
  sub_180081740(a1 + 15);
  sub_180081740(a1 + 30);
  ZwClose(a1[8]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, a1[2]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, a1[5]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, a1[6]);
  RtlAcquireSRWLockExclusive(&qword_180166460);
  v3 = a1[48];
  v4 = (__int64 **)a1[49];
  if ( *(__int64 **)(v3 + 8) != a1 + 48 || *v4 != a1 + 48 )
    __fastfail(3u);
  *v4 = (__int64 *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(&qword_180166460);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, (__int64)a1);
}
