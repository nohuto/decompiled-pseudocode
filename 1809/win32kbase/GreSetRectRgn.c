/*
 * XREFs of GreSetRectRgn @ 0x1C001E010
 * Callers:
 *     SetEmptyRgn @ 0x1C001D4E0 (SetEmptyRgn.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     UserSetDCVisRgn @ 0x1C00298B0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiSetRectRgn @ 0x1C00F8C70 (NtGdiSetRectRgn.c)
 *     EngSetRectRgn @ 0x1C0107460 (EngSetRectRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // r14d
  struct _RECTL v10; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v11[8]; // [rsp+30h] [rbp-40h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 0, 0);
  v8 = 0;
  if ( v11[0] )
  {
    v10.left = a2;
    v10.top = a3;
    v10.right = a4;
    v10.bottom = a5;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      if ( a2 > a4 )
      {
        v10.left = a4;
        v10.right = a2;
      }
      if ( a3 > a5 )
      {
        v10.top = a5;
        v10.bottom = a3;
      }
      RGNOBJ::vSet((RGNOBJ *)v11, &v10);
      v8 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  return v8;
}
