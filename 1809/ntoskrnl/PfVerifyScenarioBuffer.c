/*
 * XREFs of PfVerifyScenarioBuffer @ 0x140669CB0
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     StringCbLengthW @ 0x1400FD170 (StringCbLengthW.c)
 *     StringCchPrintfW @ 0x140134BD4 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PfMetadataRecordIsEqual @ 0x14065ED38 (PfMetadataRecordIsEqual.c)
 *     PfVerifyScenarioId @ 0x14066AC70 (PfVerifyScenarioId.c)
 */

__int64 __fastcall PfVerifyScenarioBuffer(unsigned __int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // r12
  unsigned int *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rsi
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  char *v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // r10d
  unsigned int v25; // esi
  int *v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r14
  unsigned int v32; // r8d
  int v33; // r11d
  unsigned int v34; // r10d
  int v35; // r15d
  int v36; // edi
  int v37; // ecx
  __int64 v38; // r11
  __int64 v39; // rbp
  int *v40; // r9
  int v41; // esi
  int v42; // eax
  int v44; // edx
  unsigned __int64 v45; // r9
  unsigned int v46; // r10d
  unsigned int v47; // r14d
  unsigned int v48; // r15d
  unsigned __int64 v49; // r11
  unsigned int *v50; // rsi
  unsigned int v51; // r9d
  int v52; // ebp
  unsigned __int64 v53; // rdi
  unsigned __int16 *v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // r9
  char *v57; // rdx
  int v58; // eax
  int v59; // ecx
  _DWORD *v60; // rcx
  unsigned __int64 v61; // r11
  __int64 v62; // r10
  char *v63; // rdx
  unsigned int v64; // edx
  unsigned int v65; // r8d
  int v66; // r9d
  _DWORD *v67; // rcx
  __int64 v68; // r11
  int v69; // eax
  int v70; // eax
  unsigned int v71; // r9d
  int v72; // eax
  _DWORD *v73; // rcx
  __int64 v74; // rdx
  _WORD *v75; // rcx
  unsigned int v76; // edx
  _WORD *v77; // rcx
  __int64 v78; // rax
  int v79; // r9d
  unsigned int v80; // r10d
  __int64 v81; // [rsp+20h] [rbp-138h]
  __int64 v82; // [rsp+28h] [rbp-130h]
  int v83; // [rsp+30h] [rbp-128h]
  unsigned int v84; // [rsp+34h] [rbp-124h]
  int v85; // [rsp+38h] [rbp-120h]
  unsigned __int64 v86; // [rsp+40h] [rbp-118h]
  unsigned __int64 v88; // [rsp+50h] [rbp-108h]
  unsigned int v89; // [rsp+58h] [rbp-100h]
  unsigned int v90; // [rsp+5Ch] [rbp-FCh]
  int v91; // [rsp+64h] [rbp-F4h]
  unsigned int v92; // [rsp+68h] [rbp-F0h]
  int v93; // [rsp+6Ch] [rbp-ECh]
  unsigned int v94; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v95; // [rsp+78h] [rbp-E0h] BYREF
  unsigned __int64 v96; // [rsp+80h] [rbp-D8h]
  int *v97; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v98; // [rsp+90h] [rbp-C8h]
  _WORD v99[16]; // [rsp+98h] [rbp-C0h] BYREF
  wchar_t pszDest[40]; // [rsp+C0h] [rbp-98h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = (unsigned int *)a1;
  if ( a2 < 0x130 )
  {
    v3 = 10;
  }
  else if ( (a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *(_DWORD *)a1 == 30 && *(_DWORD *)(a1 + 4) == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == *(_DWORD *)(a1 + 12) )
    {
      if ( *(_DWORD *)(a1 + 80) > 1u )
      {
        v3 = 27;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 88);
        v92 = v7;
        if ( v7 > 0x4000
          || (v8 = *(unsigned int *)(a1 + 112), v94 = v8, (unsigned int)v8 > 0x4000)
          || (v9 = *(_DWORD *)(a1 + 96), v89 = v9, v9 > 0x100000)
          || (v10 = *(_DWORD *)(a1 + 104), v10 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v7 && v9 && v10 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 212) - 1) > 7 )
          {
            v3 = 35;
          }
          else if ( (unsigned __int8)PfVerifyScenarioId(a1 + 16) )
          {
            v14 = (unsigned __int64)v6 + v6[21];
            v95 = v14;
            if ( (v14 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v14 < (unsigned __int64)v6
                   || (v15 = (char *)v6 + v11, v88 = (unsigned __int64)v6 + v11, v14 >= (unsigned __int64)v6 + v11) )
            {
              v3 = 40;
            }
            else
            {
              v16 = 32LL * v7 + v14 - 1;
              if ( v16 < (unsigned __int64)v6 || v16 >= (unsigned __int64)v15 )
              {
                v3 = 45;
              }
              else
              {
                v17 = (unsigned __int64)v6 + v6[23];
                v96 = v17;
                if ( (v17 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v17 < (unsigned __int64)v6 || v17 >= (unsigned __int64)v15 )
                {
                  v3 = 50;
                }
                else
                {
                  v18 = v17 + 8 * v13 - 1;
                  if ( v18 < (unsigned __int64)v6 || v18 >= (unsigned __int64)v15 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v19 = (unsigned __int64)v6 + v6[25];
                    v98 = v19;
                    if ( (v19 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v19 < (unsigned __int64)v6 || v19 >= (unsigned __int64)v15 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v20 = v19 + v12 - 1;
                      if ( v20 < (unsigned __int64)v6 || v20 >= (unsigned __int64)v15 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v21 = (unsigned __int64)v6 + v6[27];
                        v86 = v21;
                        if ( (v21 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v21 < (unsigned __int64)v6 || v21 >= (unsigned __int64)v15 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v22 = v21 + v6[29] - 1LL;
                          if ( v22 < (unsigned __int64)v6 || v22 >= (unsigned __int64)v15 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v23 = 96 * v8 + v21 - 1;
                            if ( v23 < (unsigned __int64)v6 || v23 >= (unsigned __int64)v15 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v90 = v6[31];
                              if ( v90 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v84 = 0;
                                v24 = 0;
                                v25 = 0;
                                while ( 1 )
                                {
                                  v26 = (int *)(v14 + 32LL * v25);
                                  v97 = v26;
                                  v27 = v19 + (unsigned int)v26[3];
                                  if ( (v27 & 1) != 0 )
                                  {
                                    v3 = 77;
                                    goto LABEL_67;
                                  }
                                  if ( v27 < (unsigned __int64)v6 || v27 >= (unsigned __int64)v15 )
                                  {
                                    v3 = 80;
                                    goto LABEL_67;
                                  }
                                  v28 = (unsigned int)v26[4];
                                  if ( !(_DWORD)v28 )
                                  {
                                    v3 = 90;
                                    goto LABEL_67;
                                  }
                                  if ( (unsigned int)v28 > 0x400 )
                                  {
                                    v3 = 100;
                                    goto LABEL_67;
                                  }
                                  v29 = (unsigned int)(2 * v28 + 2) + v27 - 1;
                                  if ( v29 < (unsigned __int64)v6 || v29 >= (unsigned __int64)v15 )
                                  {
                                    v3 = 110;
                                    goto LABEL_67;
                                  }
                                  if ( *(_WORD *)(v27 + 2 * v28) )
                                  {
                                    v3 = 120;
                                    goto LABEL_67;
                                  }
                                  v30 = v26[1];
                                  if ( v30 > 0x2000 )
                                  {
                                    v3 = 140;
                                    goto LABEL_67;
                                  }
                                  if ( v30 > (unsigned int)v13 )
                                  {
                                    v3 = 150;
                                    goto LABEL_67;
                                  }
                                  v31 = *v26;
                                  v85 = v13 - v30;
                                  if ( (_DWORD)v31 == -1 && v30 )
                                  {
                                    v3 = 152;
                                    goto LABEL_67;
                                  }
                                  if ( (_DWORD)v31 != v24 && (_DWORD)v31 != -1 )
                                  {
                                    v3 = 153;
                                    goto LABEL_67;
                                  }
                                  v32 = v26[5];
                                  v93 = v30 + v24;
                                  if ( (v32 & 0x7F00) == 0 && (v32 & 1) == 0 && (v32 & 0xFE) == 0 )
                                  {
                                    v3 = 155;
                                    goto LABEL_67;
                                  }
                                  v33 = v26[5] & 1;
                                  v91 = v33;
                                  if ( (v32 & 1) == 0 && !v26[2] )
                                  {
                                    v3 = 157;
                                    goto LABEL_67;
                                  }
                                  v83 = 0;
                                  v34 = *v26;
                                  v35 = 0;
                                  v36 = 0;
                                  v37 = 0;
                                  if ( (int)v31 < (int)(v31 + v30) )
                                    break;
LABEL_75:
                                  if ( v35 != v26[2] )
                                  {
                                    v3 = 185;
                                    goto LABEL_67;
                                  }
                                  if ( !v33 && (v37 != (unsigned __int8)v32 >> 1 || v36 != ((v32 >> 8) & 0x7F)) )
                                  {
                                    v3 = 187;
                                    goto LABEL_67;
                                  }
                                  v6 = (unsigned int *)a1;
                                  ++v25;
                                  LODWORD(v13) = v85;
                                  v84 = v25;
                                  if ( v25 >= v92 )
                                  {
                                    v45 = v86;
                                    if ( v85 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v46 = v94;
                                      v47 = 0;
                                      v48 = 0;
                                      if ( v94 )
                                      {
                                        while ( 1 )
                                        {
                                          v49 = v86;
                                          v50 = (unsigned int *)(v45 + 96LL * v48++);
                                          v51 = v48;
                                          v52 = v50[4];
                                          v95 = *((_QWORD *)v50 + 1);
                                          if ( v48 < v46 )
                                            break;
LABEL_86:
                                          v53 = v49 + *v50;
                                          if ( (v53 & 1) != 0 )
                                          {
                                            v3 = 195;
                                            goto LABEL_67;
                                          }
                                          if ( v53 < a1 || v53 >= v88 )
                                          {
                                            v3 = 200;
                                            goto LABEL_67;
                                          }
                                          v54 = (unsigned __int16 *)(v53 + 2LL * v50[1]);
                                          if ( (unsigned __int64)v54 + 1 < a1 || (unsigned __int64)v54 + 1 >= v88 )
                                          {
                                            v3 = 210;
                                            goto LABEL_67;
                                          }
                                          if ( *v54 )
                                          {
                                            v3 = 220;
                                            goto LABEL_67;
                                          }
                                          memset(v99, 0, sizeof(v99));
                                          v55 = v50[2];
                                          v56 = v50[3];
                                          v99[13] &= 0xFFE1u;
                                          LODWORD(v82) = v52;
                                          LODWORD(v81) = v55;
                                          StringCchPrintfW(
                                            pszDest,
                                            0x23uLL,
                                            L"\\VOLUME{%08lx%08lx-%08lx}",
                                            v56,
                                            v81,
                                            v82);
                                          v57 = (char *)pszDest - v53;
                                          do
                                          {
                                            v58 = *(unsigned __int16 *)&v57[v53];
                                            v59 = *(unsigned __int16 *)v53 - v58;
                                            if ( v59 )
                                              break;
                                            v53 += 2LL;
                                          }
                                          while ( v58 );
                                          if ( v59 )
                                          {
                                            v3 = 222;
                                            goto LABEL_67;
                                          }
                                          v60 = (_DWORD *)(v86 + v50[5]);
                                          if ( ((unsigned __int8)v60 & 7) != 0 )
                                          {
                                            v3 = 225;
                                            goto LABEL_67;
                                          }
                                          v6 = (unsigned int *)a1;
                                          if ( (unsigned __int64)v60 < a1 || (v61 = v88, (unsigned __int64)v60 >= v88) )
                                          {
                                            v3 = 230;
                                            goto LABEL_67;
                                          }
                                          v62 = v50[6];
                                          if ( (unsigned int)v62 < 0x18 )
                                          {
                                            v3 = 240;
                                            goto LABEL_67;
                                          }
                                          v63 = (char *)v60 + v62 - 1;
                                          if ( (unsigned __int64)v63 < a1 || (unsigned __int64)v63 >= v88 )
                                          {
                                            v3 = 245;
                                            goto LABEL_67;
                                          }
                                          if ( *v60 != 3 )
                                          {
                                            v3 = 250;
                                            goto LABEL_67;
                                          }
                                          v64 = v60[1];
                                          if ( v64 > 0x84000 )
                                          {
                                            v3 = 260;
                                            goto LABEL_67;
                                          }
                                          v65 = *(_DWORD *)(a1 + 124);
                                          v66 = 0;
                                          if ( v65 )
                                          {
                                            v67 = v50 + 9;
                                            v68 = v65;
                                            do
                                            {
                                              v69 = *v67 + v67[7];
                                              ++v67;
                                              v66 += v69;
                                              --v68;
                                            }
                                            while ( v68 );
                                            v61 = v88;
                                          }
                                          if ( v66 != v64 )
                                          {
                                            v3 = 265;
                                            goto LABEL_67;
                                          }
                                          v70 = 24;
                                          if ( v64 )
                                            v70 = 8 * v64 + 16;
                                          if ( v70 != (_DWORD)v62 )
                                          {
                                            v3 = 270;
                                            goto LABEL_67;
                                          }
                                          v71 = v50[8];
                                          if ( v71 > 0x80000 )
                                          {
                                            v3 = 280;
                                            goto LABEL_67;
                                          }
                                          v72 = 0;
                                          if ( v65 )
                                          {
                                            v73 = v50 + 16;
                                            v74 = *(unsigned int *)(a1 + 124);
                                            do
                                            {
                                              v72 += *v73++;
                                              --v74;
                                            }
                                            while ( v74 );
                                          }
                                          if ( v72 != v71 )
                                          {
                                            v3 = 281;
                                            goto LABEL_67;
                                          }
                                          v47 += v72;
                                          v75 = (_WORD *)(v86 + v50[7]);
                                          if ( ((unsigned __int8)v75 & 1) != 0 )
                                          {
                                            v3 = 283;
                                            goto LABEL_67;
                                          }
                                          v76 = 0;
                                          if ( v71 )
                                          {
                                            while ( (unsigned __int64)v75 >= a1 && (unsigned __int64)v75 < v61 )
                                            {
                                              if ( (unsigned __int64)v75 + 3 < a1 || (unsigned __int64)v75 + 3 >= v61 )
                                              {
                                                v3 = 290;
                                                goto LABEL_67;
                                              }
                                              if ( *v75 >= 0x400u )
                                              {
                                                v3 = 300;
                                                goto LABEL_67;
                                              }
                                              v77 = &v75[(unsigned __int16)*v75];
                                              if ( (unsigned __int64)v77 + 3 < a1 || (unsigned __int64)v77 + 3 >= v61 )
                                              {
                                                v3 = 310;
                                                goto LABEL_67;
                                              }
                                              if ( v77[1] )
                                              {
                                                v3 = 320;
                                                goto LABEL_67;
                                              }
                                              ++v76;
                                              v75 = v77 + 2;
                                              if ( v76 >= v71 )
                                                goto LABEL_128;
                                            }
                                            v3 = 285;
                                            goto LABEL_67;
                                          }
LABEL_128:
                                          v46 = *(_DWORD *)(a1 + 112);
                                          if ( v48 >= v46 )
                                            goto LABEL_129;
                                          v45 = v86;
                                        }
                                        while ( !PfMetadataRecordIsEqual(v49 + 96LL * v51, &v95, v52) )
                                        {
                                          v51 = v79 + 1;
                                          if ( v51 >= v80 )
                                            goto LABEL_86;
                                        }
                                        v3 = 192;
                                      }
                                      else
                                      {
LABEL_129:
                                        if ( v47 == v6[30] )
                                        {
                                          if ( v47 > 0x80000 )
                                          {
                                            v3 = 340;
                                          }
                                          else
                                          {
                                            v78 = v6[55];
                                            if ( ((_DWORD)v78 == 0) == (v6[56] == 0) )
                                            {
                                              if ( (_DWORD)v78
                                                && StringCbLengthW((STRSAFE_PCNZWCH)((char *)v6 + v78), v6[56], 0LL) < 0 )
                                              {
                                                v3 = 360;
                                              }
                                              else
                                              {
                                                v4 = 1;
                                              }
                                            }
                                            else
                                            {
                                              v3 = 350;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                    }
                                    goto LABEL_67;
                                  }
                                  v24 = v93;
                                  v19 = v98;
                                  v14 = v95;
                                }
                                v38 = *v26;
                                v39 = (int)(v31 + v30);
                                v40 = (int *)(v96 + 4 + 8 * v31);
                                while ( 1 )
                                {
                                  v41 = v36;
                                  if ( v38 < 0 || v34 >= v89 )
                                    break;
                                  if ( v34 != (_DWORD)v31 && *(v40 - 1) <= (unsigned int)*(v40 - 3) )
                                  {
                                    v3 = 165;
                                    goto LABEL_67;
                                  }
                                  v42 = *v40;
                                  if ( (*v40 & 1) == 0 && (((unsigned int)*v40 >> 4) & 7) > v90 )
                                  {
                                    v3 = 167;
                                    goto LABEL_67;
                                  }
                                  if ( (v42 & 0xE) == 0 )
                                  {
                                    v3 = 173;
                                    goto LABEL_67;
                                  }
                                  if ( (*v40 & 1) != 0 )
                                  {
                                    if ( (v42 & 8) != 0 )
                                    {
                                      v3 = 175;
                                      goto LABEL_67;
                                    }
                                  }
                                  else
                                  {
                                    ++v35;
                                    v44 = 1 << (((unsigned int)*v40 >> 4) & 7);
                                    if ( (v42 & 4) != 0 )
                                      v83 |= v44;
                                    v36 |= v44;
                                    if ( (v42 & 2) == 0 )
                                      v36 = v41;
                                  }
                                  ++v34;
                                  ++v38;
                                  v40 += 2;
                                  if ( v38 >= v39 )
                                  {
                                    v26 = v97;
                                    v37 = v83;
                                    v33 = v91;
                                    v25 = v84;
                                    v15 = (char *)v88;
                                    goto LABEL_75;
                                  }
                                }
                                v3 = 160;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v3 = 37;
          }
        }
        else
        {
          v3 = 33;
        }
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 20;
  }
LABEL_67:
  *a3 = v3;
  return v4;
}
