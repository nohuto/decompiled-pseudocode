/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034E30
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180018E30 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800352B8 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180035464 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x1800355C0 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x180035688 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x1800356F0 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x180035718 (-EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180036348 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800B118C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v3; // ecx
  HRGN v4; // rsi
  int v5; // eax
  LONG left; // r13d
  LONG v7; // r8d
  int top; // r15d
  LONG v9; // edx
  int v10; // ecx
  int v11; // r9d
  int v12; // r12d
  __int64 v13; // rax
  int v14; // edi
  int v15; // ebx
  LONG bottom; // edx
  CTopLevelWindow *v17; // rcx
  LONG right; // r8d
  int MustBeOpaque; // eax
  int v20; // r9d
  LONG v21; // r10d
  int v22; // eax
  int v23; // r13d
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // r9d
  int v28; // r8d
  LONG v29; // r10d
  LONG v30; // eax
  HRGN RoundRectRgn; // rax
  HRGN v32; // r15
  int v33; // eax
  signed int GeometryFromHRGN; // ebx
  int v35; // eax
  HRGN v36; // rdi
  int v37; // r9d
  HRGN v38; // rax
  signed int v40; // eax
  int v41; // edx
  unsigned int v42; // ecx
  int v43; // r8d
  unsigned int v44; // eax
  signed int v45; // eax
  signed int v46; // eax
  int v47; // edx
  unsigned int v48; // ecx
  int v49; // r8d
  signed int LastError; // eax
  int v51; // [rsp+30h] [rbp-59h]
  HRGN hrgnDst; // [rsp+38h] [rbp-51h] BYREF
  int v53; // [rsp+40h] [rbp-49h]
  int v54; // [rsp+44h] [rbp-45h]
  int v55; // [rsp+48h] [rbp-41h]
  int v56; // [rsp+4Ch] [rbp-3Dh]
  struct tagRECT rc; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v58; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT Src; // [rsp+70h] [rbp-19h] BYREF
  LONG v60; // [rsp+80h] [rbp-9h]
  int v61; // [rsp+84h] [rbp-5h]
  int v62; // [rsp+88h] [rbp-1h]
  int v63; // [rsp+8Ch] [rbp+3h]
  int v64; // [rsp+90h] [rbp+7h]
  int v65; // [rsp+94h] [rbp+Bh]
  int v66; // [rsp+98h] [rbp+Fh]
  int v67; // [rsp+9Ch] [rbp+13h]
  LONG v68; // [rsp+A0h] [rbp+17h]
  int v69; // [rsp+A4h] [rbp+1Bh]
  int v70; // [rsp+A8h] [rbp+1Fh]
  int v71; // [rsp+ACh] [rbp+23h]

  v1 = *((_QWORD *)this + 90);
  v3 = *((_DWORD *)this + 146);
  v4 = 0LL;
  hrgnDst = 0LL;
  *(_QWORD *)&v58.left = CTopLevelWindow::s_ChooseWindowFrameFromStyle(v3, 1, (*(_BYTE *)(v1 + 599) & 0x10) != 0);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 90) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  v5 = *((_DWORD *)this + 155);
  left = v5 + rc.left;
  v7 = rc.right - *((_DWORD *)this + 156);
  top = *((_DWORD *)this + 157) + rc.top;
  v9 = rc.bottom - *((_DWORD *)this + 158);
  v10 = *((_DWORD *)this + 151) - v5;
  v11 = *((_DWORD *)this + 154) - *((_DWORD *)this + 158);
  v12 = *((_DWORD *)this + 152) - *((_DWORD *)this + 156);
  v56 = *((_DWORD *)this + 153) - *((_DWORD *)this + 157);
  v13 = *((_QWORD *)this + 40);
  rc.left = left;
  rc.right = v7;
  rc.top = top;
  rc.bottom = v9;
  v51 = v10;
  v53 = v10 - *(_DWORD *)(v13 + 24);
  v55 = v11;
  if ( v53 < 0 )
    v53 = 0;
  v14 = v12 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
  if ( v14 < 0 )
    v14 = 0;
  v15 = v11 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
  if ( v15 < 0 )
    v15 = 0;
  v54 = (int)((double)dword_1800D4E20 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60));
  if ( CTopLevelWindow::TreatAsActiveWindow(this)
    || (MustBeOpaque = CTopLevelWindow::EdgeBorderMustBeOpaque(v17),
        bottom = rc.bottom,
        right = rc.right,
        top = rc.top,
        left = rc.left,
        MustBeOpaque) )
  {
    v20 = 0;
  }
  else
  {
    v20 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
  }
  Src.top = top + v20;
  v21 = v53 + v20 + left;
  v22 = left + v51;
  Src.left = v21;
  v23 = v56;
  v62 = v22;
  Src.right = right - v20 - v14;
  v24 = bottom - v55;
  Src.bottom = top + v54;
  v60 = v21;
  v61 = top + v54;
  if ( top + v56 > bottom - v55 )
    v63 = top + v56;
  else
    v63 = bottom - v55;
  v65 = top + v54;
  v64 = right - v12;
  v66 = right - v20 - v14;
  if ( top + v56 > v24 )
    v67 = top + v56;
  else
    v67 = bottom - v55;
  v68 = v21;
  if ( v24 < 0 )
    v69 = 0;
  else
    v69 = bottom - v55;
  v70 = right - v20 - v14;
  v25 = bottom - v20 - v15;
  if ( v25 < 0 )
    v71 = 0;
  else
    v71 = v25;
  SetLastError(0);
  v26 = 0x7FFFFFF;
  v27 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v27 = -134217728;
  }
  else if ( v27 >= 0x7FFFFFF )
  {
    v27 = 0x7FFFFFF;
  }
  v28 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v28 = -134217728;
  }
  else if ( v28 >= 0x7FFFFFF )
  {
    v28 = 0x7FFFFFF;
  }
  v29 = rc.top;
  if ( rc.top <= -134217728 )
  {
    v29 = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    v29 = 0x7FFFFFF;
  }
  v30 = rc.left;
  if ( rc.left <= -134217728 )
  {
    v30 = -134217728;
  }
  else if ( rc.left >= 0x7FFFFFF )
  {
    goto LABEL_30;
  }
  v26 = v30;
LABEL_30:
  RoundRectRgn = CreateRoundRectRgn(
                   v26,
                   v29,
                   v28,
                   v27,
                   2 * *(_DWORD *)(*(_QWORD *)&v58.left + 1884LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v58.left + 1884LL));
  v32 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v33 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    GeometryFromHRGN = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDE28, 0xBu, v33, 0x128Fu);
    }
    else
    {
      v35 = HrgnFromRects(&Src, 4u, &hrgnDst);
      GeometryFromHRGN = v35;
      if ( v35 < 0 )
      {
        v36 = hrgnDst;
        v37 = v35;
        v44 = 4757;
      }
      else
      {
        SetLastError(0);
        v36 = hrgnDst;
        if ( CombineRgn(hrgnDst, hrgnDst, v32, 1) )
        {
          GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v36, (struct CResource **)this + 68);
          v37 = GeometryFromHRGN;
          if ( GeometryFromHRGN < 0 )
          {
            v44 = 4760;
          }
          else
          {
            if ( v36 )
            {
              DeleteObject(v36);
              v36 = 0LL;
              hrgnDst = 0LL;
            }
            if ( v51 < 0 )
              v51 = 0;
            v58.left = rc.left + v51;
            v58.top = rc.top + v54;
            if ( v12 >= 0 )
              LODWORD(v4) = v12;
            v58.right = rc.right - (_DWORD)v4;
            v58.bottom = rc.top + v23;
            SetLastError(0);
            v38 = CreateRectRgnCoerceInvalid(&v58);
            v4 = v38;
            if ( v38 )
            {
              GeometryFromHRGN = CTopLevelWindow::ApplyMaximizedClip(this, v38);
              v37 = GeometryFromHRGN;
              if ( GeometryFromHRGN < 0 )
              {
                v44 = 4774;
              }
              else
              {
                GeometryFromHRGN = HrgnFromRects(&v58, 1u, &hrgnDst);
                v37 = GeometryFromHRGN;
                if ( GeometryFromHRGN < 0 )
                {
                  v36 = hrgnDst;
                  v44 = 4780;
                }
                else
                {
                  SetLastError(0);
                  v36 = hrgnDst;
                  if ( CombineRgn(hrgnDst, hrgnDst, v4, 1) )
                  {
                    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v36, (struct CResource **)this + 69);
                    v37 = GeometryFromHRGN;
                    if ( GeometryFromHRGN >= 0 )
                    {
                      if ( !v36 )
                        goto LABEL_48;
                      goto LABEL_47;
                    }
                    v44 = 4783;
                  }
                  else
                  {
                    LastError = GetLastError();
                    GeometryFromHRGN = LastError;
                    if ( LastError > 0 )
                      GeometryFromHRGN = (unsigned __int16)LastError | 0x80070000;
                    if ( GeometryFromHRGN >= 0 )
                      GeometryFromHRGN = -2003304445;
                    v44 = 4782;
                    v37 = GeometryFromHRGN;
                  }
                }
              }
            }
            else
            {
              v46 = GetLastError();
              GeometryFromHRGN = v46;
              if ( v46 > 0 )
                GeometryFromHRGN = (unsigned __int16)v46 | 0x80070000;
              if ( GeometryFromHRGN >= 0 )
                GeometryFromHRGN = CheckGUIHandleQuota(v48, v47, v49);
              v37 = GeometryFromHRGN;
              v44 = 4772;
            }
          }
        }
        else
        {
          v45 = GetLastError();
          GeometryFromHRGN = v45;
          if ( v45 > 0 )
            GeometryFromHRGN = (unsigned __int16)v45 | 0x80070000;
          if ( GeometryFromHRGN >= 0 )
            GeometryFromHRGN = -2003304445;
          v44 = 4759;
          v37 = GeometryFromHRGN;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDE28, 0xBu, v37, v44);
      if ( v36 )
LABEL_47:
        DeleteObject(v36);
    }
LABEL_48:
    DeleteObject(v32);
    if ( v4 )
      DeleteObject(v4);
    return (unsigned int)GeometryFromHRGN;
  }
  v40 = GetLastError();
  GeometryFromHRGN = v40;
  if ( v40 > 0 )
    GeometryFromHRGN = (unsigned __int16)v40 | 0x80070000;
  if ( GeometryFromHRGN >= 0 )
    GeometryFromHRGN = CheckGUIHandleQuota(v42, v41, v43);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDE28, 0xBu, GeometryFromHRGN, 0x128Du);
  return (unsigned int)GeometryFromHRGN;
}
