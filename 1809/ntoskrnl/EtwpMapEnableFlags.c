/*
 * XREFs of EtwpMapEnableFlags @ 0x1406CCE4C
 * Callers:
 *     EtwpGetLoggerInfoFromContext @ 0x14065BC90 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpUpdateGroupMasks @ 0x1407270E8 (EtwpUpdateGroupMasks.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x1407425DC (EtwpInitializeSiloAllowedGroupMask.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpMapEnableFlags(__int64 a1, char a2)
{
  __int64 *v2; // r9
  __int64 v4; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx

  v2 = EtwpEnableFlagMap;
  v4 = 8LL;
  do
  {
    if ( a2 == 1 )
    {
      if ( a1 )
      {
        result = (unsigned __int64)*(unsigned int *)v2 >> 29;
        if ( (*(_DWORD *)v2 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v6 = *((unsigned int *)v2 + 1);
LABEL_11:
          result = v6 >> 29;
          *(_DWORD *)(a1 + 4 * (v6 >> 29)) |= v6 & 0x1FFFFFFF;
        }
      }
    }
    else if ( a1 )
    {
      result = (unsigned __int64)*((unsigned int *)v2 + 1) >> 29;
      if ( (*((_DWORD *)v2 + 1) & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
      {
        v6 = *(unsigned int *)v2;
        goto LABEL_11;
      }
    }
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}
