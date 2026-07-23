/*
 * XREFs of KdpQuickMoveMemory @ 0x140919B04
 * Callers:
 *     KdpGetContextEx @ 0x14028C68C (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x14028C86C (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x140917954 (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x140917C40 (KdpSearchMemory.c)
 *     KdpPrint @ 0x140919224 (KdpPrint.c)
 *     KdpPrompt @ 0x140919398 (KdpPrompt.c)
 *     KdpCopyContext @ 0x140919934 (KdpCopyContext.c)
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
