/*
 * XREFs of TtmpDeactivateSessionWorker @ 0x1408808F0
 * Callers:
 *     TtmpSessionWorker @ 0x1408810E0 (TtmpSessionWorker.c)
 * Callees:
 *     TtmpInitiateModernStandbyTransition @ 0x140880B20 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x140881038 (TtmpSessionPowerControl.c)
 *     TtmiLogSessionDeactivate @ 0x140884B80 (TtmiLogSessionDeactivate.c)
 */

__int64 __fastcall TtmpDeactivateSessionWorker(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // r8

  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 4) != 0 )
    return 0LL;
  if ( (v2 & 0x180) == 0 )
  {
    if ( (v2 & 8) != 0 )
    {
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFF7;
      TtmiLogSessionDeactivate();
      v2 = *(_DWORD *)(a1 + 4);
    }
    if ( (v2 & 0x400) != 0 )
    {
      if ( (v2 & 0x200) == 0 )
      {
        LOBYTE(a2) = 1;
        TtmpInitiateModernStandbyTransition(a1, a2, *(unsigned int *)(a1 + 16));
        *(_DWORD *)(a1 + 4) |= 0x200u;
        v2 = *(_DWORD *)(a1 + 4);
      }
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFDF;
      return 0LL;
    }
    if ( (v2 & 0x40) == 0 )
    {
      v5 = *(unsigned int *)(a1 + 16);
      *(_DWORD *)(a1 + 4) = v2 | 0x40;
      TtmpSessionPowerControl(a1, 0LL, v5);
    }
  }
  return 259LL;
}
