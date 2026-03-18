/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C004DE54
 * Callers:
 *     GreSetPointer @ 0x1C004DA58 (GreSetPointer.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00E2390 (-SETFLAG@@YAXHAECKK@Z.c)
 *     EngSetPointerShape @ 0x1C0106420 (EngSetPointerShape.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C01260BC (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C026A524 (--1EXLATEOBJ@@QEAA@XZ.c)
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
  __int64 v21; // rax
  struct PALETTE *v22; // rdx
  HDEV v23; // rax
  int v24; // eax
  unsigned int v25; // eax
  signed int v26; // eax
  LONG v27; // r8d
  LONG v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rax
  LONG v31; // ecx
  LONG v32; // edx
  LONG v33; // r8d
  LONG v34; // r9d
  __int64 *v35; // rdx
  RECTL *v36; // rcx
  int v37; // ecx
  int v38; // eax
  int v39; // r8d
  bool v40; // zf
  int v41; // ebx
  int v42; // ecx
  unsigned int v43; // r9d
  LONG v44; // r10d
  int v45; // r11d
  int v46; // edx
  int v47; // eax
  unsigned __int8 v48; // al
  int v49; // ecx
  char v50; // al
  int v51; // ecx
  int v52; // ecx
  __int64 (__fastcall *v53)(SURFOBJ *, __int64, __int64, XLATEOBJ *, int, int, LONG, int, RECTL *, int); // r10
  int v54; // edx
  int v55; // ecx
  unsigned int v56; // edx
  int v57; // esi
  int v58; // r10d
  unsigned int v59; // eax
  void (__fastcall *v60)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  SURFOBJ *v61; // rdi
  void (__fastcall *v62)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v63; // rdx
  volatile unsigned int *v64; // rdx
  volatile unsigned int *v65; // rdx
  int v66; // r11d
  LONG v67; // eax
  LONG v68; // ecx
  SURFOBJ *v69; // r8
  XLATEOBJ *v70; // r9
  SURFOBJ *v71; // rdx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  int yHota; // [rsp+28h] [rbp-D8h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  int v79; // [rsp+60h] [rbp-A0h]
  int v80; // [rsp+60h] [rbp-A0h]
  int v81; // [rsp+64h] [rbp-9Ch]
  int v82; // [rsp+64h] [rbp-9Ch]
  LONG v83; // [rsp+68h] [rbp-98h]
  SURFOBJ *pso; // [rsp+70h] [rbp-90h]
  int v85; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+80h] [rbp-80h]
  struct PALETTE *v88; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h]
  unsigned int v90; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v91)(SURFOBJ *, __int64, __int64, XLATEOBJ *, int, int, LONG, int, RECTL *, int); // [rsp+A0h] [rbp-60h]
  int v92; // [rsp+A8h] [rbp-58h]
  __int64 v93; // [rsp+B0h] [rbp-50h]
  XLATEOBJ *v94; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *v95; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-28h] BYREF
  int v99; // [rsp+E0h] [rbp-20h]
  int v100; // [rsp+E4h] [rbp-1Ch]
  __int64 v101; // [rsp+E8h] [rbp-18h] BYREF
  int v102; // [rsp+F0h] [rbp-10h]
  int v103; // [rsp+F4h] [rbp-Ch]
  __int64 v104; // [rsp+F8h] [rbp-8h] BYREF
  RECTL v105; // [rsp+100h] [rbp+0h] BYREF
  RECTL v106; // [rsp+110h] [rbp+10h] BYREF
  RECTL v107; // [rsp+120h] [rbp+20h] BYREF

  v90 = a4;
  v79 = a3 & 0x10;
  v5 = a1 + 10;
  v81 = 0;
  LODWORD(v91) = a3 & 0x20;
  v6 = a2;
  v7 = *((_DWORD *)a1 + 10);
  if ( (v7 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    v12 = *((_QWORD *)a2 + 1);
    LOBYTE(a2) = 5;
    v13 = HmgShareLockCheck(v12, a2);
    v104 = v13;
    v14 = v13;
    if ( !v13 )
      goto LABEL_86;
    v15 = 1;
    if ( *(_DWORD *)(v13 + 96) != 1 || (*(_DWORD *)(v13 + 60) & 1) != 0 )
      goto LABEL_86;
    v16 = *((_QWORD *)a1 + 319);
    v17 = 0LL;
    v18 = 0LL;
    v89 = 0LL;
    v93 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    v97 = 0LL;
    v96 = 0LL;
    pso = (SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0));
    v19 = *((_QWORD *)v6 + 2);
    v88 = 0LL;
    if ( v19 || *((_QWORD *)v6 + 6) )
    {
      v20 = *((_QWORD *)v6 + 6);
      LOBYTE(v17) = 5;
      if ( v20 )
        v81 = 1;
      else
        v20 = v19;
      v21 = HmgShareLockCheck(v20, v17);
      v97 = v21;
      v18 = v21;
      if ( !v21 )
        goto LABEL_32;
      if ( *(_DWORD *)(v21 + 60) != *(int *)(v14 + 60) >> 1 || *(_DWORD *)(v21 + 56) < *(_DWORD *)(v14 + 56) )
        goto LABEL_85;
      v22 = *(struct PALETTE **)(v21 + 128);
      v88 = v22;
      if ( !v22 )
      {
        v23 = (HDEV)*((_QWORD *)a1 + 3);
        if ( v23 != a1 )
        {
          v22 = (struct PALETTE *)*((_QWORD *)v23 + 226);
          v88 = v22;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v88, v22, v18, a1, 1) )
        goto LABEL_85;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v95,
                           0LL,
                           0LL,
                           v88,
                           *((_QWORD *)a1 + 226),
                           ppalDefault,
                           ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        v17 = v18;
        v94 = v95;
        v89 = v18;
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
        if ( v79 )
        {
LABEL_42:
          v26 = *((_DWORD *)v6 + 8);
          if ( v26 > *((_DWORD *)v6 + 10) )
            goto LABEL_85;
          v27 = *((_DWORD *)v6 + 9);
          v28 = *((_DWORD *)v6 + 11);
          if ( v27 > v28 )
            goto LABEL_85;
          v106.right = *((_DWORD *)v6 + 10);
          v29 = *((_QWORD *)v6 + 3);
          *(_QWORD *)&v106.left = __PAIR64__(v27, v26);
          v106.bottom = v28;
          if ( v29
            && *((_DWORD *)a1 + 527) > 3u
            && (LOBYTE(v17) = 5, v30 = HmgShareLockCheck(v29, v17), (v96 = v30) != 0) )
          {
            v31 = *((_DWORD *)v6 + 8);
            v32 = *((_DWORD *)v6 + 9);
            v33 = *((_DWORD *)v6 + 10);
            v34 = *((_DWORD *)v6 + 11);
            v105.left = v31;
            v105.top = v32;
            v105.right = v33;
            v105.bottom = v34;
            v93 = v30;
            if ( v79 )
            {
              v105.left = v31 + 1;
              v105.top = v32 + 1;
              v105.right = v33 + 8;
              v105.bottom = v34 + 6;
            }
            v35 = &v98;
            v99 = *(_DWORD *)(v30 + 56);
            v100 = *(_DWORD *)(v30 + 60);
            v36 = &v105;
            v98 = 0LL;
          }
          else
          {
            v37 = *(_DWORD *)(v14 + 56);
            if ( v18 && v37 >= *(_DWORD *)(v18 + 56) )
              v37 = *(_DWORD *)(v18 + 56);
            v101 = 0LL;
            v35 = &v101;
            v38 = *(int *)(v14 + 60) >> 1;
            v102 = v37;
            v36 = &v106;
            v103 = v38;
          }
          ERECTL::operator*=(v36, v35);
          v107 = (RECTL)0LL;
          v39 = v79 != 0 ? 3 : 0;
          v40 = (*(_DWORD *)v5 & 0x400) == 0;
          v92 = v39;
          if ( !v40 )
            goto LABEL_85;
          v41 = 0;
          v42 = *((__int16 *)v6 + 3);
          v43 = v90;
          v44 = *((_DWORD *)a1 + 18);
          v45 = a3 & 0xC | 1;
          v46 = *((_DWORD *)a1 + 19);
          *((_DWORD *)a1 + 20) = *((__int16 *)v6 + 2);
          v47 = 0;
          v80 = 0;
          *((_DWORD *)a1 + 21) = v42;
          v83 = v44;
          v82 = v46;
          v85 = v45;
          v87 = 0;
          if ( v43 && a5 )
          {
            v48 = -1;
            if ( a5 < 0xFF )
              v48 = a5;
            v49 = v48;
            v50 = 16;
            v51 = 16 * v49;
            if ( v43 < 0x10 )
              v50 = v43;
            v52 = v50 & 0xF | v51;
            v47 = 1;
            v45 |= v52 << 8;
            v87 = 1;
            v85 = v45;
          }
          if ( (_DWORD)v91 )
            goto LABEL_90;
          v53 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, XLATEOBJ *, int, int, LONG, int, RECTL *, int))*((_QWORD *)a1 + 365);
          v91 = v53;
          if ( v53 && (!v47 || ((_DWORD)a1[532] & 0x200) != 0) )
          {
            if ( !v93 )
            {
              v58 = *((__int16 *)v6 + 2);
              yHota = *((__int16 *)v6 + 3);
              v107 = v106;
              v59 = v91(pso, v14 + 24, (v89 + 24) & -(__int64)(v89 != 0), v94, v58, yHota, v83, v46, &v107, v45);
              if ( v59 == 3 )
              {
                v60 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
                if ( v60 )
                  v60(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                v59 = 1;
              }
              v41 = (v59 >> 1) & 1;
              v57 = v41;
              v80 = (v59 & 4) != 0;
              goto LABEL_76;
            }
            if ( ((_DWORD)a1[532] & 0x20) != 0 )
            {
              v54 = v39 + *((__int16 *)v6 + 3);
              v55 = v39 + *((__int16 *)v6 + 2);
              v107 = v105;
              v56 = v53(pso, 0LL, v93 + 24, 0LL, v55, v54, v83, v82, &v107, v45 | 0x10u);
              if ( v56 != 3 )
                v41 = ((unsigned __int8)v56 >> 1) & 1;
              v57 = v41;
              v80 = (v56 >> 2) & 1;
LABEL_76:
              v15 = v57 ^ 1;
              if ( v57 == 1 )
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
                v61 = pso;
                goto LABEL_80;
              }
              v45 = v85;
              v39 = v92;
              v46 = v82;
            }
          }
          v44 = v83;
LABEL_90:
          v66 = a3 & 0x40 | v45;
          if ( v93 )
          {
            v67 = v39 + *((__int16 *)v6 + 3);
            fl = v66 | 0x10;
            v68 = *((__int16 *)v6 + 2) + v39;
            prcl = &v105;
            v69 = (SURFOBJ *)(v93 + 24);
            y = v46;
            v70 = 0LL;
            x = v44;
            v71 = 0LL;
            yHot = v67;
            xHot = v68;
          }
          else
          {
            v71 = (SURFOBJ *)(v14 + 24);
            fl = v66;
            v69 = (SURFOBJ *)((v89 + 24) & -(__int64)(v89 != 0));
            prcl = &v106;
            y = v82;
            x = v44;
            yHot = *((__int16 *)v6 + 3);
            xHot = *((__int16 *)v6 + 2);
            v70 = v94;
          }
          v61 = pso;
          EngSetPointerShape(pso, v71, v69, v70, xHot, yHot, x, y, prcl, fl);
LABEL_80:
          if ( !v41 && (*(_DWORD *)v5 & 2) != 0 )
          {
            v62 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
            if ( v62 )
              v62(v61, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
          }
          SETFLAG(v15, (volatile unsigned int *)v5, 4u);
          SETFLAG(v41, v63, 2u);
          SETFLAG(v87, v64, 0x100000u);
          SETFLAG(v80, v65, 0x200000u);
LABEL_85:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v96);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v97);
          EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v95);
LABEL_86:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v104);
          return;
        }
      }
      else if ( !v79 )
      {
        goto LABEL_42;
      }
    }
    vProcessCursorShape(
      (HDEV)(v17 + 24),
      v79,
      v81,
      (struct _SURFOBJ *)(v14 + 24),
      (struct _SURFOBJ *)((v17 + 24) & -(__int64)(v17 != 0)),
      v88,
      (struct _RECTL *)v6 + 2,
      (HBITMAP *)v6 + 3);
    v24 = *(_DWORD *)v6;
    if ( v79 )
      v25 = v24 | 0x400;
    else
      v25 = v24 & 0xFFFFFBFF;
    *(_DWORD *)v6 = v25;
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
