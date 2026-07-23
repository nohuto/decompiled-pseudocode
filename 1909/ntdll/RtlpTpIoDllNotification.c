/*
 * XREFs of RtlpTpIoDllNotification @ 0x180089210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlpTpIoDllNotification(int a1, PCLDR_DLL_NOTIFICATION_DATA a2, PVOID a3)
{
  if ( a1 == 1 )
    RtlpTpIoDllLoaded(a2, a2, a3);
  else
    RtlpTpIoDllUnloaded(a2, a2, a3);
}
