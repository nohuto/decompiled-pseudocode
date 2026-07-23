/*
 * XREFs of KiSetClockInterval @ 0x14012EBC8
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1400605D0 (KiCheckForTimerExpiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14012EAE0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140299858 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCCD0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD90 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // edx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  Root = (unsigned __int64)KiClockIntervalRequests.Root;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 && KiClockIntervalRequests.Root )
    Root = (unsigned __int64)&KiClockIntervalRequests ^ (unsigned __int64)KiClockIntervalRequests.Root;
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(Root + 28) )
      {
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_18:
          v7 = 0;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_12;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_12:
          v7 = 1;
          break;
        }
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  v11 = KiSetClockIntervalToMinimumRequested(v10, v9);
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  v12 = *(_DWORD *)(a3 + 32);
  if ( v12 )
    PoTraceSystemTimerResolutionKernel(a1, v12);
  return v11;
}
