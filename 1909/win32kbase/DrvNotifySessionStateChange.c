/*
 * XREFs of DrvNotifySessionStateChange @ 0x1C00A27F0
 * Callers:
 *     InitializeGreCSRSS @ 0x1C00A2324 (InitializeGreCSRSS.c)
 *     MultiUserNtGreCleanup @ 0x1C00B2F08 (MultiUserNtGreCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvNotifySessionStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx

  v3 = (unsigned int)a1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = v3;
  *(_QWORD *)(v4 + 32) = (unsigned int)PsGetCurrentProcessSessionId();
  WdLogEvent5_WdEvent(v4);
  if ( (unsigned int)(v3 - 3) > 1 )
    SMgrRegisterGdiCallout(VideoPortCallout);
  return SMgrNotifySessionChange((unsigned int)v3);
}
