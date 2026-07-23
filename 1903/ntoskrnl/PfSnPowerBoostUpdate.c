/*
 * XREFs of PfSnPowerBoostUpdate @ 0x1406EC18C
 * Callers:
 *     PfSnPowerBoost @ 0x1406EC110 (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x14071ED70 (PfSnPowerBoostWorker.c)
 * Callees:
 *     NtUpdateWnfStateData @ 0x140641450 (NtUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PfSnPowerBoostUpdate(int a1)
{
  NTSTATUS result; // eax
  signed __int32 v2; // edx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF
  int Buffer_4; // [rsp+5Ch] [rbp+14h]

  result = -a1;
  v2 = _InterlockedExchangeAdd(&dword_140467DD4, a1 != 0 ? 1 : -1);
  if ( !v2 && a1 || v2 == 1 && !a1 )
  {
    Buffer_4 = -1;
    Buffer = (2 * (_BYTE)a1) & 2 | 1;
    return NtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  return result;
}
