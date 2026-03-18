/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C025A990
 * Callers:
 *     <none>
 * Callees:
 *     DxEngSelectPaletteToSurface @ 0x1C0011F50 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C0011FE0 (DxEngSetPaletteState.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A680 (UserGetRedirectedWindowOrigin.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C0251534 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025A464 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        unsigned int lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        unsigned int (__fastcall *a13)(int *, __int128 *, __int64, __int64))
{
  unsigned int v13; // ebx
  HPALETTE Palette; // rax
  SURFOBJ *LockedBitmap; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  HBITMAP hsurf; // rdi
  HPALETTE v22; // r14
  BOOL v23; // ebx
  DYNAMICMODECHANGESHARELOCK *v24; // rcx
  HDC DisplayDC; // rax
  DC *v26; // rcx
  int v27; // r14d
  __int128 v28; // xmm0
  int v29; // ebx
  unsigned int v30; // edi
  int RedirectedWindowOrigin; // eax
  int *v32; // r14
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
  unsigned int v49; // edx
  unsigned int v50; // r8d
  int v51; // ecx
  int v52; // r9d
  int v53; // eax
  int v54; // r9d
  __int64 v55; // rcx
  int v56; // ebx
  int v57; // r14d
  int v58; // r15d
  unsigned int v59; // edi
  void (__fastcall *v60)(int *, __int128 *, int *, int *, int, int); // rbx
  int v61; // r9d
  int v62; // eax
  int flGreen; // [rsp+20h] [rbp-E0h]
  char v65[4]; // [rsp+70h] [rbp-90h] BYREF
  int v66; // [rsp+74h] [rbp-8Ch]
  SIZEL sizl; // [rsp+78h] [rbp-88h]
  int v68[2]; // [rsp+80h] [rbp-80h] BYREF
  int v69; // [rsp+88h] [rbp-78h]
  int v70; // [rsp+8Ch] [rbp-74h]
  int v71; // [rsp+90h] [rbp-70h] BYREF
  int v72; // [rsp+94h] [rbp-6Ch]
  unsigned int v73; // [rsp+98h] [rbp-68h]
  int *v74; // [rsp+A0h] [rbp-60h]
  HDC v75; // [rsp+A8h] [rbp-58h]
  int v76; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+B4h] [rbp-4Ch]
  int v78; // [rsp+BCh] [rbp-44h]
  HDC v79; // [rsp+C0h] [rbp-40h]
  HPALETTE hpal; // [rsp+C8h] [rbp-38h]
  unsigned int (__fastcall *v81)(int *, __int128 *, __int64, __int64); // [rsp+D0h] [rbp-30h]
  unsigned int v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  SURFOBJ *pso; // [rsp+E8h] [rbp-18h]
  DC *v85[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v86[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v87[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v88; // [rsp+140h] [rbp+40h]
  __int128 v89; // [rsp+148h] [rbp+48h] BYREF
  int v90; // [rsp+158h] [rbp+58h] BYREF
  int v91; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v92; // [rsp+160h] [rbp+60h]
  unsigned int v93; // [rsp+164h] [rbp+64h]
  int v94[2]; // [rsp+168h] [rbp+68h] BYREF
  int v95; // [rsp+170h] [rbp+70h]
  int v96; // [rsp+174h] [rbp+74h]
  int v97; // [rsp+178h] [rbp+78h] BYREF
  int v98; // [rsp+17Ch] [rbp+7Ch]
  int v99; // [rsp+180h] [rbp+80h]
  int v100; // [rsp+184h] [rbp+84h]

  v13 = 0;
  *(_QWORD *)v68 = a12;
  v81 = a13;
  v83 = a4;
  v79 = a2;
  *(_QWORD *)v94 = a1;
  v66 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v85, a2);
    if ( !v85[0] )
    {
LABEL_79:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v85);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v86);
      return v13;
    }
    if ( a9 )
      Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
    else
      Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = Palette;
    if ( !Palette )
    {
LABEL_78:
      v13 = v66;
      goto LABEL_79;
    }
    pso = 0LL;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_828578106_60425938_FeatureDescriptorDetails) )
    {
      LockedBitmap = (SURFOBJ *)EngCreateLockedBitmap(__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1LL, pvBits);
      pso = LockedBitmap;
      if ( LockedBitmap )
        hsurf = (HBITMAP)LockedBitmap->hsurf;
      else
        hsurf = 0LL;
    }
    else
    {
      hsurf = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    }
    v22 = hpal;
    sizl = (SIZEL)hsurf;
    DxEngSetPaletteState(hpal, v19, v20);
    if ( !hsurf )
    {
LABEL_77:
      EngDeletePalette(v22);
      goto LABEL_78;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v65);
    SURFREF::SURFREF((SURFREF *)v87);
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v87, (HSURF)hsurf);
    v23 = SURFREF::bValid((SURFREF *)v87);
    if ( v23 )
    {
      DxEngSelectPaletteToSurface(v88 + 24, v22);
      *(_DWORD *)(v88 + 112) |= 0x100000u;
      *(_DWORD *)(v88 + 112) |= 0x4000u;
      *(_DWORD *)(v88 + 112) |= 0x200u;
    }
    SURFREF::~SURFREF((SURFREF *)v87);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v24);
    if ( !v23 || (DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v85[0] + 6), 1LL), (v75 = DisplayDC) == 0LL) )
    {
LABEL_74:
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_828578106_60425938_FeatureDescriptorDetails) )
        EngUnlockSurface(pso);
      EngDeleteSurface((HSURF)hsurf);
      goto LABEL_77;
    }
    if ( !hbmSelectBitmap(DisplayDC, hsurf, 0LL, 1LL) )
    {
LABEL_73:
      bDeleteDCInternal(v75, 1LL, 0LL);
      goto LABEL_74;
    }
    v26 = v85[0];
    v27 = 0;
    v74 = 0LL;
    v73 = *(_DWORD *)(*((_QWORD *)v85[0] + 122) + 108LL);
    v82 = v73 & 7;
    if ( (v73 & 7) != 0 )
    {
      DC::dwSetLayout(v85[0], -1, 0);
      v26 = v85[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v26 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v85[0] + 9) & 0x4000) != 0 )
          v27 = 1;
        v89 = *(_OWORD *)((char *)v85[0] + 1032);
        if ( (*((_DWORD *)v85[0] + 9) & 0x4000) != 0
          && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v71) )
        {
          DWORD2(v89) += v71;
          v29 = v71 + v89;
          v30 = v72 + DWORD1(v89);
          HIDWORD(v89) += v72;
          DWORD1(v89) += v72;
          LODWORD(v89) = v71 + v89;
        }
        else
        {
          v30 = DWORD1(v89);
          v29 = v89;
        }
        if ( v27 )
        {
          RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v71);
          v29 = v89;
          v30 = DWORD1(v89);
          if ( RedirectedWindowOrigin )
          {
            DWORD2(v89) += v71;
            v29 = v71 + v89;
            v30 = v72 + DWORD1(v89);
            HIDWORD(v89) += v72;
            DWORD1(v89) += v72;
            LODWORD(v89) = v71 + v89;
          }
        }
        IntersectRect(&v76, (int *)&v89, a3);
        if ( v29 != v76 || __PAIR64__(DWORD2(v89), v30) != v77 || HIDWORD(v89) != v78 )
        {
          v74 = a3;
          v76 -= v29;
          HIDWORD(v77) -= v29;
          LODWORD(v77) = v77 - v30;
          v78 -= v30;
          v32 = a3;
          goto LABEL_40;
        }
LABEL_39:
        v32 = v74;
LABEL_40:
        v33 = DWORD1(v89);
        v34 = *(_DWORD *)(a1 + 88);
        DWORD2(v89) -= v29;
        *(_QWORD *)&v89 = 0LL;
        v91 = 0;
        v90 = 0;
        HIDWORD(v89) -= v33;
        v92 = a7;
        v93 = a8;
        if ( v81(&v90, &v89, (a1 + 48) & -(__int64)((v34 & 0x80u) != 0), (a1 + 32) & -(__int64)((v34 & 0x40) != 0))
          && (v35 = DWORD2(v89)) != 0
          && (v36 = HIDWORD(v89)) != 0 )
        {
          if ( !a3 || *(_QWORD *)(a1 + 8) )
          {
            v39 = DWORD1(v89);
            v37 = v89;
          }
          else
          {
            v35 = *a3 + DWORD2(v89);
            v37 = *a3 + v89;
            v38 = a3[1];
            v39 = v38 + DWORD1(v89);
            v36 = v38 + HIDWORD(v89);
            LODWORD(v89) = v37;
            HIDWORD(v89) += v38;
            DWORD2(v89) = v35;
            DWORD1(v89) += v38;
          }
          v40 = v36 - v39;
          v41 = v91;
          v42 = v93 - v91;
          v43 = v90;
          if ( v40 == v93 - v91 && v35 - v37 == v92 - v90 )
          {
            v44 = 0;
            if ( *(_DWORD *)(a1 + 64) )
            {
              while ( 1 )
              {
                IntersectRect(v68, (int *)(v83 + 16LL * v44), &v90);
                v45 = v68[0];
                v46 = v68[1];
                v47 = v37 - v43 + v69;
                v69 = v47;
                v48 = v39 - v41 + v70;
                v70 = v48;
                v49 = v37 + v68[0] - v43;
                v68[0] = v49;
                v50 = v39 + v68[1] - v41;
                v68[1] = v50;
                if ( v74 )
                {
                  IntersectRect(v68, v68, &v76);
                  v49 = v68[0];
                  v50 = v68[1];
                  v48 = v70;
                  v47 = v69;
                  v45 = v43 + v68[0] - v37;
                  v46 = v41 + v68[1] - v39;
                }
                v51 = v48 - v50;
                v52 = v47 - v49;
                v53 = a10
                    ? NtGdiTransparentBlt(v79, v49, v50, v52, v51, v75, v45, v46, v52, v51, a11)
                    : NtGdiBitBltInternal(v79, v49, v50, v52, v51, v75, v45, v46, -2134114272, 0, 0);
                v66 = v53;
                if ( ++v44 >= *(_DWORD *)(*(_QWORD *)v94 + 64LL) )
                  break;
                v39 = DWORD1(v89);
                v37 = v89;
                v41 = v91;
                v43 = v90;
              }
            }
          }
          else
          {
            v54 = v35 - v37;
            v55 = *((_QWORD *)v85[0] + 122);
            v65[0] = *(_BYTE *)(v55 + 215);
            v56 = (v54 << 16) / (int)(v92 - v90);
            v71 = v56;
            LODWORD(v81) = (v40 << 16) / v42;
            if ( v32 )
            {
              v57 = (int)((v92 - v90) << 16) / v54;
              v58 = (v42 << 16) / v40;
            }
            else
            {
              v57 = v73;
              v58 = v73;
            }
            v59 = 0;
            for ( *(_BYTE *)(v55 + 215) = 3; v59 < *(_DWORD *)(a1 + 64); v66 = v62 )
            {
              IntersectRect(&v97, (int *)(v83 + 16LL * v59), &v90);
              flGreen = v56;
              v60 = *(void (__fastcall **)(int *, __int128 *, int *, int *, int, int))v68;
              (*(void (__fastcall **)(__int128 *, int *, int *, int *, int, _DWORD))v68)(
                &v89,
                &v90,
                v94,
                &v97,
                flGreen,
                (_DWORD)v81);
              if ( v74 && (unsigned int)IntersectRect(v94, v94, &v76) )
                v60(&v90, &v89, &v97, v94, v57, v58);
              v61 = v95 - v94[0];
              if ( a10 )
                v62 = NtGdiTransparentBlt(
                        v79,
                        v94[0],
                        v94[1],
                        v61,
                        v96 - v94[1],
                        v75,
                        v97,
                        v98,
                        v99 - v97,
                        v100 - v98,
                        a11);
              else
                v62 = GreStretchBltInternal(
                        v79,
                        v94[0],
                        v94[1],
                        v61,
                        v96 - v94[1],
                        v75,
                        v97,
                        v98,
                        v99 - v97,
                        v100 - v98,
                        -2134114272,
                        0,
                        0);
              v56 = v71;
              ++v59;
            }
            *(_BYTE *)(*((_QWORD *)v85[0] + 122) + 215LL) = v65[0];
          }
        }
        else
        {
          v66 = 1;
        }
        GreUnlockVisRgn(*((_QWORD *)v85[0] + 6));
        if ( v82 )
          DC::dwSetLayout(v85[0], -1, v73);
        v22 = hpal;
        hsurf = (HBITMAP)sizl;
        goto LABEL_73;
      }
      v28 = *(_OWORD *)a3;
    }
    else
    {
      v28 = *(_OWORD *)((char *)v85[0] + 1032);
    }
    v89 = v28;
    v29 = v28;
    goto LABEL_39;
  }
  return v13;
}
