/*
 * XREFs of KiSetClockInterval @ 0x14012EAF8
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1400605D0 (KiCheckForTimerExpiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14012EA10 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140299668 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDDF0 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCC50 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD10 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // edx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((__int64)&KiClockIntervalRequests, a3);
  *(_DWORD *)(a3 + 28) = a1;
  v6 = KiClockIntervalRequests;
  if ( (qword_1404D9830 & 1) != 0 && KiClockIntervalRequests )
    v6 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(v6 + 28) )
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_1404D9830 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= v6;
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
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_1404D9830 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_12;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_12:
          v7 = 1;
          break;
        }
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&KiClockIntervalRequests, v6, v7, (_QWORD *)a3);
  *(_BYTE *)(a3 + 24) = 1;
  v11 = KiSetClockIntervalToMinimumRequested(v10, v9);
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  v12 = *(_DWORD *)(a3 + 32);
  if ( v12 )
    PoTraceSystemTimerResolutionKernel(a1, v12);
  return v11;
}
