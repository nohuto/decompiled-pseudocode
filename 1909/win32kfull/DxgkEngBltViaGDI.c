/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0273B20
 * Callers:
 *     <none>
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C002AA50 (UserGetRedirectedWindowOrigin.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00CD1B4 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00CD244 (DxEngSetPaletteState.c)
 *     NtGdiTransparentBlt @ 0x1C0148700 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026A744 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C027362C (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
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
  char v18; // di
  HBITMAP Bitmap; // rax
  HPALETTE v20; // r14
  HSURF v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rbx
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  HDC DisplayDC; // rax
  DC *v27; // rcx
  int v28; // r14d
  __int128 v29; // xmm0
  int v30; // ebx
  __int128 v31; // xmm0
  int v32; // edi
  int RedirectedWindowOrigin; // eax
  int v34; // rax^4
  int v35; // edx
  int v36; // r9d
  int v37; // r8d
  int v38; // ebx
  int v39; // eax
  int v40; // edi
  int v41; // r8d
  int v42; // r15d
  int v43; // r10d
  int v44; // r14d
  unsigned int v45; // esi
  int v46; // r10d
  int v47; // r11d
  int v48; // r9d
  int v49; // ecx
  unsigned int v50; // edx
  unsigned int v51; // r8d
  int v52; // ecx
  int v53; // r9d
  int v54; // eax
  int v55; // r9d
  __int64 v56; // rcx
  char v57; // r15
  int v58; // edi
  int v59; // esi
  unsigned int v60; // ebx
  HDC v61; // r15
  void (__fastcall *v62)(int *, __int128 *, int *, int *, int, int); // r12
  int v63; // r9d
  unsigned int v64; // eax
  char v66[8]; // [rsp+70h] [rbp-90h] BYREF
  int v67[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  SIZEL sizl; // [rsp+98h] [rbp-68h]
  __int128 v72; // [rsp+A0h] [rbp-60h] BYREF
  DC *v73[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-40h] BYREF
  int *v75; // [rsp+C8h] [rbp-38h]
  HDC v76; // [rsp+D0h] [rbp-30h]
  HPALETTE hpal; // [rsp+D8h] [rbp-28h]
  HDC v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E8h] [rbp-18h]
  __int64 v80; // [rsp+F0h] [rbp-10h]
  __int128 v81; // [rsp+F8h] [rbp-8h] BYREF
  int v82[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v83; // [rsp+110h] [rbp+10h]
  int v84; // [rsp+118h] [rbp+18h] BYREF
  int v85; // [rsp+11Ch] [rbp+1Ch]
  unsigned int v86; // [rsp+120h] [rbp+20h]
  unsigned int v87; // [rsp+124h] [rbp+24h]
  int v88[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v89; // [rsp+130h] [rbp+30h]

  v13 = 0;
  *(_QWORD *)v67 = a12;
  *(_QWORD *)v82 = a13;
  v80 = a4;
  v76 = a2;
  if ( !a2 )
    return v13;
  DCOBJ::DCOBJ((DCOBJ *)v73, a2);
  if ( !v73[0] )
    return v13;
  if ( a9 )
    Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
  else
    Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
  hpal = Palette;
  if ( Palette )
  {
    v18 = 1;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v20 = hpal;
    v21 = (HSURF)Bitmap;
    sizl = (SIZEL)Bitmap;
    DxEngSetPaletteState(hpal, v22, v23);
    if ( !v21 )
    {
LABEL_72:
      EngDeletePalette(v20);
      goto LABEL_73;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v66);
    v70 = 0LL;
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&v70, v21);
    if ( SURFREF::bValid((SURFREF *)&v70) )
    {
      v24 = v70;
      DxEngSelectPaletteToSurface(v70 + 24, v20);
      *(_DWORD *)(v24 + 112) |= 0x104200u;
      v21 = (HSURF)sizl;
    }
    else
    {
      v18 = 0;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v70);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
    if ( !v18 || (DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v73[0] + 6), 1LL), (v78 = DisplayDC) == 0LL) )
    {
LABEL_71:
      EngDeleteSurface(v21);
      goto LABEL_72;
    }
    if ( !hbmSelectBitmap(DisplayDC, v21, 0LL, 1LL) )
    {
LABEL_70:
      bDeleteDCInternal(v78, 1LL, 0LL);
      goto LABEL_71;
    }
    v27 = v73[0];
    v75 = 0LL;
    v28 = 0;
    v72 = 0uLL;
    LODWORD(v70) = *(_DWORD *)(*((_QWORD *)v73[0] + 122) + 108LL);
    v79 = v70 & 7;
    if ( (v70 & 7) != 0 )
    {
      DC::dwSetLayout(v73[0], -1, 0);
      v27 = v73[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v27 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v73[0] + 9) & 0x4000) != 0 )
          v28 = 1;
        v31 = *(_OWORD *)((char *)v73[0] + 1032);
        v69 = 0LL;
        v81 = v31;
        if ( (*((_DWORD *)v73[0] + 9) & 0x4000) != 0
          && (v74 = 0LL, (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v74)) )
        {
          DWORD2(v81) += v74;
          v30 = v74 + v81;
          v32 = HIDWORD(v74) + DWORD1(v81);
          HIDWORD(v81) += HIDWORD(v74);
          DWORD1(v81) += HIDWORD(v74);
          LODWORD(v81) = v74 + v81;
        }
        else
        {
          v32 = DWORD1(v81);
          v30 = v81;
        }
        if ( v28 )
        {
          RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v69);
          v30 = v81;
          v32 = DWORD1(v81);
          if ( RedirectedWindowOrigin )
          {
            DWORD2(v81) += v69;
            v30 = v69 + v81;
            v32 = HIDWORD(v69) + DWORD1(v81);
            HIDWORD(v81) += HIDWORD(v69);
            DWORD1(v81) += HIDWORD(v69);
            LODWORD(v81) = v69 + v81;
          }
        }
        IntersectRect(&v72, (int *)&v81, a3);
        if ( v30 != (_DWORD)v72
          || __PAIR64__(DWORD2(v81), v32) != *(_QWORD *)((char *)&v72 + 4)
          || HIDWORD(v81) != HIDWORD(v72) )
        {
          v75 = a3;
          LODWORD(v72) = v72 - v30;
          DWORD2(v72) -= v30;
          DWORD1(v72) -= v32;
          HIDWORD(v72) -= v32;
        }
        goto LABEL_34;
      }
      v29 = *(_OWORD *)a3;
    }
    else
    {
      v29 = *(_OWORD *)((char *)v73[0] + 1032);
    }
    v81 = v29;
    v30 = v29;
LABEL_34:
    v34 = DWORD1(v81);
    v35 = *(_DWORD *)(a1 + 88);
    DWORD2(v81) -= v30;
    *(_QWORD *)&v81 = 0LL;
    v85 = 0;
    v84 = 0;
    HIDWORD(v81) -= v34;
    v86 = a7;
    v87 = a8;
    if ( (*(unsigned int (__fastcall **)(int *, __int128 *, __int64, __int64))v82)(
           &v84,
           &v81,
           (a1 + 48) & -(__int64)((v35 & 0x80u) != 0),
           (a1 + 32) & -(__int64)((v35 & 0x40) != 0))
      && (v36 = DWORD2(v81)) != 0
      && (v37 = HIDWORD(v81)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v40 = DWORD1(v81);
        v38 = v81;
      }
      else
      {
        v36 = *a3 + DWORD2(v81);
        v38 = *a3 + v81;
        v39 = a3[1];
        v40 = v39 + DWORD1(v81);
        v37 = v39 + HIDWORD(v81);
        LODWORD(v81) = v38;
        HIDWORD(v81) += v39;
        DWORD2(v81) = v36;
        DWORD1(v81) += v39;
      }
      v41 = v37 - v40;
      v42 = v85;
      v43 = v87 - v85;
      v44 = v84;
      if ( v41 == v87 - v85 && v36 - v38 == v86 - v84 )
      {
        v45 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          while ( 1 )
          {
            *(_QWORD *)v67 = 0LL;
            v68 = 0LL;
            IntersectRect(v67, (int *)(v80 + 16LL * v45), &v84);
            v46 = v67[0];
            v47 = v67[1];
            v48 = v38 - v44 + v68;
            LODWORD(v68) = v48;
            v49 = v40 - v42 + HIDWORD(v68);
            HIDWORD(v68) = v49;
            v50 = v38 + v67[0] - v44;
            v67[0] = v50;
            v51 = v40 + v67[1] - v42;
            v67[1] = v51;
            if ( v75 )
            {
              IntersectRect(v67, v67, (int *)&v72);
              v50 = v67[0];
              v51 = v67[1];
              v49 = HIDWORD(v68);
              v48 = v68;
              v46 = v44 + v67[0] - v38;
              v47 = v42 + v67[1] - v40;
            }
            v52 = v49 - v51;
            v53 = v48 - v50;
            v54 = a10
                ? NtGdiTransparentBlt(v76, v50, v51, v53, v52, v78, v46, v47, v53, v52, a11)
                : NtGdiBitBltInternal(v76, v50, v51, v53, v52, v78, v46, v47, -2134114272, 0, 0);
            LODWORD(v69) = v54;
            if ( ++v45 >= *(_DWORD *)(a1 + 64) )
              break;
            v42 = v85;
            v44 = v84;
            v40 = DWORD1(v81);
            v38 = v81;
          }
          v13 = v69;
        }
      }
      else
      {
        v55 = v36 - v38;
        v56 = *((_QWORD *)v73[0] + 122);
        v57 = *(_BYTE *)(v56 + 215);
        LODWORD(v74) = (v55 << 16) / (int)(v86 - v84);
        v66[0] = v57;
        LODWORD(v69) = (v41 << 16) / v43;
        if ( v75 )
        {
          v58 = (int)((v86 - v84) << 16) / v55;
          v59 = (v43 << 16) / v41;
        }
        else
        {
          v58 = v70;
          v59 = v70;
        }
        v60 = 0;
        *(_BYTE *)(v56 + 215) = 3;
        if ( *(_DWORD *)(a1 + 64) )
        {
          v61 = v78;
          do
          {
            *(_QWORD *)v82 = 0LL;
            v83 = 0LL;
            *(_QWORD *)v88 = 0LL;
            v89 = 0LL;
            IntersectRect(v88, (int *)(v80 + 16LL * v60), &v84);
            v62 = *(void (__fastcall **)(int *, __int128 *, int *, int *, int, int))v67;
            (*(void (__fastcall **)(__int128 *, int *, int *, int *, _DWORD, _DWORD))v67)(
              &v81,
              &v84,
              v82,
              v88,
              v74,
              v69);
            if ( v75 && (unsigned int)IntersectRect(v82, v82, (int *)&v72) )
              v62(&v84, &v81, v88, v82, v58, v59);
            v63 = v83 - v82[0];
            if ( a10 )
              v64 = NtGdiTransparentBlt(
                      v76,
                      v82[0],
                      v82[1],
                      v63,
                      HIDWORD(v83) - v82[1],
                      v61,
                      v88[0],
                      v88[1],
                      (int)v89 - v88[0],
                      HIDWORD(v89) - v88[1],
                      a11);
            else
              v64 = GreStretchBltInternal(
                      v76,
                      v82[0],
                      v82[1],
                      v63,
                      HIDWORD(v83) - v82[1],
                      v61,
                      v88[0],
                      v88[1],
                      (int)v89 - v88[0],
                      HIDWORD(v89) - v88[1],
                      -2134114272,
                      0,
                      0);
            ++v60;
            v13 = v64;
          }
          while ( v60 < *(_DWORD *)(a1 + 64) );
          v57 = v66[0];
        }
        *(_BYTE *)(*((_QWORD *)v73[0] + 122) + 215LL) = v57;
      }
    }
    else
    {
      v13 = 1;
    }
    GreUnlockVisRgn(*((_QWORD *)v73[0] + 6));
    if ( v79 )
      DC::dwSetLayout(v73[0], -1, v70);
    v21 = (HSURF)sizl;
    v20 = hpal;
    goto LABEL_70;
  }
LABEL_73:
  if ( v73[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v73);
  return v13;
}
