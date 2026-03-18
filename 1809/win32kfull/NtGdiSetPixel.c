/*
 * XREFs of NtGdiSetPixel @ 0x1C0056E90
 * Callers:
 *     <none>
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiSetPixel(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // r14d
  DC *v8; // rbx
  __int64 v9; // rax
  char *v10; // rcx
  DC *v11; // rcx
  int *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  char *v20; // rbx
  struct REGION *v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rbx
  int v26; // edx
  int v27; // r12d
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // eax
  ULONG v33; // ecx
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  DC *v36[6]; // [rsp+70h] [rbp-90h] BYREF
  char *v37; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  unsigned int NearestIndexFromColorref; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+C0h] [rbp-40h]
  unsigned int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int128 v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+128h] [rbp+28h]
  __int128 v50; // [rsp+140h] [rbp+40h] BYREF
  __int64 v51; // [rsp+150h] [rbp+50h]
  int v52; // [rsp+158h] [rbp+58h]
  _QWORD v53[10]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v54; // [rsp+1B0h] [rbp+B0h] BYREF

  v7 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  v8 = v36[0];
  if ( v36[0] && (*((_DWORD *)v36[0] + 9) & 0x10000) == 0 )
  {
    v9 = *((_QWORD *)v36[0] + 122);
    *(_QWORD *)&v35 = __PAIR64__(a3, a2);
    v38 = *(_DWORD *)(v9 + 208);
    v39 = *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v36[0] + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v37, (struct XDCOBJ *)v36, 0x204u, 0);
      v10 = v37;
      v8 = v36[0];
    }
    else
    {
      v10 = (char *)v36[0] + 320;
      v37 = (char *)v36[0] + 320;
    }
    if ( (v10[32] & 0x43) != 0x43 )
    {
      bCvtPts1((unsigned __int64)v10, &v35, 1LL);
      a3 = DWORD1(v35);
      a2 = v35;
    }
    *(_QWORD *)&v54 = __PAIR64__(a3, a2);
    DWORD2(v54) = a2 + 1;
    HIDWORD(v54) = a3 + 1;
    if ( (*((_DWORD *)v8 + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v54);
      v8 = v36[0];
    }
    if ( *((_QWORD *)v8 + 62) )
    {
      DCOBJ::DCOBJ((DCOBJ *)v53);
      v51 = 0LL;
      v50 = 0LL;
      v52 = 0;
      v53[0] = 0LL;
      memset(&v53[6], 0, 24);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v50, (struct XDCOBJ *)v36, 0) )
      {
        v11 = v36[0];
        v12 = (int *)((char *)v36[0] + 1024);
        v13 = *((_QWORD *)v36[0] + 62);
        if ( (*((_DWORD *)v36[0] + 10) & 1) == 0 )
          v12 = (int *)((char *)v36[0] + 1016);
        v14 = *v12;
        if ( (unsigned __int64)(v14 + (int)v54 + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_61;
        if ( (unsigned __int64)(v14 + SDWORD2(v54) + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_61;
        v15 = v12[1];
        if ( (unsigned __int64)(v15 + SDWORD1(v54) + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_61;
        if ( (unsigned __int64)(v15 + SHIDWORD(v54) + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_61;
        v16 = v54 + v14;
        LODWORD(v54) = v16;
        v17 = (unsigned int)(*v12 + DWORD2(v54));
        DWORD2(v54) += *v12;
        v18 = (unsigned int)(DWORD1(v54) + v12[1]);
        DWORD1(v54) += v12[1];
        v19 = (unsigned int)(HIDWORD(v54) + v12[1]);
        HIDWORD(v54) = v19;
        if ( (unsigned int)(v16 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v17 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v18 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
        {
LABEL_61:
          v33 = 87;
LABEL_62:
          EngSetLastError(v33);
          goto LABEL_63;
        }
        if ( v16 >= *((_DWORD *)v36[0] + 250)
          && (int)v17 <= *((_DWORD *)v36[0] + 252)
          && (int)v18 >= *((_DWORD *)v36[0] + 251)
          && (int)v19 <= *((_DWORD *)v36[0] + 253) )
        {
LABEL_28:
          if ( (*(_DWORD *)(v13 + 116) & 8) == 0 && !*(_QWORD *)(v13 + 224)
            || (v19 = 512LL, (*(_WORD *)(v13 + 102) & 0x200) == 0) )
          {
            v22 = *(_DWORD *)(v13 + 112);
            if ( (v22 & 0x800) != 0 )
            {
              v23 = UserSurfaceAccessCheck(*(_QWORD *)(v13 + 648), v19, v18, v17);
            }
            else
            {
              if ( (v22 & 0x10000000) == 0 )
              {
LABEL_37:
                if ( (*((_DWORD *)v11 + 9) & 0xE0) != 0 )
                {
                  v35 = v54;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v36, (struct ECLIPOBJ *)v19, (struct ERECTL *)&v35);
                  v11 = v36[0];
                }
                v24 = *((_QWORD *)v11 + 11);
                v25 = *(_QWORD *)(v13 + 128);
                v48 = 0LL;
                v47 = 0LL;
                v41 = 0LL;
                v42 = 0;
                v44 = -1;
                v45 = 0LL;
                v46 = 0LL;
                v49 = 0;
                v26 = *((_DWORD *)v11 + 30);
                if ( (v26 & 1) != 0 && *(_QWORD *)(*((_QWORD *)v11 + 122) + 248LL) && (v26 & 0x10000000) != 0 )
                {
                  v27 = 1;
                  NearestIndexFromColorref = a4;
                  v42 = 6;
                  if ( gbMultiMonMismatchColor )
                  {
                    v43 = a4;
                    v44 = a4;
                  }
                }
                else
                {
                  v27 = 0;
                  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v25, v24, a4, 1LL);
                  v28 = *((_DWORD *)v36[0] + 30);
                  if ( (v28 & 4) != 0 || (v28 & 1) != 0 )
                  {
                    v42 = 2;
                  }
                  else
                  {
                    v29 = v42;
                    if ( (v28 & 2) != 0 )
                      v29 = 1;
                    v42 = v29;
                  }
                  if ( gbMultiMonMismatchColor )
                  {
                    v43 = a4;
                    v44 = rgbFromColorref(v25, v24, a4);
                  }
                }
                ++*(_DWORD *)(v13 + 92);
                v30 = v13 + 24;
                v31 = (gaMix[*(_BYTE *)(*((_QWORD *)v36[0] + 122) + 212LL) & 0xF] << 8) | gaMix[*(_BYTE *)(*((_QWORD *)v36[0] + 122) + 212LL) & 0xF];
                if ( (*(_DWORD *)(v13 + 112) & 1) != 0 )
                  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, char *, int))(*(_QWORD *)(v13 + 48) + 2832LL))(
                          v30,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          &v54,
                          0LL,
                          0LL,
                          &NearestIndexFromColorref,
                          (char *)v36[0] + 1200,
                          v31);
                else
                  v32 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, char *, int))EngBitBlt)(
                          v30,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          &v54,
                          0LL,
                          0LL,
                          &NearestIndexFromColorref,
                          (char *)v36[0] + 1200,
                          v31);
                if ( v32 )
                {
                  if ( v27 )
                    v7 = NearestIndexFromColorref;
                  else
                    v7 = ulIndexToRGB(v25, v24, NearestIndexFromColorref);
                }
                EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
                goto LABEL_63;
              }
              v23 = UserScreenAccessCheck(v11, v19, v18, v17);
            }
            if ( v23 )
            {
              v11 = v36[0];
              goto LABEL_37;
            }
          }
          v33 = 5;
          goto LABEL_62;
        }
        v20 = (char *)v36[0] + 1776;
        v21 = XDCOBJ::prgnEffRao(v36);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v20, v21, (struct ERECTL *)&v54, 2);
        if ( !ERECTL::bEmpty((ERECTL *)(v20 + 4)) )
        {
          v11 = v36[0];
          goto LABEL_28;
        }
      }
LABEL_63:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v50);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  return v7;
}
