/*
 * XREFs of ndisIovCopyNicSwitchInfo @ 0x1C006F444
 * Callers:
 *     ndisIovGetNicSwitchList @ 0x1C0014154 (ndisIovGetNicSwitchList.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C0071140 (ndisOidPreIovEnumNicSwitches.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisIovCopyNicSwitchInfo(_DWORD *a1, __int64 a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  int v8; // edx
  __int64 result; // rax

  memset(a1, 0, 0x23CuLL);
  *a1 = 37486976;
  v4 = a1 + 4;
  a1[2] = *(_DWORD *)(a2 + 108);
  a1[3] = *(_DWORD *)(a2 + 36);
  v5 = (_OWORD *)(a2 + 116);
  v6 = 4LL;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    v7 = v5[7];
    v5 += 8;
    *(v4 - 1) = v7;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)v4 = *(_DWORD *)v5;
  a1[133] = *(_DWORD *)(a2 + 632);
  a1[134] = *(_DWORD *)(a2 + 72);
  a1[135] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 3592LL) + 40LL);
  a1[136] = *(_DWORD *)(a2 + 48);
  v8 = *(_DWORD *)(a2 + 648);
  a1[137] = v8;
  a1[138] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 3592LL) + 52LL) - v8;
  a1[139] = *(_DWORD *)(a2 + 652);
  a1[140] = *(_DWORD *)(a2 + 656);
  a1[141] = *(_DWORD *)(a2 + 660);
  result = *(unsigned int *)(a2 + 664);
  a1[142] = result;
  return result;
}
