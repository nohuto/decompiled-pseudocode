/*
 * XREFs of sub_1800575E0 @ 0x1800575E0
 * Callers:
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800585E0 @ 0x1800585E0 (sub_1800585E0.c)
 *     sub_180058928 @ 0x180058928 (sub_180058928.c)
 *     sub_1800592B0 @ 0x1800592B0 (sub_1800592B0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 *     sub_1800E29E8 @ 0x1800E29E8 (sub_1800E29E8.c)
 */

__int64 __fastcall sub_1800575E0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned int a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v16; // r12
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r8d
  int v21; // r13d
  int v22; // r11d
  unsigned int v23; // ecx
  unsigned __int64 v24; // rbx
  unsigned int *v25; // rsi
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // r14
  unsigned __int64 v30; // r10
  char *v31; // rdx
  char *v32; // rcx
  unsigned int *v33; // r12
  unsigned int *v34; // rcx
  int v35; // edi
  int v36; // eax
  int v37; // r15d
  int v38; // edi
  __int64 result; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  bool v45; // zf
  char v46; // di
  __int64 v47; // rax
  unsigned int *v48; // r13
  __int64 v49; // rax
  int v50; // edi
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rdi
  int v53; // r10d
  unsigned __int64 v54; // r11
  __int64 v55; // rdx
  unsigned __int64 v56; // r9
  __int64 v57; // rcx
  unsigned __int64 *v58; // r11
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  int v62; // r9d
  __int64 v63; // rax
  int v64; // edx
  unsigned int v65; // r10d
  __int64 v66; // rdi
  __int64 v67; // r14
  __int64 v68; // r15
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // r11
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // r14
  __int64 v77; // r9
  __int64 v78; // rcx
  unsigned __int64 v79; // r12
  __int64 Heap; // rax
  char *v81; // rdi
  __int64 v82; // rcx
  int v83; // [rsp+40h] [rbp-178h]
  unsigned int v84; // [rsp+40h] [rbp-178h]
  unsigned __int64 v85; // [rsp+48h] [rbp-170h] BYREF
  char v86; // [rsp+50h] [rbp-168h]
  int v87; // [rsp+54h] [rbp-164h]
  unsigned __int16 v88; // [rsp+58h] [rbp-160h]
  char v89; // [rsp+5Ch] [rbp-15Ch]
  __int64 v90; // [rsp+60h] [rbp-158h]
  unsigned int *v91; // [rsp+68h] [rbp-150h]
  int v92; // [rsp+70h] [rbp-148h]
  unsigned __int64 v93; // [rsp+78h] [rbp-140h]
  signed __int16 v94; // [rsp+80h] [rbp-138h]
  int v95; // [rsp+84h] [rbp-134h]
  unsigned __int64 v96; // [rsp+88h] [rbp-130h]
  int v97; // [rsp+90h] [rbp-128h]
  unsigned int v98; // [rsp+94h] [rbp-124h]
  unsigned __int64 v99; // [rsp+98h] [rbp-120h]
  int v100; // [rsp+A0h] [rbp-118h]
  int v101; // [rsp+A4h] [rbp-114h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-110h]
  unsigned __int64 v103; // [rsp+B0h] [rbp-108h]
  char *v104; // [rsp+B8h] [rbp-100h]
  __int64 v105; // [rsp+C0h] [rbp-F8h]
  __int64 v106; // [rsp+C8h] [rbp-F0h]
  __int64 v107; // [rsp+D0h] [rbp-E8h]
  __int64 v108; // [rsp+D8h] [rbp-E0h]
  unsigned int v109; // [rsp+E0h] [rbp-D8h]
  __int64 v110; // [rsp+E8h] [rbp-D0h]
  __int64 v111; // [rsp+F0h] [rbp-C8h]
  __int64 v112; // [rsp+F8h] [rbp-C0h]
  unsigned int *v113; // [rsp+100h] [rbp-B8h]
  unsigned int *v114; // [rsp+108h] [rbp-B0h]
  __int64 v115; // [rsp+110h] [rbp-A8h]
  _WORD *v116; // [rsp+118h] [rbp-A0h]
  unsigned __int64 v117; // [rsp+120h] [rbp-98h]
  unsigned __int64 *v118; // [rsp+128h] [rbp-90h]
  _QWORD v119[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD *v120; // [rsp+140h] [rbp-78h]
  int v121; // [rsp+148h] [rbp-70h] BYREF
  const wchar_t *v122; // [rsp+150h] [rbp-68h]
  __int64 v123; // [rsp+158h] [rbp-60h] BYREF
  __int64 v124; // [rsp+160h] [rbp-58h]
  _BYTE v125[16]; // [rsp+168h] [rbp-50h] BYREF

  v13 = a4;
  v96 = a4;
  v14 = a3;
  v93 = a3;
  v106 = a2;
  v16 = a1;
  v105 = a1;
  v107 = a5;
  v112 = a6;
  v17 = a7;
  v111 = (__int64)a7;
  v110 = a9;
  v118 = a10;
  v120 = a11;
  v116 = a13;
  v123 = 0LL;
  v124 = 0LL;
  v94 = 0;
  v90 = 0LL;
  v102 = 0LL;
  v92 = 0;
  v88 = 0;
  LODWORD(v119[0]) = 5636180;
  v119[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v121 = 5505106;
  v122 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    v92 = v88;
  }
  else
  {
    v18 = 2147353477LL;
  }
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v82 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      v92 = v88;
    }
    else
    {
      v82 = 2147353476LL;
    }
    sub_1800E0820(v119, *(unsigned __int8 *)v82);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v107 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  v19 = a8;
  if ( a8 - 1 > 3 )
    return 3221225485LL;
  v20 = a12;
  v87 = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v21 = a12 & 0x1000;
  v100 = v21;
  v86 = v21 != 0;
  v22 = a12 & 0x8800;
  v97 = v22;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( v22 == 34816 )
  {
    if ( a2 )
      goto LABEL_13;
    return 3221225485LL;
  }
  if ( !v16 )
    return 3221225485LL;
LABEL_13:
  v115 = (__int64)a7;
  v23 = a8;
  v98 = a8;
  v24 = v13;
  v25 = 0LL;
  v91 = 0LL;
  v103 = 0LL;
  if ( v116 )
    *v116 = 0;
LABEL_15:
  if ( !v24 || (v26 = v23, v27 = v23 - 1, v98 = v27, v109 = v27, !v26) )
  {
    LOWORD(v38) = v90;
    goto LABEL_46;
  }
  v28 = *v17;
  v90 = v28;
  if ( !v27 && (_DWORD)v19 == 3 )
  {
    v103 = v24;
    if ( !v110 )
    {
      v84 = -1073741811;
      goto LABEL_51;
    }
    v94 = *(_WORD *)v110;
    v92 = 0;
    v88 = 0;
    if ( (~(_BYTE)v20 & 4) != 0 )
    {
      v28 = *(unsigned __int16 *)(v110 + 4);
      v90 = v28;
    }
  }
  if ( v22 == 34816 )
  {
    result = sub_1800E29E8(v106, v24, &v123, 16LL);
    v83 = result;
    if ( (int)result < 0 )
      return result;
    v20 = v87;
    LODWORD(v19) = a8;
    v22 = v97;
    if ( v97 == 34816 )
      goto LABEL_183;
  }
  if ( v21 )
  {
    if ( v24 + 24 < v24 )
      goto LABEL_186;
    v85 = v24 + 24;
    if ( v24 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_185;
  }
  if ( v22 == 34816 )
LABEL_183:
    v29 = WORD2(v124);
  else
    v29 = *(unsigned __int16 *)(v24 + 12);
  v95 = v29;
  if ( (_DWORD)v29 && v21 )
  {
    v108 = 8LL * (unsigned int)v29;
    v44 = (unsigned int)(8 * v29);
    if ( v44 + v24 + 16 < v24 )
      goto LABEL_186;
    v85 = v44 + v24 + 16;
    v30 = v93;
    if ( v85 > v93 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_185;
  }
  else
  {
    v30 = v93;
  }
  v31 = (char *)(v24 + 16);
  v108 = v24 + 16;
  v104 = (char *)(v24 + 16);
  if ( (v28 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v29 )
    {
      if ( v21 )
      {
        if ( &v31[(int)v29] < v31 )
          goto LABEL_186;
        v85 = (unsigned __int64)&v31[(int)v29];
      }
      v31 += 8 * (int)v29;
      v108 = (__int64)v31;
      v104 = v31;
    }
    v29 = HIWORD(v124);
    if ( v22 != 34816 )
      v29 = *(unsigned __int16 *)(v24 + 14);
    v95 = v29;
    if ( v21 )
    {
      v119[0] = 8LL * (unsigned int)v29;
      v32 = &v31[(unsigned int)(8 * v29)];
      if ( v32 < v31 )
        goto LABEL_186;
      v85 = (unsigned __int64)&v31[(unsigned int)(8 * v29)];
      if ( (unsigned __int64)v32 > v30 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
LABEL_185:
        v84 = -1073741701;
        goto LABEL_51;
      }
    }
  }
  if ( !(_DWORD)v29 )
  {
    v99 = 0LL;
    goto LABEL_49;
  }
  if ( v22 == 34816 )
  {
    if ( v102 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v102);
      v102 = 0LL;
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 8 * v29);
    v81 = (char *)Heap;
    v102 = Heap;
    if ( !Heap )
    {
      v84 = -1073741801;
      goto LABEL_51;
    }
    result = sub_1800E29E8(v106, v104, Heap, (unsigned int)(8 * v29));
    v83 = result;
    if ( (int)result < 0 )
      return result;
    v31 = v81;
    v108 = (__int64)v81;
    v104 = v81;
    v20 = a12;
    v87 = a12;
    v92 = v88;
    v111 = v115;
    v98 = v109;
    v25 = v91;
  }
LABEL_35:
  if ( v103 && (v20 & 0x20) != 0 )
  {
    v24 = 0LL;
    v99 = 0LL;
    v25 = (unsigned int *)(v13 + *((unsigned int *)v31 + 1));
    if ( v21 )
    {
      if ( (unsigned __int64)v25 < v13 )
        goto LABEL_186;
      v85 = v13 + *((unsigned int *)v31 + 1);
    }
    v91 = v25;
    v38 = *(_DWORD *)v31;
    v90 = *(unsigned int *)v31;
    goto LABEL_127;
  }
  while ( 2 )
  {
    v24 = 0LL;
    v99 = 0LL;
    v33 = (unsigned int *)v31;
    v104 = v31;
    v34 = (unsigned int *)&v31[8 * (unsigned int)v29 - 8];
    v114 = v34;
    LOBYTE(v35) = v29;
    v95 = v29;
    v36 = v29;
    while ( 1 )
    {
      if ( v33 > v34 )
        goto LABEL_142;
      v37 = v36 >> 1;
      if ( !(v36 >> 1) )
      {
        v13 = v96;
        LOWORD(v38) = v90;
        if ( v36 )
        {
          result = sub_1800585E0(v105, v106, v93, v90, v96, v33, v20, &v101, v83);
          v83 = result;
          if ( (int)result < 0 )
            return result;
          if ( v101 )
          {
            v20 = v87;
          }
          else
          {
            v49 = v33[1];
            if ( (int)v49 >= 0 )
            {
              if ( v21 )
              {
                if ( !v103 )
                  goto LABEL_185;
                v25 = (unsigned int *)(v96 + v49);
                if ( v96 + v49 < v96 )
                  goto LABEL_186;
                v85 = v96 + v49;
              }
              else
              {
                v25 = (unsigned int *)(v96 + v49);
              }
              v91 = v25;
            }
            else
            {
              if ( v21 )
              {
                if ( v103 )
                  goto LABEL_185;
                LODWORD(v49) = v49 & 0x7FFFFFFF;
                v24 = v96 + v49;
                if ( v96 + v49 < v96 )
                  goto LABEL_186;
                v85 = v96 + v49;
              }
              else
              {
                v24 = v96 + (v49 & 0xFFFFFFFF7FFFFFFFuLL);
              }
              v99 = v24;
            }
            v20 = v87;
          }
        }
        goto LABEL_43;
      }
      v113 = v33;
      v46 = v35 & 1;
      v45 = v46 == 0;
      v89 = v46;
      v35 = v37 - 1;
      v47 = v37;
      if ( v45 )
        v47 = v35;
      v48 = &v33[2 * v47];
      v113 = v48;
      result = sub_1800585E0(v105, v106, v93, v90, v96, v48, v20, &v101, v83);
      v83 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v101 )
        break;
      if ( v101 >= 0 )
      {
        v33 = v48 + 2;
        v104 = (char *)(v48 + 2);
        v95 = v37;
        v34 = v114;
LABEL_72:
        v36 = v37;
        LOBYTE(v35) = v37;
        goto LABEL_73;
      }
      v34 = v48 - 2;
      v114 = v48 - 2;
      if ( v89 )
      {
        v95 = v37;
        goto LABEL_72;
      }
      v95 = v37 - 1;
      v36 = v37 - 1;
LABEL_73:
      v20 = v87;
      v21 = v100;
      v13 = v96;
    }
    v63 = v48[1];
    v21 = v100;
    if ( (int)v63 >= 0 )
    {
      v24 = 0LL;
      v99 = 0LL;
      if ( v100 )
      {
        if ( !v103 )
          goto LABEL_185;
        v13 = v96;
        v25 = (unsigned int *)(v96 + v63);
        if ( v96 + v63 < v96 )
          goto LABEL_186;
        v85 = v96 + v63;
      }
      else
      {
        v13 = v96;
        v25 = (unsigned int *)(v96 + v63);
      }
      v91 = v25;
    }
    else
    {
      if ( v100 )
      {
        if ( !v103 )
        {
          LODWORD(v63) = v63 & 0x7FFFFFFF;
          v13 = v96;
          v24 = v96 + v63;
          if ( v96 + v63 >= v96 )
          {
            v85 = v96 + v63;
            goto LABEL_140;
          }
LABEL_186:
          v85 = -1LL;
        }
        goto LABEL_185;
      }
      v13 = v96;
      v24 = v96 + (v63 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_140:
      v99 = v24;
    }
    v20 = v87;
LABEL_142:
    LOWORD(v38) = v90;
LABEL_43:
    if ( !v103 || v25 )
      goto LABEL_44;
    if ( (v20 & 4) == 0 )
    {
      HIWORD(v50) = HIWORD(v92);
      LOWORD(v50) = v92 + 1;
      v92 = v50;
      v88 = v50;
      if ( (unsigned __int16)v50 < v94 )
      {
        v90 = *(unsigned __int16 *)(v110 + 8LL * (unsigned __int16)v50 + 4);
        v31 = (char *)v108;
        continue;
      }
      if ( !*(_BYTE *)(v110 + 516) )
      {
        v20 |= 0x20u;
        v87 = v20;
        a12 = v20;
        v31 = (char *)v108;
        goto LABEL_35;
      }
LABEL_44:
      v17 = (__int64 *)(v111 + 8);
      v111 = (__int64)v17;
      v115 = (__int64)v17;
      v19 = a8;
      v16 = v105;
      v14 = v93;
      v22 = v97;
      v23 = v98;
      goto LABEL_15;
    }
    break;
  }
LABEL_127:
  v19 = a8;
  v16 = v105;
  v14 = v93;
LABEL_46:
  if ( v25 )
  {
    v40 = v20 & 2;
    if ( v40 )
      goto LABEL_48;
    if ( v21 && ((unsigned __int64)v25 <= v13 || (unsigned __int64)(v25 + 4) > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
    {
      v91 = 0LL;
      goto LABEL_185;
    }
    if ( v116 )
      *v116 = v38;
    v51 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v16 & 1) != 0 || v97 == 34816 )
    {
      v64 = v107;
      if ( *(_WORD *)(v107 + 24) == 267 )
      {
        v65 = *(_DWORD *)(v107 + 136);
      }
      else if ( *(_WORD *)(v107 + 24) == 523 )
      {
        v65 = *(_DWORD *)(v107 + 152);
      }
      else
      {
        v65 = 0;
      }
      if ( !v65 )
      {
        v91 = 0LL;
        v84 = -1073741687;
        goto LABEL_51;
      }
      v66 = v65;
      if ( v21 )
      {
        if ( v65 + v51 < v51 )
          goto LABEL_186;
        v85 = v65 + v51;
        if ( (int)sub_180058928(v85, v13, &v85, v19) < 0 )
          goto LABEL_185;
        v64 = v107;
      }
      v52 = v51 + v66 - v13;
      v117 = v52;
      v67 = sub_1800592B0((unsigned int)v16 & 0xFFFFFFFC, v14, v64, v112, v65, v86);
      if ( !v67 )
        goto LABEL_211;
      if ( v97 == 34816 )
      {
        result = sub_1800E29E8(v106, v25, v125, 16LL);
        if ( (int)result < 0 )
          return result;
        v25 = (unsigned int *)v125;
        v91 = (unsigned int *)v125;
      }
      if ( *v25 > *(_DWORD *)(v67 + 8) )
      {
        v68 = *(unsigned int *)(v67 + 12);
        v69 = sub_1800592B0((unsigned int)v16 & 0xFFFFFFFC, v93, v107, v112, *v25, v86);
        if ( !v69 )
          goto LABEL_211;
        v70 = *(unsigned int *)(v69 + 12);
        v71 = sub_1800592B0((unsigned int)v16 & 0xFFFFFFFC, v93, v107, v112, *(_DWORD *)(v69 + 12), v86);
        v72 = v71;
        v53 = -1073741675;
        if ( v71 )
        {
          if ( v21 )
          {
            v73 = (unsigned int)v70 - (unsigned __int64)*(unsigned int *)(v71 + 12);
            v74 = v73 + v51;
            if ( v73 + v51 < v51 )
            {
              v85 = -1LL;
              v75 = -1073741675;
              v74 = -1LL;
            }
            else
            {
              v85 = v73 + v51;
              v75 = 0;
            }
            if ( v75 < 0 )
              goto LABEL_185;
            if ( v74 + *(unsigned int *)(v72 + 20) < v74 )
              goto LABEL_186;
            v85 = v74 + *(unsigned int *)(v72 + 20);
          }
          v76 = v51 + *(unsigned int *)(v72 + 20) - (unsigned __int64)*(unsigned int *)(v72 + 12) + v70;
        }
        else
        {
          v76 = 0LL;
        }
        if ( v21
          && ((int)sub_180058928(*(unsigned int *)(v72 + 12), v68, &v85, v19) < 0
           || (int)sub_180058928(v85, v76 - v96, &v85, v77) < 0) )
        {
          goto LABEL_185;
        }
        v78 = *(unsigned int *)(v72 + 12) - v68 - v76;
        v13 = v96;
        v52 += v96 + v78;
        v117 = v52;
        goto LABEL_100;
      }
    }
    else
    {
      v52 = 0LL;
      v117 = 0LL;
    }
    v53 = -1073741675;
LABEL_100:
    if ( !v21 )
    {
      v55 = 0LL;
      v57 = v25[1];
      v56 = v93;
LABEL_107:
      v58 = v118;
      if ( v118 )
      {
        if ( v21 )
        {
          v59 = v55 + v51;
          if ( v55 + v51 < v51 )
          {
            v85 = -1LL;
            v60 = -1LL;
          }
          else
          {
            v85 = v55 + v51;
            v53 = 0;
            v60 = v55 + v51;
          }
          if ( v53 < 0 || v60 < v51 || v60 > v56 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
            goto LABEL_185;
          *v118 = v59;
        }
        else
        {
          *v118 = v51 + *v25 - v52;
        }
      }
      if ( v120 )
      {
        if ( v21 && v58 )
        {
          v61 = *v58 + v57;
          if ( v61 < *v58 )
            goto LABEL_186;
          v85 = *v58 + v57;
          if ( v61 > v56 + v51 )
            goto LABEL_185;
        }
        *v120 = v57;
      }
LABEL_121:
      v84 = 0;
      goto LABEL_51;
    }
    if ( (int)sub_180058928(*v25, v52, &v85, v19) < 0 )
      goto LABEL_185;
    v55 = v85;
    if ( v85 >= v13 - v16 )
    {
      v56 = v93;
      if ( v85 <= v93 )
      {
        if ( (_DWORD)v54 )
        {
          v57 = (unsigned int)v54;
          if ( v54 <= v93 && v85 + v54 <= v93 )
            goto LABEL_107;
        }
      }
    }
LABEL_211:
    v91 = 0LL;
    goto LABEL_185;
  }
  v40 = v20 & 2;
LABEL_48:
  if ( v24 && v40 )
  {
    if ( v21 )
    {
      if ( v24 + 24 < v24 )
      {
        v85 = -1LL;
        v99 = 0LL;
        goto LABEL_185;
      }
      v85 = v24 + 24;
      v79 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v24 + 24 > v14 + v79 )
      {
        v99 = 0LL;
        goto LABEL_185;
      }
    }
    else
    {
      v79 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v118 )
    {
      if ( v21 && (v24 < v79 || v24 > v79 + v14) )
        goto LABEL_185;
      *v118 = v24;
    }
    goto LABEL_121;
  }
LABEL_49:
  v41 = v19 - v98 - 1;
  if ( v41 )
  {
    v62 = v41 - 1;
    if ( v62 )
    {
      if ( v62 == 1 )
        v84 = -1073741308;
      else
        v84 = -1073741811;
    }
    else
    {
      v84 = -1073741685;
    }
  }
  else
  {
    v84 = -1073741686;
  }
LABEL_51:
  if ( v102 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v102);
    v102 = 0LL;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v42 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v42 = 2147353477LL;
  if ( (*(_BYTE *)v42 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v43 = 2147353476LL;
    sub_1800E0820(&v121, *(unsigned __int8 *)v43);
  }
  return v84;
}
