/*
 * XREFs of NtGdiSetPixel @ 0x1C008E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F364 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C0139290 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetPixel(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // edi
  unsigned int v7; // r14d
  DC *v9; // rbx
  __int64 v10; // rax
  char *v11; // rcx
  DC *v12; // rcx
  __int64 v13; // rsi
  char *v14; // rdx
  __int64 v15; // r11
  __int64 v16; // r8
  int v17; // r11d
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // rdx
  char *v21; // rbx
  struct REGION *v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rbx
  int v27; // edx
  int v28; // r12d
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // eax
  __int64 v34; // rbx
  ULONG v35; // ecx
  DC *v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+7Ch] [rbp-84h]
  char *v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  unsigned int NearestIndexFromColorref; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+A0h] [rbp-60h]
  unsigned int v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+ACh] [rbp-54h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int128 v52; // [rsp+F0h] [rbp-10h]
  int v53; // [rsp+108h] [rbp+8h]
  __int128 v54; // [rsp+120h] [rbp+20h] BYREF
  __int64 v55; // [rsp+130h] [rbp+30h]
  int v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  __int64 v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  __int64 v61; // [rsp+160h] [rbp+60h]
  __int128 v62; // [rsp+170h] [rbp+70h] BYREF
  __int128 v63; // [rsp+180h] [rbp+80h] BYREF

  v5 = a2;
  LOBYTE(a2) = 1;
  v37 = 0LL;
  v7 = -1;
  v36 = (DC *)HmgLockEx(a1, a2);
  if ( !v36 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_12;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v36) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v36 + 3);
    v36 = 0LL;
LABEL_4:
    XFERDCOBJ::ThreadCleanup(&v36);
    return v7;
  }
  v9 = v36;
  if ( (*((_DWORD *)v36 + 132) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v36);
LABEL_12:
    v9 = v36;
  }
  if ( !v9 || (*((_DWORD *)v9 + 9) & 0x10000) != 0 )
    goto LABEL_4;
  v10 = *((_QWORD *)v9 + 10);
  v39 = v5;
  v40 = a3;
  v42 = *(_DWORD *)(v10 + 68);
  v43 = *(_DWORD *)(*((_QWORD *)v9 + 10) + 312LL) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v9 + 10) + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v41, (struct XDCOBJ *)&v36, 0x204u, 0);
    v11 = v41;
    v9 = v36;
  }
  else
  {
    v11 = (char *)v9 + 328;
    v41 = (char *)v9 + 328;
  }
  if ( (v11[32] & 0x43) != 0x43 )
  {
    bCvtPts1(v11, &v39, 1LL);
    a3 = v40;
    v5 = v39;
  }
  *(_QWORD *)&v63 = __PAIR64__(a3, v5);
  DWORD2(v63) = v5 + 1;
  HIDWORD(v63) = a3 + 1;
  if ( (*((_DWORD *)v9 + 9) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate((XDCOBJ *)&v36, (struct ERECTL *)&v63);
    v9 = v36;
  }
  if ( !*((_QWORD *)v9 + 63) )
    goto LABEL_71;
  v58 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v54, (struct XDCOBJ *)&v36, 0) )
  {
    v12 = v36;
    v13 = *((_QWORD *)v36 + 63);
    v14 = (char *)v36 + 8 * (*((_DWORD *)v36 + 10) & 1);
    v15 = *((int *)v14 + 356);
    if ( (unsigned __int64)(v15 + (int)v63 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_74;
    if ( (unsigned __int64)(v15 + SDWORD2(v63) + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_74;
    v16 = *((int *)v14 + 357);
    if ( (unsigned __int64)(v16 + SDWORD1(v63) + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(v16 + SHIDWORD(v63) + 0x80000000LL) > 0xFFFFFFFF
      || (v17 = v63 + v15,
          LODWORD(v63) = v17,
          v18 = *((_DWORD *)v14 + 356) + DWORD2(v63),
          v19 = DWORD1(v63) + *((_DWORD *)v14 + 357),
          *(_QWORD *)((char *)&v63 + 4) = __PAIR64__(v18, v19),
          v20 = (unsigned int)(HIDWORD(v63) + *((_DWORD *)v14 + 357)),
          HIDWORD(v63) = v20,
          (unsigned int)(v17 + 134217726) > 0xFFFFFFC)
      || (unsigned int)(v18 + 134217726) > 0xFFFFFFC
      || (unsigned int)(v19 + 134217726) > 0xFFFFFFC
      || (unsigned int)(v20 + 134217726) > 0xFFFFFFC )
    {
LABEL_74:
      v35 = 87;
      goto LABEL_75;
    }
    if ( v17 >= *((_DWORD *)v36 + 352)
      && v18 <= *((_DWORD *)v36 + 354)
      && v19 >= *((_DWORD *)v36 + 353)
      && (int)v20 <= *((_DWORD *)v36 + 355) )
    {
LABEL_38:
      if ( (*(_DWORD *)(v13 + 116) & 8) == 0 && !*(_QWORD *)(v13 + 224)
        || (v20 = 512LL, (*(_WORD *)(v13 + 102) & 0x200) == 0) )
      {
        v23 = *(_DWORD *)(v13 + 112);
        if ( (v23 & 0x800) != 0 )
        {
          v24 = UserSurfaceAccessCheck(*(_QWORD *)(v13 + 648));
        }
        else
        {
          if ( (v23 & 0x10000000) == 0 )
          {
LABEL_47:
            if ( (*((_DWORD *)v12 + 9) & 0xE0) != 0 )
            {
              v62 = v63;
              XDCOBJ::vAccumulateTight((XDCOBJ *)&v36, (struct ECLIPOBJ *)v20, (struct ERECTL *)&v62);
              v12 = v36;
            }
            v25 = *((_QWORD *)v12 + 12);
            v26 = *(_QWORD *)(v13 + 128);
            v52 = 0LL;
            v51 = 0LL;
            v45 = 0LL;
            v46 = 0;
            v48 = -1;
            v49 = 0LL;
            v50 = 0LL;
            v53 = 0;
            v27 = *((_DWORD *)v12 + 32);
            if ( (v27 & 1) != 0 && *(_QWORD *)(*((_QWORD *)v12 + 10) + 112LL) && (v27 & 0x10000000) != 0 )
            {
              v28 = 1;
              NearestIndexFromColorref = a4;
              v46 = 6;
              if ( gbMultiMonMismatchColor )
              {
                v47 = a4;
                v48 = a4;
              }
            }
            else
            {
              v28 = 0;
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v26, v25, a4, 1LL);
              v29 = *((_DWORD *)v36 + 32);
              if ( (v29 & 4) != 0 || (v29 & 1) != 0 )
              {
                v46 = 2;
              }
              else
              {
                v30 = v46;
                if ( (v29 & 2) != 0 )
                  v30 = 1;
                v46 = v30;
              }
              if ( gbMultiMonMismatchColor )
              {
                v47 = a4;
                v48 = rgbFromColorref(v26, v25, a4);
              }
            }
            ++*(_DWORD *)(v13 + 92);
            v31 = v13 + 24;
            v32 = (gaMix[*(_BYTE *)(*((_QWORD *)v36 + 10) + 72LL) & 0xF] << 8) | gaMix[*(_BYTE *)(*((_QWORD *)v36 + 10)
                                                                                                + 72LL) & 0xF];
            if ( (*(_DWORD *)(v13 + 112) & 1) != 0 )
              v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, char *, int))(*(_QWORD *)(v13 + 48) + 2824LL))(
                      v31,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      &v63,
                      0LL,
                      0LL,
                      &NearestIndexFromColorref,
                      (char *)v36 + 1584,
                      v32);
            else
              v33 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, char *, int))EngBitBlt)(
                      v31,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      &v63,
                      0LL,
                      0LL,
                      &NearestIndexFromColorref,
                      (char *)v36 + 1584,
                      v32);
            if ( v33 )
            {
              if ( v28 )
                v7 = NearestIndexFromColorref;
              else
                v7 = ulIndexToRGB(v26, v25, NearestIndexFromColorref);
            }
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
            goto LABEL_70;
          }
          v24 = UserScreenAccessCheck();
        }
        if ( v24 )
        {
          v12 = v36;
          goto LABEL_47;
        }
      }
      v35 = 5;
LABEL_75:
      EngSetLastError(v35);
      XDCOBJ::vUnlockFast((XDCOBJ *)&v36);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v54);
      return v7;
    }
    v21 = (char *)v36 + 2160;
    v22 = XDCOBJ::prgnEffRao((XDCOBJ *)&v36);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v21, v22, (struct ERECTL *)&v63, 2);
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v21 + 4)) )
    {
      v12 = v36;
      goto LABEL_38;
    }
  }
LABEL_70:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v54);
LABEL_71:
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v36);
  v38 = 0;
  v34 = *(_QWORD *)v36;
  HmgDecrementExclusiveReferenceCountEx(v36, HIDWORD(v37), &v38);
  if ( v38 )
    bDeleteDCInternalEx(v34, 0LL);
  return v7;
}
