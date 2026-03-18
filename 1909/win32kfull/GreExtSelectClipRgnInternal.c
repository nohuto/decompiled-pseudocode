/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C0166B64
 * Callers:
 *     NtGdiExtSelectClipRgn @ 0x1C00AAE70 (NtGdiExtSelectClipRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00CC7A0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     _ExcludeUpdateRgn @ 0x1C012E048 (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1C025AA5C (DrawTextExWorker.c)
 * Callees:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A6F14 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00A8A78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00AAA98 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00AAE18 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
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
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
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
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
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
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
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
