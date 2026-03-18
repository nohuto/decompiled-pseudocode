/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00A7E90
 * Callers:
 *     GreDrawStream @ 0x1C00A6FB0 (GreDrawStream.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C008BCB4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009C0F8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        struct XDCOBJ *a1,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v9; // r14d
  LONG left; // esi
  LONG top; // r12d
  LONG right; // edi
  LONG bottom; // r15d
  LONG v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // rdx
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  __int32 v23; // ecx
  __int32 v24; // r11d
  __int32 v25; // r10d
  DC *v26; // rax
  __int64 v27; // rcx
  char *v28; // rdx
  char *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // esi
  int v33; // edi
  int v34; // r12d
  int v35; // r15d
  char *v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  int v39; // r8d
  int v40; // r13d
  int v41; // r9d
  struct ECLIPOBJ *v42; // rdx
  int v43; // ecx
  bool v44; // cc
  struct _RECTL **v45; // r12
  __m128i v46; // xmm1
  char *v47; // r15
  __int64 (__fastcall *v48)(int, int, int, int, int, __int64, int, __int64, __int64); // rdi
  __int64 v49; // rax
  bool v50; // al
  struct SURFACE *v51; // rsi
  char *v52; // rbx
  struct _SURFOBJ *v53; // rdx
  int v55; // eax
  struct REGION *v56; // rax
  int v57; // r10d
  EXFORMOBJ *v58; // rbx
  char *v59; // rcx
  int v60; // eax
  char *v61; // rcx
  LONG v62; // eax
  LONG v63; // [rsp+50h] [rbp-91h]
  LONG v64; // [rsp+54h] [rbp-8Dh]
  int v65; // [rsp+54h] [rbp-8Dh]
  __int64 v66; // [rsp+58h] [rbp-89h] BYREF
  __int64 v67; // [rsp+60h] [rbp-81h]
  int v68; // [rsp+68h] [rbp-79h]
  XDCOBJ *v69; // [rsp+70h] [rbp-71h]
  char *v70; // [rsp+78h] [rbp-69h]
  unsigned __int64 v71; // [rsp+80h] [rbp-61h]
  EXFORMOBJ *v72; // [rsp+88h] [rbp-59h]
  char *v73; // [rsp+90h] [rbp-51h]
  struct SURFACE *v74; // [rsp+98h] [rbp-49h]
  struct _DRAWSTREAMINFO *v75; // [rsp+A0h] [rbp-41h]
  struct _XLATEOBJ *v76; // [rsp+A8h] [rbp-39h]
  __m128i v77; // [rsp+B0h] [rbp-31h] BYREF
  __m128i v78; // [rsp+C0h] [rbp-21h] BYREF

  v9 = 0;
  v76 = a4;
  left = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v15 = a6->left;
  v63 = a6->top;
  LODWORD(v67) = a6->right;
  v78.m128i_i32[2] = v67;
  v64 = a6->bottom;
  v78.m128i_i32[3] = v64;
  v16 = *(_QWORD *)a1;
  v77.m128i_i64[0] = __PAIR64__(top, left);
  v77.m128i_i64[1] = __PAIR64__(bottom, right);
  v66 = 0LL;
  v69 = a1;
  v17 = *(_QWORD *)(v16 + 504);
  v72 = a2;
  v18 = a8;
  v74 = a3;
  LODWORD(v16) = *(_DWORD *)(v17 + 116);
  v19 = a7;
  v68 = a7;
  v73 = a8;
  v75 = a9;
  v78.m128i_i64[0] = __PAIR64__(v63, v15);
  if ( ((v16 & 8) != 0 || *(_QWORD *)(v17 + 224)) && (*(_WORD *)(v17 + 102) & 0x200) != 0 )
    goto LABEL_78;
  v20 = *(_DWORD *)(v17 + 112);
  if ( (v20 & 0x800) != 0 )
  {
    v55 = UserSurfaceAccessCheck(*(_QWORD *)(v17 + 648));
  }
  else
  {
    if ( (v20 & 0x10000000) == 0 )
      goto LABEL_5;
    v55 = UserScreenAccessCheck(v17);
  }
  if ( !v55 )
  {
LABEL_78:
    EngSetLastError(5u);
    return v9;
  }
  bottom = v77.m128i_i32[3];
  right = v77.m128i_i32[2];
  top = v77.m128i_i32[1];
  left = v77.m128i_i32[0];
  v18 = v73;
  v19 = v68;
LABEL_5:
  v21 = *(_QWORD *)a2;
  v22 = *(_DWORD *)(v21 + 32);
  if ( (v22 & 1) == 0 )
    return v9;
  if ( (v22 & 2) != 0 )
  {
    if ( (v22 & 0x43) != 0x43 )
      bCvtPts1(v21, &v66, 1LL);
  }
  else
  {
    v71 = (unsigned __int64)&v18[v19];
    if ( (unsigned __int64)v18 < v71 )
    {
      v58 = v72;
      v59 = v18 + 36;
      v70 = v18 + 36;
      while ( *((_DWORD *)v59 - 9) == 9 )
      {
        EXFORMOBJ::bXform(v58, (struct _POINTL *)v59 - 4);
        v60 = DC::bDpiScaledSurface(*(DC **)v69);
        v61 = v70;
        if ( v60 )
          *(_DWORD *)v70 &= ~0x20u;
        v59 = v61 + 60;
        v70 = v59;
        if ( (unsigned __int64)(v59 - 36) >= v71 )
        {
          v21 = *(_QWORD *)v58;
          goto LABEL_9;
        }
      }
      return v9;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(v21 + 32) & 0x43) == 0x43 )
  {
    v25 = v67;
    v24 = v64;
    v23 = v63;
  }
  else
  {
    bCvtPts1(v21, &v78, 2LL);
    v23 = v78.m128i_i32[1];
    v24 = v78.m128i_i32[3];
    v25 = v78.m128i_i32[2];
    v15 = v78.m128i_i32[0];
    v63 = v78.m128i_i32[1];
  }
  if ( *((_DWORD *)v72 + 3) )
  {
    ++v15;
    ++v25;
  }
  if ( v15 > v25 )
  {
    v62 = v15;
    v15 = v25;
    v25 = v62;
  }
  if ( v23 > v24 )
  {
    v63 = v24;
    v24 = v23;
  }
  if ( top != bottom && left != right )
  {
    v26 = *(DC **)v69;
    v27 = *(_DWORD *)(*(_QWORD *)v69 + 40LL) & 1;
    v67 = *(_QWORD *)(*(_QWORD *)v69 + 504LL);
    v28 = (char *)v26 + 8 * v27;
    LODWORD(v66) = *((_DWORD *)v28 + 356) + v66;
    HIDWORD(v66) += *((_DWORD *)v28 + 357);
    v29 = (char *)v26 + 8 * (*((_DWORD *)v26 + 10) & 1);
    v30 = *((int *)v29 + 356);
    if ( (unsigned __int64)(v30 + left + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v30 + right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v31 = *((int *)v29 + 357);
      if ( (unsigned __int64)(v31 + top + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v31 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v32 = v30 + left;
        v77.m128i_i32[0] = v32;
        v33 = *((_DWORD *)v29 + 356) + right;
        v34 = *((_DWORD *)v29 + 357) + top;
        *(__int64 *)((char *)v77.m128i_i64 + 4) = __PAIR64__(v33, v34);
        v35 = *((_DWORD *)v29 + 357) + bottom;
        v77.m128i_i32[3] = v35;
        v36 = (char *)v26 + 8 * (*((_DWORD *)v26 + 10) & 1);
        v65 = *((_DWORD *)v36 + 356);
        if ( (unsigned __int64)(v65 + (__int64)v15 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v65 + (__int64)v25 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v37 = *((int *)v36 + 357);
          v38 = v67;
          if ( (unsigned __int64)(v37 + v63 + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v37 + v24 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v39 = v37 + v63;
            v40 = v65 + v15;
            v41 = v24 + v37;
            v42 = (struct ECLIPOBJ *)(unsigned int)(v65 + v25);
            if ( v32 > v40
              || v33 < (int)v42
              || v34 > v39
              || v35 < v41
              || (v43 = *((_DWORD *)v26 + 352), v43 > v40)
              || *((_DWORD *)v26 + 354) < (int)v42
              || *((_DWORD *)v26 + 353) > v39
              || *((_DWORD *)v26 + 355) < v41 )
            {
              v45 = (struct _RECTL **)v69;
              v47 = (char *)v26 + 2160;
              v56 = XDCOBJ::prgnEffRao((DC **)v69);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v47, v56, (struct ERECTL *)&v77, v57);
              v46 = *(__m128i *)(v47 + 4);
              v77 = v46;
              v33 = v46.m128i_i32[2];
              v32 = v46.m128i_i32[0];
            }
            else
            {
              if ( v43 > v32 )
              {
                v32 = *((_DWORD *)v26 + 352);
                v77.m128i_i32[0] = v32;
              }
              if ( *((_DWORD *)v26 + 353) > v34 )
              {
                v34 = *((_DWORD *)v26 + 353);
                v77.m128i_i32[1] = v34;
              }
              if ( *((_DWORD *)v26 + 354) < v33 )
              {
                v33 = *((_DWORD *)v26 + 354);
                v77.m128i_i32[2] = v33;
              }
              if ( *((_DWORD *)v26 + 355) < v35 )
              {
                v35 = *((_DWORD *)v26 + 355);
                v77.m128i_i32[3] = v35;
              }
              if ( v33 < v32 )
                return 1;
              v44 = v35 < v34;
              v45 = (struct _RECTL **)v69;
              if ( v44 )
                v77.m128i_i32[1] = v35;
              v46 = v77;
              v47 = 0LL;
            }
            if ( v32 != v33 && v46.m128i_i32[1] != _mm_srli_si128(v46, 8).m128i_i32[1] )
            {
              if ( ((*v45)[2].top & 0xE0) != 0 )
              {
                v78 = v46;
                XDCOBJ::vAccumulateTight(v45, v42, &v78);
              }
              ++*(_DWORD *)(v38 + 92);
              v48 = EngDrawStream;
              v49 = *(_QWORD *)(v38 + 48);
              if ( *(_QWORD *)(v49 + 3400) )
                v48 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v49 + 3400);
              v50 = ((*v45)[2].top & 0x200) != 0 && v49 && (*(_DWORD *)(v49 + 40) & 0x20000) != 0;
              if ( *(int *)(v38 + 112) >= 0 && (!v50 || *(_WORD *)(v38 + 100) != 3) )
                v48 = EngDrawStream;
              v51 = v74;
              v78.m128i_i64[0] = 0LL;
              v52 = (char *)v74 + 24;
              v53 = (struct _SURFOBJ *)((char *)v74 + 24);
              if ( !v74 )
                v53 = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v78, v53);
              if ( v78.m128i_i64[0] )
              {
                if ( !v51 )
                  v52 = 0LL;
                if ( (unsigned int)v48(
                                     v67 + 24,
                                     (int)v52,
                                     (int)v47,
                                     (int)v76,
                                     (int)&v77,
                                     (__int64)&v66,
                                     v68,
                                     (__int64)v73,
                                     (__int64)v75) )
                  v9 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v78);
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
