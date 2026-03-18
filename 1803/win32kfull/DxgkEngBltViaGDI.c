/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0242BA0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngSelectPaletteToSurface @ 0x1C0008DF0 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C0008E70 (DxEngSetPaletteState.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0076400 (UserGetRedirectedWindowOrigin.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
        unsigned int (__fastcall *a13)(int *, __int128 *, __int64, __int64))
{
  unsigned int v14; // r12d
  __int64 v16; // rsi
  HPALETTE Palette; // rax
  HPALETTE v18; // rdi
  HBITMAP Bitmap; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  SURFOBJ *v22; // rax
  SURFOBJ *v23; // rbx
  __int64 v24; // rax
  HDC DisplayDC; // rax
  __int64 v26; // rax
  int v27; // r15d
  __int128 v28; // xmm0
  HDC v29; // r12
  int v30; // ebx
  unsigned int v31; // edi
  int RedirectedWindowOrigin; // eax
  int v33; // rax^4
  int v34; // edx
  int v35; // r9d
  int v36; // r8d
  int v37; // ebx
  int v38; // eax
  int v39; // edi
  int v40; // r8d
  int v41; // r12d
  int v42; // r10d
  int v43; // r15d
  unsigned int v44; // r14d
  int v45; // r10d
  int v46; // r11d
  int v47; // r9d
  int v48; // ecx
  int v49; // edx
  int v50; // r8d
  int v51; // ecx
  int v52; // r9d
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // r9d
  int v56; // ebx
  int v57; // r14d
  int v58; // r15d
  unsigned int v59; // edi
  HDC v60; // rsi
  unsigned int v61; // r9d
  unsigned int v62; // eax
  char v64; // [rsp+70h] [rbp-90h]
  unsigned int v65; // [rsp+74h] [rbp-8Ch]
  int v66[2]; // [rsp+78h] [rbp-88h] BYREF
  int v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+84h] [rbp-7Ch]
  int v69; // [rsp+88h] [rbp-78h] BYREF
  int v70; // [rsp+8Ch] [rbp-74h]
  unsigned int v71; // [rsp+90h] [rbp-70h]
  SIZEL sizl; // [rsp+98h] [rbp-68h]
  HDC v73; // [rsp+A0h] [rbp-60h]
  int v74; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v75; // [rsp+ACh] [rbp-54h]
  int v76; // [rsp+B4h] [rbp-4Ch]
  HPALETTE hpal; // [rsp+B8h] [rbp-48h]
  unsigned int (__fastcall *v78)(int *, __int128 *, __int64, __int64); // [rsp+C0h] [rbp-40h]
  unsigned int v79; // [rsp+C8h] [rbp-38h]
  __int64 v80; // [rsp+D0h] [rbp-30h]
  HBITMAP v81; // [rsp+D8h] [rbp-28h]
  _QWORD v82[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v83; // [rsp+F0h] [rbp-10h] BYREF
  HDC v84; // [rsp+100h] [rbp+0h] BYREF
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+10Ch] [rbp+Ch]
  int v87; // [rsp+110h] [rbp+10h] BYREF
  int v88; // [rsp+114h] [rbp+14h]
  unsigned int v89; // [rsp+118h] [rbp+18h]
  unsigned int v90; // [rsp+11Ch] [rbp+1Ch]
  int v91; // [rsp+120h] [rbp+20h] BYREF
  int v92; // [rsp+124h] [rbp+24h]
  int v93; // [rsp+128h] [rbp+28h]
  int v94; // [rsp+12Ch] [rbp+2Ch]

  v14 = 0;
  *(_QWORD *)v66 = a12;
  v78 = a13;
  v80 = a4;
  v84 = a2;
  v65 = 0;
  if ( a2 )
  {
    MDCOBJ::MDCOBJ((MDCOBJ *)v82, a2);
    v16 = v82[0];
    if ( v82[0] )
    {
      if ( a9 )
        Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
      else
        Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
      hpal = Palette;
      if ( !Palette )
        goto LABEL_72;
      sizl = (SIZEL)__PAIR64__(a8, a7);
      v18 = hpal;
      Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
      v81 = Bitmap;
      DxEngSetPaletteState(hpal, v20, v21);
      if ( !Bitmap )
      {
LABEL_71:
        EngDeletePalette(v18);
LABEL_72:
        XDCOBJ::vUnlockFast((XDCOBJ *)v82);
        return v14;
      }
      v22 = EngLockSurface((HSURF)Bitmap);
      v23 = v22;
      if ( !v22
        || (DxEngSelectPaletteToSurface((__int64)v22, hpal),
            v24 = SURFOBJ_TO_SURFACE(v23),
            *(_DWORD *)(v24 + 112) |= 0x104200u,
            EngUnlockSurface(v23),
            DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v16 + 48), 1LL, 0LL),
            (v73 = DisplayDC) == 0LL) )
      {
LABEL_70:
        EngDeleteSurface((HSURF)Bitmap);
        goto LABEL_71;
      }
      if ( !hbmSelectBitmap(DisplayDC, Bitmap, 0LL, 1LL) )
      {
LABEL_69:
        bDeleteDCInternal(v73, 1LL, 0LL);
        goto LABEL_70;
      }
      v26 = *(_QWORD *)(v16 + 80);
      v27 = 0;
      sizl = 0LL;
      v71 = *(_DWORD *)(v26 + 312);
      v79 = v71 & 7;
      if ( (v71 & 7) != 0 )
        DC::dwSetLayout((DC *)v16, -1, 0);
      GreLockVisRgnShared(*(_QWORD *)(v16 + 48));
      if ( a3 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0 )
            v27 = 1;
          v29 = v84;
          v83 = *(_OWORD *)(v16 + 1440);
          if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0
            && (unsigned int)UserGetRedirectedWindowOrigin((__int64)v84, (__int64)&v69) )
          {
            DWORD2(v83) += v69;
            v30 = v69 + v83;
            v31 = v70 + DWORD1(v83);
            HIDWORD(v83) += v70;
            DWORD1(v83) += v70;
            LODWORD(v83) = v69 + v83;
          }
          else
          {
            v31 = DWORD1(v83);
            v30 = v83;
          }
          if ( v27 )
          {
            RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)v29, (__int64)&v69);
            v30 = v83;
            v31 = DWORD1(v83);
            if ( RedirectedWindowOrigin )
            {
              DWORD2(v83) += v69;
              v30 = v69 + v83;
              v31 = v70 + DWORD1(v83);
              HIDWORD(v83) += v70;
              DWORD1(v83) += v70;
              LODWORD(v83) = v69 + v83;
            }
          }
          IntersectRect(&v74, (int *)&v83, a3);
          if ( v30 != v74 || __PAIR64__(DWORD2(v83), v31) != v75 || HIDWORD(v83) != v76 )
          {
            sizl = (SIZEL)a3;
            v74 -= v30;
            HIDWORD(v75) -= v30;
            LODWORD(v75) = v75 - v31;
            v76 -= v31;
          }
          goto LABEL_32;
        }
        v28 = *(_OWORD *)a3;
      }
      else
      {
        v28 = *(_OWORD *)(v16 + 1440);
      }
      v83 = v28;
      v30 = v28;
LABEL_32:
      v33 = DWORD1(v83);
      v34 = *(_DWORD *)(a1 + 88);
      DWORD2(v83) -= v30;
      *(_QWORD *)&v83 = 0LL;
      v88 = 0;
      v87 = 0;
      HIDWORD(v83) -= v33;
      v89 = a7;
      v90 = a8;
      if ( v78(&v87, &v83, (a1 + 48) & -(__int64)((v34 & 0x80u) != 0), (a1 + 32) & -(__int64)((v34 & 0x40) != 0))
        && (v35 = DWORD2(v83)) != 0
        && (v36 = HIDWORD(v83)) != 0 )
      {
        if ( !a3 || *(_QWORD *)(a1 + 8) )
        {
          v39 = DWORD1(v83);
          v37 = v83;
        }
        else
        {
          v35 = *a3 + DWORD2(v83);
          v37 = *a3 + v83;
          v38 = a3[1];
          v39 = v38 + DWORD1(v83);
          v36 = v38 + HIDWORD(v83);
          LODWORD(v83) = v37;
          HIDWORD(v83) += v38;
          DWORD2(v83) = v35;
          DWORD1(v83) += v38;
        }
        v40 = v36 - v39;
        v41 = v88;
        v42 = v90 - v88;
        v43 = v87;
        if ( v40 == v90 - v88 && v35 - v37 == v89 - v87 )
        {
          v44 = 0;
          if ( *(_DWORD *)(a1 + 64) )
          {
            while ( 1 )
            {
              IntersectRect(v66, (int *)(v80 + 16LL * v44), &v87);
              v45 = v66[0];
              v46 = v66[1];
              v47 = v37 - v43 + v67;
              v67 = v47;
              v48 = v39 - v41 + v68;
              v68 = v48;
              v49 = v37 + v66[0] - v43;
              v66[0] = v49;
              v50 = v39 + v66[1] - v41;
              v66[1] = v50;
              if ( sizl )
              {
                IntersectRect(v66, v66, &v74);
                v49 = v66[0];
                v50 = v66[1];
                v48 = v68;
                v47 = v67;
                v45 = v43 + v66[0] - v37;
                v46 = v41 + v66[1] - v39;
              }
              v51 = v48 - v50;
              v52 = v47 - v49;
              v53 = a10
                  ? NtGdiTransparentBlt(v84, v49, v50, v52, v51, v73, v45, v46, v52, v51, a11)
                  : NtGdiBitBltInternal(v84, v49, v50, v52, v51, v73, v45, v46, -2134114272, 0, 0);
              if ( ++v44 >= *(_DWORD *)(a1 + 64) )
                break;
              v39 = DWORD1(v83);
              v37 = v83;
              v41 = v88;
              v43 = v87;
            }
            v16 = v82[0];
            v14 = v53;
          }
          else
          {
            v14 = 0;
          }
        }
        else
        {
          v54 = *(_QWORD *)(v16 + 80);
          v55 = v35 - v37;
          v64 = *(_BYTE *)(v54 + 75);
          v56 = (v55 << 16) / (int)(v89 - v87);
          v69 = v56;
          LODWORD(v78) = (v40 << 16) / v42;
          if ( sizl )
          {
            v57 = (int)((v89 - v87) << 16) / v55;
            v58 = (v42 << 16) / v40;
          }
          else
          {
            v57 = v71;
            v58 = v71;
          }
          v59 = 0;
          *(_BYTE *)(v54 + 75) = 3;
          if ( *(_DWORD *)(a1 + 64) )
          {
            v60 = v84;
            do
            {
              IntersectRect(&v91, (int *)(v80 + 16LL * v59), &v87);
              (*(void (__fastcall **)(__int128 *, int *, HDC *, int *, int, _DWORD))v66)(
                &v83,
                &v87,
                &v84,
                &v91,
                v56,
                (_DWORD)v78);
              if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(&v84, (int *)&v84, &v74) )
                (*(void (__fastcall **)(int *, __int128 *, int *, HDC *, int, int))v66)(
                  &v87,
                  &v83,
                  &v91,
                  &v84,
                  v57,
                  v58);
              v61 = v85 - (_DWORD)v84;
              if ( a10 )
                v62 = NtGdiTransparentBlt(
                        v60,
                        (int)v84,
                        SHIDWORD(v84),
                        v61,
                        v86 - HIDWORD(v84),
                        v73,
                        v91,
                        v92,
                        v93 - v91,
                        v94 - v92,
                        a11);
              else
                v62 = GreStretchBltInternal(
                        v60,
                        (unsigned int)v84,
                        HIDWORD(v84),
                        v61,
                        v86 - HIDWORD(v84),
                        v73,
                        v91,
                        v92,
                        v93 - v91,
                        v94 - v92,
                        -2134114272,
                        0,
                        0);
              v56 = v69;
              ++v59;
              v65 = v62;
            }
            while ( v59 < *(_DWORD *)(a1 + 64) );
            v16 = v82[0];
          }
          v14 = v65;
          *(_BYTE *)(*(_QWORD *)(v16 + 80) + 75LL) = v64;
        }
      }
      else
      {
        v14 = 1;
      }
      GreUnlockVisRgn(*(_QWORD *)(v16 + 48));
      if ( v79 )
        DC::dwSetLayout((DC *)v16, -1, v71);
      Bitmap = v81;
      v18 = hpal;
      goto LABEL_69;
    }
  }
  return v14;
}
