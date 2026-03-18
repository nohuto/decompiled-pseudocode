/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C000651C
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00D6D98 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1C00D7494 (BmlGetNextBestSourceMode.c)
 *     _BmlGetPathModeListForPath @ 0x1C028A084 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0006578 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this)
{
  int v2; // ecx
  unsigned int BitsPerPixel; // edi
  __int64 v5; // rax

  v2 = *((_DWORD *)this + 18);
  if ( ((v2 - 1) & 0xFFFFFFFC) != 0 || v2 == 2 )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v5);
  }
  BitsPerPixel = GetBitsPerPixel(*((enum _D3DDDIFORMAT *)this + 24));
  if ( !BitsPerPixel )
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 24);
  return BitsPerPixel;
}
