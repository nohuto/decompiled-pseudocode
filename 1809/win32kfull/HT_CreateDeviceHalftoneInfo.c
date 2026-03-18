/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C0113328
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0112F44 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     ComputeChecksum @ 0x1C0015078 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C00150C4 (MulFD6.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 *     GetCIEPrims @ 0x1C0113AE0 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x1C0113CDC (ComputeHTCell.c)
 *     MulDivFD6Pairs @ 0x1C011AE9C (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x1C011B05C (ComputeInverseMatrix3x3.c)
 *     CleanUpDHI @ 0x1C012251C (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  size_t v3; // rbx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 v6; // r11
  __int64 (*v7)(); // rax
  __int16 v8; // r15
  __int64 v9; // r13
  __int16 v10; // r15
  unsigned __int16 v11; // r14
  unsigned int v12; // edx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  _WORD *v15; // r10
  int v16; // r8d
  __int16 v17; // ax
  __int16 v18; // ax
  int v19; // r9d
  int v20; // eax
  int v21; // r8d
  int v22; // eax
  unsigned __int16 v23; // r14
  int v24; // eax
  int v25; // ebx
  __int16 v26; // si
  int v27; // eax
  __int64 v28; // r8
  int v29; // ebx
  bool v30; // cc
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  __int64 result; // rax
  int v38; // edx
  bool v39; // zf
  unsigned int v40; // ecx
  int v41; // esi
  unsigned int v42; // r15d
  unsigned int v43; // r14d
  unsigned int v44; // r13d
  char v45; // al
  unsigned int v46; // ebx
  int v47; // ebx
  signed int v48; // r13d
  signed int v49; // r15d
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  __int16 v53; // ax
  int v54; // ecx
  __int16 v55; // ax
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  unsigned int v59; // r8d
  unsigned __int16 v60; // r9
  unsigned __int64 v61; // rdx
  unsigned __int16 v62; // r10
  int v63; // ecx
  int v64; // eax
  int v65; // r13d
  int v66; // eax
  int v67; // ebx
  int v68; // eax
  int v69; // eax
  int v70; // ebx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rbx
  unsigned __int16 v76; // ax
  int v77; // ebx
  unsigned int v78; // edx
  char v79; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v80; // [rsp+28h] [rbp-D8h]
  __int64 v81; // [rsp+28h] [rbp-D8h]
  unsigned int v82; // [rsp+30h] [rbp-D0h]
  int v83; // [rsp+3Ch] [rbp-C4h]
  int v84; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v85; // [rsp+58h] [rbp-A8h]
  _QWORD v87[12]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v88[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v89; // [rsp+E0h] [rbp-20h]
  int v90; // [rsp+E4h] [rbp-1Ch]
  _DWORD v91[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v92; // [rsp+F0h] [rbp-10h]
  int v93; // [rsp+F4h] [rbp-Ch]
  int v94; // [rsp+F8h] [rbp-8h]
  int v95; // [rsp+FCh] [rbp-4h]
  int v96; // [rsp+100h] [rbp+0h]
  int v97; // [rsp+104h] [rbp+4h]
  int v98; // [rsp+108h] [rbp+8h]

  v3 = 88LL;
  memset(v87, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80LL;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v87, Src, v3);
  v4 = EngAllocMem(1u, 0x1BC8u, 0x30345448u);
  if ( !v4 )
    return 4294967294LL;
  *((_DWORD *)v4 + 10) = 1414021956;
  Semaphore = EngCreateSemaphore();
  v6 = 0LL;
  v4[6] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v4);
    return 4294956296LL;
  }
  v7 = (__int64 (*)())v87[1];
  v8 = WORD2(v87[0]);
  v9 = v87[4];
  if ( !v87[1] )
    v7 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v7;
  v10 = v8 & 0x6FF;
  WORD2(v87[0]) = v10;
  if ( v9 && *(_WORD *)(v9 + 22) == 0xFFFE )
  {
    v83 = 0;
  }
  else
  {
    v83 = 1;
    qmemcpy(v88, "THTN0002.naDuohC", sizeof(v88));
    v9 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum((char *)v88, 0x1234F012u, 0x10u);
  }
  v11 = v87[10];
  v12 = HIWORD(v87[6]);
  v13 = WORD2(v87[10]);
  v14 = WORD1(v87[10]);
  if ( LOWORD(v87[10]) == 0xFFFF && *(_DWORD *)((char *)&v87[10] + 2) == -1 )
  {
    v84 = 128;
LABEL_53:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v84 = v6;
  if ( (unsigned __int16)(LOWORD(v87[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v87[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v87[10]) - 100) > 0xFF78u )
  {
    goto LABEL_53;
  }
LABEL_14:
  v15 = (_WORD *)v4 + 115;
  v85 = (unsigned __int16 *)v4 + 115;
  v16 = (unsigned __int16)(8 * (v10 & 1));
  v17 = WORD1(v87[6]);
  *((_DWORD *)v4 + 56) = v16;
  *((_WORD *)v4 + 114) = v17;
  if ( !v17 || (v18 = WORD2(v87[6]), *v15 = WORD2(v87[6]), !v18) )
  {
    v85 = (unsigned __int16 *)v4 + 115;
    *v15 = 300;
    v12 = v6;
    *((_WORD *)v4 + 114) = 300;
  }
  if ( (v12 & 0x8000) != 0 )
  {
    v38 = v12 & 0x7FFF;
    if ( (unsigned int)(v38 - 333) > 0x394B )
    {
LABEL_20:
      v20 = 1000000;
      goto LABEL_21;
    }
    v20 = 1000 * v38;
  }
  else
  {
    v19 = *((unsigned __int16 *)v4 + 114);
    if ( v12 > 3 * v19 || v12 > 3 * (unsigned int)(unsigned __int16)*v15 )
      v12 = v6;
    if ( !v12 )
      goto LABEL_20;
    v57 = (unsigned __int16)*v15 * (unsigned __int16)*v15;
    v88[1] = 2 * v12 * v12;
    v58 = DivFD6(v57 + v19 * v19, v88[1]);
    v20 = RaisePower(v58, 2, 3);
    v16 = *((_DWORD *)v4 + 56);
    v6 = 0LL;
  }
LABEL_21:
  if ( (v10 & 4) != 0 )
  {
    *((_BYTE *)v4 + 73) = v6;
    v21 = v16 | 2;
  }
  else
  {
    v39 = (v87[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = 1;
    if ( !v39 )
    {
      v16 |= 0x400u;
      *((_DWORD *)v4 + 56) = v16;
    }
    if ( (v87[0] & 0x200000000LL) == 0 )
      goto LABEL_24;
    v21 = v16 | 1;
  }
  *((_DWORD *)v4 + 56) = v21;
LABEL_24:
  *((_DWORD *)v4 + 58) = v20;
  v22 = v11;
  v23 = HIWORD(v87[0]);
  *((_DWORD *)v4 + 46) = 100 * v22;
  v24 = v13;
  v25 = v83;
  *((_DWORD *)v4 + 47) = 100 * v14;
  *((_DWORD *)v4 + 48) = 100 * v24;
  if ( (v83 || v23 > 0x12u || v23 == 18 && v87[2] == v6) && (unsigned __int16)(v23 - 6) > 1u )
  {
    v23 = 17;
    HIWORD(v87[0]) = 17;
  }
  if ( (v10 & 4) != 0 && v23 <= 3u )
  {
    v23 = 17;
    HIWORD(v87[0]) = 17;
  }
  v26 = WORD2(v87[0]);
  v27 = BYTE4(v87[0]) & 0x70;
  switch ( v27 )
  {
    case ' ':
      v88[0] = 4;
      break;
    case '0':
      v88[0] = 2;
      break;
    case '@':
      v88[0] = 5;
      break;
    case 'P':
      v88[0] = 1;
      break;
    case '`':
      v88[0] = 6;
      break;
    default:
      v88[0] = v27 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v88[0];
  GetCIEPrims(v9, v4 + 14, 6LL, 1LL);
  GetCIEPrims(v87[3], (char *)v4 + 76, v28, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    if ( v87[5] )
    {
      v59 = *(_DWORD *)(v87[5] + 8LL);
      v60 = v59;
      v81 = *(_QWORD *)v87[5];
      v61 = *(_QWORD *)v87[5];
      v62 = *(_QWORD *)v87[5];
      if ( v62 > 0x2328u
        || WORD1(v81) > 0x2328u
        || WORD2(v81) > 0x2328u
        || HIWORD(v81) > 0x2328u
        || (unsigned __int16)v59 > 0x2328u
        || HIWORD(v59) > 0x2328u )
      {
        v63 = 0;
      }
      else if ( v81 || (_WORD)v59 )
      {
        v63 = 1;
      }
      else
      {
        v63 = 1;
        if ( !HIWORD(v59) )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
      v64 = *((_DWORD *)v4 + 56);
      v25 = v83;
    }
    else
    {
      v60 = v82;
      v64 = v4[28] & 0xFFFB;
      v59 = v82;
      v63 = 0;
      v62 = v80;
      v61 = v80;
      *((_DWORD *)v4 + 56) = v64;
    }
    if ( (v64 & 4) != 0 )
    {
      if ( v25 || !v63 )
      {
        v59 = 13762880;
        v60 = 320;
        v62 = DefaultSolidDyesInfo;
        v61 = DefaultSolidDyesInfo;
      }
      v91[1] = 100 * WORD2(v61);
      v92 = 100 * v60;
      v93 = 100 * v62;
      v95 = 100 * HIWORD(v59);
      v98 = 1000000;
      v94 = 1000000;
      v91[0] = 1000000;
      v96 = 100 * WORD1(v61);
      v97 = 100 * HIWORD(v61);
      ComputeInverseMatrix3x3(v91, (char *)v4 + 148);
      v65 = *((_DWORD *)v4 + 56);
      if ( (v65 & 1) == 0 )
      {
        v92 = *((_DWORD *)v4 + 37);
        v94 = *((_DWORD *)v4 + 38);
        v96 = *((_DWORD *)v4 + 39);
        v91[0] = 3;
        v93 = 1000000;
        v95 = 1000000;
        v97 = 1000000;
        v66 = MulDivFD6Pairs(v91);
        v67 = 1000000 - MulFD6(1000000 - v66, *((_DWORD *)v4 + 114));
        v92 = *((_DWORD *)v4 + 40);
        v94 = *((_DWORD *)v4 + 41);
        v68 = *((_DWORD *)v4 + 42);
        v93 = 1000000;
        v95 = 1000000;
        v97 = 1000000;
        v96 = v68;
        v69 = MulDivFD6Pairs(v91);
        v70 = v67 - MulFD6(1000000 - v69, *((_DWORD *)v4 + 115));
        v92 = *((_DWORD *)v4 + 43);
        v94 = *((_DWORD *)v4 + 44);
        v71 = *((_DWORD *)v4 + 45);
        v93 = 1000000;
        v95 = 1000000;
        v97 = 1000000;
        v96 = v71;
        *((_DWORD *)v4 + 56) = v65 | 1;
        v72 = MulDivFD6Pairs(v91);
        v73 = MulFD6(1000000 - v72, *((_DWORD *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((_DWORD *)v4 + 36), v70 - v73);
      }
    }
  }
  v29 = ComputeHTCell(v23, v87[2], v4 + 5);
  if ( v29 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v29;
  }
  else
  {
    v30 = WORD2(v87[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v30 && LOWORD(v87[7]) == 24 && (*(_DWORD *)((char *)&v87[7] + 6) != 655370000 || WORD1(v87[8]) != 10000) )
    {
      v31 = *(_OWORD *)&v87[7];
      v32 = v87[9];
    }
    else
    {
      v31 = DefaultCA;
      v32 = 0LL;
    }
    *(_OWORD *)((char *)v4 + 12) = v31;
    *(_QWORD *)((char *)v4 + 28) = v32;
    v33 = *((_DWORD *)v4 + 56);
    if ( (v10 & 0x204) == 0x200 )
    {
      v33 |= 0x1000u;
      *((_DWORD *)v4 + 56) = v33;
    }
    if ( (v87[0] & 0x800000000LL) != 0 )
    {
      v40 = BYTE6(v87[10]);
      v79 = BYTE6(v87[10]);
      v41 = v33 | (8 * (v26 & 0x400 | 0x20));
      v42 = (BYTE6(v87[10]) >> 2) & 7;
      *((_DWORD *)v4 + 56) = v41;
      v88[2] = v42;
      v43 = v40 & 3;
      v44 = v40 >> 5;
      v88[1] = v40 >> 5;
      v88[3] = v43;
      if ( (_BYTE)v40 == 1 )
      {
        v79 = 124;
        v43 = 4;
        v88[3] = 4;
        v42 = 4;
        v88[2] = 4;
        v44 = 4;
        v88[1] = 4;
      }
      else if ( (_BYTE)v40 == 2 )
      {
        v79 = -41;
        v43 = 5;
        v88[3] = 5;
        v42 = 5;
        v88[2] = 5;
        v44 = 5;
        v88[1] = 5;
      }
      else if ( !v44 || !v42 || (v40 & 3) == 0 )
      {
        v41 |= 0x200u;
        v88[3] = 255;
        *((_DWORD *)v4 + 56) = v41;
        v43 = 255;
        v42 = 255;
        v88[2] = 255;
        v44 = 255;
        v88[1] = 255;
        v79 = -1;
      }
      *((_BYTE *)v4 + 844) = (v41 & 0x2000) != 0;
      if ( v44 == v42 && v44 == v43 )
      {
        v45 = v88[1];
        v41 |= 0x800u;
        *((_DWORD *)v4 + 56) = v41;
        *((_BYTE *)v4 + 493) = v45;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v46 = v44;
      if ( v44 < v42 )
        v46 = v42;
      if ( v46 < v43 )
        v46 = v43;
      v89 = v46;
      if ( v46 <= 6 && (v74 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v74 + 16) == 0xFFFE )
      {
        v75 = *((_QWORD *)Src + 4);
        *((_DWORD *)v4 + 56) = v41 | 0x4000;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v74 + 19) + 1, 256);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 18) + 1, 256);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 21) + 1, 256);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 20) + 1, 256);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 5) + 1, 256);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 4) + 1, 256);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 25) + 1, 256);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 24) + 1, 256);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 27) + 1, 256);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 26) + 1, 256);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 29) + 1, 256);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 28) + 1, 256);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 31) + 1, 256);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 30) + 1, 256);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 33) + 1, 256);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 32) + 1, 256);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 35) + 1, 256);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v75 + 34) + 1, 256);
        v76 = *(_WORD *)(v75 + 10);
        if ( v76 < 0x2710u )
        {
          if ( v76 )
            *((_DWORD *)v4 + 128) = 100 * v76;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v77 = DivFD6(1000000, *((_DWORD *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((_DWORD *)v4 + v44 + 128), v77);
        *((_DWORD *)v4 + 126) = MulFD6(*((_DWORD *)v4 + v42 + 134), v77);
        *((_DWORD *)v4 + 127) = MulFD6(*((_DWORD *)v4 + v43 + 140), v77);
        v78 = 6;
        do
        {
          if ( v78 >= v44 )
            *((_DWORD *)v4 + v78 + 128) = 1000000;
          if ( v78 >= v42 )
            *((_DWORD *)v4 + v78 + 134) = 1000000;
          if ( v78 >= v43 )
            *((_DWORD *)v4 + v78 + 140) = 1000000;
          --v78;
        }
        while ( v78 );
        v48 = *((_DWORD *)v4 + 125);
        v49 = *((_DWORD *)v4 + 126);
        v41 = *((_DWORD *)v4 + 56);
        v90 = 0;
      }
      else
      {
        v47 = *((_DWORD *)v4 + 58) * v46;
        v48 = DivFD6(1000000 * v44, v47);
        *((_DWORD *)v4 + 125) = v48;
        v49 = DivFD6(1000000 * v42, v47);
        *((_DWORD *)v4 + 126) = v49;
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v43, v47);
      }
      v50 = *((_DWORD *)v4 + 128);
      if ( v48 < v49 )
        v48 = v49;
      if ( v48 < *((_DWORD *)v4 + 127) )
        v48 = *((_DWORD *)v4 + 127);
      if ( v50 == 0xFFFF )
      {
        if ( v48 == 1000000 && (v41 = *((_DWORD *)v4 + 56), (v41 & 0x800) != 0) )
          v50 = 0;
        else
          v50 = 666667;
        *((_DWORD *)v4 + 128) = v50;
      }
      if ( !v50 )
      {
        if ( v48 != 1000000 || (v50 = 0, (v41 & 0x800) == 0) )
        {
          *((_DWORD *)v4 + 128) = 1000000;
          v50 = 1000000;
        }
      }
      v51 = RaisePower(v50, v48, 0);
      v52 = *((_DWORD *)v4 + 125);
      *((_DWORD *)v4 + 128) = v51;
      v53 = MulFD6(v52, 4095);
      v54 = *((_DWORD *)v4 + 126);
      *((_WORD *)v4 + 247) = v53 + 1;
      v55 = MulFD6(v54, 4095);
      v56 = *((_DWORD *)v4 + 127);
      *((_WORD *)v4 + 248) = v55 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v56, 4095) + 1;
    }
    else
    {
      v79 = -1;
      v89 = 1;
      v88[3] = 1;
      v88[2] = 1;
      v88[1] = 1;
    }
    v34 = *((unsigned __int16 *)v4 + 114);
    *((_BYTE *)v4 + 488) = v88[1];
    *((_BYTE *)v4 + 489) = v88[2];
    *((_BYTE *)v4 + 490) = v88[3];
    *((_BYTE *)v4 + 491) = v89;
    *((_BYTE *)v4 + 492) = v79;
    v88[0] = v34;
    v35 = *v85;
    v88[2] = *((_DWORD *)v4 + 58);
    v88[1] = v35;
    v88[3] = v35 + v34;
    v36 = ComputeChecksum((char *)v88, 0xA819203F, 0x10u);
    v30 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v36;
    if ( !v30 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v84;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
