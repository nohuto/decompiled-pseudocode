/*
 * XREFs of TtmpDeactivateSessionWorker @ 0x140881B30
 * Callers:
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 * Callees:
 *     TtmpInitiateModernStandbyTransition @ 0x140881D60 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x140882278 (TtmpSessionPowerControl.c)
 *     TtmiLogSessionDeactivate @ 0x140885DC0 (TtmiLogSessionDeactivate.c)
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
