/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C002B9F4
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006B6E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C012BBC4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026C190 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029094 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002BCD8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006C2C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026C624 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall bSpDwmUpdateSpriteShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int *a7,
        struct _RECTL *a8,
        struct SFMLOGICALSURFACE **a9)
{
  unsigned int v13; // esi
  LONG left; // ecx
  int top; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  struct SFMLOGICALSURFACE *v18; // r14
  struct _SURFOBJ *v19; // rdx
  LONG v20; // ebx
  LONG v21; // edi
  struct tagSIZE v22; // r8
  XLATEOBJ *v23; // rdi
  unsigned int inited; // eax
  unsigned int v25; // eax
  __int64 v27; // rax
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  struct tagSIZE v29; // [rsp+60h] [rbp-69h] BYREF
  LONG v30; // [rsp+68h] [rbp-61h] BYREF
  LONG v31; // [rsp+6Ch] [rbp-5Dh]
  HDEV v32; // [rsp+70h] [rbp-59h] BYREF
  __int64 v33; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v34[2]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp-39h] BYREF
  struct tagRECT v36; // [rsp+A0h] [rbp-29h] BYREF
  struct tagRECT v37; // [rsp+B0h] [rbp-19h] BYREF

  v32 = a1;
  v13 = 1;
  if ( a4 )
  {
    left = a5->left;
    if ( a5->left >= 0 )
    {
      top = a5->top;
      if ( top >= 0 )
      {
        right = a5->right;
        if ( right <= a4->sizlBitmap.cx )
        {
          bottom = a5->bottom;
          if ( bottom <= a4->sizlBitmap.cy && top <= bottom && left <= right )
          {
            v36.left = a5->left;
            v36.top = top;
            v29.cx = right - left;
            v36.right = right;
            v36.bottom = bottom;
            v29.cy = bottom - top;
            v35[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v35, a4);
            if ( !v35[0] )
              goto LABEL_27;
            v13 = bSpDwmCreateLogicalSurface(a1, a2, a3, &v29, a9);
            if ( !v13 )
              goto LABEL_27;
            v18 = *a9;
            v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 23);
            v34[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v34, v19);
            if ( !v34[0] )
              goto LABEL_26;
            v20 = v36.left;
            v21 = v36.top;
            v36.right -= v36.left;
            v36.bottom -= v36.top;
            v30 = v36.left;
            v31 = v36.top;
            *(_QWORD *)&v36.left = 0LL;
            if ( a8 )
            {
              ERECTL::operator*=(&v36, a8);
              v30 = v36.left + v20;
              v31 = v36.top + v21;
            }
            if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v36) )
            {
LABEL_26:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
LABEL_27:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
              return v13;
            }
            v23 = xloIdent;
            v29 = v22;
            if ( a6 )
            {
              inited = EXLATEOBJ::bInitXlateObj(
                         &v29,
                         0LL,
                         0LL,
                         a6,
                         gppalRGB,
                         ppalDefault,
                         ppalDefault,
                         v22.cx,
                         v22.cx,
                         v22.cx,
                         v22.cx);
              v23 = (XLATEOBJ *)v29;
              v13 = inited;
            }
            if ( v13 )
            {
              if ( (*((_DWORD *)a2 + 41) & 0x20) != 0 )
              {
                v37 = v36;
                ERECTL::vScale((ERECTL *)&v36, (struct DWMSPRITE *)((char *)a2 + 156));
                v27 = SURFOBJ_TO_SURFACE_NOT_NULL(a4);
                if ( (*(_DWORD *)(v27 + 116) & 0x800) != 0 )
                {
                  v33 = *(_QWORD *)(v27 + 660);
                  ERECTL::vScale((ERECTL *)&v37, (const struct POINTFL *)&v33);
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
                }
                else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 23)) + 112) & 2) != 0 )
                {
                  v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 356);
                }
                else
                {
                  v28 = EngStretchBlt;
                }
                v13 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))v28)(
                        *((_QWORD *)v18 + 23),
                        a4,
                        0LL,
                        0LL,
                        v23,
                        0LL,
                        0LL,
                        &v36,
                        &v37,
                        0LL,
                        3);
              }
              else
              {
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v25 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))RedirCopyBits)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v23,
                          &v36,
                          &v30);
                }
                else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 23)) + 112) & 0x400) != 0 )
                {
                  v25 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))a1
                         + 355))(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v23,
                          &v36,
                          &v30);
                }
                else
                {
                  v25 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))EngCopyBits)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v23,
                          &v36,
                          &v30);
                }
                v13 = v25;
                if ( !v25 )
                  goto LABEL_25;
                vSpUpdateDirtyRgn(a2, v18, 0LL, &v36, a7, 0);
              }
              if ( v13 )
                vSpUpdateDirtyRgn(a2, v18, 0LL, &v36, a7, 0);
            }
LABEL_25:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29);
            goto LABEL_26;
          }
        }
      }
    }
  }
  return v13;
}
