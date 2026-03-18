/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C00FC3E4
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C00FC320 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0097390 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00982E0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, unsigned int *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rbx
  struct _FD_GLYPHSET *v6; // rax
  struct _FD_GLYPHSET *v7; // r8
  ULONG cRuns; // eax
  int v10; // eax
  __int64 v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v13 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)v12, 0, 2u);
    v5 = v13;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v13 + 504));
    if ( v5 )
    {
      v14 = *(__int64 **)(v5 + 120);
      v6 = PFEOBJ::pfdg(&v14);
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
        PFEOBJ::vFreepfdg(&v14);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  }
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v3;
}
