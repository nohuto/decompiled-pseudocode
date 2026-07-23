/*
 * XREFs of PopDirectedDripsRefreshDisengageState @ 0x140869880
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140869698 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 *     PopDirectedDripsDiagTraceDisengageReasonChange @ 0x14087D02C (PopDirectedDripsDiagTraceDisengageReasonChange.c)
 */

void __fastcall PopDirectedDripsRefreshDisengageState(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int32 v3; // eax
  unsigned __int32 v4; // ett
  unsigned __int32 v5; // edi
  __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 304);
  _m_prefetchw((const void *)(a1 + 308));
  v3 = *(_DWORD *)(a1 + 308);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 308), v3, v3);
  }
  while ( v4 != v3 );
  v5 = v3;
  if ( v2 != v3 )
  {
    PopDirectedDripsDiagTraceDisengageReasonChange(v2, v3);
    *(_DWORD *)(a1 + 304) = v5;
    if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
    {
      if ( *(_BYTE *)(a1 + 320) )
      {
        if ( v2 )
        {
          if ( v5 )
            return;
          LOBYTE(v6) = 1;
        }
        else
        {
          v6 = 0LL;
        }
        PopDirectedDripsNotifyDrivers((signed __int32 *)a1, a1 + 232, v6, 0LL);
      }
    }
  }
}
