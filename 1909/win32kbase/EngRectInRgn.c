/*
 * XREFs of EngRectInRgn @ 0x1C012EF40
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     GreRectInRegion @ 0x1C002C4B0 (GreRectInRegion.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BCC64 (--0EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngRectInRgn(HANDLE hrgn, LPRECT prcl)
{
  BOOL result; // eax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v5);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreRectInRegion((HRGN)hrgn, (struct _RECTL *)prcl);
  if ( v5 )
    *(_DWORD *)(v5 + 328) &= ~0x10u;
  return result;
}
