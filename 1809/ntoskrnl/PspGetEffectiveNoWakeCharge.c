/*
 * XREFs of PspGetEffectiveNoWakeCharge @ 0x1405FF150
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1405FED20 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetEffectiveNoWakeCharge(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx

  v3 = *(_DWORD *)(a1 + 1304);
  *a2 = 0LL;
  *a3 = 0LL;
  result = v3;
  if ( (v3 & 0x800) != 0 )
  {
    if ( *(_DWORD *)(a1 + 856) )
    {
      v6 = *(_QWORD *)(a1 + 944);
      *a2 = v6;
      if ( (v3 & 0x400000) == 0 )
      {
        v7 = *(_QWORD *)(a1 + 1072);
        if ( !v7 || (*(_DWORD *)(v7 + 1304) & 0x1000) == 0 || !*(_DWORD *)(v7 + 856) )
        {
          *a3 = v6;
          result = v3;
          if ( v7 )
          {
            _InterlockedOr((volatile signed __int32 *)(v7 + 1304), 0x400000u);
            result = *(unsigned int *)(a1 + 1304);
          }
        }
      }
    }
  }
  if ( (result & 0x400000) != 0 )
  {
    result = *(_QWORD *)(a1 + 1072);
    if ( result )
      _InterlockedOr((volatile signed __int32 *)(result + 1304), 0x400000u);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFBFFFFF);
  }
  return result;
}
