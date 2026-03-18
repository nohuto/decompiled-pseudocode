/*
 * XREFs of EngIntersectRgn @ 0x1C00D9570
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C002EE00 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0077A3C (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngIntersectRgn(HANDLE hrgnResult, HANDLE hRgnA, HANDLE hRgnB)
{
  INT v6; // ecx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgnResult, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hRgnA, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hRgnB, 4) )
  {
    v6 = 0;
  }
  else
  {
    v6 = GreCombineRgn((HRGN)hrgnResult, (HRGN)hRgnA, (HRGN)hRgnB, 1);
  }
  if ( v8 )
    *(_BYTE *)(v8 + 331) = 0;
  return v6;
}
