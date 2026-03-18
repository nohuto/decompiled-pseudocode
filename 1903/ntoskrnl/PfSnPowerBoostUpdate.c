/*
 * XREFs of PfSnPowerBoostUpdate @ 0x1406EC18C
 * Callers:
 *     PfSnPowerBoost @ 0x1406EC110 (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x14071ED70 (PfSnPowerBoostWorker.c)
 * Callees:
 *     NtUpdateWnfStateData @ 0x140641450 (NtUpdateWnfStateData.c)
 */

__int64 __fastcall PfSnPowerBoostUpdate(int a1)
{
  __int64 result; // rax
  signed __int32 v2; // edx
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+5Ch] [rbp+14h]

  result = (unsigned int)-a1;
  v2 = _InterlockedExchangeAdd(&dword_140467DD4, a1 != 0 ? 1 : -1);
  if ( !v2 && a1 || v2 == 1 && !a1 )
  {
    v4 = -1;
    v3 = (2 * (_BYTE)a1) & 2 | 1;
    return NtUpdateWnfStateData((__int64)&WNF_SEB_APP_LAUNCH_PREFETCH, &v3, 8LL, 0LL, 0LL, 0, 0);
  }
  return result;
}
