/*
 * XREFs of GreRectInRegion @ 0x1C006A120
 * Callers:
 *     NtGdiRectInRegion @ 0x1C00F8B90 (NtGdiRectInRegion.c)
 *     EngRectInRgn @ 0x1C0107400 (EngRectInRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1C006A180 (-bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, struct _RECTL *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1, 0);
  if ( a2 && v5[0] )
    LOBYTE(v3) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v5, a2) == 2;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return v3;
}
