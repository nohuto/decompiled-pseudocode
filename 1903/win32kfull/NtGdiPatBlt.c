/*
 * XREFs of NtGdiPatBlt @ 0x1C00711E0
 * Callers:
 *     DrawThumb2 @ 0x1C000BDD0 (DrawThumb2.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     EraseBitmap @ 0x1C0081880 (EraseBitmap.c)
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     xxxSoundSentry @ 0x1C015AB30 (xxxSoundSentry.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C024128C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02499EC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249C44 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C024A558 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024A69C (xxxMNDrawFullNC.c)
 *     DxgkEngColorFillViaGDI @ 0x1C0274A00 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0035FE8 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C005CDE4 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     bCvtPts1 @ 0x1C0072710 (bCvtPts1.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int v7; // r14d
  unsigned int v8; // esi
  DC *v11; // rbx
  struct _DC_ATTR *UserAttr; // rax
  int v13; // edi
  int v14; // esi
  char *v15; // r10
  int v16; // eax
  int v17; // r11d
  signed int v18; // r9d
  signed int v19; // ecx
  signed int v20; // r8d
  signed int v21; // edx
  DC *v22; // rcx
  struct SURFACE *v23; // rbx
  __int64 *v24; // rcx
  __int64 v25; // rbx
  struct _DC_ATTR *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // rdx
  unsigned int locked; // eax
  signed int v31; // eax
  signed int v32; // eax
  unsigned int v33; // eax
  DC *v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  int v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+84h] [rbp-7Ch] BYREF
  char *v38; // [rsp+88h] [rbp-78h] BYREF
  int v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+94h] [rbp-6Ch]
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  __int64 *v44; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int16 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  unsigned int v50; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v51; // [rsp+F4h] [rbp-Ch]
  unsigned int v52; // [rsp+F8h] [rbp-8h]
  unsigned int v53; // [rsp+FCh] [rbp-4h]

  v7 = a2;
  v36 = a5;
  LOBYTE(a2) = 1;
  v8 = 0;
  v35 = 0LL;
  v34 = (DC *)HmgLockEx(a1, a2, 0LL);
  v11 = v34;
  if ( !v34 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_57;
  }
  if ( (*((_DWORD *)v34 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v34);
    if ( UserAttr && !DC::SaveAttributes(v34, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v34 + 3);
      return v8;
    }
    *((_DWORD *)v34 + 11) |= 2u;
    v11 = v34;
    LODWORD(v35) = 1;
  }
  if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v11);
LABEL_57:
    v11 = v34;
  }
  if ( !v11 )
    return v8;
  v13 = (BYTE2(a6) << 8) | BYTE2(a6);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    v39 = *(_DWORD *)(*((_QWORD *)v11 + 122) + 208LL);
    v14 = *(_DWORD *)(*((_QWORD *)v11 + 122) + 108LL) & 1;
    v40 = v14;
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v38, (struct XDCOBJ *)&v34, 0x204u, 0);
      v15 = v38;
      v11 = v34;
      v14 = v40;
    }
    else
    {
      v15 = (char *)v11 + 320;
      v38 = (char *)v11 + 320;
    }
    v16 = *((_DWORD *)v15 + 8);
    if ( (v16 & 1) != 0 )
    {
      v17 = v36;
      v18 = v7 + a4;
      v50 = v7;
      v52 = v7 + a4;
      v19 = a3;
      v51 = a3;
      v20 = v7;
      v21 = v36 + a3;
      v53 = v36 + a3;
      if ( (v16 & 0x43) != 0x43 )
      {
        bCvtPts1(v15, &v50, 2LL);
        v21 = v53;
        v18 = v52;
        v19 = v51;
        v20 = v50;
        v17 = v36;
      }
      if ( v14 )
      {
        ++v20;
        ++v18;
        v50 = v20;
        v52 = v18;
      }
      if ( v20 > v18 )
      {
        v31 = v20;
        v50 = v18;
        v20 = v18;
        v52 = v31;
        v18 = v31;
      }
      if ( v19 > v21 )
      {
        v32 = v19;
        v51 = v21;
        v19 = v21;
        v53 = v32;
        v21 = v32;
      }
      if ( v20 != v18 && v19 != v21 )
      {
        if ( (*((_DWORD *)v11 + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v34, (struct ERECTL *)&v50);
        if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
          bSpDwmValidateSurface((struct XDCOBJ *)&v34, v7, a3, a4, v17);
        v46 = 256;
        v45 = 0LL;
        v41 = 0LL;
        v42 = 0LL;
        v43 = 0;
        v44 = 0LL;
        v49 = 0LL;
        v48 = 0LL;
        v47 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v41, (struct XDCOBJ *)&v34, 0) )
        {
          v22 = v34;
          v23 = (struct SURFACE *)*((_QWORD *)v34 + 62);
          if ( !v23 )
          {
            v8 = 1;
LABEL_29:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v41);
            v24 = v44;
            if ( v44 )
            {
              if ( (_BYTE)v46 )
              {
                *((_DWORD *)v44 + 10) &= ~2u;
                v24 = v44;
                LOBYTE(v46) = 0;
              }
              if ( v24 )
              {
                if ( (_DWORD)v45 && (*((_DWORD *)v24 + 11) & 2) != 0 )
                {
                  XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v44);
                  *((_DWORD *)v44 + 11) &= ~2u;
                  v24 = v44;
                  LODWORD(v45) = 0;
                }
                v36 = 0;
                v25 = *v24;
                HmgDecrementExclusiveReferenceCountEx(v24, HIDWORD(v45), &v36);
                if ( v36 )
                  bDeleteDCInternalEx(v25, 0LL);
              }
            }
            v11 = v34;
            goto LABEL_37;
          }
          v29 = *((_QWORD *)v34 + 122);
          if ( (*(_DWORD *)(v29 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v34, *(_QWORD *)(v29 + 160));
            v22 = v34;
          }
          locked = GrePatBltLockedDC(
                     (__int64)&v34,
                     (struct EXFORMOBJ *)*(unsigned int *)(*((_QWORD *)v22 + 122) + 188LL),
                     (struct ERECTL *)&v50,
                     v13,
                     v23,
                     *(_DWORD *)(*((_QWORD *)v22 + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v22 + 122) + 176LL),
                     *(_DWORD *)(*((_QWORD *)v22 + 122) + 188LL),
                     *(_DWORD *)(*((_QWORD *)v22 + 122) + 180LL));
        }
        else
        {
          locked = XDCOBJ::bFullScreen((XDCOBJ *)&v34);
        }
        v8 = locked;
        goto LABEL_29;
      }
      v8 = 1;
    }
    else
    {
      v33 = GreMaskBlt(a1, v36, 0LL, 0, 0, 0LL, 0, 0, v13 << 16, 0);
      v11 = v34;
      v8 = v33;
    }
  }
LABEL_37:
  if ( v11 )
  {
    if ( (_DWORD)v35 && (*((_DWORD *)v11 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v35) )
      {
        v26 = XDCOBJ::GetUserAttr((XDCOBJ *)&v34);
        if ( v26 )
          DC::RestoreAttributes(v34, v26);
        v11 = v34;
      }
      *((_DWORD *)v11 + 11) &= ~2u;
      v11 = v34;
      LODWORD(v35) = 0;
    }
    v37 = 0;
    v27 = *(_QWORD *)v11;
    HmgDecrementExclusiveReferenceCountEx(v11, HIDWORD(v35), &v37);
    if ( v37 )
      bDeleteDCInternalEx(v27, 0LL);
  }
  return v8;
}
