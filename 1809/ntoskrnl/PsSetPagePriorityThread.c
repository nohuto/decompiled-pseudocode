/*
 * XREFs of PsSetPagePriorityThread @ 0x1400DEEE0
 * Callers:
 *     CcPerformReadAhead @ 0x1400DDFA4 (CcPerformReadAhead.c)
 *     IoApplyPriorityInfoThread @ 0x1400DEE40 (IoApplyPriorityInfoThread.c)
 *     CcCompleteAsyncRead @ 0x1400DF314 (CcCompleteAsyncRead.c)
 *     SmSetThreadPagePriority @ 0x14011EBEC (SmSetThreadPagePriority.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x140310188 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1744);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1744), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
