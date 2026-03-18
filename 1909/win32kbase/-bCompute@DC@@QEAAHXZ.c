/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C0029230
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00258B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0016F90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0018D30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0018F40 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0025650 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0027C30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     AllocateObject @ 0x1C002A780 (AllocateObject.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C00803A0 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01248D0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  struct _RECTL *v1; // r14
  unsigned int v3; // r13d
  _DWORD *v4; // rdi
  _DWORD *v5; // rbx
  int v6; // r15d
  _DWORD *v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  REGION *v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  int v17; // edx
  REGION *v18; // rcx
  REGION *v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // r15
  unsigned int v23; // ebx
  __int64 v24; // rdi
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // r14
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  DC *v33; // rdx
  int v34; // ecx
  __m128i v35; // xmm0
  int v36; // ecx
  int v37; // eax
  __int128 v38; // xmm0
  unsigned int v39; // ebx
  __int64 v40; // rdi
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // r14
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rax
  DC *v49; // rdx
  _BOOL8 v51; // rcx
  _BOOL8 v52; // rax
  int v53; // edi
  REGION *v54; // rbx
  REGION *v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // r12
  __int64 v60; // r10
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 Object; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  int v71; // eax
  unsigned int *v72; // rdx
  int i; // r8d
  __int64 v74; // rcx
  __int128 v75; // xmm0
  unsigned int *v76; // r9
  unsigned int v77; // edx
  unsigned int v78; // edx
  int v79; // eax
  REGION *v80; // [rsp+20h] [rbp-99h] BYREF
  _DWORD *v81; // [rsp+28h] [rbp-91h] BYREF
  __int128 v82; // [rsp+30h] [rbp-89h]
  __int64 v83; // [rsp+40h] [rbp-79h] BYREF
  int v84; // [rsp+48h] [rbp-71h]
  __int64 v85; // [rsp+50h] [rbp-69h] BYREF
  int v86; // [rsp+58h] [rbp-61h]
  __int64 v87; // [rsp+60h] [rbp-59h] BYREF
  int v88; // [rsp+68h] [rbp-51h]
  __int64 v89; // [rsp+70h] [rbp-49h] BYREF
  int v90; // [rsp+78h] [rbp-41h]
  __int64 v91; // [rsp+80h] [rbp-39h] BYREF
  __int64 v92; // [rsp+88h] [rbp-31h] BYREF
  __int64 v93; // [rsp+90h] [rbp-29h] BYREF
  __int64 v94; // [rsp+98h] [rbp-21h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v98; // [rsp+B8h] [rbp-1h]
  __int64 v99; // [rsp+C8h] [rbp+Fh]
  __int64 v100; // [rsp+D0h] [rbp+17h]
  __int64 v101; // [rsp+D8h] [rbp+1Fh]

  v1 = (struct _RECTL *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  v3 = 0;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  v4 = (_DWORD *)*((_QWORD *)this + 140);
  if ( !v4 )
    return v3;
  v5 = (_DWORD *)*((_QWORD *)this + 141);
  v91 = *((_QWORD *)this + 140);
  v3 = 1;
  v81 = v5;
  v6 = 0;
  v7 = v5;
  if ( !v5 )
  {
    Object = AllocateObject(0xD8uLL);
    v7 = (_DWORD *)Object;
    if ( Object )
    {
      *(_DWORD *)(Object + 80) = 120;
      *(_QWORD *)(Object + 84) = 1LL;
      *(_QWORD *)(Object + 92) = 0LL;
      *(_DWORD *)(Object + 100) = 0;
      v5 = (_DWORD *)Object;
      *(_DWORD *)(Object + 104) = 0;
      v6 = 1;
      *(_DWORD *)(Object + 108) = 0x80000000;
      *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
      *(_QWORD *)(Object + 40) = Object + 120;
      *(_QWORD *)(Object + 24) = 216LL;
      *(_QWORD *)(Object + 32) = 0LL;
      v68 = (_QWORD *)(Object + 48);
      v81 = v7;
      v68[1] = v68;
      *v68 = v68;
    }
    else
    {
      v7 = 0LL;
    }
  }
  if ( v7 )
  {
    if ( !v6 && (*((_DWORD *)this + 9) & 0x10) == 0 )
    {
      if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 143) )
        *((_DWORD *)this + 130) |= 0x10u;
LABEL_13:
      v11 = *((_QWORD *)this + 20);
      v12 = *((_QWORD *)this + 21);
      v13 = *((_QWORD *)this + 139);
      if ( !(v13 | v12 | v11) )
      {
        v14 = (REGION *)*((_QWORD *)this + 142);
        if ( v14 )
        {
          REGION::vDeleteREGION(v14);
          *((_QWORD *)this + 142) = 0LL;
        }
        if ( v5[20] > 0xA0u )
          v15 = xmmword_1C01DB088;
        else
          v15 = *(_OWORD *)(v5 + 22);
        *v1 = (struct _RECTL)v15;
        *((_DWORD *)this + 9) &= ~0x10u;
        goto LABEL_19;
      }
      v99 = *((_QWORD *)this + 20);
      v51 = v11 != 0;
      v52 = v51 + 1;
      *(&v99 + v51) = v12;
      if ( !v12 )
        v52 = v51;
      v53 = v52;
      *(&v99 + v52) = v13;
      if ( v13 )
        v53 = v52 + 1;
      v54 = (REGION *)*((_QWORD *)this + 142);
      v80 = v54;
      v55 = v54;
      if ( !v54 )
      {
        v69 = AllocateObject(0xD8uLL);
        v55 = (REGION *)v69;
        if ( v69 )
        {
          v70 = v69 + 104;
          *(_DWORD *)(v69 + 80) = 120;
          *(_QWORD *)(v69 + 84) = 1LL;
          v54 = (REGION *)v69;
          *(_QWORD *)(v69 + 92) = 0LL;
          *(_DWORD *)(v69 + 100) = 0;
          *(_DWORD *)(v69 + 104) = 0;
          v71 = *(_DWORD *)(v69 + 104);
          *(_DWORD *)(v70 + 4) = 0x80000000;
          *(_QWORD *)(v70 + 8) = 0x7FFFFFFFLL;
          *((_QWORD *)v55 + 3) = 216LL;
          *((_QWORD *)v55 + 4) = 0LL;
          v80 = v55;
          *((_QWORD *)v55 + 5) = v70 + (unsigned int)(4 * v71 + 16);
          *((_QWORD *)v55 + 7) = (char *)v55 + 48;
          *((_QWORD *)v55 + 6) = (char *)v55 + 48;
        }
        else
        {
          v55 = 0LL;
        }
      }
      if ( !v55 )
      {
        v3 = 0;
        goto LABEL_156;
      }
      if ( v53 == 1 )
      {
        v56 = v99;
        v57 = *(unsigned int *)(v99 + 80);
        v58 = *((_DWORD *)v54 + 6);
        v92 = v99;
        if ( (v58 >= (unsigned int)v57 || *(_DWORD *)(v99 + 24) <= 0xD8u)
          && (v58 <= 0xD8 || *(_DWORD *)(v99 + 24) > 0xD8u) )
        {
          memmove((char *)v54 + 80, (const void *)(v99 + 80), v57 - 80);
          *((_QWORD *)v54 + 5) = (char *)v54 + *(_DWORD *)(v56 + 40) - (int)v56;
        }
        else
        {
          v78 = 216;
          v86 = 0;
          if ( (unsigned int)v57 > 0xD8 )
            v78 = v57;
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v85, v78);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v85);
          if ( !v85 )
          {
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v85);
            v3 = 0;
            goto LABEL_156;
          }
          RGNOBJ::vCopy((RGNOBJ *)&v85, (struct RGNOBJ *)&v92);
          RGNOBJ::vSwap((RGNOBJ *)&v80, (struct RGNOBJ *)&v85);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v85);
        }
      }
      else if ( v53 == 2 )
      {
        v94 = v99;
        v93 = v100;
        if ( !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v80, (struct RGNOBJ *)&v94, (struct RGNOBJ *)&v93, 1) )
        {
          v54 = v80;
          v3 = 0;
          goto LABEL_156;
        }
      }
      else
      {
        v88 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v87, 0xD8u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v87);
        v96 = v99;
        v95 = v100;
        v97 = v101;
        if ( !v87
          || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v87, (struct RGNOBJ *)&v96, (struct RGNOBJ *)&v95, 1)
          || (v79 = RGNOBJ::iCombine((RGNOBJ *)&v80, (struct RGNOBJ *)&v87, (struct RGNOBJ *)&v97, 1), v54 = v80, !v79) )
        {
          v3 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v87);
        if ( !v3 )
          goto LABEL_156;
      }
      v54 = v80;
      *((_DWORD *)v80 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
      v59 = *((int *)this + 258);
      v60 = *((int *)this + 259);
      if ( *((_DWORD *)v54 + 21) != 1 )
      {
        v61 = *((int *)v54 + 22);
        v62 = *((int *)v54 + 24);
        v63 = *((int *)v54 + 23);
        v64 = *((int *)v54 + 25);
        LODWORD(v98) = v61;
        if ( (int)v61 < (int)v62 && (int)v63 < (int)v64 )
        {
          if ( (unsigned __int64)(v59 + v61 + 0x80000000LL) > 0xFFFFFFFF
            || (LODWORD(v98) = v59 + v61, (unsigned __int64)(v60 + v64 + 0x80000000LL) > 0xFFFFFFFF)
            || (v65 = v59 + v62, HIDWORD(v98) = v60 + v64, (unsigned __int64)(v65 + 0x80000000LL) > 0xFFFFFFFF)
            || (v66 = v60 + v63, DWORD2(v98) = v65, (unsigned __int64)(v66 + 0x80000000LL) > 0xFFFFFFFF)
            || (DWORD1(v98) = v66,
                (((_DWORD)v59 + (_DWORD)v61) & 0xF8000000) != 0
             && (((_DWORD)v59 + (_DWORD)v61) & 0xF8000000) != -134217728)
            || (((((_DWORD)v60 + (_DWORD)v64) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v65 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v66 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
          {
            EngSetLastError(0x216u);
            v3 = 0;
            goto LABEL_156;
          }
          v72 = (unsigned int *)((char *)v54 + 104);
          *(_OWORD *)((char *)v54 + 88) = v98;
          for ( i = *((_DWORD *)v54 + 21); i; v72 = (unsigned int *)((char *)v72 + (unsigned int)(4 * v74 + 16)) )
          {
            v72[1] += v60;
            --i;
            v72[2] += v60;
            v74 = *v72;
            if ( (_DWORD)v74 )
            {
              v76 = &v72[v74 + 3];
              do
              {
                *--v76 += v59;
                LODWORD(v74) = v74 - 1;
              }
              while ( (_DWORD)v74 );
              LODWORD(v74) = *v72;
            }
          }
          v72[-*(v72 - 1) - 2] = 0x7FFFFFFF;
          *((_DWORD *)v54 + 27) = 0x80000000;
        }
      }
      if ( v81[20] == 160
        && v81[22] <= *((_DWORD *)v54 + 22)
        && v81[24] >= *((_DWORD *)v54 + 24)
        && v81[23] <= *((_DWORD *)v54 + 23)
        && v81[25] >= *((_DWORD *)v54 + 25) )
      {
        *((_QWORD *)this + 142) = v54;
        if ( *((_DWORD *)v54 + 20) > 0xA0u )
          v75 = xmmword_1C01DB088;
        else
          v75 = *(_OWORD *)((char *)v54 + 88);
        *v1 = (struct _RECTL)v75;
        *((_DWORD *)this + 9) &= ~0x10u;
LABEL_122:
        if ( v3 )
        {
LABEL_19:
          v16 = *((_QWORD *)this + 62);
          if ( v16 && (*(_DWORD *)(v16 + 116) & 0x800) != 0 )
            *((_DWORD *)this + 130) |= 8u;
          v17 = *((_DWORD *)this + 130);
          if ( v16 && (*(_DWORD *)(v16 + 116) & 0x800) != 0 )
          {
            if ( (v17 & 0x10) != 0 )
            {
              vDuplicateAndScaleRegion(
                *((_QWORD *)this + 141),
                (char *)this + 1144,
                _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
              v17 = *((_DWORD *)this + 130);
            }
            if ( (v17 & 8) != 0 )
              vDuplicateAndScaleRegion(
                *((_QWORD *)this + 142),
                (char *)this + 1152,
                _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
          }
          else
          {
            v18 = (REGION *)*((_QWORD *)this + 143);
            if ( v18 )
            {
              REGION::vDeleteREGION(v18);
              *((_QWORD *)this + 143) = 0LL;
            }
            v19 = (REGION *)*((_QWORD *)this + 144);
            if ( v19 )
            {
              REGION::vDeleteREGION(v19);
              *((_QWORD *)this + 144) = 0LL;
            }
          }
          v20 = *(_DWORD *)this;
          v21 = *(_DWORD *)this;
          *((_DWORD *)this + 130) &= 0xFFFFFFE7;
          v22 = *((_QWORD *)this + 141);
          v23 = (unsigned __int16)v20 | (v21 >> 8) & 0xFF0000;
          if ( v23 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v23,
                                          1)
                   + 13) == HIWORD(v23) )
                v23 = (unsigned __int16)v23;
            }
            else
            {
              v23 = (unsigned __int16)v23;
            }
          }
          v24 = *((_QWORD *)gpHandleManager + 2);
          v25 = *(_DWORD *)(v24 + 2056);
          if ( v23 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
          {
            v29 = 0LL;
          }
          else
          {
            v26 = ((v23 - v25) >> 16) + 1;
            if ( v23 < v25 )
              v26 = 0LL;
            v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
            if ( (_DWORD)v26 )
              v28 = v23 + ((1 - (_DWORD)v26) << 16) - v25;
            else
              v28 = v23;
            v29 = 0LL;
            if ( v28 < *(_DWORD *)(v27 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                           + 16LL * (unsigned __int8)v28
                           + 8) )
            {
              v29 = *(_QWORD *)v27 + 24LL * v28;
            }
          }
          if ( v23 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v23,
                                          1)
                   + 13) == HIWORD(v23) )
                v23 = (unsigned __int16)v23;
            }
            else
            {
              v23 = (unsigned __int16)v23;
            }
          }
          v30 = *(_DWORD *)(v24 + 2056);
          if ( v23 >= v30 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
            goto LABEL_181;
          v31 = ((v23 - v30) >> 16) + 1;
          if ( v23 < v30 )
            v31 = 0LL;
          v32 = *(_QWORD *)(v24 + 8 * v31 + 8);
          if ( (_DWORD)v31 )
            v23 += ((1 - (_DWORD)v31) << 16) - v30;
          if ( v23 >= *(_DWORD *)(v32 + 20) )
LABEL_181:
            v33 = 0LL;
          else
            v33 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                         + 16LL * (unsigned __int8)v23
                         + 8);
          if ( v33 != this )
            v29 = 0LL;
          if ( (*(_BYTE *)(v29 + 15) & 4) != 0 )
          {
            if ( !v22 )
              goto LABEL_101;
            if ( *(_DWORD *)(v22 + 84) == 1 )
            {
              v34 = 1;
            }
            else
            {
              v34 = 3;
              if ( *(_DWORD *)(v22 + 80) <= 0xA0u )
                v34 = 2;
            }
            *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = v34;
            if ( *(_DWORD *)(v22 + 84) == 1 )
            {
LABEL_101:
              v38 = xmmword_1C01DB088;
            }
            else
            {
              v36 = *((_DWORD *)this + 258);
              v82 = *(_OWORD *)(v22 + 88);
              v35 = (__m128i)v82;
              DWORD2(v82) -= v36;
              LODWORD(v82) = _mm_cvtsi128_si32(v35) - v36;
              v37 = *((_DWORD *)this + 259);
              DWORD1(v82) -= v37;
              HIDWORD(v82) -= v37;
              v38 = v82;
            }
            *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = v38;
            v39 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
            if ( v39 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*(_DWORD *)this,
                                            1)
                     + 13) == HIWORD(v39) )
                  v39 = (unsigned __int16)v39;
              }
              else
              {
                v39 = (unsigned __int16)*(_DWORD *)this;
              }
            }
            v40 = *((_QWORD *)gpHandleManager + 2);
            v41 = *(_DWORD *)(v40 + 2056);
            if ( v39 >= v41 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
            {
              v45 = 0LL;
            }
            else
            {
              v42 = ((v39 - v41) >> 16) + 1;
              if ( v39 < v41 )
                v42 = 0LL;
              v43 = *(_QWORD *)(v40 + 8 * v42 + 8);
              if ( (_DWORD)v42 )
                v44 = v39 + ((1 - (_DWORD)v42) << 16) - v41;
              else
                v44 = v39;
              v45 = 0LL;
              if ( v44 < *(_DWORD *)(v43 + 20)
                && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * ((unsigned __int64)v44 >> 8))
                             + 16LL * (unsigned __int8)v44
                             + 8) )
              {
                v45 = *(_QWORD *)v43 + 24LL * v44;
              }
            }
            if ( v39 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)v39,
                                            1)
                     + 13) == HIWORD(v39) )
                  v39 = (unsigned __int16)v39;
              }
              else
              {
                v39 = (unsigned __int16)v39;
              }
            }
            v46 = *(_DWORD *)(v40 + 2056);
            if ( v39 >= v46 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
              goto LABEL_192;
            v47 = ((v39 - v46) >> 16) + 1;
            if ( v39 < v46 )
              v47 = 0LL;
            v48 = *(_QWORD *)(v40 + 8 * v47 + 8);
            if ( (_DWORD)v47 )
              v39 += ((1 - (_DWORD)v47) << 16) - v46;
            if ( v39 >= *(_DWORD *)(v48 + 20) )
LABEL_192:
              v49 = 0LL;
            else
              v49 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)v39 >> 8))
                           + 16LL * (unsigned __int8)v39
                           + 8);
            if ( v49 != this )
              v45 = 0LL;
            *(_BYTE *)(v45 + 15) &= ~4u;
          }
          return v3;
        }
LABEL_156:
        *((_QWORD *)this + 142) = 0LL;
        if ( v54 )
          REGION::vDeleteREGION(v54);
        goto LABEL_19;
      }
      v90 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v89, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v89);
      if ( v89 )
      {
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v89, (struct RGNOBJ *)&v81, (struct RGNOBJ *)&v80, 1)
          && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v80, (struct RGNOBJ *)&v89) )
        {
          v54 = v80;
          *((_QWORD *)this + 142) = v80;
          RGNOBJ::vGetSubRect((RGNOBJ *)&v80, v1);
          *((_DWORD *)this + 9) &= ~0x10u;
LABEL_131:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v89);
          goto LABEL_122;
        }
        v54 = v80;
      }
      v3 = 0;
      goto LABEL_131;
    }
    v8 = (unsigned int)v4[20];
    v9 = v5[6];
    if ( (v9 >= (unsigned int)v8 || v4[6] <= 0xD8u) && (v9 <= 0xD8 || v4[6] > 0xD8u) )
    {
      memmove(v5 + 20, v4 + 20, v8 - 80);
      *((_QWORD *)v5 + 5) = (char *)v5 + v4[10] - (int)v4;
      goto LABEL_9;
    }
    v77 = 216;
    v84 = 0;
    if ( (unsigned int)v8 > 0xD8 )
      v77 = v8;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v83, v77);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v83);
    if ( v83 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v83, (struct RGNOBJ *)&v91);
      RGNOBJ::vSwap((RGNOBJ *)&v81, (struct RGNOBJ *)&v83);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
      v5 = v81;
LABEL_9:
      v10 = *((_QWORD *)this + 62);
      if ( v10 && (*(_DWORD *)(v10 + 116) & 0x800) != 0 )
        *((_DWORD *)this + 130) |= 0x10u;
      *((_QWORD *)this + 141) = v5;
      goto LABEL_13;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
  }
  return 0LL;
}
