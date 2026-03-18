/*
 * XREFs of PsSetPagePriorityThread @ 0x140080C54
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140080BB0 (IoApplyPriorityInfoThread.c)
 *     CcCompleteAsyncRead @ 0x140080CAC (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x14011CAC8 (SmSetThreadPagePriority.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x14032DB88 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1760);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1760), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
