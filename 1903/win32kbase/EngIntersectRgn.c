/*
 * XREFs of EngIntersectRgn @ 0x1C01315E0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C007A080 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BF180 (--0EngModeState@@QEAA@XZ.c)
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
    *(_DWORD *)(v8 + 328) &= ~0x10u;
  return v6;
}
