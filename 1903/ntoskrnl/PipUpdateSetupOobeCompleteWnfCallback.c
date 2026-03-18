/*
 * XREFs of PipUpdateSetupOobeCompleteWnfCallback @ 0x14085D400
 * Callers:
 *     <none>
 * Callees:
 *     ExQueryWnfStateData @ 0x1406E8D40 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PipUpdateSetupOobeCompleteWnfCallback(__int64 a1)
{
  unsigned int v2; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v3[5]; // [rsp+24h] [rbp-14h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v3[0] = 0;
  v2 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v4, v3, &v2) >= 0 && v2 == 4 && v3[0] )
    PnpSetupOOBEInProgress = 0;
  return 0LL;
}
