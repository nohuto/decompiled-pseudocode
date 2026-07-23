/*
 * XREFs of PfpProcessScenarioPhase @ 0x140746420
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1406A723C (PfSnSetPrefetcherInformation.c)
 *     PfSetSuperfetchInformation @ 0x1406A75E8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     PsGetCurrentProcessSessionId @ 0x1401052D0 (PsGetCurrentProcessSessionId.c)
 *     PfpScenCtxPrefetchWait @ 0x1405966FC (PfpScenCtxPrefetchWait.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PfpScenCtxScenarioSet @ 0x14059E460 (PfpScenCtxScenarioSet.c)
 *     PfpLogScenarioEvent @ 0x140746518 (PfpLogScenarioEvent.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(__int64 a1, char a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v8; // ecx
  ULONG ActiveConsoleId; // ebx
  __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  ULONG v14; // ebx
  unsigned int v15; // ebx
  void *NextSession; // rax

  if ( *(_DWORD *)a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  v4 = *(_DWORD *)(a1 + 16) & 1;
  if ( v3 <= 2 )
    goto LABEL_4;
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      v8 = *(_DWORD *)(a1 + 8);
      v5 = 0;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
          {
            PfpScenCtxScenarioSet((ULONG_PTR)&qword_140467860, 4, 0, 0LL);
            if ( dword_140467518 < (unsigned int)dword_14046751C )
              PfpLogScenarioEvent(5, 2, 3, dword_140467894, 1);
          }
        }
        return v5;
      }
      v10 = 0LL;
      v11 = 4;
      goto LABEL_32;
    }
    if ( v3 == 5 )
    {
LABEL_4:
      v5 = 0;
      if ( a2 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        v6 = v4 | 4;
        if ( v3 != 5 )
          v6 = v4;
        PfPowerActionNotify(*(_DWORD *)(a1 + 8), v6, *(_DWORD *)(a1 + 16) >> 1);
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v12 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  if ( v12 )
  {
    if ( v12 != 1 || dword_140467890 != 3 )
      return v5;
    PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140467860, 3, 0x1388u);
    PfpLogScenarioEvent(3, 0, 0, dword_140467894, 0);
    v10 = 0LL;
    v13 = 3;
    v11 = 0;
LABEL_33:
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140467860, v13, v11, v10);
    return v5;
  }
  v14 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v14 && dword_140467518 < (unsigned int)dword_14046751C )
  {
    v15 = 0;
    NextSession = (void *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      while ( ++v15 < 3 )
      {
        NextSession = (void *)MmGetNextSession(NextSession);
        if ( !NextSession )
          goto LABEL_30;
      }
      ObfDereferenceObject(NextSession);
LABEL_30:
      if ( v15 >= 3 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = 3;
LABEL_32:
        v13 = 0;
        goto LABEL_33;
      }
    }
  }
  return v5;
}
