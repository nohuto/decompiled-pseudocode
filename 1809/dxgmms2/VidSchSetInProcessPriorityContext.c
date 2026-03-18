/*
 * XREFs of VidSchSetInProcessPriorityContext @ 0x1C007EDD0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetInProcessPriorityContext @ 0x1C0015A90 (VidSchiSetInProcessPriorityContext.c)
 */

__int64 __fastcall VidSchSetInProcessPriorityContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 104);
  if ( !*(_BYTE *)(v2 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0) )
    return VidSchiSetInProcessPriorityContext(a1, a2);
  v4 = WdLogNewEntry5_WdWarning(a1, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = -1071775232LL;
  WdLogEvent5_WdWarning(v4);
  return 3223192064LL;
}
