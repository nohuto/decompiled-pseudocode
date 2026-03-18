/*
 * XREFs of GreOffsetRgn @ 0x1C001CB60
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C00298B0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiOffsetRgn @ 0x1C008B400 (NtGdiOffsetRgn.c)
 *     EngOffsetRgn @ 0x1C0107390 (EngOffsetRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029690 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF
  struct _POINTL v8; // [rsp+88h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 0, 0);
  v5 = 0;
  v8.x = a2;
  v8.y = a3;
  if ( v7[0] && (unsigned int)RGNOBJ::bOffset((RGNOBJ *)v7, &v8) )
    v5 = RGNOBJ::iComplexity((RGNOBJ *)v7);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
