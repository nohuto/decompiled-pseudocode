/*
 * XREFs of xxxUpdateClientRect @ 0x1C023CB00
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 */

__int64 __fastcall xxxUpdateClientRect(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_OWORD *)(a1[5] + 88);
  xxxCalcClientRect(a1, &v6, 0LL, a4);
  *(_OWORD *)(a1[5] + 104) = v6;
  return 1LL;
}
