/*
 * XREFs of ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C00AE484
 * Callers:
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0072F54 (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTFX::vInclude(ERECTFX *this, struct _POINTFIX *a2)
{
  FIX x; // eax
  FIX y; // eax

  x = a2->x;
  if ( *(_DWORD *)this > a2->x )
  {
    *(_DWORD *)this = x;
  }
  else if ( *((_DWORD *)this + 2) < x )
  {
    *((_DWORD *)this + 2) = x;
  }
  y = a2->y;
  if ( *((_DWORD *)this + 3) < y )
  {
    *((_DWORD *)this + 3) = y;
  }
  else if ( *((_DWORD *)this + 1) > y )
  {
    *((_DWORD *)this + 1) = y;
  }
}
