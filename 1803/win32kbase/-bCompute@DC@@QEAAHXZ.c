/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00225E0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0020DF0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0021C40 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0021CA0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C0021E90 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00C4790 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00C4C6C (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  struct _RECTL *v1; // r14
  _DWORD *v3; // rdi
  _WORD *v4; // rbx
  int v5; // r13d
  int v6; // r15d
  _DWORD *v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  REGION *v14; // rcx
  struct _RECTL v15; // xmm0
  __int64 v16; // rcx
  REGION *v17; // rcx
  REGION *v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  _DWORD *v21; // r9
  unsigned int v22; // ebx
  __int64 v23; // rdi
  int v24; // r12d
  unsigned int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r8
  DC *v32; // rdx
  int v33; // ecx
  __m128i v34; // xmm1
  int v35; // ecx
  int v36; // eax
  __m128i v37; // xmm0
  unsigned int v38; // ebx
  __int64 v39; // r14
  int v40; // r12d
  unsigned int v41; // r15d
  __int64 v42; // rcx
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rax
  DC *v48; // rdx
  _BOOL8 v50; // rcx
  _BOOL8 v51; // rax
  int v52; // edi
  REGION *v53; // rbx
  REGION *v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // r12
  __int64 v59; // r10
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rdx
  _WORD *Object; // rax
  _QWORD *v67; // rax
  _WORD *v68; // rax
  _WORD *v69; // rdx
  int v70; // eax
  unsigned int *v71; // rdx
  int i; // r8d
  __int64 v73; // rcx
  struct _RECTL v74; // xmm0
  unsigned int *v75; // r9
  unsigned int v76; // edx
  unsigned int v77; // edx
  int v78; // eax
  __int64 v79; // r8
  __int64 v80; // r8
  struct _ENTRY *Entry; // rax
  bool v82; // cc
  struct _ENTRY *v83; // rax
  unsigned int v84; // [rsp+24h] [rbp-95h]
  REGION *v85; // [rsp+28h] [rbp-91h] BYREF
  _DWORD *v86; // [rsp+30h] [rbp-89h] BYREF
  __m128i v87; // [rsp+38h] [rbp-81h] BYREF
  __int64 v88; // [rsp+48h] [rbp-71h] BYREF
  int v89; // [rsp+50h] [rbp-69h]
  __int64 v90; // [rsp+58h] [rbp-61h] BYREF
  int v91; // [rsp+60h] [rbp-59h]
  __int64 v92; // [rsp+68h] [rbp-51h] BYREF
  int v93; // [rsp+70h] [rbp-49h]
  __int64 v94; // [rsp+78h] [rbp-41h] BYREF
  int v95; // [rsp+80h] [rbp-39h]
  __int64 v96; // [rsp+88h] [rbp-31h] BYREF
  __int64 v97; // [rsp+90h] [rbp-29h] BYREF
  __int64 v98; // [rsp+98h] [rbp-21h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v100; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v101; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v102; // [rsp+B8h] [rbp-1h]
  __int64 v103; // [rsp+C8h] [rbp+Fh]
  __int64 v104; // [rsp+D0h] [rbp+17h]
  __int64 v105; // [rsp+D8h] [rbp+1Fh]

  v1 = (struct _RECTL *)((char *)this + 1408);
  *((_DWORD *)this + 352) = rclEmpty;
  *((_DWORD *)this + 353) = *(&rclEmpty + 1);
  *((_DWORD *)this + 354) = *(&rclEmpty + 2);
  *((_DWORD *)this + 355) = *(&rclEmpty + 3);
  v3 = (_DWORD *)*((_QWORD *)this + 191);
  v84 = 0;
  if ( !v3 )
    return v84;
  v4 = (_WORD *)*((_QWORD *)this + 192);
  v84 = 1;
  v5 = 1;
  v96 = *((_QWORD *)this + 191);
  v6 = 0;
  v86 = v4;
  v7 = v4;
  if ( !v4 )
  {
    Object = AllocateObject(0xD8uLL, 4u, 0);
    v7 = Object;
    if ( Object )
    {
      *((_DWORD *)Object + 20) = 120;
      *(_QWORD *)(Object + 42) = 1LL;
      *(_QWORD *)(Object + 46) = 0LL;
      *((_DWORD *)Object + 25) = 0;
      v4 = Object;
      *((_DWORD *)Object + 26) = 0;
      v6 = 1;
      *((_DWORD *)Object + 27) = 0x80000000;
      *((_QWORD *)Object + 14) = 0x7FFFFFFFLL;
      *((_QWORD *)Object + 5) = Object + 60;
      *((_QWORD *)Object + 3) = 216LL;
      *((_QWORD *)Object + 4) = 0LL;
      v67 = Object + 24;
      v86 = v7;
      v67[1] = v67;
      *v67 = v67;
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
      if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 194) )
        *((_DWORD *)this + 132) |= 0x10u;
LABEL_13:
      v11 = *((_QWORD *)this + 21);
      v12 = *((_QWORD *)this + 22);
      v13 = *((_QWORD *)this + 190);
      if ( !(v13 | v12 | v11) )
      {
        v14 = (REGION *)*((_QWORD *)this + 193);
        if ( v14 )
        {
          REGION::vDeleteREGION(v14);
          *((_QWORD *)this + 193) = 0LL;
        }
        if ( *((_DWORD *)v4 + 20) > 0xA0u )
          v15 = (struct _RECTL)rclEmpty;
        else
          v15 = *(struct _RECTL *)(v4 + 44);
        *v1 = v15;
        *((_DWORD *)this + 9) &= ~0x10u;
        goto LABEL_19;
      }
      v103 = *((_QWORD *)this + 21);
      v50 = v11 != 0;
      v51 = v50 + 1;
      *(&v103 + v50) = v12;
      if ( !v12 )
        v51 = v50;
      v52 = v51;
      *(&v103 + v51) = v13;
      if ( v13 )
        v52 = v51 + 1;
      v53 = (REGION *)*((_QWORD *)this + 193);
      v85 = v53;
      v54 = v53;
      if ( !v53 )
      {
        v68 = AllocateObject(0xD8uLL, 4u, 0);
        v54 = (REGION *)v68;
        if ( v68 )
        {
          v69 = v68 + 52;
          *((_DWORD *)v68 + 20) = 120;
          *(_QWORD *)(v68 + 42) = 1LL;
          v53 = (REGION *)v68;
          *(_QWORD *)(v68 + 46) = 0LL;
          *((_DWORD *)v68 + 25) = 0;
          *((_DWORD *)v68 + 26) = 0;
          v70 = *((_DWORD *)v68 + 26);
          *((_DWORD *)v69 + 1) = 0x80000000;
          *((_QWORD *)v69 + 1) = 0x7FFFFFFFLL;
          *((_QWORD *)v54 + 3) = 216LL;
          *((_QWORD *)v54 + 4) = 0LL;
          v85 = v54;
          *((_QWORD *)v54 + 5) = (char *)v69 + (unsigned int)(4 * v70 + 16);
          *((_QWORD *)v54 + 7) = (char *)v54 + 48;
          *((_QWORD *)v54 + 6) = (char *)v54 + 48;
        }
        else
        {
          v54 = 0LL;
        }
      }
      if ( !v54 )
      {
        v84 = 0;
        goto LABEL_164;
      }
      if ( v52 == 1 )
      {
        v55 = v103;
        v56 = *(unsigned int *)(v103 + 80);
        v57 = *((_DWORD *)v53 + 6);
        v97 = v103;
        if ( v57 < (unsigned int)v56 && *(_DWORD *)(v103 + 24) > 0xD8u || v57 > 0xD8 && *(_DWORD *)(v103 + 24) <= 0xD8u )
        {
          v77 = 216;
          v91 = 0;
          if ( (unsigned int)v56 > 0xD8 )
            v77 = v56;
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v90, v77);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v90);
          if ( !v90 )
          {
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v90);
            v84 = 0;
            goto LABEL_164;
          }
          RGNOBJ::vCopy((RGNOBJ *)&v90, (struct RGNOBJ *)&v97);
          RGNOBJ::vSwap((RGNOBJ *)&v85, (struct RGNOBJ *)&v90);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v90);
        }
        else
        {
          memmove((char *)v53 + 80, (const void *)(v103 + 80), v56 - 80);
          *((_QWORD *)v53 + 5) = (char *)v53 + *(_DWORD *)(v55 + 40) - (int)v55;
        }
      }
      else if ( v52 == 2 )
      {
        v99 = v103;
        v98 = v104;
        if ( !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v85, (struct RGNOBJ *)&v99, (struct RGNOBJ *)&v98, 1) )
        {
          v53 = v85;
          v84 = 0;
          goto LABEL_164;
        }
      }
      else
      {
        v93 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v92, 0xD8u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v92);
        v101 = v103;
        v100 = v104;
        v87.m128i_i64[0] = v105;
        if ( !v92
          || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v92, (struct RGNOBJ *)&v101, (struct RGNOBJ *)&v100, 1)
          || (v78 = RGNOBJ::iCombine((RGNOBJ *)&v85, (struct RGNOBJ *)&v92, (struct RGNOBJ *)&v87, 1), v53 = v85, !v78) )
        {
          v5 = 0;
          v84 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v92);
        if ( !v5 )
          goto LABEL_164;
      }
      v53 = v85;
      *((_DWORD *)v85 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
      v58 = *((int *)this + 360);
      v59 = *((int *)this + 361);
      if ( *((_DWORD *)v53 + 21) != 1 )
      {
        v60 = *((int *)v53 + 22);
        v61 = *((int *)v53 + 24);
        v62 = *((int *)v53 + 25);
        v63 = *((int *)v53 + 23);
        LODWORD(v102) = v60;
        HIDWORD(v102) = v62;
        if ( (int)v60 < (int)v61 && (int)v63 < (int)v62 )
        {
          if ( (unsigned __int64)(v58 + v60 + 0x80000000LL) > 0xFFFFFFFF
            || (LODWORD(v102) = v58 + v60, (unsigned __int64)(v59 + v62 + 0x80000000LL) > 0xFFFFFFFF)
            || (v64 = v58 + v61, HIDWORD(v102) = v59 + v62, (unsigned __int64)(v64 + 0x80000000LL) > 0xFFFFFFFF)
            || (v65 = v59 + v63, DWORD2(v102) = v64, (unsigned __int64)(v65 + 0x80000000LL) > 0xFFFFFFFF)
            || (DWORD1(v102) = v65,
                (((_DWORD)v58 + (_DWORD)v60) & 0xF8000000) != 0
             && (((_DWORD)v58 + (_DWORD)v60) & 0xF8000000) != -134217728)
            || (((((_DWORD)v59 + (_DWORD)v62) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v64 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v65 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
          {
            EngSetLastError(0x216u);
            v84 = 0;
            goto LABEL_164;
          }
          v71 = (unsigned int *)((char *)v53 + 104);
          *(_OWORD *)((char *)v53 + 88) = v102;
          for ( i = *((_DWORD *)v53 + 21); i; v71 = (unsigned int *)((char *)v71 + (unsigned int)(4 * v73 + 16)) )
          {
            v71[1] += v59;
            --i;
            v71[2] += v59;
            v73 = *v71;
            if ( (_DWORD)v73 )
            {
              v75 = &v71[v73 + 3];
              do
              {
                *--v75 += v58;
                LODWORD(v73) = v73 - 1;
              }
              while ( (_DWORD)v73 );
              LODWORD(v73) = *v71;
            }
          }
          v71[-*(v71 - 1) - 2] = 0x7FFFFFFF;
          *((_DWORD *)v53 + 27) = 0x80000000;
        }
      }
      if ( v86[20] == 160
        && v86[22] <= *((_DWORD *)v53 + 22)
        && v86[24] >= *((_DWORD *)v53 + 24)
        && v86[23] <= *((_DWORD *)v53 + 23)
        && v86[25] >= *((_DWORD *)v53 + 25) )
      {
        *((_QWORD *)this + 193) = v53;
        if ( *((_DWORD *)v53 + 20) > 0xA0u )
          v74 = (struct _RECTL)rclEmpty;
        else
          v74 = *(struct _RECTL *)((char *)v53 + 88);
        *v1 = v74;
        *((_DWORD *)this + 9) &= ~0x10u;
LABEL_124:
        if ( v5 )
        {
LABEL_19:
          v16 = *((_QWORD *)this + 63);
          if ( v16 && (*(_DWORD *)(v16 + 116) & 0x800) != 0 )
            *((_DWORD *)this + 132) |= 8u;
          if ( v16 && (*(_DWORD *)(v16 + 116) & 0x800) != 0 )
          {
            if ( (*((_DWORD *)this + 132) & 0x10) != 0 )
            {
              vDuplicateAndScaleRegion(*((_QWORD *)this + 192), (char *)this + 1552, *(_QWORD *)((char *)this + 532));
              v79 = *((_QWORD *)this + 194);
              if ( v79 )
                GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 63), v79, 2LL);
            }
            if ( (*((_DWORD *)this + 132) & 8) != 0 )
            {
              vDuplicateAndScaleRegion(*((_QWORD *)this + 193), (char *)this + 1560, *(_QWORD *)((char *)this + 532));
              v80 = *((_QWORD *)this + 195);
              if ( v80 )
                GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 63), v80, 2LL);
            }
          }
          else
          {
            v17 = (REGION *)*((_QWORD *)this + 194);
            if ( v17 )
            {
              REGION::vDeleteREGION(v17);
              *((_QWORD *)this + 194) = 0LL;
            }
            v18 = (REGION *)*((_QWORD *)this + 195);
            if ( v18 )
            {
              REGION::vDeleteREGION(v18);
              *((_QWORD *)this + 195) = 0LL;
            }
          }
          v19 = *(_DWORD *)this;
          v20 = *(_DWORD *)this;
          *((_DWORD *)this + 132) &= 0xFFFFFFE7;
          v21 = (_DWORD *)*((_QWORD *)this + 192);
          v22 = (unsigned __int16)v19 | (v20 >> 8) & 0xFF0000;
          v86 = v21;
          if ( v22 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              Entry = GdiHandleEntryDirectory::GetEntry(
                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                        (unsigned __int16)v22,
                        1);
              v21 = v86;
              if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v22) )
                v22 = (unsigned __int16)v22;
            }
            else
            {
              v22 = (unsigned __int16)v22;
            }
          }
          v23 = *((_QWORD *)gpHandleManager + 2);
          v24 = *(unsigned __int16 *)(v23 + 2);
          v25 = *(_DWORD *)(v23 + 2056);
          if ( v22 >= v25 + ((v24 + 0xFFFF) << 16) )
          {
            v29 = 0LL;
          }
          else
          {
            v26 = ((v22 - v25) >> 16) + 1;
            if ( v22 < v25 )
              v26 = 0LL;
            v27 = *(_QWORD *)(v23 + 8 * v26 + 8);
            if ( (_DWORD)v26 )
              v28 = v22 + ((1 - (_DWORD)v26) << 16) - v25;
            else
              v28 = v22;
            v29 = 0LL;
            if ( v28 < *(_DWORD *)(v27 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                           + 16LL * (unsigned __int8)v28
                           + 8) )
            {
              v29 = *(_QWORD *)v27 + 24LL * v28;
            }
            LOWORD(v24) = *(_WORD *)(v23 + 2);
            v21 = v86;
          }
          if ( v22 >= 0x10000 )
          {
            v82 = *(_DWORD *)gpHandleManager <= 0x10000u;
            LODWORD(v85) = (unsigned __int16)v22;
            if ( v82 )
            {
              v22 = (unsigned __int16)v22;
            }
            else
            {
              v83 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v23, (unsigned __int16)v22, 1);
              v21 = v86;
              if ( *((unsigned __int8 *)v83 + 13) == HIWORD(v22) )
                v22 = (unsigned int)v85;
            }
          }
          if ( v22 >= v25 + (((unsigned __int16)v24 + 0xFFFF) << 16) )
            goto LABEL_184;
          v30 = ((v22 - v25) >> 16) + 1;
          if ( v22 < v25 )
            v30 = 0LL;
          v31 = *(_QWORD *)(v23 + 8 * v30 + 8);
          if ( (_DWORD)v30 )
            v22 += ((1 - (_DWORD)v30) << 16) - v25;
          if ( v22 >= *(_DWORD *)(v31 + 20) )
LABEL_184:
            v32 = 0LL;
          else
            v32 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v22 >> 8))
                         + 16LL * (unsigned __int8)v22
                         + 8);
          if ( v32 != this )
            v29 = 0LL;
          if ( (*(_BYTE *)(v29 + 15) & 4) != 0 )
          {
            if ( !v21 )
              goto LABEL_103;
            if ( v21[21] == 1 )
            {
              v33 = 1;
            }
            else
            {
              v33 = 3;
              if ( v21[20] <= 0xA0u )
                v33 = 2;
            }
            *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v33;
            if ( v21[21] == 1 )
            {
LABEL_103:
              v37 = (__m128i)rclEmpty;
            }
            else
            {
              v35 = *((_DWORD *)this + 360);
              v87 = *(__m128i *)(v21 + 22);
              v34 = v87;
              v87.m128i_i32[2] -= v35;
              v87.m128i_i32[0] = _mm_cvtsi128_si32(v34) - v35;
              v36 = *((_DWORD *)this + 361);
              v87.m128i_i32[1] -= v36;
              v87.m128i_i32[3] -= v36;
              v37 = v87;
            }
            *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v37;
            v38 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
            if ( v38 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*(_DWORD *)this,
                                            1)
                     + 13) == HIWORD(v38) )
                  v38 = (unsigned __int16)v38;
              }
              else
              {
                v38 = (unsigned __int16)*(_DWORD *)this;
              }
            }
            v39 = *((_QWORD *)gpHandleManager + 2);
            v40 = *(unsigned __int16 *)(v39 + 2);
            v41 = *(_DWORD *)(v39 + 2056);
            if ( v38 >= v41 + ((v40 + 0xFFFF) << 16) )
            {
              v45 = 0LL;
            }
            else
            {
              v42 = ((v38 - v41) >> 16) + 1;
              if ( v38 < v41 )
                v42 = 0LL;
              v43 = *(_QWORD *)(v39 + 8 * v42 + 8);
              if ( (_DWORD)v42 )
                v44 = v38 + ((1 - (_DWORD)v42) << 16) - v41;
              else
                v44 = v38;
              v45 = 0LL;
              if ( v44 < *(_DWORD *)(v43 + 20)
                && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * ((unsigned __int64)v44 >> 8))
                             + 16LL * (unsigned __int8)v44
                             + 8) )
              {
                v45 = *(_QWORD *)v43 + 24LL * v44;
              }
              LOWORD(v40) = *(_WORD *)(v39 + 2);
            }
            if ( v38 >= 0x10000 )
            {
              v82 = *(_DWORD *)gpHandleManager <= 0x10000u;
              LODWORD(v85) = (unsigned __int16)v38;
              if ( v82 )
              {
                v38 = (unsigned __int16)v38;
              }
              else if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                               (GdiHandleEntryDirectory *)v39,
                                               (unsigned __int16)v38,
                                               1)
                        + 13) == HIWORD(v38) )
              {
                v38 = (unsigned int)v85;
              }
            }
            if ( v38 >= v41 + (((unsigned __int16)v40 + 0xFFFF) << 16) )
              goto LABEL_194;
            v46 = ((v38 - v41) >> 16) + 1;
            if ( v38 < v41 )
              v46 = 0LL;
            v47 = *(_QWORD *)(v39 + 8 * v46 + 8);
            if ( (_DWORD)v46 )
              v38 += ((1 - (_DWORD)v46) << 16) - v41;
            if ( v38 >= *(_DWORD *)(v47 + 20) )
LABEL_194:
              v48 = 0LL;
            else
              v48 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v38 >> 8))
                           + 16LL * (unsigned __int8)v38
                           + 8);
            if ( v48 != this )
              v45 = 0LL;
            *(_BYTE *)(v45 + 15) &= ~4u;
          }
          return v84;
        }
LABEL_164:
        *((_QWORD *)this + 193) = 0LL;
        if ( v53 )
          REGION::vDeleteREGION(v53);
        goto LABEL_19;
      }
      v95 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v94, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v94);
      if ( v94 )
      {
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v94, (struct RGNOBJ *)&v86, (struct RGNOBJ *)&v85, 1)
          && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v85, (struct RGNOBJ *)&v94) )
        {
          v53 = v85;
          *((_QWORD *)this + 193) = v85;
          RGNOBJ::vGetSubRect((RGNOBJ *)&v85, v1);
          *((_DWORD *)this + 9) &= ~0x10u;
LABEL_133:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v94);
          goto LABEL_124;
        }
        v53 = v85;
      }
      v5 = 0;
      v84 = 0;
      goto LABEL_133;
    }
    v8 = (unsigned int)v3[20];
    v9 = *((_DWORD *)v4 + 6);
    if ( (v9 >= (unsigned int)v8 || v3[6] <= 0xD8u) && (v9 <= 0xD8 || v3[6] > 0xD8u) )
    {
      memmove(v4 + 40, v3 + 20, v8 - 80);
      *((_QWORD *)v4 + 5) = (char *)v4 + v3[10] - (int)v3;
      goto LABEL_9;
    }
    v76 = 216;
    v89 = 0;
    if ( (unsigned int)v8 > 0xD8 )
      v76 = v8;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v88, v76);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v88);
    if ( v88 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v88, (struct RGNOBJ *)&v96);
      RGNOBJ::vSwap((RGNOBJ *)&v86, (struct RGNOBJ *)&v88);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v88);
      v4 = v86;
LABEL_9:
      v10 = *((_QWORD *)this + 63);
      if ( v10 && (*(_DWORD *)(v10 + 116) & 0x800) != 0 )
        *((_DWORD *)this + 132) |= 0x10u;
      *((_QWORD *)this + 192) = v4;
      goto LABEL_13;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v88);
  }
  return 0LL;
}
