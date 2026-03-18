/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C013BA84
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0064044 (_ExcludeUpdateRgn.c)
 *     NtGdiExtSelectClipRgn @ 0x1C0078A80 (NtGdiExtSelectClipRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E8CB4 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     DrawTextExWorker @ 0x1C022C45C (DrawTextExWorker.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0079BB4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008B24C (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C008F33C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  DC *v8; // rcx
  DC *v10[2]; // [rsp+28h] [rbp-29h] BYREF
  struct REGION *v11; // [rsp+38h] [rbp-19h] BYREF
  struct REGION *v12[3]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+7h] BYREF
  char v14; // [rsp+70h] [rbp+1Fh]

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v4;
  }
  MDCOBJ::MDCOBJ((MDCOBJ *)v10, a1);
  v8 = v10[0];
  if ( v10[0] )
  {
    if ( a4 )
      goto LABEL_6;
    if ( (*(_DWORD *)(HmgPentryFromPobj(v10[0]) + 8) & 0xFFFFFFFE) != 0 )
    {
      v8 = v10[0];
LABEL_6:
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v12, a2, 1);
        if ( v12[0] )
        {
          v4 = DC::iSelect(v10[0], v12[0], a3);
          if ( v4 )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v10, 1);
            v4 = 0;
            if ( (v14 & 1) != 0 )
            {
              v11 = XDCOBJ::prgnEffRao(v10);
              v4 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v12);
      }
      else if ( a3 == 5 )
      {
        v4 = DC::iSelect(v8, 0LL, 5);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v10, 1);
          v4 = 0;
          if ( (v14 & 1) != 0 )
          {
            v11 = DC::prgnVisSnap(v10[0]);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
        }
      }
      goto LABEL_19;
    }
  }
  EngSetLastError(6u);
LABEL_19:
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v4;
}
