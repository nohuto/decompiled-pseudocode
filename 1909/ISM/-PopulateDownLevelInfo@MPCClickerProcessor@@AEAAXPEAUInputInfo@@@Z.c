/*
 * XREFs of ?PopulateDownLevelInfo@MPCClickerProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013FF40
 * Callers:
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013FFB0 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCClickerProcessor::PopulateDownLevelInfo(MPCClickerProcessor *this, struct InputInfo *a2)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // zf
  __int128 v5; // xmm0

  v2 = *((_DWORD *)a2 + 17);
  v3 = 0;
  if ( v2 == 2 )
  {
    v3 = 1;
  }
  else if ( (unsigned int)(v2 - 4) <= 1 )
  {
    v3 = 2;
  }
  v4 = *((_BYTE *)a2 + 457) == 0;
  v5 = *(_OWORD *)((char *)a2 + 164);
  *((_DWORD *)a2 + 168) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a2 + 169) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a2 + 174) = *((_DWORD *)a2 + 46);
  *((_BYTE *)a2 + 700) = !v4;
  *((_DWORD *)a2 + 164) = v3;
  *(_OWORD *)((char *)a2 + 680) = v5;
}
