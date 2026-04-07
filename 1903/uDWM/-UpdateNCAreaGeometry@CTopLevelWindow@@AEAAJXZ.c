/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001FA40
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001E9C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001FFD0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800201A0 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x180020304 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E888 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800B755C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this, __int64 a2)
{
  __int64 v2; // rax
  HRGN v3; // r15
  int v4; // edi
  char v6; // bl
  char v7; // bl
  __int64 v8; // rcx
  int v9; // eax
  LONG left; // r14d
  int right; // r8d
  int top; // r10d
  int bottom; // ecx
  int v14; // edx
  int v15; // r12d
  int v16; // r13d
  __int64 v17; // rax
  int v18; // edi
  int v19; // ebx
  bool v20; // zf
  __int64 v21; // rax
  int v22; // r9d
  LONG v23; // edx
  LONG v24; // edi
  int v25; // r10d
  int v26; // eax
  int v27; // ecx
  int v28; // r14d
  int v29; // r9d
  int v30; // r8d
  LONG v31; // edx
  LONG v32; // eax
  HRGN RoundRectRgn; // rax
  int v34; // eax
  signed int v35; // ebx
  int v36; // eax
  HRGN v37; // rdi
  int GeometryFromHRGN; // eax
  int v39; // r12d
  int v40; // r13d
  LONG v41; // ebx
  int v42; // r15d
  HRGN RectRgn; // rax
  int v44; // eax
  signed int v46; // eax
  int v47; // edx
  unsigned int v48; // ecx
  int v49; // r8d
  signed int LastError; // eax
  int v51; // r9d
  signed int v52; // eax
  int v53; // edx
  unsigned int v54; // ecx
  int v55; // r8d
  signed int v56; // eax
  unsigned int w; // [rsp+20h] [rbp-79h]
  void *h; // [rsp+28h] [rbp-71h]
  int v59; // [rsp+30h] [rbp-69h]
  HRGN hrgnDst; // [rsp+38h] [rbp-61h] BYREF
  HRGN hrgnSrc2; // [rsp+40h] [rbp-59h]
  int v62; // [rsp+48h] [rbp-51h]
  int v63; // [rsp+4Ch] [rbp-4Dh]
  int v64; // [rsp+50h] [rbp-49h]
  struct tagRECT rc; // [rsp+58h] [rbp-41h] BYREF
  struct tagRECT v66; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT Src; // [rsp+80h] [rbp-19h] BYREF
  LONG v68; // [rsp+90h] [rbp-9h]
  LONG v69; // [rsp+94h] [rbp-5h]
  int v70; // [rsp+98h] [rbp-1h]
  int v71; // [rsp+9Ch] [rbp+3h]
  int v72; // [rsp+A0h] [rbp+7h]
  LONG v73; // [rsp+A4h] [rbp+Bh]
  LONG v74; // [rsp+A8h] [rbp+Fh]
  int v75; // [rsp+ACh] [rbp+13h]
  int v76; // [rsp+B0h] [rbp+17h]
  int v77; // [rsp+B4h] [rbp+1Bh]
  LONG v78; // [rsp+B8h] [rbp+1Fh]
  int v79; // [rsp+BCh] [rbp+23h]

  v2 = *((_QWORD *)this + 90);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 146);
  hrgnDst = 0LL;
  v6 = *(_BYTE *)(v2 + 607);
  IsOpenThemeDataPresent(this, a2);
  v7 = v6 & 0x10;
  if ( (v4 & 0x20) != 0 )
  {
    if ( v7 || (v4 & 0x40) != 0 )
      v8 = 16LL;
    else
      v8 = 24LL;
  }
  else if ( v7 || (v4 & 0x40) != 0 )
  {
    v8 = 0LL;
    if ( (v4 & 2) != 0 )
      v8 = 32LL;
  }
  else if ( (v4 & 2) != 0 )
  {
    v8 = 40LL;
  }
  else
  {
    v8 = 8LL;
  }
  *(_QWORD *)&v66.left = *(_QWORD *)(v8 + CTopLevelWindow::s_rgpwfWindowFrames);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 90) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  v9 = *((_DWORD *)this + 155);
  left = v9 + rc.left;
  right = rc.right - *((_DWORD *)this + 156);
  top = *((_DWORD *)this + 157) + rc.top;
  bottom = rc.bottom - *((_DWORD *)this + 158);
  v14 = *((_DWORD *)this + 151) - v9;
  v15 = *((_DWORD *)this + 152) - *((_DWORD *)this + 156);
  v16 = *((_DWORD *)this + 154) - *((_DWORD *)this + 158);
  v63 = *((_DWORD *)this + 153) - *((_DWORD *)this + 157);
  v17 = *((_QWORD *)this + 40);
  rc.left = left;
  rc.right = right;
  rc.top = top;
  rc.bottom = bottom;
  v59 = v14;
  LODWORD(hrgnSrc2) = v14 - *(_DWORD *)(v17 + 24);
  v64 = v15;
  if ( (int)hrgnSrc2 < 0 )
    LODWORD(hrgnSrc2) = 0;
  v18 = v15 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
  if ( v18 < 0 )
    v18 = 0;
  v19 = v16 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
  if ( v19 < 0 )
    v19 = 0;
  v20 = (*((_BYTE *)this + 584) & 0x40) == 0;
  v62 = (int)((double)dword_1800DBE30 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60));
  if ( v20 )
  {
    v21 = *((_QWORD *)this + 90);
    if ( (*(_BYTE *)(v21 + 607) & 0x10) == 0 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    {
      if ( !(unsigned int)IsWindowArranged(*(_QWORD *)(v21 + 40)) && (*((_BYTE *)this + 584) & 0x20) == 0 )
      {
        bottom = rc.bottom;
        right = rc.right;
        top = rc.top;
        v22 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
        left = rc.left;
        goto LABEL_18;
      }
      bottom = rc.bottom;
      right = rc.right;
      top = rc.top;
      left = rc.left;
    }
  }
  v22 = 0;
LABEL_18:
  Src.top = top + v22;
  v23 = right - v22 - v18;
  v24 = top + v62;
  v70 = left + v59;
  v25 = v63 + top;
  v26 = bottom - v16;
  Src.left = (_DWORD)hrgnSrc2 + left + v22;
  Src.right = v23;
  Src.bottom = v24;
  v68 = Src.left;
  v69 = v24;
  if ( v25 > bottom - v16 )
    v71 = v25;
  else
    v71 = bottom - v16;
  v73 = v24;
  v72 = right - v15;
  v74 = v23;
  if ( v25 > v26 )
    v75 = v25;
  else
    v75 = bottom - v16;
  v76 = (_DWORD)hrgnSrc2 + left + v22;
  if ( v26 < 0 )
    v77 = 0;
  else
    v77 = bottom - v16;
  v78 = v23;
  v27 = bottom - v22 - v19;
  if ( v27 < 0 )
    v79 = 0;
  else
    v79 = v27;
  SetLastError(0);
  v28 = 0x7FFFFFF;
  v29 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v29 = -134217728;
  }
  else if ( v29 >= 0x7FFFFFF )
  {
    v29 = 0x7FFFFFF;
  }
  v30 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v30 = -134217728;
  }
  else if ( v30 >= 0x7FFFFFF )
  {
    v30 = 0x7FFFFFF;
  }
  v31 = rc.top;
  if ( rc.top <= -134217728 )
  {
    v31 = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    v31 = 0x7FFFFFF;
  }
  v32 = rc.left;
  if ( rc.left <= -134217728 )
  {
    v32 = -134217728;
  }
  else if ( rc.left >= 0x7FFFFFF )
  {
    v32 = 0x7FFFFFF;
  }
  RoundRectRgn = CreateRoundRectRgn(
                   v32,
                   v31,
                   v30,
                   v29,
                   2 * *(_DWORD *)(*(_QWORD *)&v66.left + 1884LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v66.left + 1884LL));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v34 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    v35 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3FD0, 0xBu, v34, 0x12BCu, h);
      goto LABEL_68;
    }
    v36 = HrgnFromRects(&Src, 4u, &hrgnDst);
    v35 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3FD0, 0xBu, v36, 0x12C2u, h);
      goto LABEL_97;
    }
    SetLastError(0);
    v37 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, hrgnSrc2, 1) )
    {
      LastError = GetLastError();
      v35 = LastError;
      if ( LastError > 0 )
        v35 = (unsigned __int16)LastError | 0x80070000;
      w = 4804;
      if ( v35 >= 0 )
        v35 = -2003304445;
      v51 = v35;
      goto LABEL_121;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v37, (struct CRgnGeometryProxy **)this + 68);
    v35 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      w = 4805;
      goto LABEL_120;
    }
    if ( v37 )
    {
      DeleteObject(v37);
      v37 = 0LL;
      hrgnDst = 0LL;
    }
    if ( v59 < 0 )
      v59 = 0;
    v39 = rc.left + v59;
    v40 = rc.top + v62;
    v66.left = rc.left + v59;
    v66.top = rc.top + v62;
    if ( v64 >= 0 )
      LODWORD(v3) = v64;
    v41 = rc.right - (_DWORD)v3;
    v42 = rc.top + v63;
    v66.right = v41;
    v66.bottom = rc.top + v63;
    SetLastError(0);
    if ( v42 <= -134217728 )
    {
      v42 = -134217728;
    }
    else if ( v42 >= 0x7FFFFFF )
    {
      v42 = 0x7FFFFFF;
    }
    if ( v41 <= -134217728 )
    {
      v41 = -134217728;
    }
    else if ( v41 >= 0x7FFFFFF )
    {
      v41 = 0x7FFFFFF;
    }
    if ( v40 <= -134217728 )
    {
      v40 = -134217728;
    }
    else if ( v40 >= 0x7FFFFFF )
    {
      v40 = 0x7FFFFFF;
    }
    if ( v39 <= -134217728 )
    {
      v39 = -134217728;
    }
    else if ( v39 >= 0x7FFFFFF )
    {
LABEL_61:
      RectRgn = CreateRectRgn(v28, v40, v41, v42);
      v3 = RectRgn;
      if ( !RectRgn )
      {
        v52 = GetLastError();
        v35 = v52;
        if ( v52 > 0 )
          v35 = (unsigned __int16)v52 | 0x80070000;
        if ( v35 >= 0 )
          v35 = CheckGUIHandleQuota(v54, v53, v55);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3FD0, 0xBu, v35, 0x12D1u, h);
LABEL_122:
        if ( v37 )
LABEL_67:
          DeleteObject(v37);
LABEL_68:
        DeleteObject(hrgnSrc2);
        if ( v3 )
          DeleteObject(v3);
        return (unsigned int)v35;
      }
      GeometryFromHRGN = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v35 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        w = 4819;
        goto LABEL_120;
      }
      v44 = HrgnFromRects(&v66, 1u, &hrgnDst);
      v35 = v44;
      if ( v44 >= 0 )
      {
        SetLastError(0);
        v37 = hrgnDst;
        if ( !CombineRgn(hrgnDst, hrgnDst, v3, 1) )
        {
          v56 = GetLastError();
          v35 = v56;
          if ( v56 > 0 )
            v35 = (unsigned __int16)v56 | 0x80070000;
          w = 4827;
          if ( v35 >= 0 )
            v35 = -2003304445;
          v51 = v35;
          goto LABEL_121;
        }
        GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v37, (struct CRgnGeometryProxy **)this + 69);
        v35 = GeometryFromHRGN;
        if ( GeometryFromHRGN >= 0 )
        {
          if ( !v37 )
            goto LABEL_68;
          goto LABEL_67;
        }
        w = 4828;
LABEL_120:
        v51 = GeometryFromHRGN;
LABEL_121:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3FD0, 0xBu, v51, w, h);
        goto LABEL_122;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3FD0, 0xBu, v44, 0x12D9u, h);
LABEL_97:
      v37 = hrgnDst;
      goto LABEL_122;
    }
    v28 = v39;
    goto LABEL_61;
  }
  v46 = GetLastError();
  v35 = v46;
  if ( v46 > 0 )
    v35 = (unsigned __int16)v46 | 0x80070000;
  if ( v35 >= 0 )
    v35 = CheckGUIHandleQuota(v48, v47, v49);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3FD0, 0xBu, v35, 0x12BAu, h);
  return (unsigned int)v35;
}
