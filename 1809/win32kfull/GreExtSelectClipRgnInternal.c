/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C0160E74
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0010BC4 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x1C0056BA0 (NtGdiExtSelectClipRgn.c)
 *     _ExcludeUpdateRgn @ 0x1C010D904 (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1C024239C (DrawTextExWorker.c)
 * Callees:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005426C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00567AC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0056B24 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  DC *v8; // rcx
  unsigned __int16 v9; // dx
  __int64 v10; // rax
  unsigned int v11; // ecx
  struct REGION *v13; // [rsp+38h] [rbp-D0h] BYREF
  DC *v14[7]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v15[24]; // [rsp+78h] [rbp-90h] BYREF
  char v16; // [rsp+90h] [rbp-78h]
  struct REGION *v17[8]; // [rsp+E8h] [rbp-20h] BYREF

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v4;
  }
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v8 = v14[0];
  if ( !v14[0] )
    goto LABEL_11;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v14[0]) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_11;
    v8 = v14[0];
  }
  v9 = *((_WORD *)v8 + 6);
  if ( v9 <= 1u )
  {
    if ( a2 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 1, 0);
      if ( v17[0] )
      {
        v4 = DC::iSelect(v14[0], v17[0], a3);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14, 1);
          v4 = 0;
          if ( (v16 & 1) != 0 )
          {
            v13 = XDCOBJ::prgnEffRao(v14);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
    }
    else if ( a3 == 5 )
    {
      v4 = DC::iSelect(v8, 0LL, 5);
      if ( v4 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14, 1);
        v4 = 0;
        if ( (v16 & 1) != 0 )
        {
          v13 = DC::prgnVisSnap(v14[0]);
          v4 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
      }
    }
    goto LABEL_12;
  }
  v10 = *((_QWORD *)v8 + 6);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 40);
  else
    v11 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(11LL, v11, v9);
LABEL_11:
  EngSetLastError(6u);
LABEL_12:
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v4;
}
