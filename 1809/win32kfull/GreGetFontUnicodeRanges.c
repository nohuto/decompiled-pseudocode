/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C0118F94
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C0118ED0 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00867CC (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00868EC (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, int *a2)
{
  ULONG v3; // ebx
  int v4; // esi
  int v5; // eax
  __int64 v6; // r14
  struct _FD_GLYPHSET *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+90h] [rbp+30h] BYREF

  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( !v13[0] )
    goto LABEL_14;
  v12 = 0;
  v11 = 0LL;
  v5 = RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v13, 0, 2u);
  v6 = v11;
  if ( v5 )
    GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
  if ( !v6 )
  {
LABEL_13:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
LABEL_14:
    v3 = v4;
    goto LABEL_15;
  }
  v15 = *(__int64 **)(v6 + 120);
  v7 = PFEOBJ::pfdg(&v15);
  if ( v7 )
  {
    v4 = 4 * v7->cRuns + 16;
    if ( a2 )
    {
      if ( *a2 == v4 )
      {
        *a2 = v4;
        a2[2] = v7->cGlyphsSupported;
        a2[3] = v7->cRuns;
        a2[1] = 0;
        a2[1] = (v7->flAccel & 2) != 0;
        if ( v7->cRuns )
        {
          do
          {
            v8 = v3;
            v9 = v3++;
            v9 *= 2LL;
            LOWORD(a2[v8 + 4]) = *(&v7->awcrun[0].wcLow + 4 * v9);
            HIWORD(a2[v8 + 4]) = *(&v7->awcrun[0].cGlyphs + 4 * v9);
          }
          while ( v3 < v7->cRuns );
        }
      }
      else
      {
        v4 = 0;
      }
    }
    PFEOBJ::vFreepfdg(&v15);
    goto LABEL_13;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
LABEL_15:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return v3;
}
