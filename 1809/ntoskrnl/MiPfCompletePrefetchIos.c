/*
 * XREFs of MiPfCompletePrefetchIos @ 0x14001A020
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x1400DED78 (MmWaitForCacheManagerPrefetch.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x14001A0B8 (MiPfCompleteInPageSupport.c)
 *     MiPfCoalesceAndIssueIOs @ 0x14012E348 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEF7C (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(_QWORD **a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax

  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, a1, 0LL);
  v5 = 0;
  while ( 1 )
  {
    v6 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v6[1] != a1 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *a1 = v7;
    v7[1] = a1;
    if ( (v6[24] & 0x800000) != 0 )
      v8 = MiPfCompleteCoalescedIo(v6);
    else
      v8 = MiPfCompleteInPageSupport(v6, a3);
    if ( v8 < 0 && v8 != -1073740748 )
      v5 = v8;
  }
  return v5;
}
