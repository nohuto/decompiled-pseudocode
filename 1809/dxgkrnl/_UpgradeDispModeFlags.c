/*
 * XREFs of _UpgradeDispModeFlags @ 0x1C00B23E0
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00E2DB0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0120730 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020345C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C02058E0 (_CombineModeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpgradeDispModeFlags(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v5; // ecx
  unsigned int v6; // edx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 36);
  if ( (((unsigned __int8)v3 ^ *(_BYTE *)(a2 + 36)) & 1) != 0 )
    *(_DWORD *)(a1 + 36) = v3 | 1;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_DWORD *)(a2 + 40);
  if ( (((unsigned __int8)v6 ^ *(_BYTE *)(a1 + 40)) & 0x20) != 0 )
  {
    v5 |= 0x20u;
    *(_DWORD *)(a1 + 40) = v5;
    v6 = *(_DWORD *)(a2 + 40);
  }
  result = v5 ^ v6;
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v6) & 0x40) != 0 )
  {
    v5 |= 0x40u;
    *(_DWORD *)(a1 + 40) = v5;
    v6 = *(_DWORD *)(a2 + 40);
  }
  if ( ((v5 ^ v6) & 0x80u) != 0 )
    *(_DWORD *)(a1 + 40) = v5 | 0x80;
  return result;
}
