/*
 * XREFs of ?HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180130190
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::HasMenuButtonReleased(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v2; // al
  bool v4; // zf

  if ( (*((_BYTE *)a2 + 728) & 2) == 0 || (v2 = 1, *((_BYTE *)this + 5584)) )
    v2 = 0;
  if ( !*((_BYTE *)this + 4632) )
  {
    if ( v2 )
    {
      *((_BYTE *)this + 4537) = 0;
      *((_BYTE *)this + 4632) = 1;
    }
    return 0;
  }
  if ( v2 )
    return 0;
  v4 = *((_BYTE *)this + 4537) == 0;
  *((_BYTE *)this + 4632) = 0;
  return v4;
}
