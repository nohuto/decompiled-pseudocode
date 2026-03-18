/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0274200
 * Callers:
 *     <none>
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C00245E0 (UserGetRedirectedWindowOrigin.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00EE430 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00EE4C0 (DxEngSetPaletteState.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        LONG lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int v13; // r12d
  HPALETTE Palette; // rax
  HBITMAP Bitmap; // rax
  HPALETTE v19; // rdi
  HSURF v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  SURFOBJ *v23; // rax
  SURFOBJ *v24; // rbx
  __int64 v25; // rax
  HDC DisplayDC; // rax
  DC *v27; // rcx
  int v28; // r14d
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  int v31; // ebx
  int v32; // edi
  int RedirectedWindowOrigin; // eax
  int v34; // edx
  int v35; // r9d
  int v36; // r8d
  int v37; // ebx
  int v38; // eax
  int v39; // edi
  int v40; // r8d
  int v41; // r15d
  signed int v42; // r10d
  int v43; // r14d
  unsigned int v44; // esi
  int v45; // r10d
  int v46; // r11d
  int v47; // r9d
  int v48; // ecx
  unsigned int v49; // edx
  unsigned int v50; // r8d
  int v51; // ecx
  int v52; // r9d
  int v53; // eax
  int v54; // r9d
  __int64 v55; // rcx
  char v56; // r15
  int v57; // edi
  int v58; // esi
  unsigned int v59; // ebx
  int v60; // r15d
  int v61; // r9d
  unsigned int v62; // eax
  char v64; // [rsp+70h] [rbp-90h]
  int v65[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+80h] [rbp-80h]
  unsigned int v67; // [rsp+88h] [rbp-78h]
  SIZEL sizl; // [rsp+90h] [rbp-70h]
  __int128 v69; // [rsp+98h] [rbp-68h] BYREF
  DC *v70[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-48h] BYREF
  HDC v72; // [rsp+C0h] [rbp-40h]
  HDC v73; // [rsp+C8h] [rbp-38h]
  HPALETTE hpal; // [rsp+D0h] [rbp-30h]
  unsigned int v75; // [rsp+D8h] [rbp-28h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  HSURF v77; // [rsp+E8h] [rbp-18h]
  __int128 v78; // [rsp+F0h] [rbp-10h] BYREF
  int v79[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v80; // [rsp+108h] [rbp+8h]
  int v81[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v84; // [rsp+128h] [rbp+28h]
  unsigned int v85; // [rsp+12Ch] [rbp+2Ch]

  v13 = 0;
  *(_QWORD *)v65 = a12;
  *(_QWORD *)v81 = a13;
  v76 = a4;
  v73 = a2;
  if ( !a2 )
    return v13;
  DCOBJ::DCOBJ((DCOBJ *)v70, a2);
  if ( !v70[0] )
    return v13;
  if ( a9 )
    Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
  else
    Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
  hpal = Palette;
  if ( Palette )
  {
    sizl = (SIZEL)__PAIR64__(a8, a7);
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v19 = hpal;
    v20 = (HSURF)Bitmap;
    v77 = (HSURF)Bitmap;
    DxEngSetPaletteState(hpal, v21, v22);
    if ( !v20 )
    {
LABEL_69:
      EngDeletePalette(v19);
      goto LABEL_70;
    }
    v23 = EngLockSurface(v20);
    v24 = v23;
    if ( !v23
      || (DxEngSelectPaletteToSurface((__int64)v23, v19),
          v25 = SURFOBJ_TO_SURFACE(v24),
          *(_DWORD *)(v25 + 112) |= 0x104200u,
          EngUnlockSurface(v24),
          DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v70[0] + 6), 1LL, 0LL),
          (v72 = DisplayDC) == 0LL) )
    {
LABEL_68:
      EngDeleteSurface(v20);
      goto LABEL_69;
    }
    if ( !hbmSelectBitmap(DisplayDC, v20, 0LL, 1LL) )
    {
LABEL_67:
      bDeleteDCInternal(v72, 1LL, 0LL);
      goto LABEL_68;
    }
    v27 = v70[0];
    v69 = 0uLL;
    v28 = 0;
    sizl = 0LL;
    v67 = *(_DWORD *)(*((_QWORD *)v70[0] + 122) + 108LL);
    v75 = v67 & 7;
    if ( (v67 & 7) != 0 )
    {
      DC::dwSetLayout(v70[0], -1, 0);
      v27 = v70[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v27 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v70[0] + 9) & 0x4000) != 0 )
          v28 = 1;
        v30 = *(_OWORD *)((char *)v70[0] + 1032);
        *(_QWORD *)v79 = 0LL;
        v78 = v30;
        if ( (*((_DWORD *)v70[0] + 9) & 0x4000) != 0
          && (v71 = 0LL, (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v71)) )
        {
          DWORD2(v78) += v71;
          v31 = v71 + v78;
          v32 = HIDWORD(v71) + DWORD1(v78);
          HIDWORD(v78) += HIDWORD(v71);
          DWORD1(v78) += HIDWORD(v71);
          LODWORD(v78) = v71 + v78;
        }
        else
        {
          v32 = DWORD1(v78);
          v31 = v78;
        }
        if ( v28 )
        {
          RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)a2, (__int64)v79);
          v31 = v78;
          v32 = DWORD1(v78);
          if ( RedirectedWindowOrigin )
          {
            DWORD2(v78) += v79[0];
            v31 = v79[0] + v78;
            v32 = v79[1] + DWORD1(v78);
            HIDWORD(v78) += v79[1];
            DWORD1(v78) += v79[1];
            LODWORD(v78) = v79[0] + v78;
          }
        }
        IntersectRect(&v69, (int *)&v78, a3);
        if ( v31 != (_DWORD)v69
          || __PAIR64__(DWORD2(v78), v32) != *(_QWORD *)((char *)&v69 + 4)
          || HIDWORD(v78) != HIDWORD(v69) )
        {
          sizl = (SIZEL)a3;
          LODWORD(v69) = v69 - v31;
          DWORD2(v69) -= v31;
          DWORD1(v69) -= v32;
          HIDWORD(v69) -= v32;
        }
        goto LABEL_32;
      }
      v29 = *(_OWORD *)a3;
    }
    else
    {
      v29 = *(_OWORD *)((char *)v70[0] + 1032);
    }
    v78 = v29;
    v31 = v29;
LABEL_32:
    v34 = *(_DWORD *)(a1 + 88);
    DWORD2(v78) -= v31;
    HIDWORD(v78) -= DWORD1(v78);
    v84 = a7;
    v85 = a8;
    *(_QWORD *)&v78 = 0LL;
    v83 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int128 *, __int64, __int64))v81)(
           &v83,
           &v78,
           (a1 + 48) & -(__int64)((v34 & 0x80u) != 0),
           (a1 + 32) & -(__int64)((v34 & 0x40) != 0))
      && (v35 = DWORD2(v78)) != 0
      && (v36 = HIDWORD(v78)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v39 = DWORD1(v78);
        v37 = v78;
      }
      else
      {
        v35 = *a3 + DWORD2(v78);
        v37 = *a3 + v78;
        v38 = a3[1];
        v39 = v38 + DWORD1(v78);
        v36 = v38 + HIDWORD(v78);
        LODWORD(v78) = v37;
        HIDWORD(v78) += v38;
        DWORD2(v78) = v35;
        DWORD1(v78) += v38;
      }
      v40 = v36 - v39;
      v41 = HIDWORD(v83);
      v42 = v85 - HIDWORD(v83);
      v43 = v83;
      if ( v40 == v85 - HIDWORD(v83) && v35 - v37 == v84 - (_DWORD)v83 )
      {
        v44 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          while ( 1 )
          {
            *(_QWORD *)v65 = 0LL;
            v66 = 0LL;
            IntersectRect(v65, (int *)(v76 + 16LL * v44), (int *)&v83);
            v45 = v65[0];
            v46 = v65[1];
            v47 = v37 - v43 + v66;
            LODWORD(v66) = v47;
            v48 = v39 - v41 + HIDWORD(v66);
            HIDWORD(v66) = v48;
            v49 = v37 + v65[0] - v43;
            v65[0] = v49;
            v50 = v39 + v65[1] - v41;
            v65[1] = v50;
            if ( sizl )
            {
              IntersectRect(v65, v65, (int *)&v69);
              v49 = v65[0];
              v50 = v65[1];
              v48 = HIDWORD(v66);
              v47 = v66;
              v45 = v43 + v65[0] - v37;
              v46 = v41 + v65[1] - v39;
            }
            v51 = v48 - v50;
            v52 = v47 - v49;
            v53 = a10
                ? NtGdiTransparentBlt(v73, v49, v50, v52, v51, v72, v45, v46, v52, v51, a11)
                : NtGdiBitBltInternal(v73, v49, v50, v52, v51, v72, v45, v46, -2134114272, 0, 0);
            ++v44;
            v79[0] = v53;
            if ( v44 >= *(_DWORD *)(a1 + 64) )
              break;
            v41 = HIDWORD(v83);
            v43 = v83;
            v39 = DWORD1(v78);
            v37 = v78;
          }
          v13 = v79[0];
        }
      }
      else
      {
        v54 = v35 - v37;
        v55 = *((_QWORD *)v70[0] + 122);
        v56 = *(_BYTE *)(v55 + 215);
        v79[0] = (v54 << 16) / (int)(v84 - v83);
        v64 = v56;
        LODWORD(v71) = (v40 << 16) / v42;
        if ( sizl )
        {
          v57 = (int)((v84 - (_DWORD)v83) << 16) / v54;
          v58 = (v42 << 16) / v40;
        }
        else
        {
          v57 = v67;
          v58 = v67;
        }
        v59 = 0;
        *(_BYTE *)(v55 + 215) = 3;
        if ( *(_DWORD *)(a1 + 64) )
        {
          v60 = v79[0];
          do
          {
            *(_QWORD *)v81 = 0LL;
            v82 = 0LL;
            *(_QWORD *)v79 = 0LL;
            v80 = 0LL;
            IntersectRect(v79, (int *)(v76 + 16LL * v59), (int *)&v83);
            (*(void (__fastcall **)(__int128 *, __int64 *, int *, int *, int, _DWORD))v65)(
              &v78,
              &v83,
              v81,
              v79,
              v60,
              v71);
            if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v81, v81, (int *)&v69) )
              (*(void (__fastcall **)(__int64 *, __int128 *, int *, int *, int, int))v65)(
                &v83,
                &v78,
                v79,
                v81,
                v57,
                v58);
            v61 = v82 - v81[0];
            if ( a10 )
              v62 = NtGdiTransparentBlt(
                      v73,
                      v81[0],
                      v81[1],
                      v61,
                      HIDWORD(v82) - v81[1],
                      v72,
                      v79[0],
                      v79[1],
                      (int)v80 - v79[0],
                      HIDWORD(v80) - v79[1],
                      a11);
            else
              v62 = GreStretchBltInternal(
                      v73,
                      v81[0],
                      v81[1],
                      v61,
                      HIDWORD(v82) - v81[1],
                      v72,
                      v79[0],
                      v79[1],
                      (int)v80 - v79[0],
                      HIDWORD(v80) - v79[1],
                      -2134114272,
                      0,
                      0);
            ++v59;
            v13 = v62;
          }
          while ( v59 < *(_DWORD *)(a1 + 64) );
          v56 = v64;
        }
        *(_BYTE *)(*((_QWORD *)v70[0] + 122) + 215LL) = v56;
      }
    }
    else
    {
      v13 = 1;
    }
    GreUnlockVisRgn(*((_QWORD *)v70[0] + 6));
    if ( v75 )
      DC::dwSetLayout(v70[0], -1, v67);
    v20 = v77;
    v19 = hpal;
    goto LABEL_67;
  }
LABEL_70:
  if ( v70[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v70);
  return v13;
}
