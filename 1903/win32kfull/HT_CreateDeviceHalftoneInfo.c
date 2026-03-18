/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C003B064
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003BBA0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0038048 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C0038094 (MulFD6.c)
 *     DivFD6 @ 0x1C0039CA8 (DivFD6.c)
 *     RaisePower @ 0x1C0039EF4 (RaisePower.c)
 *     ComputeInverseMatrix3x3 @ 0x1C003AA98 (ComputeInverseMatrix3x3.c)
 *     GetCIEPrims @ 0x1C003B860 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x1C003BA5C (ComputeHTCell.c)
 *     MulDivFD6Pairs @ 0x1C003C1F0 (MulDivFD6Pairs.c)
 *     CleanUpDHI @ 0x1C012971C (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  int v19; // edx
  int v20; // eax
  bool v21; // zf
  int v22; // r8d
  int v23; // eax
  unsigned __int16 v24; // r14
  int v25; // eax
  int v26; // ebx
  __int16 v27; // si
  int v28; // eax
  __int64 v29; // r8
  int v30; // ebx
  bool v31; // cc
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  __int64 result; // rax
  int v39; // r9d
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
  unsigned __int64 v59; // rdx
  unsigned int v60; // r8d
  unsigned __int16 v61; // r9
  unsigned __int16 v62; // r10
  int v63; // ecx
  int v64; // eax
  int v65; // r13d
  int v66; // eax
  int v67; // ebx
  int v68; // eax
  int v69; // ebx
  int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rbx
  unsigned __int16 v74; // ax
  int v75; // ebx
  unsigned int v76; // edx
  char v77; // [rsp+20h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-D8h]
  int v79; // [rsp+3Ch] [rbp-C4h]
  int v80; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v81; // [rsp+58h] [rbp-A8h]
  _QWORD v83[12]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v84[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v85; // [rsp+E0h] [rbp-20h]
  int v86; // [rsp+E4h] [rbp-1Ch]
  __int128 v87; // [rsp+E8h] [rbp-18h] BYREF
  int v88; // [rsp+F8h] [rbp-8h]
  int v89; // [rsp+FCh] [rbp-4h]
  int v90; // [rsp+100h] [rbp+0h]
  int v91; // [rsp+104h] [rbp+4h]
  int v92; // [rsp+108h] [rbp+8h]

  v3 = 88LL;
  memset(v83, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80LL;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v83, Src, v3);
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
  v7 = (__int64 (*)())v83[1];
  v8 = WORD2(v83[0]);
  v9 = v83[4];
  if ( !v83[1] )
    v7 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v7;
  v10 = v8 & 0x6FF;
  WORD2(v83[0]) = v10;
  if ( v9 && *(_WORD *)(v9 + 22) == 0xFFFE )
  {
    v79 = 0;
  }
  else
  {
    v79 = 1;
    qmemcpy(v84, "THTN0002.naDuohC", sizeof(v84));
    v9 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum((char *)v84, 0x1234F012u, 0x10u);
  }
  v11 = v83[10];
  v12 = HIWORD(v83[6]);
  v13 = WORD2(v83[10]);
  v14 = WORD1(v83[10]);
  if ( LOWORD(v83[10]) == 0xFFFF && *(_DWORD *)((char *)&v83[10] + 2) == -1 )
  {
    v80 = 128;
LABEL_13:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v80 = v6;
  if ( (unsigned __int16)(LOWORD(v83[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v83[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v83[10]) - 100) > 0xFF78u )
  {
    goto LABEL_13;
  }
LABEL_14:
  v15 = (_WORD *)v4 + 115;
  v81 = (unsigned __int16 *)v4 + 115;
  v16 = (unsigned __int16)(8 * (v10 & 1));
  v17 = WORD1(v83[6]);
  *((_DWORD *)v4 + 56) = v16;
  *((_WORD *)v4 + 114) = v17;
  if ( !v17 || (v18 = WORD2(v83[6]), *v15 = WORD2(v83[6]), !v18) )
  {
    v81 = (unsigned __int16 *)v4 + 115;
    *v15 = 300;
    v12 = v6;
    *((_WORD *)v4 + 114) = 300;
  }
  if ( (v12 & 0x8000) != 0 )
  {
    v19 = v12 & 0x7FFF;
    if ( (unsigned int)(v19 - 333) <= 0x394B )
    {
      v20 = 1000 * v19;
      goto LABEL_19;
    }
    goto LABEL_57;
  }
  v39 = *((unsigned __int16 *)v4 + 114);
  if ( v12 > 3 * v39 || v12 > 3 * (unsigned int)(unsigned __int16)*v15 )
    v12 = v6;
  if ( !v12 )
  {
LABEL_57:
    v20 = 1000000;
    goto LABEL_19;
  }
  v57 = (unsigned __int16)*v15 * (unsigned __int16)*v15;
  v84[1] = 2 * v12 * v12;
  v58 = DivFD6(v57 + v39 * v39, v84[1]);
  v20 = RaisePower(v58, 2, 3);
  v16 = *((_DWORD *)v4 + 56);
  v6 = 0LL;
LABEL_19:
  if ( (v10 & 4) != 0 )
  {
    *((_BYTE *)v4 + 73) = v6;
    v22 = v16 | 2;
  }
  else
  {
    v21 = (v83[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = 1;
    if ( !v21 )
    {
      v16 |= 0x400u;
      *((_DWORD *)v4 + 56) = v16;
    }
    if ( (v83[0] & 0x200000000LL) == 0 )
      goto LABEL_25;
    v22 = v16 | 1;
  }
  *((_DWORD *)v4 + 56) = v22;
LABEL_25:
  *((_DWORD *)v4 + 58) = v20;
  v23 = v11;
  v24 = HIWORD(v83[0]);
  *((_DWORD *)v4 + 46) = 100 * v23;
  v25 = v13;
  v26 = v79;
  *((_DWORD *)v4 + 47) = 100 * v14;
  *((_DWORD *)v4 + 48) = 100 * v25;
  if ( (v79 || v24 > 0x12u || v24 == 18 && v83[2] == v6) && (unsigned __int16)(v24 - 6) > 1u )
  {
    v24 = 17;
    HIWORD(v83[0]) = 17;
  }
  if ( (v10 & 4) != 0 && v24 <= 3u )
  {
    v24 = 17;
    HIWORD(v83[0]) = 17;
  }
  v27 = WORD2(v83[0]);
  v28 = BYTE4(v83[0]) & 0x70;
  switch ( v28 )
  {
    case ' ':
      v84[0] = 4;
      break;
    case '0':
      v84[0] = 2;
      break;
    case '@':
      v84[0] = 5;
      break;
    case 'P':
      v84[0] = 1;
      break;
    case '`':
      v84[0] = 6;
      break;
    default:
      v84[0] = v28 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v84[0];
  GetCIEPrims(v9, v4 + 14, 6LL);
  GetCIEPrims(v83[3], (char *)v4 + 76, v29);
  if ( (v4[28] & 4) != 0 )
  {
    v59 = 0LL;
    v60 = 0;
    if ( v83[5] )
    {
      v60 = *(_DWORD *)(v83[5] + 8LL);
      v61 = v60;
      v78 = *(_QWORD *)v83[5];
      v59 = *(_QWORD *)v83[5];
      v62 = *(_QWORD *)v83[5];
      if ( v62 > 0x2328u
        || WORD1(v78) > 0x2328u
        || WORD2(v78) > 0x2328u
        || HIWORD(v78) > 0x2328u
        || (unsigned __int16)v60 > 0x2328u
        || HIWORD(v60) > 0x2328u )
      {
        v63 = 0;
      }
      else if ( v78 || (_WORD)v60 )
      {
        v63 = 1;
      }
      else
      {
        v63 = 1;
        if ( !HIWORD(v60) )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
      v64 = *((_DWORD *)v4 + 56);
      v26 = v79;
    }
    else
    {
      v61 = 0;
      v64 = v4[28] & 0xFFFB;
      v62 = 0;
      v63 = 0;
      *((_DWORD *)v4 + 56) = v64;
    }
    if ( (v64 & 4) != 0 )
    {
      if ( v26 || !v63 )
      {
        v60 = 13762880;
        v61 = 320;
        v62 = DefaultSolidDyesInfo;
        v59 = DefaultSolidDyesInfo;
      }
      DWORD1(v87) = 100 * WORD2(v59);
      DWORD2(v87) = 100 * v61;
      HIDWORD(v87) = 100 * v62;
      v89 = 100 * HIWORD(v60);
      v92 = 1000000;
      v88 = 1000000;
      LODWORD(v87) = 1000000;
      v90 = 100 * WORD1(v59);
      v91 = 100 * HIWORD(v59);
      ComputeInverseMatrix3x3(&v87, (__int64)v4 + 148);
      v65 = *((_DWORD *)v4 + 56);
      if ( (v65 & 1) == 0 )
      {
        DWORD2(v87) = *((_DWORD *)v4 + 37);
        v88 = *((_DWORD *)v4 + 38);
        v90 = *((_DWORD *)v4 + 39);
        LODWORD(v87) = 3;
        HIDWORD(v87) = 1000000;
        v89 = 1000000;
        v91 = 1000000;
        v66 = MulDivFD6Pairs(&v87);
        v67 = 1000000 - MulFD6(1000000 - v66, *((_DWORD *)v4 + 114));
        DWORD2(v87) = *((_DWORD *)v4 + 40);
        v88 = *((_DWORD *)v4 + 41);
        v90 = *((_DWORD *)v4 + 42);
        v68 = MulDivFD6Pairs(&v87);
        v69 = v67 - MulFD6(1000000 - v68, *((_DWORD *)v4 + 115));
        DWORD2(v87) = *((_DWORD *)v4 + 43);
        v88 = *((_DWORD *)v4 + 44);
        v90 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v65 | 1;
        v70 = MulDivFD6Pairs(&v87);
        v71 = MulFD6(1000000 - v70, *((_DWORD *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((_DWORD *)v4 + 36), v69 - v71);
      }
    }
  }
  v30 = ComputeHTCell(v24, v83[2], v4 + 5);
  if ( v30 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v30;
  }
  else
  {
    v31 = WORD2(v83[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v31 && LOWORD(v83[7]) == 24 && (*(_DWORD *)((char *)&v83[7] + 6) != 655370000 || WORD1(v83[8]) != 10000) )
    {
      v32 = *(_OWORD *)&v83[7];
      v33 = v83[9];
    }
    else
    {
      v32 = DefaultCA;
      v33 = 0LL;
    }
    *(_OWORD *)((char *)v4 + 12) = v32;
    *(_QWORD *)((char *)v4 + 28) = v33;
    v34 = *((_DWORD *)v4 + 56);
    if ( (v10 & 0x204) == 0x200 )
    {
      v34 |= 0x1000u;
      *((_DWORD *)v4 + 56) = v34;
    }
    if ( (v83[0] & 0x800000000LL) != 0 )
    {
      v40 = BYTE6(v83[10]);
      v77 = BYTE6(v83[10]);
      v41 = v34 | (8 * (v27 & 0x400 | 0x20));
      v42 = (BYTE6(v83[10]) >> 2) & 7;
      *((_DWORD *)v4 + 56) = v41;
      v84[2] = v42;
      v43 = v40 & 3;
      v44 = v40 >> 5;
      v84[1] = v40 >> 5;
      v84[3] = v43;
      if ( (_BYTE)v40 == 1 )
      {
        v77 = 124;
        v43 = 4;
        v84[3] = 4;
        v42 = 4;
        v84[2] = 4;
        v44 = 4;
        v84[1] = 4;
      }
      else if ( (_BYTE)v40 == 2 )
      {
        v77 = -41;
        v43 = 5;
        v84[3] = 5;
        v42 = 5;
        v84[2] = 5;
        v44 = 5;
        v84[1] = 5;
      }
      else if ( !v44 || !v42 || (v40 & 3) == 0 )
      {
        v41 |= 0x200u;
        v84[3] = 255;
        *((_DWORD *)v4 + 56) = v41;
        v43 = 255;
        v42 = 255;
        v84[2] = 255;
        v44 = 255;
        v84[1] = 255;
        v77 = -1;
      }
      *((_BYTE *)v4 + 844) = (v41 & 0x2000) != 0;
      if ( v44 == v42 && v44 == v43 )
      {
        v45 = v84[1];
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
      v85 = v46;
      if ( v46 <= 6 && (v72 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v72 + 16) == 0xFFFE )
      {
        v73 = *((_QWORD *)Src + 4);
        *((_DWORD *)v4 + 56) = v41 | 0x4000;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v72 + 19) + 1, 256);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 18) + 1, 256);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 21) + 1, 256);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 20) + 1, 256);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 5) + 1, 256);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 4) + 1, 256);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 25) + 1, 256);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 24) + 1, 256);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 27) + 1, 256);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 26) + 1, 256);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 29) + 1, 256);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 28) + 1, 256);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 31) + 1, 256);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 30) + 1, 256);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 33) + 1, 256);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 32) + 1, 256);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v73 + 35) + 1, 256);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v73 + 34) + 1, 256);
        v74 = *(_WORD *)(v73 + 10);
        if ( v74 < 0x2710u )
        {
          if ( v74 )
            *((_DWORD *)v4 + 128) = 100 * v74;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v75 = DivFD6(1000000, *((_DWORD *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((_DWORD *)v4 + v44 + 128), v75);
        *((_DWORD *)v4 + 126) = MulFD6(*((_DWORD *)v4 + v42 + 134), v75);
        *((_DWORD *)v4 + 127) = MulFD6(*((_DWORD *)v4 + v43 + 140), v75);
        v76 = 6;
        do
        {
          if ( v76 >= v44 )
            *((_DWORD *)v4 + v76 + 128) = 1000000;
          if ( v76 >= v42 )
            *((_DWORD *)v4 + v76 + 134) = 1000000;
          if ( v76 >= v43 )
            *((_DWORD *)v4 + v76 + 140) = 1000000;
          --v76;
        }
        while ( v76 );
        v48 = *((_DWORD *)v4 + 125);
        v49 = *((_DWORD *)v4 + 126);
        v41 = *((_DWORD *)v4 + 56);
        v86 = 0;
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
      v77 = -1;
      v85 = 1;
      v84[3] = 1;
      v84[2] = 1;
      v84[1] = 1;
    }
    v35 = *((unsigned __int16 *)v4 + 114);
    *((_BYTE *)v4 + 488) = v84[1];
    *((_BYTE *)v4 + 489) = v84[2];
    *((_BYTE *)v4 + 490) = v84[3];
    *((_BYTE *)v4 + 491) = v85;
    *((_BYTE *)v4 + 492) = v77;
    v84[0] = v35;
    v36 = *v81;
    v84[2] = *((_DWORD *)v4 + 58);
    v84[1] = v36;
    v84[3] = v36 + v35;
    v37 = ComputeChecksum((char *)v84, 0xA819203F, 0x10u);
    v31 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v37;
    if ( !v31 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v80;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
