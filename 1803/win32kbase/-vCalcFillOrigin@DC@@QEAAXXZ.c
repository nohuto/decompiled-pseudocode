/*
 * XREFs of ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0024EAC
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOrg @ 0x1C0063710 (GreSetDCOrg.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vCalcFillOrigin(DC *this)
{
  int v2; // r8d
  int v3; // ecx
  int v4; // ecx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
    v3 = *((_DWORD *)this + 358);
  else
    v3 = *((_DWORD *)this + 356);
  *((_DWORD *)this + 396) = *((_DWORD *)this + 33) + v3;
  if ( v2 )
    v4 = *((_DWORD *)this + 359);
  else
    v4 = *((_DWORD *)this + 357);
  *((_DWORD *)this + 397) = *((_DWORD *)this + 34) + v4;
}
