/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00AD034
 * Callers:
 *     GreSetPointer @ 0x1C00ACC38 (GreSetPointer.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00AD814 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00F9EA4 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C01084E0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     EngSetPointerShape @ 0x1C012B450 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C026AC54 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  HDEV v5; // r14
  struct _CURSINFO *v6; // r15
  volatile unsigned int v7; // eax
  volatile unsigned int v9; // ett
  volatile unsigned int v10; // ett
  volatile unsigned int v11; // ett
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct PALETTE *v21; // rdx
  HDEV v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  signed int v25; // eax
  LONG v26; // r8d
  LONG v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // rax
  LONG v30; // ecx
  LONG v31; // edx
  LONG v32; // r8d
  LONG v33; // r9d
  int *v34; // rdx
  RECTL *v35; // rcx
  int v36; // ecx
  int v37; // eax
  int v38; // r8d
  bool v39; // zf
  int v40; // ebx
  int v41; // ecx
  unsigned int v42; // r9d
  LONG v43; // r10d
  int v44; // r11d
  int v45; // edx
  int v46; // eax
  unsigned __int8 v47; // al
  int v48; // ecx
  char v49; // al
  int v50; // ecx
  int v51; // ecx
  __int64 (__fastcall *v52)(SURFOBJ *, __int64, __int64, __int64, int, int, LONG, int, RECTL *, int); // r10
  int v53; // edx
  int v54; // ecx
  unsigned int v55; // edx
  int v56; // esi
  int v57; // r10d
  unsigned int v58; // eax
  void (__fastcall *v59)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  SURFOBJ *v60; // rdi
  void (__fastcall *v61)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v62; // rdx
  volatile unsigned int *v63; // rdx
  volatile unsigned int *v64; // rdx
  int v65; // r11d
  LONG v66; // eax
  LONG v67; // ecx
  SURFOBJ *v68; // r8
  XLATEOBJ *v69; // r9
  SURFOBJ *v70; // rdx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  int yHota; // [rsp+28h] [rbp-D8h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  int v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+60h] [rbp-A0h]
  int v80; // [rsp+64h] [rbp-9Ch]
  int v81; // [rsp+64h] [rbp-9Ch]
  LONG v82; // [rsp+68h] [rbp-98h]
  SURFOBJ *pso; // [rsp+70h] [rbp-90h]
  int v84; // [rsp+78h] [rbp-88h]
  int v86; // [rsp+80h] [rbp-80h]
  struct PALETTE *v87; // [rsp+88h] [rbp-78h] BYREF
  __int64 v88; // [rsp+90h] [rbp-70h]
  unsigned int v89; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v90)(SURFOBJ *, __int64, __int64, __int64, int, int, LONG, int, RECTL *, int); // [rsp+A0h] [rbp-60h]
  int v91; // [rsp+A8h] [rbp-58h]
  __int64 v92; // [rsp+B0h] [rbp-50h]
  __int64 v93; // [rsp+B8h] [rbp-48h]
  __int64 v94; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v96; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v97; // [rsp+D8h] [rbp-28h] BYREF
  int v98; // [rsp+E0h] [rbp-20h]
  int v99; // [rsp+E4h] [rbp-1Ch]
  __int64 v100; // [rsp+E8h] [rbp-18h] BYREF
  int v101; // [rsp+F0h] [rbp-10h]
  int v102; // [rsp+F4h] [rbp-Ch]
  __int64 v103; // [rsp+F8h] [rbp-8h] BYREF
  RECTL v104; // [rsp+100h] [rbp+0h] BYREF
  RECTL v105; // [rsp+110h] [rbp+10h] BYREF
  RECTL v106; // [rsp+120h] [rbp+20h] BYREF

  v89 = a4;
  v78 = a3 & 0x10;
  v5 = a1 + 10;
  v80 = 0;
  LODWORD(v90) = a3 & 0x20;
  v6 = a2;
  v7 = *((_DWORD *)a1 + 10);
  if ( (v7 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    v12 = *((_QWORD *)a2 + 1);
    LOBYTE(a2) = 5;
    v13 = HmgShareLockCheck(v12, a2);
    v103 = v13;
    v14 = v13;
    if ( !v13 )
      goto LABEL_86;
    v15 = 1;
    if ( *(_DWORD *)(v13 + 96) != 1 || (*(_DWORD *)(v13 + 60) & 1) != 0 )
      goto LABEL_86;
    v16 = *((_QWORD *)a1 + 319);
    v17 = 0LL;
    v18 = 0LL;
    v88 = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    v94 = 0LL;
    v96 = 0LL;
    v95 = 0LL;
    pso = (SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0));
    v19 = *((_QWORD *)v6 + 2);
    v87 = 0LL;
    if ( v19 || *((_QWORD *)v6 + 6) )
    {
      v20 = *((_QWORD *)v6 + 6);
      LOBYTE(v17) = 5;
      if ( v20 )
        v80 = 1;
      else
        v20 = v19;
      v96 = HmgShareLockCheck(v20, v17);
      v18 = v96;
      if ( !v96 )
        goto LABEL_32;
      if ( *(_DWORD *)(v96 + 60) != *(int *)(v14 + 60) >> 1 || *(_DWORD *)(v96 + 56) < *(_DWORD *)(v14 + 56) )
        goto LABEL_85;
      v21 = *(struct PALETTE **)(v96 + 128);
      v87 = v21;
      if ( !v21 )
      {
        v22 = (HDEV)*((_QWORD *)a1 + 3);
        if ( v22 != a1 )
        {
          v21 = (struct PALETTE *)*((_QWORD *)v22 + 226);
          v87 = v21;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v87, v21, v96, a1, 1) )
        goto LABEL_85;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v94,
                           0LL,
                           0,
                           (__int64)v87,
                           *((_QWORD *)a1 + 226),
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        v17 = v18;
        v93 = v94;
        v88 = v18;
      }
      else
      {
LABEL_32:
        v17 = 0LL;
      }
    }
    if ( *((_DWORD *)v6 + 11) )
    {
      if ( (*(_DWORD *)v6 & 0x400) != 0 )
      {
        if ( v78 )
        {
LABEL_42:
          v25 = *((_DWORD *)v6 + 8);
          if ( v25 > *((_DWORD *)v6 + 10) )
            goto LABEL_85;
          v26 = *((_DWORD *)v6 + 9);
          v27 = *((_DWORD *)v6 + 11);
          if ( v26 > v27 )
            goto LABEL_85;
          v105.right = *((_DWORD *)v6 + 10);
          v28 = *((_QWORD *)v6 + 3);
          *(_QWORD *)&v105.left = __PAIR64__(v26, v25);
          v105.bottom = v27;
          if ( v28
            && *((_DWORD *)a1 + 527) > 3u
            && (LOBYTE(v17) = 5, v29 = HmgShareLockCheck(v28, v17), (v95 = v29) != 0) )
          {
            v30 = *((_DWORD *)v6 + 8);
            v31 = *((_DWORD *)v6 + 9);
            v32 = *((_DWORD *)v6 + 10);
            v33 = *((_DWORD *)v6 + 11);
            v104.left = v30;
            v104.top = v31;
            v104.right = v32;
            v104.bottom = v33;
            v92 = v29;
            if ( v78 )
            {
              v104.left = v30 + 1;
              v104.top = v31 + 1;
              v104.right = v32 + 8;
              v104.bottom = v33 + 6;
            }
            v34 = (int *)&v97;
            v98 = *(_DWORD *)(v29 + 56);
            v99 = *(_DWORD *)(v29 + 60);
            v35 = &v104;
            v97 = 0LL;
          }
          else
          {
            v36 = *(_DWORD *)(v14 + 56);
            if ( v18 && v36 >= *(_DWORD *)(v18 + 56) )
              v36 = *(_DWORD *)(v18 + 56);
            v100 = 0LL;
            v34 = (int *)&v100;
            v37 = *(int *)(v14 + 60) >> 1;
            v101 = v36;
            v35 = &v105;
            v102 = v37;
          }
          ERECTL::operator*=(&v35->left, v34);
          v106 = (RECTL)0LL;
          v38 = v78 != 0 ? 3 : 0;
          v39 = (*(_DWORD *)v5 & 0x400) == 0;
          v91 = v38;
          if ( !v39 )
            goto LABEL_85;
          v40 = 0;
          v41 = *((__int16 *)v6 + 3);
          v42 = v89;
          v43 = *((_DWORD *)a1 + 18);
          v44 = a3 & 0xC | 1;
          v45 = *((_DWORD *)a1 + 19);
          *((_DWORD *)a1 + 20) = *((__int16 *)v6 + 2);
          v46 = 0;
          v79 = 0;
          *((_DWORD *)a1 + 21) = v41;
          v82 = v43;
          v81 = v45;
          v84 = v44;
          v86 = 0;
          if ( v42 && a5 )
          {
            v47 = -1;
            if ( a5 < 0xFF )
              v47 = a5;
            v48 = v47;
            v49 = 16;
            v50 = 16 * v48;
            if ( v42 < 0x10 )
              v49 = v42;
            v51 = v49 & 0xF | v50;
            v46 = 1;
            v44 |= v51 << 8;
            v86 = 1;
            v84 = v44;
          }
          if ( (_DWORD)v90 )
            goto LABEL_90;
          v52 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, __int64, int, int, LONG, int, RECTL *, int))*((_QWORD *)a1 + 365);
          v90 = v52;
          if ( v52 && (!v46 || ((_DWORD)a1[532] & 0x200) != 0) )
          {
            if ( !v92 )
            {
              v57 = *((__int16 *)v6 + 2);
              yHota = *((__int16 *)v6 + 3);
              v106 = v105;
              v58 = v90(pso, v14 + 24, (v88 + 24) & -(__int64)(v88 != 0), v93, v57, yHota, v82, v45, &v106, v44);
              if ( v58 == 3 )
              {
                v59 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
                if ( v59 )
                  v59(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                v58 = 1;
              }
              v40 = (v58 >> 1) & 1;
              v56 = v40;
              v79 = (v58 & 4) != 0;
              goto LABEL_76;
            }
            if ( ((_DWORD)a1[532] & 0x20) != 0 )
            {
              v53 = v38 + *((__int16 *)v6 + 3);
              v54 = v38 + *((__int16 *)v6 + 2);
              v106 = v104;
              v55 = v52(pso, 0LL, v92 + 24, 0LL, v54, v53, v82, v81, &v106, v44 | 0x10u);
              if ( v55 != 3 )
                v40 = ((unsigned __int8)v55 >> 1) & 1;
              v56 = v40;
              v79 = (v55 >> 2) & 1;
LABEL_76:
              v15 = v56 ^ 1;
              if ( v56 == 1 )
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
                v60 = pso;
                goto LABEL_80;
              }
              v44 = v84;
              v38 = v91;
              v45 = v81;
            }
          }
          v43 = v82;
LABEL_90:
          v65 = a3 & 0x40 | v44;
          if ( v92 )
          {
            v66 = v38 + *((__int16 *)v6 + 3);
            fl = v65 | 0x10;
            v67 = *((__int16 *)v6 + 2) + v38;
            prcl = &v104;
            v68 = (SURFOBJ *)(v92 + 24);
            y = v45;
            v69 = 0LL;
            x = v43;
            v70 = 0LL;
            yHot = v66;
            xHot = v67;
          }
          else
          {
            v70 = (SURFOBJ *)(v14 + 24);
            fl = v65;
            v68 = (SURFOBJ *)((v88 + 24) & -(__int64)(v88 != 0));
            prcl = &v105;
            y = v81;
            x = v43;
            yHot = *((__int16 *)v6 + 3);
            xHot = *((__int16 *)v6 + 2);
            v69 = (XLATEOBJ *)v93;
          }
          v60 = pso;
          EngSetPointerShape(pso, v70, v68, v69, xHot, yHot, x, y, prcl, fl);
LABEL_80:
          if ( !v40 && (*(_DWORD *)v5 & 2) != 0 )
          {
            v61 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
            if ( v61 )
              v61(v60, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
          }
          SETFLAG(v15, (volatile unsigned int *)v5, 4u);
          SETFLAG(v40, v62, 2u);
          SETFLAG(v86, v63, 0x100000u);
          SETFLAG(v79, v64, 0x200000u);
LABEL_85:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v95);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v96);
          EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v94);
LABEL_86:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v103);
          return;
        }
      }
      else if ( !v78 )
      {
        goto LABEL_42;
      }
    }
    vProcessCursorShape(
      (HDEV)(v17 + 24),
      v78,
      v80,
      (struct _SURFOBJ *)(v14 + 24),
      (struct _SURFOBJ *)((v17 + 24) & -(__int64)(v17 != 0)),
      v87,
      (struct _RECTL *)v6 + 2,
      (HBITMAP *)v6 + 3);
    v23 = *(_DWORD *)v6;
    if ( v78 )
      v24 = v23 | 0x400;
    else
      v24 = v23 & 0xFFFFFBFF;
    *(_DWORD *)v6 = v24;
    goto LABEL_42;
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
  if ( (v7 & 2) != 0 && *((_QWORD *)a1 + 366) )
    (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD))a1 + 366))(
      (*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL),
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      0LL);
  _m_prefetchw(v5);
  do
    v9 = *(_DWORD *)v5;
  while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFD, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v10 = *(_DWORD *)v5;
  while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFB, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v11 = *(_DWORD *)v5;
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFEFFFFF, *(_DWORD *)v5) );
}
