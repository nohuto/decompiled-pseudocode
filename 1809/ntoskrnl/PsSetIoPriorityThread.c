/*
 * XREFs of PsSetIoPriorityThread @ 0x1400DEFD8
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14007E024 (CcApplyLowIoPriorityToThread.c)
 *     IoSetIoPriorityHintIntoThread @ 0x1400DEEB0 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x1400DEEE0 (IoApplyPriorityInfoThread.c)
 *     CmpSetIoPriorityThread @ 0x14013AF18 (CmpSetIoPriorityThread.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1400DF054 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x140310478 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1744);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1744), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    KeAbProcessBaseIoPriorityChange(a1, v6, a2);
  return v6;
}
