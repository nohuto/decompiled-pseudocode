/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0047240
 * Callers:
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009F1D0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00E3444 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        struct XDCOBJ *a1,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v9; // r14d
  LONG left; // esi
  LONG top; // r12d
  LONG right; // edi
  LONG bottom; // r15d
  LONG v15; // r13d
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  char *v19; // rdx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  LONG v24; // r10d
  LONG v25; // r9d
  LONG v26; // r11d
  DC *v27; // rax
  __int64 v28; // rdx
  char *v29; // r8
  __int64 v30; // rdx
  __int32 v31; // esi
  int v32; // edi
  int v33; // r12d
  int v34; // r15d
  char *v35; // r8
  __int64 v36; // rdx
  __int32 v37; // r13d
  int v38; // r8d
  int v39; // r9d
  struct ECLIPOBJ *v40; // rdx
  __int32 v41; // ecx
  bool v42; // cc
  XDCOBJ *v43; // r12
  __m128i v44; // xmm1
  char *v45; // r15
  __int64 (__fastcall *v46)(int, int, int, int, int, __int64, int, __int64, __int64); // rdi
  __int64 v47; // rax
  bool v48; // al
  struct SURFACE *v49; // rsi
  char *v50; // rbx
  struct _SURFOBJ *v51; // rdx
  int v53; // eax
  struct REGION *v54; // rax
  int v55; // r10d
  EXFORMOBJ *v56; // rbx
  char *v57; // rcx
  int v58; // eax
  char *v59; // rcx
  LONG v60; // eax
  LONG v61; // eax
  LONG v62; // [rsp+50h] [rbp-A1h]
  int v63; // [rsp+50h] [rbp-A1h]
  int v64; // [rsp+50h] [rbp-A1h]
  LONG v65; // [rsp+58h] [rbp-99h]
  __int64 v66; // [rsp+58h] [rbp-99h]
  __int64 v67; // [rsp+60h] [rbp-91h] BYREF
  unsigned int v68; // [rsp+68h] [rbp-89h]
  XDCOBJ *v69; // [rsp+70h] [rbp-81h]
  LONG v70; // [rsp+78h] [rbp-79h]
  char *v71; // [rsp+80h] [rbp-71h]
  EXFORMOBJ *v72; // [rsp+88h] [rbp-69h]
  char *v73; // [rsp+90h] [rbp-61h]
  unsigned __int64 v74; // [rsp+98h] [rbp-59h]
  struct SURFACE *v75; // [rsp+A0h] [rbp-51h]
  struct _DRAWSTREAMINFO *v76; // [rsp+A8h] [rbp-49h]
  struct _XLATEOBJ *v77; // [rsp+B0h] [rbp-41h]
  __m128i v78; // [rsp+C0h] [rbp-31h] BYREF
  __m128i v79; // [rsp+D0h] [rbp-21h] BYREF

  v9 = 0;
  v77 = a4;
  left = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v15 = a6->left;
  v62 = a6->top;
  v70 = a6->right;
  v79.m128i_i32[2] = v70;
  v16 = 512LL;
  v65 = a6->bottom;
  v79.m128i_i32[3] = v65;
  v17 = *(_QWORD *)a1;
  v78.m128i_i64[0] = __PAIR64__(top, left);
  v78.m128i_i64[1] = __PAIR64__(bottom, right);
  v67 = 0LL;
  v69 = a1;
  v18 = *(_QWORD *)(v17 + 496);
  v72 = a2;
  v19 = a8;
  v75 = a3;
  LODWORD(v17) = *(_DWORD *)(v18 + 116);
  v20 = a7;
  v68 = a7;
  v73 = a8;
  v76 = a9;
  v79.m128i_i64[0] = __PAIR64__(v62, v15);
  if ( ((v17 & 8) != 0 || *(_QWORD *)(v18 + 224)) && (*(_WORD *)(v18 + 102) & 0x200) != 0 )
    goto LABEL_78;
  v21 = *(_DWORD *)(v18 + 112);
  if ( (v21 & 0x800) != 0 )
  {
    v53 = UserSurfaceAccessCheck(*(_QWORD *)(v18 + 648), a8, a7, 512LL);
  }
  else
  {
    if ( (v21 & 0x10000000) == 0 )
      goto LABEL_5;
    v53 = UserScreenAccessCheck(v18, a8, a7, 512LL);
  }
  if ( !v53 )
  {
LABEL_78:
    EngSetLastError(5u);
    return v9;
  }
  bottom = v78.m128i_i32[3];
  right = v78.m128i_i32[2];
  top = v78.m128i_i32[1];
  left = v78.m128i_i32[0];
  v19 = v73;
  v20 = v68;
LABEL_5:
  v22 = *(_QWORD *)a2;
  v23 = *(_DWORD *)(v22 + 32);
  if ( (v23 & 1) == 0 )
    return v9;
  if ( (v23 & 2) != 0 )
  {
    if ( (v23 & 0x43) != 0x43 )
      bCvtPts1(v22, &v67, 1LL, v16);
  }
  else
  {
    v74 = (unsigned __int64)&v19[v20];
    if ( (unsigned __int64)v19 < v74 )
    {
      v56 = v72;
      v57 = v19 + 36;
      v71 = v19 + 36;
      while ( *((_DWORD *)v57 - 9) == 9 )
      {
        EXFORMOBJ::bXform(v56, (struct ERECTL *)(v57 - 32));
        v58 = DC::bDpiScaledSurface(*(DC **)v69);
        v59 = v71;
        if ( v58 )
          *(_DWORD *)v71 &= ~0x20u;
        v57 = v59 + 60;
        v71 = v57;
        if ( (unsigned __int64)(v57 - 36) >= v74 )
        {
          v22 = *(_QWORD *)v56;
          goto LABEL_9;
        }
      }
      return v9;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(v22 + 32) & 0x43) == 0x43 )
  {
    v25 = v70;
    v24 = v65;
    v26 = v62;
  }
  else
  {
    bCvtPts1(v22, &v79, 2LL, v16);
    v24 = v79.m128i_i32[3];
    v25 = v79.m128i_i32[2];
    v26 = v79.m128i_i32[1];
    v15 = v79.m128i_i32[0];
  }
  if ( *((_DWORD *)v72 + 3) )
  {
    ++v15;
    ++v25;
  }
  if ( v15 > v25 )
  {
    v60 = v15;
    v15 = v25;
    v25 = v60;
  }
  if ( v26 > v24 )
  {
    v61 = v26;
    v26 = v24;
    v24 = v61;
  }
  if ( top != bottom && left != right )
  {
    v27 = *(DC **)v69;
    v66 = *(_QWORD *)(*(_QWORD *)v69 + 496LL);
    v28 = *(_QWORD *)v69 + 8LL * (*(_DWORD *)(*(_QWORD *)v69 + 40LL) & 1);
    LODWORD(v67) = *(_DWORD *)(v28 + 1016) + v67;
    HIDWORD(v67) += *(_DWORD *)(v28 + 1020);
    v29 = (char *)v27 + 8 * (*((_DWORD *)v27 + 10) & 1);
    v63 = *((_DWORD *)v29 + 254);
    if ( (unsigned __int64)(v63 + (__int64)left + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v63 + (__int64)right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v30 = *((int *)v29 + 255);
      if ( (unsigned __int64)(v30 + top + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v30 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v31 = v63 + left;
        v78.m128i_i32[0] = v31;
        v32 = *((_DWORD *)v29 + 254) + right;
        v33 = *((_DWORD *)v29 + 255) + top;
        *(__int64 *)((char *)v78.m128i_i64 + 4) = __PAIR64__(v32, v33);
        v34 = *((_DWORD *)v29 + 255) + bottom;
        v78.m128i_i32[3] = v34;
        v35 = (char *)v27 + 8 * (*((_DWORD *)v27 + 10) & 1);
        v64 = *((_DWORD *)v35 + 254);
        if ( (unsigned __int64)(v64 + (__int64)v15 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v64 + (__int64)v25 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v36 = *((int *)v35 + 255);
          if ( (unsigned __int64)(v36 + v26 + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v36 + v24 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v37 = v64 + v15;
            v38 = v25 + v64;
            v39 = v26 + v36;
            v40 = (struct ECLIPOBJ *)(unsigned int)(v24 + v36);
            if ( v31 > v37
              || v32 < v38
              || v33 > v39
              || v34 < (int)v40
              || (v41 = *((_DWORD *)v27 + 250), v41 > v37)
              || *((_DWORD *)v27 + 252) < v38
              || *((_DWORD *)v27 + 251) > v39
              || *((_DWORD *)v27 + 253) < (int)v40 )
            {
              v43 = v69;
              v45 = (char *)v27 + 1776;
              v54 = XDCOBJ::prgnEffRao(v69);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v45, v54, (struct ERECTL *)&v78, v55);
              v44 = *(__m128i *)(v45 + 4);
              v78 = v44;
              v32 = v44.m128i_i32[2];
              v31 = v44.m128i_i32[0];
            }
            else
            {
              if ( v41 > v31 )
              {
                v31 = *((_DWORD *)v27 + 250);
                v78.m128i_i32[0] = v31;
              }
              if ( *((_DWORD *)v27 + 251) > v33 )
              {
                v33 = *((_DWORD *)v27 + 251);
                v78.m128i_i32[1] = v33;
              }
              if ( *((_DWORD *)v27 + 252) < v32 )
              {
                v32 = *((_DWORD *)v27 + 252);
                v78.m128i_i32[2] = v32;
              }
              if ( *((_DWORD *)v27 + 253) < v34 )
              {
                v34 = *((_DWORD *)v27 + 253);
                v78.m128i_i32[3] = v34;
              }
              if ( v32 < v31 )
                return 1;
              v42 = v34 < v33;
              v43 = v69;
              if ( v42 )
                v78.m128i_i32[1] = v34;
              v44 = v78;
              v45 = 0LL;
            }
            if ( v31 != v32 && v44.m128i_i32[1] != _mm_srli_si128(v44, 8).m128i_i32[1] )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v43 + 36LL) & 0xE0) != 0 )
              {
                v79 = v44;
                XDCOBJ::vAccumulateTight(v43, v40, (struct ERECTL *)&v79);
              }
              ++*(_DWORD *)(v66 + 92);
              v46 = EngDrawStream;
              v47 = *(_QWORD *)(v66 + 48);
              if ( *(_QWORD *)(v47 + 3408) )
                v46 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v47 + 3408);
              v48 = (*(_DWORD *)(*(_QWORD *)v43 + 36LL) & 0x200) != 0 && v47 && (*(_DWORD *)(v47 + 40) & 0x20000) != 0;
              if ( *(int *)(v66 + 112) >= 0 && (!v48 || *(_WORD *)(v66 + 100) != 3) )
                v46 = EngDrawStream;
              v49 = v75;
              v79.m128i_i64[0] = 0LL;
              v50 = (char *)v75 + 24;
              v51 = (struct _SURFOBJ *)((char *)v75 + 24);
              if ( !v75 )
                v51 = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v79, v51);
              if ( v79.m128i_i64[0] )
              {
                if ( !v49 )
                  v50 = 0LL;
                if ( (unsigned int)v46(
                                     v66 + 24,
                                     (int)v50,
                                     (int)v45,
                                     (int)v77,
                                     (int)&v78,
                                     (__int64)&v67,
                                     v68,
                                     (__int64)v73,
                                     (__int64)v76) )
                  v9 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v79);
              return v9;
            }
            return 1;
          }
        }
      }
    }
  }
  return v9;
}
