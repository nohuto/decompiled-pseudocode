/*
 * XREFs of KiSetClockInterval @ 0x140111E80
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x140111D10 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B03BC (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140112380 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1401123DC (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 v13; // rdx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, a3);
  *(_DWORD *)(a3 + 28) = a1;
  v6 = KiClockIntervalRequests;
  if ( (qword_1405039D0 & 1) != 0 && KiClockIntervalRequests )
    v6 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(v6 + 28) )
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_1405039D0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_17;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_17:
          v7 = 0;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_1405039D0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_18:
          v7 = 1;
          break;
        }
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&KiClockIntervalRequests, v6, v7, a3);
  *(_BYTE *)(a3 + 24) = 1;
  v12 = KiSetClockIntervalToMinimumRequested(v10, v9, v11);
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  v13 = *(unsigned int *)(a3 + 32);
  if ( (_DWORD)v13 )
    PoTraceSystemTimerResolutionKernel(a1, v13);
  return v12;
}
