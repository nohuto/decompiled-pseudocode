/*
 * XREFs of VidSchQueryAdapterStatistics @ 0x1C007F150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryAdapterStatistics(__int64 a1, _DWORD *a2)
{
  a2[1] = *(_DWORD *)(a1 + 68);
  a2[2] = *(_DWORD *)(a1 + 40);
  a2[3] = *(unsigned __int8 *)(a1 + 1728);
  a2[4] = *(_DWORD *)(a1 + 2424);
  return 0LL;
}
