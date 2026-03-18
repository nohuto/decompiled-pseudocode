/*
 * XREFs of NtGdiPatBlt @ 0x1C0056440
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     xxxPaintMenuBar @ 0x1C00A6E80 (xxxPaintMenuBar.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     DrawThumb2 @ 0x1C0106B08 (DrawThumb2.c)
 *     EraseBitmap @ 0x1C013001C (EraseBitmap.c)
 *     xxxSoundSentry @ 0x1C0154BE0 (xxxSoundSentry.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0228810 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     xxxDrawState @ 0x1C0230354 (xxxDrawState.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0230DAC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0231004 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C0231918 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0231A54 (xxxMNDrawFullNC.c)
 *     DxgkEngColorFillViaGDI @ 0x1C025B200 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0055BA4 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // edi
  int v12; // r14d
  unsigned __int64 v13; // rax
  int v14; // r10d
  int v15; // r8d
  int v16; // r11d
  int v17; // ecx
  int v18; // edx
  int v19; // r9d
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  struct SURFACE *v23; // rsi
  __int64 v24; // rdx
  unsigned int locked; // eax
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+84h] [rbp-7Ch]
  _QWORD v31[7]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  _QWORD v35[10]; // [rsp+E0h] [rbp-20h] BYREF
  int v36; // [rsp+130h] [rbp+30h] BYREF
  int v37; // [rsp+134h] [rbp+34h]
  int v38; // [rsp+138h] [rbp+38h]
  int v39; // [rsp+13Ch] [rbp+3Ch]

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  v10 = v31[0];
  if ( v31[0] )
  {
    v11 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 208LL);
      v12 = *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 108LL) & 1;
      v30 = v12;
      if ( (*(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v28, (struct XDCOBJ *)v31, 0x204u, 0);
        v13 = v28;
        v10 = v31[0];
        v12 = v30;
      }
      else
      {
        v13 = v31[0] + 320LL;
        v28 = v31[0] + 320LL;
      }
      v14 = *(_DWORD *)(v13 + 32);
      v15 = a3;
      if ( (v14 & 1) == 0 )
      {
        v9 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
        goto LABEL_32;
      }
      v16 = a4;
      v17 = a2;
      v36 = a2;
      v37 = a3;
      v18 = a4 + a2;
      v38 = a4 + a2;
      v19 = a3 + a5;
      v39 = a3 + a5;
      if ( (v14 & 0x43) != 0x43 )
      {
        bCvtPts1(v13, &v36, 2LL);
        v19 = v39;
        v18 = v38;
        v15 = v37;
        v17 = v36;
        v16 = a4;
      }
      if ( v12 )
      {
        ++v17;
        ++v18;
        v36 = v17;
        v38 = v18;
      }
      if ( v17 > v18 )
      {
        v20 = v17;
        v36 = v18;
        v17 = v18;
        v38 = v20;
        v18 = v20;
      }
      if ( v15 > v19 )
      {
        v21 = v15;
        v37 = v19;
        v15 = v19;
        v39 = v21;
        v19 = v21;
      }
      if ( v17 == v18 || v15 == v19 )
      {
        v9 = 1;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v31, (struct ERECTL *)&v36);
      if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
        bSpDwmValidateSurface((struct XDCOBJ *)v31, a2, a3, v16, a5);
      DCOBJ::DCOBJ((DCOBJ *)v35);
      v33 = 0LL;
      v32 = 0LL;
      v34 = 0;
      v35[0] = 0LL;
      memset(&v35[6], 0, 24);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v32, (struct XDCOBJ *)v31, 0) )
      {
        v22 = v31[0];
        v23 = *(struct SURFACE **)(v31[0] + 496LL);
        if ( !v23 )
        {
          v9 = 1;
LABEL_29:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v32);
          DCOBJ::~DCOBJ((DCOBJ *)v35);
          goto LABEL_32;
        }
        v24 = *(_QWORD *)(v31[0] + 976LL);
        if ( (*(_DWORD *)(v24 + 152) & 0x1000) != 0 )
        {
          GreDCSelectBrush(v31[0], *(_QWORD *)(v24 + 160));
          v22 = v31[0];
        }
        locked = GrePatBltLockedDC(
                   (__int64)v31,
                   (struct EXFORMOBJ *)*(unsigned int *)(*(_QWORD *)(v22 + 976) + 188LL),
                   (struct ERECTL *)&v36,
                   v11,
                   v23,
                   *(_DWORD *)(*(_QWORD *)(v22 + 976) + 184LL),
                   *(_DWORD *)(*(_QWORD *)(v22 + 976) + 176LL),
                   *(_DWORD *)(*(_QWORD *)(v22 + 976) + 188LL),
                   *(_DWORD *)(*(_QWORD *)(v22 + 976) + 180LL));
      }
      else
      {
        locked = XDCOBJ::bFullScreen((XDCOBJ *)v31);
      }
      v9 = locked;
      goto LABEL_29;
    }
  }
LABEL_32:
  DCOBJ::~DCOBJ((DCOBJ *)v31);
  return v9;
}
