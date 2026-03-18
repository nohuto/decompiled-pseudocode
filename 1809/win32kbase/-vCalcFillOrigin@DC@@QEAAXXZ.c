/*
 * XREFs of ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C006AEF0
 * Callers:
 *     GreSetDCOrg @ 0x1C006AE40 (GreSetDCOrg.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
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
    v3 = *((_DWORD *)this + 256);
  else
    v3 = *((_DWORD *)this + 254);
  *((_DWORD *)this + 300) = *((_DWORD *)this + 31) + v3;
  if ( v2 )
    v4 = *((_DWORD *)this + 257);
  else
    v4 = *((_DWORD *)this + 255);
  *((_DWORD *)this + 301) = *((_DWORD *)this + 32) + v4;
}
