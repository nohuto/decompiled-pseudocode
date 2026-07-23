/*
 * XREFs of PopPepCountReadyActivities @ 0x1400FF784
 * Callers:
 *     PopPepProcessEvent @ 0x1400FF634 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1402DCAD8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1402DCBB4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402DCC98 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402DCD8C (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DD280 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepCountReadyActivities(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  if ( !a3 )
    return 0LL;
  result = a1[30];
  if ( a3 == 2 )
  {
    if ( a2 )
      return (unsigned int)(*(_DWORD *)(a2 + 104) + result);
  }
  else if ( a3 == 3 )
  {
    v4 = a1[45];
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 72;
      do
      {
        result = (unsigned int)(*v5 + result);
        v5 += 50;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
