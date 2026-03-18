/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0053A60
 * Callers:
 *     GreSetPointer @ 0x1C0018BB8 (GreSetPointer.c)
 * Callees:
 *     EngSetPointerShape @ 0x1C000A160 (EngSetPointerShape.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00A3AB8 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C010209C (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0251328 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  HDEV v5; // rdi
  __int64 v6; // r13
  volatile unsigned int v7; // eax
  int v8; // r12d
  int v11; // r15d
  void (__fastcall *v12)(__int64, __int64, __int64, _QWORD); // rax
  volatile unsigned int v13; // ett
  volatile unsigned int v14; // ett
  volatile unsigned int v15; // ett
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct PALETTE *v21; // rdx
  HDEV v22; // rax
  struct _SURFOBJ *v23; // r9
  int v24; // eax
  unsigned int v25; // eax
  signed int v26; // r8d
  LONG v27; // r9d
  LONG v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  SURFOBJ *v32; // r15
  LONG v33; // eax
  LONG v34; // ecx
  LONG v35; // r8d
  LONG v36; // r9d
  int v37; // eax
  RECTL *v38; // rcx
  int v39; // eax
  int *v40; // rdx
  int v41; // edx
  int v42; // eax
  int v43; // r8d
  int v44; // ecx
  int v45; // ebx
  int v46; // r12d
  unsigned int v47; // r10d
  LONG v48; // r11d
  int v49; // edx
  LONG v50; // r9d
  int v51; // eax
  unsigned __int8 v52; // al
  int v53; // ecx
  char v54; // al
  int v55; // ecx
  int v56; // ecx
  __int64 (__fastcall *v57)(SURFOBJ *, SURFOBJ *, __int64, __int64); // r10
  unsigned int v58; // edx
  int v59; // eax
  char v60; // cl
  void (__fastcall *v61)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  SURFOBJ *v62; // rsi
  void (__fastcall *v63)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v64; // rdx
  volatile unsigned int *v65; // rdx
  volatile unsigned int *v66; // rdx
  int v67; // edx
  LONG v68; // ecx
  LONG v69; // eax
  SURFOBJ *v70; // r8
  XLATEOBJ *v71; // r9
  SURFOBJ *v72; // rdx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  int v79; // [rsp+60h] [rbp-A0h]
  SURFOBJ *pso; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+70h] [rbp-90h]
  LONG v82; // [rsp+74h] [rbp-8Ch]
  int v84; // [rsp+7Ch] [rbp-84h]
  struct PALETTE *v85; // [rsp+80h] [rbp-80h] BYREF
  __int64 v86; // [rsp+88h] [rbp-78h]
  unsigned int v87; // [rsp+90h] [rbp-70h]
  int v88; // [rsp+94h] [rbp-6Ch]
  int v89; // [rsp+98h] [rbp-68h]
  LONG v90; // [rsp+9Ch] [rbp-64h]
  __int64 v91; // [rsp+A0h] [rbp-60h]
  __int64 v92; // [rsp+A8h] [rbp-58h]
  __int64 v93; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v94[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v95[4]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v96[32]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v97; // [rsp+F8h] [rbp-8h]
  _BYTE v98[32]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v99; // [rsp+120h] [rbp+20h]
  _BYTE v100[32]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v101; // [rsp+148h] [rbp+48h]
  RECTL v102; // [rsp+150h] [rbp+50h] BYREF
  RECTL v103; // [rsp+160h] [rbp+60h] BYREF
  RECTL v104; // [rsp+170h] [rbp+70h]

  v87 = a4;
  v5 = a1 + 10;
  v6 = 0LL;
  v88 = a3 & 0x20;
  v7 = *((_DWORD *)a1 + 10);
  v8 = a3 & 0x10;
  v11 = 0;
  if ( (v7 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    SURFREF::SURFREF((SURFREF *)v98, *((HSURF *)a2 + 1));
    if ( !v99 || v99[24] != 1 || (v99[15] & 1) != 0 )
      goto LABEL_93;
    v86 = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    v91 = 0LL;
    SURFREF::SURFREF((SURFREF *)v96);
    SURFREF::SURFREF((SURFREF *)v100);
    v17 = *((_QWORD *)a1 + 319);
    v85 = 0LL;
    pso = (SURFOBJ *)((v17 + 24) & -(__int64)(v17 != 0));
    if ( *((_QWORD *)a2 + 2) || *((_QWORD *)a2 + 6) )
    {
      v18 = *((_QWORD *)a2 + 6);
      LOBYTE(v16) = 5;
      if ( v18 )
      {
        v19 = HmgShareLockCheck(v18, v16);
        v11 = 1;
      }
      else
      {
        v19 = HmgShareLockCheck(*((_QWORD *)a2 + 2), v16);
      }
      v97 = v19;
      v20 = v19;
      if ( !v19 )
      {
LABEL_33:
        if ( *((_DWORD *)a2 + 11) )
        {
          if ( (*(_DWORD *)a2 & 0x400) != 0 )
          {
            if ( v8 )
            {
LABEL_45:
              v26 = *((_DWORD *)a2 + 10);
              if ( *((_DWORD *)a2 + 8) > v26 )
                goto LABEL_92;
              v27 = *((_DWORD *)a2 + 9);
              v28 = *((_DWORD *)a2 + 11);
              if ( v27 > v28 )
                goto LABEL_92;
              v103.left = *((_DWORD *)a2 + 8);
              v29 = *((_QWORD *)a2 + 3);
              *(_QWORD *)&v103.top = __PAIR64__(v26, v27);
              v103.bottom = v28;
              if ( v29 && *((_DWORD *)a1 + 527) > 3u )
              {
                LOBYTE(v16) = 5;
                v30 = HmgShareLockCheck(v29, v16);
                v20 = v97;
                v31 = v30;
                v101 = v30;
              }
              else
              {
                v31 = v101;
              }
              v32 = (SURFOBJ *)v99;
              if ( v31 )
              {
                v33 = *((_DWORD *)a2 + 8);
                v34 = *((_DWORD *)a2 + 9);
                v35 = *((_DWORD *)a2 + 10);
                v36 = *((_DWORD *)a2 + 11);
                v102.left = v33;
                v102.top = v34;
                v102.right = v35;
                v102.bottom = v36;
                v86 = v31;
                if ( v8 )
                {
                  v102.left = v33 + 1;
                  v102.top = v34 + 1;
                  v102.right = v35 + 8;
                  v102.bottom = v36 + 6;
                }
                v37 = *(_DWORD *)(v31 + 56);
                v38 = &v102;
                v94[0] = 0;
                v94[1] = 0;
                v94[2] = v37;
                v39 = *(_DWORD *)(v31 + 60);
                v40 = v94;
                v94[3] = v39;
              }
              else
              {
                v41 = v99[14];
                if ( v20 && v41 >= *(_DWORD *)(v20 + 56) )
                  v41 = *(_DWORD *)(v20 + 56);
                v95[0] = 0;
                v38 = &v103;
                v95[1] = 0;
                v42 = (int)v99[15] >> 1;
                v95[2] = v41;
                v40 = v95;
                v95[3] = v42;
              }
              ERECTL::operator*=(&v38->left, v40);
              v43 = v8 != 0 ? 3 : 0;
              v89 = v43;
              if ( (*(_DWORD *)v5 & 0x400) != 0 )
                goto LABEL_92;
              v44 = *((__int16 *)a2 + 3);
              v45 = 0;
              v46 = 1;
              v47 = v87;
              v48 = *((_DWORD *)a1 + 18);
              v49 = a3 & 0xC | 1;
              v50 = *((_DWORD *)a1 + 19);
              *((_DWORD *)a1 + 20) = *((__int16 *)a2 + 2);
              v51 = 0;
              v79 = 0;
              *((_DWORD *)a1 + 21) = v44;
              v90 = v48;
              v82 = v50;
              v81 = v49;
              v84 = 0;
              if ( v47 && a5 )
              {
                v52 = -1;
                if ( a5 < 0xFF )
                  v52 = a5;
                v53 = v52;
                v54 = 16;
                v55 = 16 * v53;
                if ( v47 < 0x10 )
                  v54 = v47;
                v56 = v54 & 0xF | v55;
                v51 = 1;
                v49 |= v56 << 8;
                v84 = 1;
                v81 = v49;
              }
              if ( v88 )
                goto LABEL_96;
              v57 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, __int64, __int64))*((_QWORD *)a1 + 365);
              if ( !v57 || v51 && ((_DWORD)a1[532] & 0x200) == 0 )
                goto LABEL_96;
              if ( v86 )
              {
                if ( ((_DWORD)a1[532] & 0x20) == 0 )
                  goto LABEL_96;
                v104 = v102;
                v58 = v57(pso, 0LL, v86 + 24, 0LL);
                if ( v58 != 3 )
                  v45 = ((unsigned __int8)v58 >> 1) & 1;
                v46 = v45 ^ 1;
                v79 = (v58 >> 2) & 1;
              }
              else
              {
                v104 = v103;
                if ( v32 )
                  v32 = (SURFOBJ *)((char *)v32 + 24);
                v59 = v57(pso, v32, (v91 + 24) & -(__int64)(v91 != 0), v92);
                v60 = v59;
                if ( v59 == 3 )
                {
                  v61 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
                  if ( v61 )
                    v61(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                  v60 = 1;
                }
                v45 = (v60 & 2) != 0;
                v46 = (v60 & 2) == 0;
                v79 = (v60 & 4) != 0;
              }
              if ( !v46 )
              {
                if ( (*(_DWORD *)v5 & 4) != 0 )
                  EngSetPointerShape(
                    (SURFOBJ *)((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL)),
                    0LL,
                    0LL,
                    0LL,
                    0,
                    0,
                    0,
                    0,
                    0LL,
                    0);
                v62 = pso;
LABEL_87:
                if ( !v45 && (*(_DWORD *)v5 & 2) != 0 )
                {
                  v63 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
                  if ( v63 )
                    v63(v62, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                }
                SETFLAG(v46, (volatile unsigned int *)v5, 4u);
                SETFLAG(v45, v64, 2u);
                SETFLAG(v84, v65, 0x100000u);
                SETFLAG(v79, v66, 0x200000u);
LABEL_92:
                SURFREF::~SURFREF((SURFREF *)v100);
                SURFREF::~SURFREF((SURFREF *)v96);
                EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v93);
LABEL_93:
                SURFREF::~SURFREF((SURFREF *)v98);
                return;
              }
              v32 = (SURFOBJ *)v99;
              v49 = v81;
              v43 = v89;
              v48 = v90;
              v50 = v82;
LABEL_96:
              v67 = a3 & 0x40 | v49;
              if ( v86 )
              {
                v68 = v43 + *((__int16 *)a2 + 3);
                fl = v67 | 0x10;
                v69 = v43 + *((__int16 *)a2 + 2);
                prcl = &v102;
                v70 = (SURFOBJ *)(v86 + 24);
                y = v50;
                v71 = 0LL;
                x = v48;
                v72 = 0LL;
                yHot = v68;
                xHot = v69;
              }
              else
              {
                v70 = (SURFOBJ *)((v91 + 24) & -(__int64)(v91 != 0));
                if ( v32 )
                  v32 = (SURFOBJ *)((char *)v32 + 24);
                fl = v67;
                prcl = &v103;
                v72 = v32;
                y = v50;
                v71 = (XLATEOBJ *)v92;
                x = v48;
                yHot = *((__int16 *)a2 + 3);
                xHot = *((__int16 *)a2 + 2);
              }
              v62 = pso;
              EngSetPointerShape(pso, v72, v70, v71, xHot, yHot, x, y, prcl, fl);
              goto LABEL_87;
            }
          }
          else if ( !v8 )
          {
            goto LABEL_45;
          }
        }
        if ( v99 )
          v23 = (struct _SURFOBJ *)(v99 + 6);
        else
          v23 = 0LL;
        vProcessCursorShape(
          (HDEV)a2 + 8,
          v8,
          v11,
          v23,
          (struct _SURFOBJ *)((v6 + 24) & -(__int64)(v6 != 0)),
          v85,
          (struct _RECTL *)a2 + 2,
          (HBITMAP *)a2 + 3);
        v24 = *(_DWORD *)a2;
        v20 = v97;
        if ( v8 )
          v25 = v24 | 0x400;
        else
          v25 = v24 & 0xFFFFFBFF;
        *(_DWORD *)a2 = v25;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(v19 + 60) != (int)v99[15] >> 1 || *(_DWORD *)(v19 + 56) < v99[14] )
        goto LABEL_92;
      v21 = *(struct PALETTE **)(v19 + 128);
      v85 = v21;
      if ( !v21 )
      {
        v22 = (HDEV)*((_QWORD *)a1 + 3);
        if ( v22 != a1 )
        {
          v21 = (struct PALETTE *)*((_QWORD *)v22 + 226);
          v85 = v21;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v85, v21, v20, a1, 1) )
        goto LABEL_92;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v93,
                           0LL,
                           0,
                           (__int64)v85,
                           *((_QWORD *)a1 + 226),
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        v20 = v97;
        v6 = v97;
        v92 = v93;
        v91 = v97;
        goto LABEL_33;
      }
    }
    v20 = v97;
    goto LABEL_33;
  }
  if ( (v7 & 4) != 0 )
  {
    EngSetPointerShape(
      (SURFOBJ *)((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL)),
      0LL,
      0LL,
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0);
    v7 = *(_DWORD *)v5;
  }
  if ( (v7 & 2) != 0 )
  {
    v12 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
    if ( v12 )
      v12((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  _m_prefetchw(v5);
  do
    v13 = *(_DWORD *)v5;
  while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFD, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v14 = *(_DWORD *)v5;
  while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFB, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v15 = *(_DWORD *)v5;
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFEFFFFF, *(_DWORD *)v5) );
}
