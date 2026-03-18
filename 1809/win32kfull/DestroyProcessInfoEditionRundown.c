/*
 * XREFs of DestroyProcessInfoEditionRundown @ 0x1C0117800
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C0117830 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DestroyProcessInfoEditionRundown(__int64 a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 936) )
    {
      TraceLoggingProcessUsageOnTerminationEvent((struct tagPROCESSINFO *const)a1);
      *(_DWORD *)(a1 + 936) = 0;
    }
  }
}
