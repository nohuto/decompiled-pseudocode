/*
 * XREFs of HUBMISC_IsD3ColdSupported @ 0x1C002D158
 * Callers:
 *     HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C000FAB0 (HUBPSM30_CheckingIsD3ColdIsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0027D60 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall HUBMISC_IsD3ColdSupported(__int64 a1)
{
  _DWORD *v2; // rcx
  unsigned int v3; // edi
  int v5; // [rsp+20h] [rbp-38h]

  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(a1 + 1432),
    (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1632LL) >> 15) & 1,
    (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1636LL) >> 12) & 1,
    *(_DWORD *)(a1 + 204) & 1,
    v5);
  v2 = *(_DWORD **)(a1 + 1328);
  if ( (v2[408] & 0x8000) != 0 && (v2[409] & 0x1000) != 0 && (*(_DWORD *)(a1 + 204) & 1) == 0 && v2[675] == 4 )
  {
    v3 = 3089;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 4u, 5u, 0x74u, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 44LL) & 2) != 0 )
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 1328) + 1636LL), 0x20u);
  }
  else
  {
    return 3005;
  }
  return v3;
}
