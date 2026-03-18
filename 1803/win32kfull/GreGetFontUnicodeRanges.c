/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C00FBD98
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C00FBCE0 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rsi
  struct _FD_GLYPHSET *v6; // rax
  struct _FD_GLYPHSET *v7; // r8
  ULONG cRuns; // eax
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+28h] [rbp-18h]
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+60h] [rbp+20h] BYREF

  v3 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v14, a1);
  if ( v14[0] )
  {
    v13 = 0;
    v12 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v14, 0, 2u);
    v5 = v12;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v12 + 496));
    if ( v5 )
    {
      v15 = *(__int64 **)(v5 + 104);
      v6 = PFEOBJ::pfdg(&v15);
      v7 = v6;
      if ( v6 )
      {
        v3 = 4 * v6->cRuns + 16;
        if ( a2 )
        {
          if ( *a2 == v3 )
          {
            *a2 = v3;
            a2[2] = v6->cGlyphsSupported;
            cRuns = v6->cRuns;
            a2[1] = 0;
            a2[3] = cRuns;
            v10 = a2[1];
            if ( (v7->flAccel & 2) != 0 )
              v10 = 1;
            v11 = 0LL;
            for ( a2[1] = v10; (unsigned int)v11 < v7->cRuns; v11 = (unsigned int)(v11 + 1) )
            {
              LOWORD(a2[v11 + 4]) = v7->awcrun[(unsigned int)v11].wcLow;
              HIWORD(a2[v11 + 4]) = v7->awcrun[(unsigned int)v11].cGlyphs;
            }
          }
          else
          {
            v3 = 0;
          }
        }
        PFEOBJ::vFreepfdg(&v15);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  }
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v3;
}
