/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00DC69C
 * Callers:
 *     GreSetPointer @ 0x1C0020CE4 (GreSetPointer.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00DCEB8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00DCEC8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00DCEE8 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00ECBD8 (-SETFLAG@@YAXHAECKK@Z.c)
 *     EngSetPointerShape @ 0x1C0136A00 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0197054 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, int a3, unsigned int a4, unsigned int a5)
{
  HDEV v5; // r15
  struct _CURSINFO *v6; // r12
  volatile unsigned int v8; // eax
  volatile unsigned int v9; // ett
  volatile unsigned int v10; // ett
  volatile unsigned int v11; // ett
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // r8d
  struct PALETTE *v25; // rdx
  HDEV v26; // rax
  int inited; // eax
  int v28; // eax
  unsigned int v29; // eax
  signed int v30; // eax
  LONG v31; // r8d
  LONG v32; // r9d
  __int64 v33; // rcx
  LONG v34; // eax
  LONG v35; // ecx
  LONG v36; // edx
  LONG v37; // r8d
  int v38; // eax
  int *v39; // rdx
  RECTL *v40; // rcx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // r9d
  int v45; // ecx
  int v46; // ebx
  int v47; // r14d
  unsigned int v48; // edx
  LONG v49; // r10d
  int v50; // esi
  LONG v51; // r11d
  int v52; // eax
  unsigned __int8 v53; // al
  int v54; // ecx
  char v55; // al
  int v56; // ecx
  int v57; // ecx
  __int64 (__fastcall *v58)(SURFOBJ *, __int64, __int64, __int64); // r11
  unsigned int v59; // edx
  int v60; // eax
  char v61; // cl
  SURFOBJ *v62; // rdi
  volatile unsigned int *v63; // rdx
  volatile unsigned int *v64; // rdx
  volatile unsigned int *v65; // rdx
  __int16 v66; // r8
  int v67; // esi
  LONG v68; // ecx
  LONG v69; // eax
  SURFOBJ *v70; // r8
  XLATEOBJ *v71; // r9
  SURFOBJ *v72; // rdx
  LONG v73; // r10d
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  LONG v80; // [rsp+60h] [rbp-A0h]
  LONG v81; // [rsp+60h] [rbp-A0h]
  BOOL v82; // [rsp+64h] [rbp-9Ch]
  int v83; // [rsp+64h] [rbp-9Ch]
  int v84; // [rsp+68h] [rbp-98h]
  LONG v85; // [rsp+6Ch] [rbp-94h]
  SURFOBJ *pso; // [rsp+70h] [rbp-90h]
  __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  int v88; // [rsp+80h] [rbp-80h]
  struct PALETTE *v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h]
  unsigned int v91; // [rsp+98h] [rbp-68h]
  int v92; // [rsp+9Ch] [rbp-64h]
  int v93; // [rsp+A0h] [rbp-60h]
  __int64 v94; // [rsp+A8h] [rbp-58h]
  __int64 v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-30h] BYREF
  int v100; // [rsp+D8h] [rbp-28h]
  int v101; // [rsp+DCh] [rbp-24h]
  __int64 v102; // [rsp+E0h] [rbp-20h] BYREF
  int v103; // [rsp+E8h] [rbp-18h]
  int v104; // [rsp+ECh] [rbp-14h]
  RECTL v105; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v106; // [rsp+100h] [rbp+0h] BYREF
  RECTL v107; // [rsp+110h] [rbp+10h]

  v91 = a4;
  v88 = a3;
  v80 = a3 & 0x10;
  v5 = a1 + 10;
  v6 = a2;
  v92 = a3 & 0x20;
  v8 = *((_DWORD *)a1 + 10);
  if ( (v8 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    v12 = *((_QWORD *)a2 + 1);
    LOBYTE(a2) = 5;
    v98 = HmgShareLockCheck(v12, a2);
    v13 = v98;
    v14 = SURFREF::bValid((SURFREF *)&v98);
    v15 = 0;
    if ( !v14 || *(_DWORD *)(v13 + 96) != 1 || (*(_DWORD *)(v13 + 60) & 1) != 0 )
      goto LABEL_87;
    v16 = *((_QWORD *)a1 + 318);
    v17 = 0LL;
    v18 = 0LL;
    v90 = 0LL;
    v19 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    v97 = 0LL;
    v87 = 0LL;
    v96 = 0LL;
    v20 = *((_QWORD *)v6 + 2);
    v89 = 0LL;
    pso = (SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0));
    if ( v20 || *((_QWORD *)v6 + 6) )
    {
      v21 = *((_QWORD *)v6 + 6);
      LOBYTE(v17) = 5;
      v87 = v21;
      if ( v21 )
        v20 = v21;
      v22 = HmgShareLockCheck(v20, v17);
      v23 = v87 == 0;
      v18 = v22;
      v87 = v22;
      v82 = !v23;
      if ( !(unsigned int)SURFREF::bValid((SURFREF *)&v87) )
        goto LABEL_32;
      if ( *(_DWORD *)(v18 + 60) != *(int *)(v13 + 60) >> 1 || *(_DWORD *)(v18 + 56) < *(_DWORD *)(v13 + 56) )
        goto LABEL_86;
      v25 = *(struct PALETTE **)(v18 + 128);
      v89 = v25;
      if ( !v25 )
      {
        v26 = (HDEV)*((_QWORD *)a1 + 3);
        if ( v26 != a1 )
        {
          v25 = (struct PALETTE *)*((_QWORD *)v26 + 225);
          v89 = v25;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v89, v25, v18, a1, 1) )
        goto LABEL_86;
      inited = EXLATEOBJ::bInitXlateObj(
                 &v97,
                 0LL,
                 0,
                 (__int64)v89,
                 *((_QWORD *)a1 + 225),
                 (__int64)ppalDefault,
                 (__int64)ppalDefault,
                 0,
                 0xFFFFFF,
                 0,
                 0);
      v24 = v82;
      v15 = 0;
      if ( inited )
      {
        v17 = v18;
        v95 = v97;
        v90 = v18;
      }
      else
      {
LABEL_32:
        v17 = 0LL;
      }
    }
    else
    {
      v24 = 0;
    }
    if ( *((_DWORD *)v6 + 11) != v15 )
    {
      if ( (*(_DWORD *)v6 & 0x400) != 0 )
      {
        if ( v80 )
        {
LABEL_42:
          v30 = *((_DWORD *)v6 + 8);
          if ( v30 > *((_DWORD *)v6 + 10) )
            goto LABEL_86;
          v31 = *((_DWORD *)v6 + 9);
          v32 = *((_DWORD *)v6 + 11);
          if ( v31 > v32 )
            goto LABEL_86;
          v106.right = *((_DWORD *)v6 + 10);
          v33 = *((_QWORD *)v6 + 3);
          *(_QWORD *)&v106.left = __PAIR64__(v31, v30);
          v106.bottom = v32;
          if ( v33 && *((_DWORD *)a1 + 525) > 3u )
          {
            LOBYTE(v17) = 5;
            v19 = HmgShareLockCheck(v33, v17);
            v96 = v19;
          }
          if ( (unsigned int)SURFREF::bValid((SURFREF *)&v96) )
          {
            v34 = *((_DWORD *)v6 + 8);
            v35 = *((_DWORD *)v6 + 9);
            v36 = *((_DWORD *)v6 + 10);
            v37 = *((_DWORD *)v6 + 11);
            v105.left = v34;
            v105.top = v35;
            v105.right = v36;
            v105.bottom = v37;
            v94 = v19;
            if ( v80 )
            {
              v105.left = v34 + 1;
              v105.top = v35 + 1;
              v105.right = v36 + 8;
              v105.bottom = v37 + 6;
            }
            v38 = *(_DWORD *)(v19 + 56);
            v39 = (int *)&v99;
            v99 = 0LL;
            v40 = &v105;
            v100 = v38;
            v101 = *(_DWORD *)(v19 + 60);
          }
          else
          {
            v41 = SURFREF::bValid((SURFREF *)&v87);
            v42 = *(_DWORD *)(v13 + 56);
            if ( v41 && v42 >= *(_DWORD *)(v18 + 56) )
              v42 = *(_DWORD *)(v18 + 56);
            v102 = 0LL;
            v39 = (int *)&v102;
            v43 = *(int *)(v13 + 60) >> 1;
            v103 = v42;
            v40 = &v106;
            v104 = v43;
          }
          ERECTL::operator*=(&v40->left, v39);
          v44 = v80 != 0 ? 3 : 0;
          v23 = (*(_DWORD *)v5 & 0x400) == 0;
          v93 = v44;
          if ( !v23 )
            goto LABEL_86;
          v45 = *((__int16 *)v6 + 3);
          v46 = 0;
          v47 = 1;
          v48 = v91;
          v49 = *((_DWORD *)a1 + 16);
          v50 = v88 & 0xC | 1;
          v51 = *((_DWORD *)a1 + 17);
          *((_DWORD *)a1 + 18) = *((__int16 *)v6 + 2);
          v52 = 0;
          v83 = 0;
          *((_DWORD *)a1 + 19) = v45;
          v85 = v49;
          v81 = v51;
          v84 = 0;
          if ( v48 && a5 )
          {
            v53 = -1;
            if ( a5 < 0xFF )
              v53 = a5;
            v54 = v53;
            v55 = 16;
            v56 = 16 * v54;
            if ( v48 < 0x10 )
              v55 = v48;
            v57 = v55 & 0xF | v56;
            v52 = 1;
            v50 |= v57 << 8;
            v84 = 1;
          }
          if ( v92 )
            goto LABEL_91;
          v58 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, __int64))*((_QWORD *)a1 + 364);
          if ( v58 && (!v52 || ((_DWORD)a1[530] & 0x200) != 0) )
          {
            if ( !v94 )
            {
              v107 = v106;
              v60 = v58(pso, v13 + 24, (v90 + 24) & -(__int64)(v90 != 0), v95);
              v61 = v60;
              if ( v60 == 3 )
              {
                if ( *((_QWORD *)a1 + 365) )
                  (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 365))(
                    pso,
                    0xFFFFFFFFLL,
                    0xFFFFFFFFLL,
                    0LL);
                v61 = 1;
              }
              v46 = (v61 & 2) != 0;
              v47 = (v61 & 2) == 0;
              v83 = (v61 & 4) != 0;
              goto LABEL_77;
            }
            if ( ((_DWORD)a1[530] & 0x20) != 0 )
            {
              v107 = v105;
              v59 = v58(pso, 0LL, v94 + 24, 0LL);
              if ( v59 != 3 )
                v46 = ((unsigned __int8)v59 >> 1) & 1;
              v47 = v46 ^ 1;
              v83 = (v59 >> 2) & 1;
LABEL_77:
              if ( !v47 )
              {
                if ( (*(_DWORD *)v5 & 4) != 0 )
                  EngSetPointerShape(
                    (SURFOBJ *)((*((_QWORD *)a1 + 318) + 24LL) & -(__int64)(*((_QWORD *)a1 + 318) != 0LL)),
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
                goto LABEL_81;
              }
              v44 = v93;
              v49 = v85;
            }
          }
          v51 = v81;
LABEL_91:
          v66 = *((_WORD *)v6 + 2);
          v67 = v88 & 0x40 | v50;
          if ( v94 )
          {
            v68 = v44 + *((__int16 *)v6 + 3);
            v69 = v44 + v66;
            v70 = (SURFOBJ *)(v94 + 24);
            fl = v67 | 0x10;
            v71 = 0LL;
            prcl = &v105;
            v72 = 0LL;
            y = v51;
            x = v49;
            yHot = v68;
            xHot = v69;
          }
          else
          {
            v71 = (XLATEOBJ *)v95;
            v72 = (SURFOBJ *)(v13 + 24);
            v73 = v66;
            fl = v67;
            v70 = (SURFOBJ *)((v90 + 24) & -(__int64)(v90 != 0));
            prcl = &v106;
            y = v51;
            x = v85;
            yHot = *((__int16 *)v6 + 3);
            xHot = v73;
          }
          v62 = pso;
          EngSetPointerShape(pso, v72, v70, v71, xHot, yHot, x, y, prcl, fl);
LABEL_81:
          if ( !v46 && (*(_DWORD *)v5 & 2) != 0 && *((_QWORD *)a1 + 365) )
            (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 365))(
              v62,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL,
              0LL);
          SETFLAG(v47, (volatile unsigned int *)v5, 4u);
          SETFLAG(v46, v63, 2u);
          SETFLAG(v84, v64, 0x100000u);
          SETFLAG(v83, v65, 0x200000u);
LABEL_86:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v96);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v87);
          EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v97);
LABEL_87:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v98);
          return;
        }
      }
      else if ( !v80 )
      {
        goto LABEL_42;
      }
    }
    vProcessCursorShape(
      (HDEV)(v17 + 24),
      v80,
      v24,
      (struct _SURFOBJ *)(v13 + 24),
      (struct _SURFOBJ *)((v17 + 24) & -(__int64)(v17 != 0)),
      v89,
      (struct _RECTL *)v6 + 2,
      (HBITMAP *)v6 + 3);
    v28 = *(_DWORD *)v6;
    if ( v80 )
      v29 = v28 | 0x400;
    else
      v29 = v28 & 0xFFFFFBFF;
    *(_DWORD *)v6 = v29;
    goto LABEL_42;
  }
  if ( (v8 & 4) != 0 )
  {
    EngSetPointerShape(
      (SURFOBJ *)((*((_QWORD *)a1 + 318) + 24LL) & -(__int64)(*((_QWORD *)a1 + 318) != 0LL)),
      0LL,
      0LL,
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0);
    v8 = *(_DWORD *)v5;
  }
  if ( (v8 & 2) != 0 && *((_QWORD *)a1 + 365) )
    (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD))a1 + 365))(
      (*((_QWORD *)a1 + 318) + 24LL) & -(__int64)(*((_QWORD *)a1 + 318) != 0LL),
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
