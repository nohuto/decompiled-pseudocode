/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00CF134 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     ComputeChecksum @ 0x1C00D177C (ComputeChecksum.c)
 *     MulFD6 @ 0x1C00D17C8 (MulFD6.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00D3970 (ComputeInverseMatrix3x3.c)
 *     GetCIEPrims @ 0x1C00D4744 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x1C00D4940 (ComputeHTCell.c)
 *     MulDivFD6Pairs @ 0x1C00D4A84 (MulDivFD6Pairs.c)
 *     CleanUpDHI @ 0x1C0105D6C (CleanUpDHI.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  unsigned int v3; // ebx
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
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ecx
  int v43; // esi
  unsigned int v44; // r15d
  unsigned int v45; // r14d
  unsigned int v46; // r13d
  char v47; // al
  unsigned int v48; // ebx
  int v49; // ebx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  __int16 v56; // ax
  int v57; // ecx
  __int16 v58; // ax
  int v59; // ecx
  unsigned int v60; // r8d
  unsigned __int16 v61; // r9
  unsigned __int64 v62; // rdx
  unsigned __int16 v63; // r10
  int v64; // ecx
  int v65; // eax
  int v66; // r13d
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  int v70; // eax
  int v71; // ebx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rbx
  unsigned __int16 v77; // ax
  int v78; // ebx
  unsigned int v79; // edx
  char v80; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v81; // [rsp+28h] [rbp-D8h]
  __int64 v82; // [rsp+28h] [rbp-D8h]
  unsigned int v83; // [rsp+30h] [rbp-D0h]
  int v84; // [rsp+3Ch] [rbp-C4h]
  int v85; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v86; // [rsp+58h] [rbp-A8h]
  _QWORD v88[12]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v89[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v90; // [rsp+E0h] [rbp-20h]
  int v91; // [rsp+E4h] [rbp-1Ch]
  _DWORD v92[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v93; // [rsp+F0h] [rbp-10h]
  int v94; // [rsp+F4h] [rbp-Ch]
  int v95; // [rsp+F8h] [rbp-8h]
  int v96; // [rsp+FCh] [rbp-4h]
  int v97; // [rsp+100h] [rbp+0h]
  int v98; // [rsp+104h] [rbp+4h]
  int v99; // [rsp+108h] [rbp+8h]

  v3 = 88;
  memset(v88, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v88, Src, v3);
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
  v7 = (__int64 (*)())v88[1];
  v8 = WORD2(v88[0]);
  v9 = v88[4];
  if ( !v88[1] )
    v7 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v7;
  v10 = v8 & 0x6FF;
  WORD2(v88[0]) = v10;
  if ( v9 && *(_WORD *)(v9 + 22) == 0xFFFE )
  {
    v84 = 0;
  }
  else
  {
    v84 = 1;
    qmemcpy(v89, "THTN0002.naDuohC", sizeof(v89));
    v9 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum((char *)v89, 0x1234F012u, 0x10u);
  }
  v11 = v88[10];
  v12 = HIWORD(v88[6]);
  v13 = WORD2(v88[10]);
  v14 = WORD1(v88[10]);
  if ( LOWORD(v88[10]) == 0xFFFF && *(_DWORD *)((char *)&v88[10] + 2) == -1 )
  {
    v85 = 128;
LABEL_53:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v85 = v6;
  if ( (unsigned __int16)(LOWORD(v88[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v88[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v88[10]) - 100) > 0xFF78u )
  {
    goto LABEL_53;
  }
LABEL_14:
  v15 = (_WORD *)v4 + 115;
  v86 = (unsigned __int16 *)v4 + 115;
  v16 = (unsigned __int16)(8 * (v10 & 1));
  v17 = WORD1(v88[6]);
  *((_DWORD *)v4 + 56) = v16;
  *((_WORD *)v4 + 114) = v17;
  if ( !v17 || (v18 = WORD2(v88[6]), *v15 = WORD2(v88[6]), !v18) )
  {
    v86 = (unsigned __int16 *)v4 + 115;
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
    v40 = (unsigned __int16)*v15 * (unsigned __int16)*v15;
    v89[1] = 2 * v12 * v12;
    v41 = DivFD6(v40 + v19 * v19, v89[1]);
    v20 = RaisePower(v41, 2LL, 3LL);
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
    v39 = (v88[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = 1;
    if ( !v39 )
    {
      v16 |= 0x400u;
      *((_DWORD *)v4 + 56) = v16;
    }
    if ( (v88[0] & 0x200000000LL) == 0 )
      goto LABEL_24;
    v21 = v16 | 1;
  }
  *((_DWORD *)v4 + 56) = v21;
LABEL_24:
  *((_DWORD *)v4 + 58) = v20;
  v22 = v11;
  v23 = HIWORD(v88[0]);
  *((_DWORD *)v4 + 46) = 100 * v22;
  v24 = v13;
  v25 = v84;
  *((_DWORD *)v4 + 47) = 100 * v14;
  *((_DWORD *)v4 + 48) = 100 * v24;
  if ( (v84 || v23 > 0x12u || v23 == 18 && v88[2] == v6) && (unsigned __int16)(v23 - 6) > 1u )
  {
    v23 = 17;
    HIWORD(v88[0]) = 17;
  }
  if ( (v10 & 4) != 0 && v23 <= 3u )
  {
    v23 = 17;
    HIWORD(v88[0]) = 17;
  }
  v26 = WORD2(v88[0]);
  v27 = BYTE4(v88[0]) & 0x70;
  switch ( v27 )
  {
    case ' ':
      v89[0] = 4;
      break;
    case '0':
      v89[0] = 2;
      break;
    case '@':
      v89[0] = 5;
      break;
    case 'P':
      v89[0] = 1;
      break;
    case '`':
      v89[0] = 6;
      break;
    default:
      v89[0] = v27 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v89[0];
  GetCIEPrims(v9, v4 + 14, 6LL, 1LL);
  GetCIEPrims(v88[3], (char *)v4 + 76, v28, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    if ( v88[5] )
    {
      v60 = *(_DWORD *)(v88[5] + 8LL);
      v61 = v60;
      v82 = *(_QWORD *)v88[5];
      v62 = *(_QWORD *)v88[5];
      v63 = *(_QWORD *)v88[5];
      if ( v63 > 0x2328u
        || WORD1(v82) > 0x2328u
        || WORD2(v82) > 0x2328u
        || HIWORD(v82) > 0x2328u
        || (unsigned __int16)v60 > 0x2328u
        || HIWORD(v60) > 0x2328u )
      {
        v64 = 0;
      }
      else if ( v82 || (_WORD)v60 )
      {
        v64 = 1;
      }
      else
      {
        v64 = 1;
        if ( !HIWORD(v60) )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
      v65 = *((_DWORD *)v4 + 56);
      v25 = v84;
    }
    else
    {
      v61 = v83;
      v65 = v4[28] & 0xFFFB;
      v60 = v83;
      v64 = 0;
      v63 = v81;
      v62 = v81;
      *((_DWORD *)v4 + 56) = v65;
    }
    if ( (v65 & 4) != 0 )
    {
      if ( v25 || !v64 )
      {
        v60 = 13762880;
        v61 = 320;
        v63 = DefaultSolidDyesInfo;
        v62 = DefaultSolidDyesInfo;
      }
      v92[1] = 100 * WORD2(v62);
      v93 = 100 * v61;
      v94 = 100 * v63;
      v96 = 100 * HIWORD(v60);
      v99 = 1000000;
      v95 = 1000000;
      v92[0] = 1000000;
      v97 = 100 * WORD1(v62);
      v98 = 100 * HIWORD(v62);
      ComputeInverseMatrix3x3((__int64)v92, (__int64)v4 + 148);
      v66 = *((_DWORD *)v4 + 56);
      if ( (v66 & 1) == 0 )
      {
        v93 = *((_DWORD *)v4 + 37);
        v95 = *((_DWORD *)v4 + 38);
        v97 = *((_DWORD *)v4 + 39);
        v92[0] = 3;
        v94 = 1000000;
        v96 = 1000000;
        v98 = 1000000;
        v67 = MulDivFD6Pairs(v92);
        v68 = 1000000 - MulFD6(1000000 - v67, *((_DWORD *)v4 + 114));
        v93 = *((_DWORD *)v4 + 40);
        v95 = *((_DWORD *)v4 + 41);
        v69 = *((_DWORD *)v4 + 42);
        v94 = 1000000;
        v96 = 1000000;
        v98 = 1000000;
        v97 = v69;
        v70 = MulDivFD6Pairs(v92);
        v71 = v68 - MulFD6(1000000 - v70, *((_DWORD *)v4 + 115));
        v93 = *((_DWORD *)v4 + 43);
        v95 = *((_DWORD *)v4 + 44);
        v72 = *((_DWORD *)v4 + 45);
        v94 = 1000000;
        v96 = 1000000;
        v98 = 1000000;
        v97 = v72;
        *((_DWORD *)v4 + 56) = v66 | 1;
        v73 = MulDivFD6Pairs(v92);
        v74 = MulFD6(1000000 - v73, *((_DWORD *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((_DWORD *)v4 + 36), v71 - v74);
      }
    }
  }
  v29 = ComputeHTCell(v23, v88[2], v4 + 5);
  if ( v29 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v29;
  }
  else
  {
    v30 = WORD2(v88[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v30 && LOWORD(v88[7]) == 24 && (*(_DWORD *)((char *)&v88[7] + 6) != 655370000 || WORD1(v88[8]) != 10000) )
    {
      v31 = *(_OWORD *)&v88[7];
      v32 = v88[9];
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
    if ( (v88[0] & 0x800000000LL) != 0 )
    {
      v42 = BYTE6(v88[10]);
      v80 = BYTE6(v88[10]);
      v43 = v33 | (8 * (v26 & 0x400 | 0x20));
      v44 = (BYTE6(v88[10]) >> 2) & 7;
      *((_DWORD *)v4 + 56) = v43;
      v89[2] = v44;
      v45 = v42 & 3;
      v46 = v42 >> 5;
      v89[1] = v42 >> 5;
      v89[3] = v45;
      if ( (_BYTE)v42 == 1 )
      {
        v80 = 124;
        v45 = 4;
        v89[3] = 4;
        v44 = 4;
        v89[2] = 4;
        v46 = 4;
        v89[1] = 4;
      }
      else if ( (_BYTE)v42 == 2 )
      {
        v80 = -41;
        v45 = 5;
        v89[3] = 5;
        v44 = 5;
        v89[2] = 5;
        v46 = 5;
        v89[1] = 5;
      }
      else if ( !v46 || !v44 || (v42 & 3) == 0 )
      {
        v43 |= 0x200u;
        v89[3] = 255;
        *((_DWORD *)v4 + 56) = v43;
        v45 = 255;
        v44 = 255;
        v89[2] = 255;
        v46 = 255;
        v89[1] = 255;
        v80 = -1;
      }
      *((_BYTE *)v4 + 844) = (v43 & 0x2000) != 0;
      if ( v46 == v44 && v46 == v45 )
      {
        v47 = v89[1];
        v43 |= 0x800u;
        *((_DWORD *)v4 + 56) = v43;
        *((_BYTE *)v4 + 493) = v47;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v48 = v46;
      if ( v46 < v44 )
        v48 = v44;
      if ( v48 < v45 )
        v48 = v45;
      v90 = v48;
      if ( v48 <= 6 && (v75 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v75 + 16) == 0xFFFE )
      {
        v76 = *((_QWORD *)Src + 4);
        *((_DWORD *)v4 + 56) = v43 | 0x4000;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v75 + 19) + 1, 256);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 18) + 1, 256);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 21) + 1, 256);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 20) + 1, 256);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 5) + 1, 256);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 4) + 1, 256);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 25) + 1, 256);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 24) + 1, 256);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 27) + 1, 256);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 26) + 1, 256);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 29) + 1, 256);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 28) + 1, 256);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 31) + 1, 256);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 30) + 1, 256);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 33) + 1, 256);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 32) + 1, 256);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v76 + 35) + 1, 256);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v76 + 34) + 1, 256);
        v77 = *(_WORD *)(v76 + 10);
        if ( v77 < 0x2710u )
        {
          if ( v77 )
            *((_DWORD *)v4 + 128) = 100 * v77;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v78 = DivFD6(1000000, *((_DWORD *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((_DWORD *)v4 + v46 + 128), v78);
        *((_DWORD *)v4 + 126) = MulFD6(*((_DWORD *)v4 + v44 + 134), v78);
        *((_DWORD *)v4 + 127) = MulFD6(*((_DWORD *)v4 + v45 + 140), v78);
        v79 = 6;
        do
        {
          if ( v79 >= v46 )
            *((_DWORD *)v4 + v79 + 128) = 1000000;
          if ( v79 >= v44 )
            *((_DWORD *)v4 + v79 + 134) = 1000000;
          if ( v79 >= v45 )
            *((_DWORD *)v4 + v79 + 140) = 1000000;
          --v79;
        }
        while ( v79 );
        v50 = *((unsigned int *)v4 + 128);
        v43 = *((_DWORD *)v4 + 56);
        v91 = 0;
      }
      else
      {
        v49 = *((_DWORD *)v4 + 58) * v48;
        *((_DWORD *)v4 + 125) = DivFD6(1000000 * v46, v49);
        *((_DWORD *)v4 + 126) = DivFD6(1000000 * v44, v49);
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v45, v49);
        v50 = 0xFFFFLL;
      }
      v51 = *((_DWORD *)v4 + 126);
      v52 = *((unsigned int *)v4 + 125);
      if ( (int)v52 < v51 )
        v52 = (unsigned int)v51;
      v53 = *((_DWORD *)v4 + 127);
      if ( (int)v52 < v53 )
        v52 = (unsigned int)v53;
      if ( (_DWORD)v50 == 0xFFFF )
      {
        if ( (_DWORD)v52 == 1000000 && (v43 & 0x800) != 0 )
          v50 = 0LL;
        else
          v50 = 666667LL;
        *((_DWORD *)v4 + 128) = v50;
      }
      if ( !(_DWORD)v50 )
      {
        if ( (_DWORD)v52 != 1000000 || (v50 = 0LL, (v43 & 0x800) == 0) )
        {
          *((_DWORD *)v4 + 128) = 1000000;
          v50 = 1000000LL;
        }
      }
      v54 = RaisePower(v50, v52, 0LL);
      v55 = *((_DWORD *)v4 + 125);
      *((_DWORD *)v4 + 128) = v54;
      v56 = MulFD6(v55, 4095);
      v57 = *((_DWORD *)v4 + 126);
      *((_WORD *)v4 + 247) = v56 + 1;
      v58 = MulFD6(v57, 4095);
      v59 = *((_DWORD *)v4 + 127);
      *((_WORD *)v4 + 248) = v58 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v59, 4095) + 1;
    }
    else
    {
      v80 = -1;
      v90 = 1;
      v89[3] = 1;
      v89[2] = 1;
      v89[1] = 1;
    }
    v34 = *((unsigned __int16 *)v4 + 114);
    *((_BYTE *)v4 + 488) = v89[1];
    *((_BYTE *)v4 + 489) = v89[2];
    *((_BYTE *)v4 + 490) = v89[3];
    *((_BYTE *)v4 + 491) = v90;
    *((_BYTE *)v4 + 492) = v80;
    v89[0] = v34;
    v35 = *v86;
    v89[2] = *((_DWORD *)v4 + 58);
    v89[1] = v35;
    v89[3] = v35 + v34;
    v36 = ComputeChecksum((char *)v89, 0xA819203F, 0x10u);
    v30 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v36;
    if ( !v30 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v85;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
