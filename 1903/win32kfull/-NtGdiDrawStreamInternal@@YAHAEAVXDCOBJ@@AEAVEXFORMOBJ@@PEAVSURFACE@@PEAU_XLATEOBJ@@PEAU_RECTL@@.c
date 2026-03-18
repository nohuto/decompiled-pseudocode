/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0072150
 * Callers:
 *     GreDrawStream @ 0x1C0070630 (GreDrawStream.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C0072710 (bCvtPts1.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00759DC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C010FD94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
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
  char *v11; // rdx
  LONG left; // esi
  LONG top; // r12d
  LONG right; // edi
  LONG bottom; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  __int32 v22; // r11d
  __int32 v23; // r9d
  __int32 v24; // r10d
  __int32 v25; // ebx
  DC *v26; // rax
  __int64 v27; // rcx
  char *v28; // rdx
  char *v29; // r8
  __int64 v30; // rdx
  __int32 v31; // esi
  int v32; // edi
  int v33; // r12d
  int v34; // r15d
  char *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r13
  __int32 v38; // r10d
  int v39; // r8d
  int v40; // r9d
  struct ECLIPOBJ *v41; // rdx
  __int32 v42; // ecx
  XDCOBJ *v43; // rbx
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
  _DWORD *v56; // rbx
  __int32 v57; // eax
  __int32 v58; // eax
  LONG v59; // [rsp+50h] [rbp-91h]
  int v60; // [rsp+50h] [rbp-91h]
  int v61; // [rsp+50h] [rbp-91h]
  __int64 v62; // [rsp+58h] [rbp-89h] BYREF
  int v63; // [rsp+60h] [rbp-81h]
  __int64 v64; // [rsp+68h] [rbp-79h]
  XDCOBJ *v65; // [rsp+70h] [rbp-71h]
  LONG v66; // [rsp+78h] [rbp-69h]
  LONG v67; // [rsp+7Ch] [rbp-65h]
  char *v68; // [rsp+80h] [rbp-61h]
  unsigned __int64 v69; // [rsp+88h] [rbp-59h]
  struct SURFACE *v70; // [rsp+90h] [rbp-51h]
  struct _DRAWSTREAMINFO *v71; // [rsp+98h] [rbp-49h]
  struct _XLATEOBJ *v72; // [rsp+A0h] [rbp-41h]
  __m128i v73; // [rsp+B0h] [rbp-31h] BYREF
  __m128i v74; // [rsp+C0h] [rbp-21h] BYREF

  v9 = 0;
  v11 = a8;
  v72 = a4;
  left = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v73.m128i_i32[0] = a5->left;
  *(__int64 *)((char *)v73.m128i_i64 + 4) = __PAIR64__(right, top);
  v59 = a6->left;
  v74.m128i_i32[0] = a6->left;
  LODWORD(v64) = a6->top;
  v74.m128i_i32[1] = v64;
  v66 = a6->right;
  v74.m128i_i32[2] = v66;
  v67 = a6->bottom;
  v74.m128i_i32[3] = v67;
  v16 = *(_QWORD *)a1;
  v73.m128i_i32[3] = bottom;
  v62 = 0LL;
  v65 = a1;
  v17 = *(_QWORD *)(v16 + 496);
  v70 = a3;
  v18 = a7;
  v63 = a7;
  LODWORD(v16) = *(_DWORD *)(v17 + 116);
  v68 = a8;
  v71 = a9;
  if ( ((v16 & 8) != 0 || *(_QWORD *)(v17 + 224)) && (*(_WORD *)(v17 + 102) & 0x200) != 0 )
    goto LABEL_78;
  v19 = *(_DWORD *)(v17 + 112);
  if ( (v19 & 0x800) != 0 )
  {
    v53 = UserSurfaceAccessCheck(*(_QWORD *)(v17 + 648));
  }
  else
  {
    if ( (v19 & 0x10000000) == 0 )
      goto LABEL_5;
    v53 = UserScreenAccessCheck(v17, a8);
  }
  if ( !v53 )
  {
LABEL_78:
    EngSetLastError(5u);
    return v9;
  }
  bottom = v73.m128i_i32[3];
  right = v73.m128i_i32[2];
  top = v73.m128i_i32[1];
  left = v73.m128i_i32[0];
  v11 = v68;
  v18 = v63;
LABEL_5:
  v20 = *(_QWORD *)a2;
  v21 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (v21 & 1) == 0 )
    return v9;
  if ( (v21 & 2) != 0 )
  {
    if ( (v21 & 0x43) != 0x43 )
      bCvtPts1(*(_QWORD *)a2, &v62, 1LL);
  }
  else
  {
    v69 = (unsigned __int64)&v11[v18];
    if ( (unsigned __int64)v11 < v69 )
    {
      v56 = v11 + 36;
      while ( *(v56 - 9) == 9 )
      {
        EXFORMOBJ::bXform(a2, (struct ERECTL *)(v56 - 8));
        if ( (unsigned int)DC::bDpiScaledSurface(*(DC **)v65) )
          *v56 &= ~0x20u;
        v56 += 15;
        if ( (unsigned __int64)(v56 - 9) >= v69 )
        {
          v20 = *(_QWORD *)a2;
          goto LABEL_9;
        }
      }
      return v9;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(v20 + 32) & 0x43) == 0x43 )
  {
    v23 = v66;
    v22 = v67;
    v25 = v64;
    v24 = v59;
  }
  else
  {
    bCvtPts1(v20, &v74, 2LL);
    v22 = v74.m128i_i32[3];
    v23 = v74.m128i_i32[2];
    v24 = v74.m128i_i32[0];
    v25 = v74.m128i_i32[1];
  }
  if ( *((_DWORD *)a2 + 3) )
  {
    ++v24;
    ++v23;
  }
  if ( v24 > v23 )
  {
    v57 = v24;
    v24 = v23;
    v23 = v57;
  }
  if ( v25 > v22 )
  {
    v58 = v25;
    v25 = v22;
    v22 = v58;
  }
  if ( top != bottom && left != right )
  {
    v26 = *(DC **)v65;
    v27 = *(_DWORD *)(*(_QWORD *)v65 + 40LL) & 1;
    v64 = *(_QWORD *)(*(_QWORD *)v65 + 496LL);
    v28 = (char *)v26 + 8 * v27;
    LODWORD(v62) = *((_DWORD *)v28 + 254) + v62;
    HIDWORD(v62) += *((_DWORD *)v28 + 255);
    v29 = (char *)v26 + 8 * (*((_DWORD *)v26 + 10) & 1);
    v60 = *((_DWORD *)v29 + 254);
    v9 = 0;
    if ( (unsigned __int64)(v60 + (__int64)left + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v60 + (__int64)right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v30 = *((int *)v29 + 255);
      if ( (unsigned __int64)(v30 + top + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v30 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v31 = v60 + left;
        v73.m128i_i32[0] = v31;
        v32 = *((_DWORD *)v29 + 254) + right;
        v33 = *((_DWORD *)v29 + 255) + top;
        *(__int64 *)((char *)v73.m128i_i64 + 4) = __PAIR64__(v32, v33);
        v34 = *((_DWORD *)v29 + 255) + bottom;
        v73.m128i_i32[3] = v34;
        v35 = (char *)v26 + 8 * (*((_DWORD *)v26 + 10) & 1);
        v61 = *((_DWORD *)v35 + 254);
        if ( (unsigned __int64)(v61 + (__int64)v24 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v61 + (__int64)v23 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v36 = *((int *)v35 + 255);
          v37 = v64;
          if ( (unsigned __int64)(v36 + v25 + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v36 + v22 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v38 = v61 + v24;
            v39 = v23 + v61;
            v40 = v25 + v36;
            v41 = (struct ECLIPOBJ *)(unsigned int)(v22 + v36);
            if ( v31 > v38
              || v32 < v39
              || v33 > v40
              || v34 < (int)v41
              || (v42 = *((_DWORD *)v26 + 250), v42 > v38)
              || *((_DWORD *)v26 + 252) < v39
              || *((_DWORD *)v26 + 251) > v40
              || *((_DWORD *)v26 + 253) < (int)v41 )
            {
              v43 = v65;
              v45 = (char *)v26 + 1752;
              v54 = XDCOBJ::prgnEffRao((DC **)v65);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v45, v54, (struct ERECTL *)&v73, v55);
              v44 = *(__m128i *)(v45 + 4);
              v73 = v44;
              v32 = v44.m128i_i32[2];
              v31 = v44.m128i_i32[0];
            }
            else
            {
              if ( v42 > v31 )
              {
                v31 = *((_DWORD *)v26 + 250);
                v73.m128i_i32[0] = v31;
              }
              if ( *((_DWORD *)v26 + 251) > v33 )
              {
                v33 = *((_DWORD *)v26 + 251);
                v73.m128i_i32[1] = v33;
              }
              if ( *((_DWORD *)v26 + 252) < v32 )
              {
                v32 = *((_DWORD *)v26 + 252);
                v73.m128i_i32[2] = v32;
              }
              if ( *((_DWORD *)v26 + 253) < v34 )
              {
                v34 = *((_DWORD *)v26 + 253);
                v73.m128i_i32[3] = v34;
              }
              if ( v32 < v31 )
                return 1;
              v43 = v65;
              if ( v34 < v33 )
                v73.m128i_i32[1] = v34;
              v44 = v73;
              v45 = 0LL;
            }
            if ( v31 != v32 && v44.m128i_i32[1] != _mm_srli_si128(v44, 8).m128i_i32[1] )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v43 + 36LL) & 0xE0) != 0 )
              {
                v74 = v44;
                XDCOBJ::vAccumulateTight(v43, v41, &v74);
              }
              ++*(_DWORD *)(v37 + 92);
              v46 = EngDrawStream;
              v47 = *(_QWORD *)(v37 + 48);
              if ( *(_QWORD *)(v47 + 3408) )
                v46 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v47 + 3408);
              v48 = (*(_DWORD *)(*(_QWORD *)v43 + 36LL) & 0x200) != 0 && v47 && (*(_DWORD *)(v47 + 40) & 0x20000) != 0;
              if ( *(int *)(v37 + 112) >= 0 && (!v48 || *(_WORD *)(v37 + 100) != 3) )
                v46 = EngDrawStream;
              v49 = v70;
              v74.m128i_i64[0] = 0LL;
              v50 = (char *)v70 + 24;
              v51 = (struct _SURFOBJ *)((char *)v70 + 24);
              if ( !v70 )
                v51 = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v74, v51);
              if ( v74.m128i_i64[0] )
              {
                if ( !v49 )
                  v50 = 0LL;
                if ( (unsigned int)v46(
                                     v37 + 24,
                                     (int)v50,
                                     (int)v45,
                                     (int)v72,
                                     (int)&v73,
                                     (__int64)&v62,
                                     v63,
                                     (__int64)v68,
                                     (__int64)v71) )
                  v9 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v74);
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
