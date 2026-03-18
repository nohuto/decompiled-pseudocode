/*
 * XREFs of ?_Refill_lower@?$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@std@@IEAAXXZ @ 0x1801EEF78
 * Callers:
 *     ??R?$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@std@@QEAAIXZ @ 0x1801EB8F8 (--R-$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@s.c)
 * Callees:
 *     <none>
 */

char __fastcall std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::_Refill_lower(
        __int64 a1)
{
  __int64 v1; // r10
  int v2; // eax
  __int64 v3; // r11
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // edx
  char result; // al

  v1 = a1 + 2500;
  v2 = *(_DWORD *)(a1 + 2500);
  v3 = 227LL;
  do
  {
    v4 = v2 ^ (v2 ^ *(_DWORD *)(v1 + 4)) & 0x7FFFFFFF;
    v2 = *(_DWORD *)(v1 + 4);
    *(_DWORD *)(v1 - 2496) = (v4 >> 1) ^ *(_DWORD *)(v1 + 1588) ^ ((*(_BYTE *)(v1 + 4) & 1) != 0 ? 0x9908B0DF : 0);
    v1 += 4LL;
    --v3;
  }
  while ( v3 );
  v5 = a1 + 3408;
  v6 = 396LL;
  v7 = *(_DWORD *)(a1 + 3408);
  do
  {
    v8 = v7 ^ (v7 ^ *(_DWORD *)(v5 + 4)) & 0x7FFFFFFF;
    v7 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 - 2496) = (v8 >> 1) ^ *(_DWORD *)(v5 - 3404) ^ ((*(_BYTE *)(v5 + 4) & 1) != 0 ? 0x9908B0DF : 0);
    v5 += 4LL;
    --v6;
  }
  while ( v6 );
  result = -(*(_BYTE *)(a1 + 4) & 1);
  *(_DWORD *)(a1 + 2496) = ((*(_DWORD *)(a1 + 4992) ^ (*(_DWORD *)(a1 + 4) ^ *(_DWORD *)(a1 + 4992)) & 0x7FFFFFFFu) >> 1) ^ *(_DWORD *)(a1 + 1588) ^ ((*(_BYTE *)(a1 + 4) & 1) != 0 ? 0x9908B0DF : 0);
  *(_DWORD *)a1 = 0;
  return result;
}
