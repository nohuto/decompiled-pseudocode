/*
 * XREFs of RtlpVirtualUnwind @ 0x1400A05B0
 * Callers:
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14013A494 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013A64C (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401850C4 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpVirtualUnwind(
        int a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 *a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11)
{
  unsigned int *v11; // r10
  unsigned __int64 v13; // r12
  _BYTE *v14; // r11
  int v15; // ebp
  _BYTE *v16; // rbx
  char v17; // al
  unsigned int v18; // r15d
  unsigned int v19; // esi
  unsigned int v20; // edi
  __int64 v21; // r13
  __int64 v22; // rcx
  unsigned int v23; // r8d
  char v24; // dl
  __int64 (__fastcall *v25)(int, int, int, int, int, int, int, __int64); // rdi
  unsigned int v26; // ebp
  __int64 v27; // rbx
  unsigned int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned __int16 *v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  _QWORD *v36; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // edx
  unsigned int v41; // edx
  _BYTE *v42; // r8
  int v43; // ecx
  __int16 v44; // ax
  unsigned int v45; // r9d
  int v46; // r8d
  int v47; // ecx
  __int16 v48; // ax
  int v49; // edx
  char v50; // al
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned int v53; // ecx
  __int64 (__fastcall **v54)(int, int, int, int, int, int, int, __int64); // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  char v59; // r8
  _BYTE *v60; // rcx
  unsigned int v61; // esi
  char v62; // dl
  __int64 v63; // rax
  unsigned __int8 *v64; // rcx
  unsigned int v65; // ecx
  __int64 v66; // rax
  unsigned int v67; // r12d
  __int64 v68; // rcx
  __int64 v69; // rax
  char v70; // al
  char v71; // dl
  __int64 v72; // rax
  bool v73; // zf
  _BYTE *v74; // r8
  char v75; // al
  _BYTE *v76; // r8
  int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdi
  _DWORD *v80; // rax
  char v81; // al
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rax
  char v86; // bl
  unsigned __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  unsigned __int64 v90; // rcx
  _QWORD *v91; // rcx
  _QWORD *v92; // r9
  _QWORD *v93; // r9
  __int64 v94; // rcx
  __int64 v95; // [rsp+40h] [rbp-58h]
  int v96; // [rsp+A0h] [rbp+8h]
  _BYTE *v97; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v98; // [rsp+B0h] [rbp+18h]
  char v99; // [rsp+B0h] [rbp+18h]
  unsigned int *v100; // [rsp+B8h] [rbp+20h]
  unsigned int v102; // [rsp+F8h] [rbp+60h]

  v100 = a4;
  v98 = a3;
  v97 = a2;
  v11 = a4;
  v13 = a3;
  v14 = a2;
  v15 = 0;
  v16 = &a2[a4[2]];
  if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v16 & 3) != 0 )
    goto LABEL_130;
  v17 = *v16;
  v18 = 1;
  v19 = *v16 & 7;
  if ( !*a6 )
    goto LABEL_3;
  if ( v19 < 2 )
  {
    v64 = v16 + 2;
    a2 += a4[2];
    a3 = 0LL;
    if ( !v16[2] )
    {
      while ( (v17 & 0x20) != 0 )
      {
        v65 = *v64;
        v66 = v65 + 1;
        if ( (v65 & 1) == 0 )
          v66 = v65;
        a3 = (unsigned int)(a3 + 1);
        if ( (unsigned int)a3 > 0x20 )
LABEL_234:
          RtlRaiseStatus(-1073741569);
        a2 = &v14[*(unsigned int *)&a2[2 * v66 + 12]];
        if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)a2 & 3) != 0 )
          goto LABEL_130;
        v64 = a2 + 2;
        if ( a2[2] )
          goto LABEL_119;
        v17 = *a2;
      }
LABEL_3:
      v15 = 1;
      goto LABEL_4;
    }
LABEL_119:
    if ( a1 < 0 )
      return 3221225512LL;
  }
LABEL_4:
  v96 = a1 & 0x7FFFFFFF;
  v20 = v13 - (_DWORD)v14 - *a4;
  if ( (v16[3] & 0xF) != 0 )
  {
    if ( v20 >= (unsigned __int8)v16[1] || (*v16 & 0x20) != 0 )
    {
      v21 = a5;
      v50 = v16[3];
    }
    else
    {
      v67 = 0;
      if ( v16[2] )
      {
        do
        {
          v68 = *(unsigned __int16 *)&v16[2 * v67 + 4];
          if ( (BYTE1(v68) & 0xF) == 3 )
            break;
          v67 += RtlpUnwindOpSlots(v68, a2, a3);
        }
        while ( v67 < (unsigned __int8)v16[2] );
        v11 = v100;
        v14 = v97;
      }
      v21 = a5;
      v69 = v67;
      v13 = v98;
      if ( v20 < (unsigned __int8)v16[2 * v69 + 4] )
        goto LABEL_6;
      v50 = v16[3];
    }
    v51 = *(_QWORD *)(v21 + 8LL * (v50 & 0xF) + 120);
    *a8 = v51;
    v22 = v51 - (v16[3] & 0xF0);
    goto LABEL_7;
  }
  v21 = a5;
LABEL_6:
  v22 = *(_QWORD *)(v21 + 152);
LABEL_7:
  *a8 = v22;
  if ( v15 )
    goto LABEL_8;
  if ( v19 >= 2 )
  {
    if ( v16[2] )
    {
      v44 = *((_WORD *)v16 + 2);
      if ( (HIBYTE(v44) & 0xF) == 6 )
      {
        v45 = (unsigned __int8)v44;
        v46 = v13 - (_DWORD)v14;
        if ( (v44 & 0x1000) != 0 )
        {
          v47 = v11[1] - (unsigned __int8)v44;
          if ( v46 - v47 < (unsigned int)(unsigned __int8)v44 )
          {
LABEL_123:
            RtlpUnwindEpilogue((_DWORD)v14, v13, v46 - v47, (_DWORD)v11, v21, a9, (__int64)a10, (__int64)a11);
            *a6 = 0;
            return 0LL;
          }
        }
        if ( v16[2] > 1u )
        {
          do
          {
            v48 = *(_WORD *)&v16[2 * v18 + 4];
            if ( (HIBYTE(v48) & 0xF) != 6 )
              break;
            v49 = (unsigned __int8)v48 + (HIBYTE(v48) >> 4 << 8);
            if ( !v49 )
              break;
            v47 = v11[1] - v49;
            if ( v46 - v47 < v45 )
              goto LABEL_123;
            ++v18;
          }
          while ( v18 < (unsigned __int8)v16[2] );
        }
      }
    }
    goto LABEL_8;
  }
  v59 = *(_BYTE *)v13;
  v60 = (_BYTE *)v13;
  v61 = 0;
  if ( *(_BYTE *)v13 == 72 )
  {
    v70 = *(_BYTE *)(v13 + 1);
    if ( v70 == -125 && *(_BYTE *)(v13 + 2) == 0xC4 )
    {
      v60 = (_BYTE *)(v13 + 4);
      goto LABEL_95;
    }
    if ( v70 == -127 && *(_BYTE *)(v13 + 2) == 0xC4 )
      goto LABEL_158;
  }
  if ( (v59 & 0xFE) == 0x48 && *(_BYTE *)(v13 + 1) == 0x8D )
  {
    v61 = *(_BYTE *)(v13 + 2) & 7 | (8 * (v59 & 1));
    if ( v61 )
    {
      if ( v61 == (v16[3] & 0xF) )
      {
        v71 = *(_BYTE *)(v13 + 2) & 0xF8;
        if ( v71 == 96 )
        {
          v60 = (_BYTE *)(v13 + 4);
          goto LABEL_95;
        }
        if ( v71 == -96 )
LABEL_158:
          v60 = (_BYTE *)(v13 + 7);
      }
    }
  }
LABEL_95:
  while ( 1 )
  {
    v62 = *v60;
    if ( (*v60 & 0xF8) != 0x58 )
      break;
    v72 = 1LL;
LABEL_160:
    v60 += v72;
  }
  if ( (v62 & 0xF0) == 0x40 && (v60[1] & 0xF8) == 0x58 )
  {
    v72 = 2LL;
    goto LABEL_160;
  }
  if ( v62 == -14 )
    v62 = *++v60;
  if ( (unsigned __int8)(v62 + 62) <= 1u || v62 == -13 && v60[1] == 0xC3 )
    goto LABEL_168;
  if ( ((v62 + 23) & 0xFD) == 0 )
  {
    v76 = (_BYTE *)(v60 - v14);
    if ( v62 == -21 )
      v77 = (char)v60[1] + 2;
    else
      v77 = *(_DWORD *)(v60 + 1) + 5;
    v78 = *v11;
    v79 = (unsigned __int64)&v76[v77];
    if ( v79 < v78 || v79 >= v11[1] )
    {
      v80 = (_DWORD *)RtlpSameFunction(v11, v14, &v14[v79]);
      if ( v80 && v79 != *v80 )
      {
        v11 = v100;
        v14 = v97;
        goto LABEL_8;
      }
      goto LABEL_168;
    }
    if ( v79 == v78 )
    {
      v73 = (*v16 & 0x20) == 0;
LABEL_167:
      if ( v73 )
        goto LABEL_168;
    }
LABEL_8:
    v23 = 0;
    v95 = *a8;
    v102 = 0;
    while ( 1 )
    {
      v24 = 0;
      v99 = 0;
      v25 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))&v14[v11[2]];
      v26 = v13 - (_DWORD)v14 - *v11;
      LODWORD(v27) = 0;
      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v25 & 3) != 0 )
        goto LABEL_130;
      LOBYTE(v28) = *((_BYTE *)v25 + 2);
      if ( (_BYTE)v28 )
      {
        do
        {
          v29 = (unsigned int)v27 + 2LL;
          v30 = *((unsigned __int8 *)v25 + 2 * v29);
          v31 = (unsigned __int16 *)((char *)v25 + 2 * v29);
          v32 = *((unsigned __int8 *)v25 + 2 * (unsigned int)v27 + 5) >> 4;
          if ( v26 < v30 )
          {
            LODWORD(v27) = RtlpUnwindOpSlots(*v31, v31, v32) + v27;
          }
          else
          {
            if ( (*((_BYTE *)v25 + 2 * (unsigned int)v27 + 5) & 0xF) != 0 )
            {
              switch ( *((_BYTE *)v25 + 2 * (unsigned int)v27 + 5) & 0xF )
              {
                case 1:
                  v27 = (unsigned int)(v27 + 1);
                  v40 = *((unsigned __int16 *)v25 + v27 + 2);
                  if ( (_DWORD)v32 )
                  {
                    v27 = (unsigned int)(v27 + 1);
                    v41 = (*((unsigned __int16 *)v25 + v27 + 2) << 16) + v40;
                  }
                  else
                  {
                    v41 = 8 * v40;
                  }
                  *(_QWORD *)(v21 + 152) += v41;
                  break;
                case 2:
                  *(_QWORD *)(v21 + 152) += (unsigned int)(8 * v32 + 8);
                  break;
                case 3:
                  v52 = *(_QWORD *)(v21 + 8LL * (*((_BYTE *)v25 + 3) & 0xF) + 120);
                  *(_QWORD *)(v21 + 152) = v52;
                  *(_QWORD *)(v21 + 152) = v52 - (*((_BYTE *)v25 + 3) & 0xF0);
                  break;
                case 4:
                  v27 = (unsigned int)(v27 + 1);
                  v33 = v95 + 8LL * *((unsigned __int16 *)v25 + v27 + 2);
                  if ( v13 <= 0x7FFFFFFEFFFFLL && (v33 & 3) != 0 )
                    goto LABEL_130;
                  if ( a10 && (v33 < *a10 || v33 > *a11 - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(v21 + 8 * v32 + 120) = *(_QWORD *)v33;
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v32 + 128) = v33;
                  break;
                case 5:
                  v27 = (unsigned int)(v27 + 2);
                  v92 = (_QWORD *)(((unsigned __int64)*((unsigned __int16 *)v25 + v27 + 2) << 16)
                                 + v95
                                 + *((unsigned __int16 *)v25 + (unsigned int)(v27 - 1) + 2));
                  if ( v13 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v95 + (unsigned __int8)*((_WORD *)v25 + (unsigned int)(v27 - 1) + 2)) & 3) != 0 )
                  {
                    goto LABEL_130;
                  }
                  if ( a10 && ((unsigned __int64)v92 < *a10 || (unsigned __int64)v92 > *a11 - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(v21 + 8 * v32 + 120) = *v92;
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v32 + 128) = v92;
                  break;
                case 6:
                  LODWORD(v27) = v27 + 1;
                  break;
                case 7:
                  LODWORD(v27) = v27 + 2;
                  break;
                case 8:
                  v27 = (unsigned int)(v27 + 1);
                  v38 = v95 + 16LL * *((unsigned __int16 *)v25 + v27 + 2);
                  if ( v13 <= 0x7FFFFFFEFFFFLL && (v38 & 3) != 0 )
                    goto LABEL_130;
                  if ( a10 && (v38 < *a10 || v38 > *a11 - 16LL) )
                    return 3221225512LL;
                  v39 = 2LL * (unsigned int)v32;
                  *(_QWORD *)(v21 + 8 * v39 + 416) = *(_QWORD *)v38;
                  *(_QWORD *)(v21 + 8 * v39 + 424) = *(_QWORD *)(v38 + 8);
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v32) = v38;
                  break;
                case 9:
                  v27 = (unsigned int)(v27 + 2);
                  v93 = (_QWORD *)(((unsigned __int64)*((unsigned __int16 *)v25 + v27 + 2) << 16)
                                 + v95
                                 + *((unsigned __int16 *)v25 + (unsigned int)(v27 - 1) + 2));
                  if ( v13 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v95 + (unsigned __int8)*((_WORD *)v25 + (unsigned int)(v27 - 1) + 2)) & 3) != 0 )
                  {
                    goto LABEL_130;
                  }
                  if ( a10 && ((unsigned __int64)v93 < *a10 || (unsigned __int64)v93 > *a11 - 16LL) )
                    return 3221225512LL;
                  v94 = 2LL * (unsigned int)v32;
                  *(_QWORD *)(v21 + 8 * v94 + 416) = *v93;
                  *(_QWORD *)(v21 + 8 * v94 + 424) = v93[1];
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v32) = v93;
                  break;
                case 0xA:
                  v55 = *(_QWORD *)(v21 + 152);
                  v99 = 1;
                  v56 = v55;
                  v57 = v55 + 24;
                  if ( (_DWORD)v32 )
                  {
                    v56 = v55 + 8;
                    v57 = v55 + 32;
                  }
                  if ( v13 <= 0x7FFFFFFEFFFFLL && (v56 & 3) != 0 )
                    goto LABEL_130;
                  if ( a10 && (v56 < *a10 || v56 > *a11 - 8LL) )
                    return 3221225512LL;
                  if ( v13 <= 0x7FFFFFFEFFFFLL && (v57 & 3) != 0 )
                    goto LABEL_130;
                  if ( a10 && (v57 < *a10 || v57 > *a11 - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(v21 + 248) = *(_QWORD *)v56;
                  *(_QWORD *)(v21 + 152) = *(_QWORD *)v57;
                  break;
                default:
                  goto LABEL_234;
              }
            }
            else
            {
              v34 = *(_QWORD *)(v21 + 152);
              if ( v13 <= 0x7FFFFFFEFFFFLL && (v34 & 3) != 0 )
                goto LABEL_130;
              if ( a10 && (v34 < *a10 || v34 > *a11 - 8LL) )
                return 3221225512LL;
              *(_QWORD *)(v21 + 8 * v32 + 120) = *(_QWORD *)v34;
              if ( a9 )
                *(_QWORD *)(a9 + 8 * v32 + 128) = v34;
              *(_QWORD *)(v21 + 152) += 8LL;
            }
            LODWORD(v27) = v27 + 1;
          }
          v28 = *((unsigned __int8 *)v25 + 2);
        }
        while ( (unsigned int)v27 < v28 );
        v11 = v100;
        v14 = v97;
        v24 = v99;
        v23 = v102;
      }
      if ( (*(_BYTE *)v25 & 0x20) == 0 )
        break;
      v58 = (unsigned __int8)v28;
      if ( (v28 & 1) != 0 )
        v58 = (unsigned int)(unsigned __int8)v28 + 1;
      v11 = (unsigned int *)((char *)v25 + 2 * v58 + 4);
      v100 = v11;
      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v11 & 3) != 0 )
        goto LABEL_130;
      v102 = ++v23;
      if ( v23 > 0x20 )
        goto LABEL_234;
    }
    if ( v24 )
    {
      v53 = 0;
      v54 = &RtlpSafeMachineFrameEntries;
      while ( v25 != *v54 )
      {
        ++v53;
        ++v54;
        if ( v53 >= 3 )
          goto LABEL_37;
      }
      v24 = 0;
    }
    else
    {
      if ( v13 <= 0x7FFFFFFEFFFFLL )
      {
        v63 = *(_QWORD *)(v21 + 152);
        if ( (v63 & 3) != 0 )
          goto LABEL_130;
      }
      if ( a10 )
      {
        v35 = *(_QWORD *)(v21 + 152);
        if ( v35 < *a10 || v35 > *a11 - 8LL )
          return 3221225512LL;
      }
      v36 = *(_QWORD **)(v21 + 152);
      *(_QWORD *)(v21 + 248) = *v36;
      *(_QWORD *)(v21 + 152) = v36 + 1;
    }
LABEL_37:
    *a6 = v24;
    if ( !v96 )
      return 0LL;
    v42 = &v14[v11[2]];
    if ( v13 > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v42 & 3) == 0 )
    {
      if ( (_DWORD)v13 - (_DWORD)v14 - *v11 >= (unsigned __int8)v42[1] && ((*v42 >> 3) & (unsigned __int8)v96) != 0 )
      {
        v43 = (unsigned __int8)v42[2];
        if ( (v43 & 1) != 0 )
          ++v43;
        *a7 = &v42[2 * (v43 + 2) + 4];
      }
      return 0LL;
    }
LABEL_130:
    ExRaiseDatatypeMisalignment();
  }
  if ( v62 != -1 || v60[1] != 37 )
  {
    if ( (v62 & 0xF8) == 0x48 && v60[1] == 0xFF )
    {
      v73 = (v60[2] & 0x38) == 32;
      goto LABEL_167;
    }
    goto LABEL_8;
  }
LABEL_168:
  v74 = (_BYTE *)v13;
  if ( (*(_BYTE *)v13 & 0xF8) != 0x48 )
    goto LABEL_189;
  v75 = *(_BYTE *)(v13 + 1);
  if ( v75 == -125 )
  {
    v74 = (_BYTE *)(v13 + 4);
    *(_QWORD *)(v21 + 152) += *(char *)(v13 + 3);
    goto LABEL_189;
  }
  if ( v75 == -127 )
  {
    *(_QWORD *)(v21 + 152) += ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8) | *(unsigned __int8 *)(v13 + 3);
LABEL_188:
    v74 = (_BYTE *)(v13 + 7);
    goto LABEL_189;
  }
  if ( v75 != -115 )
    goto LABEL_189;
  v81 = *(_BYTE *)(v13 + 2) & 0xF8;
  if ( v81 == 96 )
  {
    v74 = (_BYTE *)(v13 + 4);
    v82 = *(_QWORD *)(v21 + 8LL * v61 + 120);
    *(_QWORD *)(v21 + 152) = v82;
    *(_QWORD *)(v21 + 152) = v82 + *(char *)(v13 + 3);
    goto LABEL_189;
  }
  if ( v81 == -96 )
  {
    *(_QWORD *)(v21 + 152) = *(_QWORD *)(v21 + 8LL * v61 + 120)
                           + (*(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
    goto LABEL_188;
  }
LABEL_189:
  while ( 2 )
  {
    if ( (*v74 & 0xF8) == 0x58 )
    {
      v83 = *(_QWORD *)(v21 + 152);
      if ( v13 <= 0x7FFFFFFEFFFFLL && (v83 & 3) != 0 )
        goto LABEL_130;
      if ( a10 && (v83 < *a10 || v83 > *a11 - 8LL) )
        return 3221225512LL;
      v84 = *v74 & 7;
      *(_QWORD *)(v21 + 8 * v84 + 120) = *(_QWORD *)v83;
      if ( a9 )
        *(_QWORD *)(a9 + 8 * v84 + 128) = v83;
      v85 = 1LL;
LABEL_208:
      *(_QWORD *)(v21 + 152) += 8LL;
      v74 += v85;
      continue;
    }
    break;
  }
  if ( (*v74 & 0xF0) == 0x40 )
  {
    v86 = v74[1];
    if ( (v86 & 0xF8) == 0x58 )
    {
      v87 = *(_QWORD *)(v21 + 152);
      if ( v13 <= 0x7FFFFFFEFFFFLL && (v87 & 3) != 0 )
        goto LABEL_130;
      if ( a10 && (v87 < *a10 || v87 > *a11 - 8LL) )
        return 3221225512LL;
      v88 = v86 & 7 | (8LL * (*v74 & 1));
      *(_QWORD *)(v21 + 8 * v88 + 120) = *(_QWORD *)v87;
      if ( a9 )
        *(_QWORD *)(a9 + 8 * v88 + 128) = v87;
      v85 = 2LL;
      goto LABEL_208;
    }
  }
  if ( v13 <= 0x7FFFFFFEFFFFLL )
  {
    v89 = *(_QWORD *)(v21 + 152);
    if ( (v89 & 3) != 0 )
      goto LABEL_130;
  }
  if ( !a10 || (v90 = *(_QWORD *)(v21 + 152), v90 >= *a10) && v90 <= *a11 - 8LL )
  {
    v91 = *(_QWORD **)(v21 + 152);
    *(_QWORD *)(v21 + 248) = *v91;
    *(_QWORD *)(v21 + 152) = v91 + 1;
    *a6 = 0;
    return 0LL;
  }
  return 3221225512LL;
}
