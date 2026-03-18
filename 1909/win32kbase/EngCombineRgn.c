/*
 * XREFs of EngCombineRgn @ 0x1C012EAA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BCC64 (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCombineRgn(HANDLE hrgnTrg, HANDLE hrgnSrc1, HANDLE hrgnSrc2, INT iMode)
{
  INT v8; // ecx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v10);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgnTrg, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgnSrc1, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgnSrc2, 4) )
  {
    v8 = 0;
  }
  else
  {
    v8 = GreCombineRgn((HRGN)hrgnTrg, (HRGN)hrgnSrc1, (HRGN)hrgnSrc2, iMode);
  }
  if ( v10[0] )
    *(_DWORD *)(v10[0] + 328LL) &= ~0x10u;
  return v8;
}
