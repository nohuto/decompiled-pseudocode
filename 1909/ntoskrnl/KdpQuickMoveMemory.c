/*
 * XREFs of KdpQuickMoveMemory @ 0x140957298
 * Callers:
 *     KdpGetContextEx @ 0x1402A228C (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1402A2470 (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x1409552CC (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x140955608 (KdpSearchMemory.c)
 *     KdpPrint @ 0x140956C84 (KdpPrint.c)
 *     KdpPrompt @ 0x140956DFC (KdpPrompt.c)
 *     KdpCopyContext @ 0x1409570D0 (KdpCopyContext.c)
 * Callees:
 *     <none>
 */

char __fastcall KdpQuickMoveMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    v3 = a1 - (_QWORD)a2;
    do
    {
      result = *a2;
      a2[v3] = *a2;
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
