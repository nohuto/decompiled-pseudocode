/*
 * XREFs of ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YGXPBU_ResourceSetInfo@1@PAURmResourceSetInfo@@@Z @ 0x10015225
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUI.c)
 * Callees:
 *     _memset @ 0x1000D154 (_memset.c)
 */

void __fastcall ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(int a1, _DWORD *a2)
{
  memset(a2, 0, 0x5D8u);
  a2[370] = *(_DWORD *)(a1 + 360);
  a2[371] = *(_DWORD *)(a1 + 364);
  a2[314] = *(_DWORD *)(a1 + 56);
  a2[315] = *(_DWORD *)(a1 + 60);
  a2[316] = *(_DWORD *)(a1 + 64);
  a2[317] = *(_DWORD *)(a1 + 68);
  *a2 = *(_DWORD *)(a1 + 8);
  a2[305] = *(_DWORD *)(a1 + 16);
  a2[304] = *(_DWORD *)(a1 + 12);
  a2[306] = *(_DWORD *)(a1 + 24);
  a2[307] = *(_DWORD *)(a1 + 28);
  a2[308] = *(_DWORD *)(a1 + 32);
  a2[309] = *(_DWORD *)(a1 + 36);
  *((_WORD *)a2 + 620) = *(_WORD *)(a1 + 40);
  *((_BYTE *)a2 + 1242) = *(_BYTE *)(a1 + 42);
  a2[311] = *(_DWORD *)(a1 + 44);
  a2[312] = *(_DWORD *)(a1 + 48);
  a2[318] = *(_DWORD *)(a1 + 72);
  a2[372] = *(_DWORD *)(a1 + 368);
  a2[302] = *(_DWORD *)a1;
  a2[369] = *(_DWORD *)(a1 + 352);
  a2[373] = *(_DWORD *)(a1 + 372);
  _memcpy_s(a2 + 319, 0xC8u, (const void *const)(a1 + 152), 0xC8u);
  _memcpy_s(a2 + 2, 0x4B0u, (const void *const)(a1 + 80), 0x48u);
}
