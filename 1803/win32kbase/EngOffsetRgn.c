/*
 * XREFs of EngOffsetRgn @ 0x1C00D9610
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C002EE00 (GreGetObjectOwner.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0077A3C (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngOffsetRgn(HANDLE hrgn, INT x, INT y)
{
  INT result; // eax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v7);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreOffsetRgn((HRGN)hrgn, x, y);
  if ( v7 )
    *(_BYTE *)(v7 + 331) = 0;
  return result;
}
