/*
 * XREFs of EngSetRectRgn @ 0x1C0131750
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
 *     GreGetObjectOwner @ 0x1C007A080 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BF180 (--0EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngSetRectRgn(HANDLE hrgn, INT left, INT top, INT right, INT bottom)
{
  BOOL result; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v10);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreSetRectRgn((HRGN)hrgn, left, top, right, bottom);
  if ( v10[0] )
    *(_DWORD *)(v10[0] + 328LL) &= ~0x10u;
  return result;
}
