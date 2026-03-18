/*
 * XREFs of BmlGetMonitorModePreference @ 0x1C00C4B10
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00C46E8 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00C482C (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000F658 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     BmlGetMonitorModeVSyncPreference @ 0x1C00C4B98 (BmlGetMonitorModeVSyncPreference.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C00C4BFC (BmlIsLowResAnalogTvOutput.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C00C4C18 (BmlIsEDIDCapableOutputTechonology.c)
 */

__int64 __fastcall BmlGetMonitorModePreference(__int64 a1, int a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r9
  int v11; // edx
  int v12; // edx
  int v13; // edx
  __int64 v14; // r9
  int v15; // edx
  int v16; // edx
  int v17; // edx

  v3 = *(_DWORD *)(a1 + 84) - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          return 5LL;
        if ( v6 == 1 )
        {
          if ( !(unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && *(_DWORD *)(v8 + 88) == 1 )
            return 11LL;
          if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(v7) )
            return BmlGetMonitorModeVSyncPreference(v9);
          if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v9 + 28), *(unsigned int *)(v9 + 32)) != 60 )
            return 7LL;
          goto LABEL_30;
        }
      }
      else
      {
        v15 = a2 - 1;
        if ( !v15 )
          return 9LL;
        v16 = v15 - 1;
        if ( !v16 )
          return 9LL;
        v17 = v16 - 1;
        if ( !v17 )
          return 9LL;
        if ( v17 == 1 )
          return 10LL;
      }
    }
    else
    {
      v11 = a2 - 1;
      if ( !v11 )
        return 6LL;
      v12 = v11 - 1;
      if ( !v12 )
        return 6LL;
      v13 = v12 - 1;
      if ( !v13 )
        return 6LL;
      if ( v13 == 1 )
        return 8LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
    return BmlGetMonitorModeVSyncPreference(v9);
  if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v9 + 28), *(unsigned int *)(v9 + 32)) != 60 )
    return 0LL;
LABEL_30:
  if ( *(_DWORD *)(v14 + 20) == 800 && *(_DWORD *)(v14 + 24) == 600 )
    return 4LL;
  else
    return 3LL;
}
