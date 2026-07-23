/*
 * XREFs of RtlpWalkFrameChain @ 0x1800038B0
 * Callers:
 *     RtlWalkFrameChain @ 0x180003830 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpSameFunction @ 0x180002E70 (RtlpSameFunction.c)
 *     RtlpPopUserShadowStack @ 0x180003738 (RtlpPopUserShadowStack.c)
 *     RtlpGetStackLimits @ 0x180003870 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180004720 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLocateExtendedFeature2 @ 0x1800083F0 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009F448 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009F66C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x1800A0760 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext @ 0x1800A42B0 (RtlpCaptureContext.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r15
  _BYTE *v10; // rdx
  unsigned int v11; // ecx
  unsigned __int8 *v12; // rax
  unsigned int v13; // ebx
  unsigned __int8 v14; // dl
  _BYTE *v15; // rdx
  __int64 v16; // rsi
  char v17; // cl
  char v18; // cl
  int v19; // edi
  unsigned int v20; // r12d
  __int64 v21; // rbx
  char v22; // r14
  unsigned int v23; // esi
  _BYTE *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  char *v29; // rcx
  NTSTATUS VirtualMemory; // eax
  char *v31; // r12
  unsigned int *v32; // r13
  __int64 v33; // r10
  _BYTE *v34; // rcx
  char *v35; // r11
  int v36; // edi
  __int64 v37; // r14
  char v38; // r8
  unsigned int v39; // esi
  int v40; // edx
  unsigned int v41; // edx
  char v42; // cl
  int v43; // eax
  int v44; // eax
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  char v47; // r8
  int v48; // eax
  char v49; // r8
  __int64 v50; // rax
  unsigned __int8 v51; // r9
  unsigned __int16 v52; // ax
  int v53; // edx
  unsigned int v54; // r11d
  int v55; // r10d
  int v56; // ecx
  unsigned int j; // r8d
  unsigned __int16 v58; // ax
  int v59; // edx
  bool v60; // zf
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  char v63; // al
  char v64; // r8
  __int64 v65; // r9
  _BYTE *v66; // r9
  _DWORD *v67; // rax
  char v68; // r9
  char *v69; // rdx
  char *v70; // rcx
  __int64 v71; // r15
  __int64 v72; // rcx
  unsigned int v73; // eax
  char v74; // al
  int v75; // edx
  _QWORD *v76; // r9
  __int64 v77; // rcx
  char v79; // [rsp+40h] [rbp-618h]
  unsigned __int64 v80; // [rsp+50h] [rbp-608h] BYREF
  char v81; // [rsp+58h] [rbp-600h]
  int v82; // [rsp+5Ch] [rbp-5FCh]
  _BYTE *v83; // [rsp+60h] [rbp-5F8h]
  unsigned __int16 v84; // [rsp+68h] [rbp-5F0h]
  NTSTATUS v85; // [rsp+6Ch] [rbp-5ECh]
  char *v86; // [rsp+70h] [rbp-5E8h] BYREF
  int v87; // [rsp+78h] [rbp-5E0h]
  unsigned int i; // [rsp+7Ch] [rbp-5DCh]
  int v89; // [rsp+80h] [rbp-5D8h]
  int v90; // [rsp+84h] [rbp-5D4h]
  unsigned __int64 v91; // [rsp+88h] [rbp-5D0h]
  char *v92; // [rsp+90h] [rbp-5C8h]
  int v93; // [rsp+98h] [rbp-5C0h]
  __int128 v94; // [rsp+A0h] [rbp-5B8h]
  __int64 v95; // [rsp+B0h] [rbp-5A8h]
  int v96; // [rsp+B8h] [rbp-5A0h]
  unsigned int v97; // [rsp+BCh] [rbp-59Ch]
  int v98; // [rsp+C0h] [rbp-598h]
  unsigned int v99; // [rsp+C4h] [rbp-594h]
  unsigned int v100; // [rsp+C8h] [rbp-590h]
  unsigned int v101; // [rsp+CCh] [rbp-58Ch]
  _BYTE *v102; // [rsp+D0h] [rbp-588h]
  unsigned __int64 v103; // [rsp+D8h] [rbp-580h]
  unsigned __int64 v104; // [rsp+E0h] [rbp-578h]
  unsigned int *v105; // [rsp+E8h] [rbp-570h]
  __int64 v106; // [rsp+F0h] [rbp-568h]
  _BYTE *v107; // [rsp+100h] [rbp-558h]
  unsigned int *v108; // [rsp+118h] [rbp-540h]
  _BYTE MemoryInformation[48]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v110[48]; // [rsp+150h] [rbp-508h] BYREF
  int v111; // [rsp+180h] [rbp-4D8h]
  _QWORD v112[4]; // [rsp+1C8h] [rbp-490h]
  unsigned __int64 v113; // [rsp+1E8h] [rbp-470h]
  PVOID BaseAddress; // [rsp+248h] [rbp-410h]
  _QWORD v115[102]; // [rsp+2F0h] [rbp-368h]
  __int64 v116; // [rsp+620h] [rbp-38h] BYREF

  v4 = a4;
  v100 = a4;
  v5 = a2;
  v101 = a2;
  v6 = a1;
  v106 = a1;
  if ( !RtlpGetStackLimits(&v80, (void **)&v86) )
    return 0LL;
  RtlpCaptureContext(v110);
  v79 = 0;
  v7 = 0;
  v90 = 0;
  v94 = xmmword_180178500;
  v95 = qword_180178510;
  v8 = v80;
  v9 = v113;
LABEL_54:
  if ( (v9 & 7) != 0 )
    return v7;
  if ( v9 < v8 )
    return v7;
  v31 = v86;
  if ( v9 >= (unsigned __int64)v86 )
    return v7;
  v32 = (unsigned int *)RtlpLookupFunctionEntryForStackWalks(BaseAddress);
  v108 = v32;
  if ( !v32 )
    return v7;
  VirtualMemory = 0;
  v89 = 0;
  v33 = *((_QWORD *)&v94 + 1);
  v34 = (_BYTE *)(*((_QWORD *)&v94 + 1) + v32[2]);
  v107 = v34;
  if ( v34[2] || v34[1] || (*v34 & 0x20) != 0 )
  {
LABEL_59:
    if ( VirtualMemory < 0 )
    {
      v9 = v113;
      v8 = v80;
      goto LABEL_49;
    }
    v35 = (char *)BaseAddress;
    v92 = (char *)BaseAddress;
    v105 = v32;
    v36 = 0;
    v93 = 0;
    v37 = v33 + v32[2];
    v38 = *(_BYTE *)v37;
    v39 = *(_BYTE *)v37 & 7;
    if ( v79 )
    {
      if ( v39 >= 2
        || (v10 = (_BYTE *)(v33 + v32[2]), v11 = 0, v97 = 0, v12 = (unsigned __int8 *)(v37 + 2), *(_BYTE *)(v37 + 2)) )
      {
LABEL_5:
        v13 = (_DWORD)BaseAddress - DWORD2(v94) - *v32;
        v14 = *(_BYTE *)(v37 + 3);
        if ( (v14 & 0xF) == 0 )
        {
          v9 = v113;
LABEL_7:
          v91 = v9;
          goto LABEL_8;
        }
        if ( v13 >= *(unsigned __int8 *)(v37 + 1) || (v38 & 0x20) != 0 )
        {
          v42 = *(_BYTE *)(v37 + 3);
          v43 = v14;
          v9 = v113;
        }
        else
        {
          v71 = 0LL;
          for ( i = 0; (unsigned int)v71 < *(unsigned __int8 *)(v37 + 2); i = v71 )
          {
            v72 = *(unsigned __int16 *)(v37 + 2 * v71 + 4);
            v84 = v72;
            if ( (BYTE1(v72) & 0xF) == 3 )
              break;
            v71 = (unsigned int)RtlpUnwindOpSlots(v72, (unsigned int)v71) + (unsigned int)v71;
          }
          v73 = *(unsigned __int8 *)(v37 + 2 * v71 + 4);
          v9 = v113;
          v33 = *((_QWORD *)&v94 + 1);
          v35 = v92;
          if ( v13 < v73 )
            goto LABEL_7;
          v43 = *(unsigned __int8 *)(v37 + 3);
          v42 = *(_BYTE *)(v37 + 3);
        }
        v91 = v112[v42 & 0xF] - (v43 & 0xFFFFFFF0);
LABEL_8:
        if ( v36 )
          goto LABEL_22;
        v82 = 0;
        if ( v39 >= 2 )
        {
          v51 = *(_BYTE *)(v37 + 2);
          if ( !v51 )
            goto LABEL_22;
          v52 = *(_WORD *)(v37 + 4);
          v84 = v52;
          v53 = v52;
          LOWORD(v53) = HIBYTE(v52);
          v19 = DWORD2(v94);
          if ( (HIBYTE(v52) & 0xF) == 6 )
          {
            v54 = (unsigned __int8)v52;
            v55 = (_DWORD)v92 - DWORD2(v94);
            if ( (v52 & 0x1000) == 0 )
            {
              v87 = 0;
              goto LABEL_98;
            }
            v56 = v32[1] - (unsigned __int8)v52;
            v87 = v56;
            if ( v55 - v56 >= (unsigned int)(unsigned __int8)v52 )
            {
LABEL_98:
              for ( j = 1; ; ++j )
              {
                i = j;
                if ( j >= v51 )
                  goto LABEL_23;
                v58 = *(_WORD *)(v37 + 2LL * j + 4);
                v84 = v58;
                if ( (HIBYTE(v58) & 0xF) != 6 )
                  goto LABEL_23;
                v59 = HIBYTE(v58) >> 4 << 8;
                v60 = (unsigned __int8)v58 + v59 == 0;
                v53 = (unsigned __int8)v58 + v59;
                v87 = v53;
                if ( v60 )
                  goto LABEL_23;
                v56 = v32[1] - v53;
                v87 = v56;
                if ( v55 - v56 < v54 )
                  break;
              }
            }
            v82 = 1;
            RtlpUnwindEpilogue(
              DWORD2(v94),
              v53,
              v55 - v56,
              (_DWORD)v32,
              (__int64)v110,
              0LL,
              (__int64)&v80,
              (__int64)&v86);
LABEL_185:
            v79 = 0;
            v9 = v113;
            v8 = v80;
          }
          else
          {
LABEL_23:
            v20 = 0;
            v99 = 0;
            while ( 1 )
            {
              v21 = 0LL;
              v22 = 0;
              v81 = 0;
              v23 = (_DWORD)v92 - *v32 - v19;
              v24 = (_BYTE *)(*((_QWORD *)&v94 + 1) + v32[2]);
              while ( 1 )
              {
                v25 = (unsigned __int8)v24[2];
                if ( (unsigned int)v21 >= (unsigned int)v25 )
                  break;
                v26 = (unsigned __int8)v24[2 * v21 + 5] >> 4;
                v27 = &v24[2 * v21];
                if ( v23 < (unsigned __int8)v27[4] )
                {
                  v21 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v27 + 2), v27) + (unsigned int)v21;
                  v9 = v113;
                }
                else
                {
                  if ( (v24[2 * v21 + 5] & 0xF) != 0 )
                  {
                    if ( (v24[2 * v21 + 5] & 0xF) != 4 )
                    {
                      switch ( v24[2 * v21 + 5] & 0xF )
                      {
                        case 1:
                          v21 = (unsigned int)(v21 + 1);
                          v40 = *(unsigned __int16 *)&v24[2 * v21 + 4];
                          if ( (_DWORD)v26 )
                          {
                            v21 = (unsigned int)(v21 + 1);
                            v41 = (*(unsigned __int16 *)&v24[2 * v21 + 4] << 16) + v40;
                          }
                          else
                          {
                            v41 = 8 * v40;
                          }
                          v9 += v41;
                          goto LABEL_31;
                        case 2:
                          v9 += (unsigned int)(8 * v26 + 8);
                          goto LABEL_31;
                        case 3:
                          v113 = v112[v24[3] & 0xF];
                          v9 = v113 - (v24[3] & 0xF0);
                          goto LABEL_31;
                        case 5:
                          v21 = (unsigned int)(v21 + 2);
                          v28 = (*(unsigned __int16 *)&v24[2 * v21 + 4] << 16)
                              + (unsigned int)*(unsigned __int16 *)&v24[2 * (unsigned int)(v21 - 1) + 4];
                          goto LABEL_35;
                        case 6:
                          LODWORD(v21) = v21 + 1;
                          goto LABEL_32;
                        case 7:
                          LODWORD(v21) = v21 + 2;
                          goto LABEL_32;
                        case 8:
                          v21 = (unsigned int)(v21 + 1);
                          v61 = (_QWORD *)(v91 + 16 * (unsigned int)*(unsigned __int16 *)&v24[2 * v21 + 4]);
                          v8 = v80;
                          if ( (unsigned __int64)v61 < v80 || v61 > (_QWORD *)v86 - 2 )
                            goto LABEL_183;
                          v62 = 2LL * (unsigned int)v26;
                          v115[v62] = *v61;
                          v115[v62 + 1] = v61[1];
                          v9 = v113;
                          goto LABEL_32;
                        case 9:
                          v21 = (unsigned int)(v21 + 2);
                          v76 = (_QWORD *)(v91
                                         + (*(unsigned __int16 *)&v24[2 * v21 + 4] << 16)
                                         + (unsigned int)*(unsigned __int16 *)&v24[2 * (unsigned int)(v21 - 1) + 4]);
                          v8 = v80;
                          if ( (unsigned __int64)v76 < v80 || v76 > (_QWORD *)v86 - 2 )
                            goto LABEL_183;
                          v77 = 2LL * (unsigned int)v26;
                          v115[v77] = *v76;
                          v115[v77 + 1] = v76[1];
                          goto LABEL_38;
                        case 0xA:
                          v22 = 1;
                          v81 = 1;
                          v69 = (char *)v9;
                          v103 = v9;
                          v70 = (char *)(v9 + 24);
                          v104 = v9 + 24;
                          if ( (_DWORD)v26 )
                          {
                            v69 = (char *)(v9 + 8);
                            v103 = v9 + 8;
                            v70 = (char *)(v9 + 32);
                            v104 = v9 + 32;
                          }
                          v8 = v80;
                          if ( (unsigned __int64)v69 < v80
                            || v69 > v86 - 8
                            || (unsigned __int64)v70 < v80
                            || v70 > v86 - 8 )
                          {
                            goto LABEL_183;
                          }
                          BaseAddress = *(PVOID *)v69;
                          v9 = *(_QWORD *)v70;
                          goto LABEL_31;
                        default:
                          goto LABEL_111;
                      }
                    }
                    v21 = (unsigned int)(v21 + 1);
                    v28 = 8 * (unsigned int)*(unsigned __int16 *)&v24[2 * v21 + 4];
LABEL_35:
                    v29 = (char *)(v91 + v28);
                    v8 = v80;
                    if ( (unsigned __int64)v29 < v80 || v29 > v86 - 8 )
                      goto LABEL_183;
                    v112[v26] = *(_QWORD *)v29;
LABEL_38:
                    v9 = v113;
                  }
                  else
                  {
                    v8 = v80;
                    if ( v9 < v80 || v9 > (unsigned __int64)(v86 - 8) )
                      goto LABEL_183;
                    v112[v26] = *(_QWORD *)v9;
                    v9 = v113 + 8;
LABEL_31:
                    v113 = v9;
                  }
LABEL_32:
                  v21 = (unsigned int)(v21 + 1);
                }
              }
              if ( (*v24 & 0x20) == 0 )
                break;
              if ( (v25 & 1) != 0 )
                v25 = (unsigned int)(v25 + 1);
              v32 = (unsigned int *)&v24[2 * v25 + 4];
              v99 = ++v20;
              v19 = DWORD2(v94);
              if ( v20 > 0x20 )
                goto LABEL_111;
            }
            v8 = v80;
            if ( !v22 )
            {
              if ( v9 < v80 || v9 > (unsigned __int64)(v86 - 8) )
                goto LABEL_183;
              BaseAddress = *(PVOID *)v9;
              v9 += 8LL;
              v113 = v9;
              if ( (v111 & 0x100040) == 0x100040 )
              {
                v50 = RtlLocateExtendedFeature2(&v116, 11LL, 2147353560LL);
                if ( v50 && (*(_BYTE *)v50 & 1) != 0 )
                  *(_QWORD *)(v50 + 8) += 8LL;
                v9 = v113;
                v8 = v80;
              }
            }
            v79 = v22;
            v105 = v32;
          }
          VirtualMemory = 0;
          goto LABEL_48;
        }
        v15 = v35;
        v83 = v35;
        v16 = 0LL;
        v98 = 0;
        v17 = *v35;
        if ( *v35 == 72 )
        {
          if ( v35[1] == -125 && v35[2] == -60 )
          {
            v15 = v35 + 4;
            goto LABEL_114;
          }
          if ( v35[1] == -127 && v35[2] == -60 )
            goto LABEL_161;
        }
        if ( (v17 & 0xFE) != 0x48
          || v35[1] != -115
          || (v47 = v35[2], v48 = v47 & 7, v16 = v48 | (8 * (v17 & 1u)), (v98 = v48 | (8 * (v17 & 1))) == 0)
          || (_DWORD)v16 != (*(_BYTE *)(v37 + 3) & 0xF) )
        {
          while ( 1 )
          {
LABEL_12:
            v18 = *v15;
            if ( (*v15 & 0xF8) == 0x58 )
            {
              ++v15;
            }
            else
            {
              if ( (v18 & 0xF0) != 0x40 || (v15[1] & 0xF8) != 0x58 )
              {
                if ( v18 == -14 )
                {
                  v83 = ++v15;
                  v18 = *v15;
                }
                if ( (unsigned __int8)(v18 + 62) <= 1u || v18 == -13 && v15[1] == 0xC3 )
                {
LABEL_115:
                  v82 = 1;
                  goto LABEL_116;
                }
                if ( ((v18 + 23) & 0xFD) != 0 )
                {
                  if ( v18 == -1 && v15[1] == 37 )
                    goto LABEL_115;
                  if ( (v18 & 0xF8) == 0x48 && v15[1] == 0xFF && (v15[2] & 0x38) == 0x20 )
                  {
                    v36 = 1;
                    v82 = 1;
                  }
                }
                else
                {
                  v102 = &v15[-v33];
                  if ( v18 == -21 )
                    v44 = (char)v15[1] + 2;
                  else
                    v44 = *(_DWORD *)(v15 + 1) + 5;
                  v45 = (unsigned __int64)&v15[v44 - v33];
                  v102 = (_BYTE *)v45;
                  v46 = *v32;
                  if ( v45 < v46 || v45 >= v32[1] )
                  {
                    v67 = RtlpSameFunction((__int64)v32, v33, &v15[v44]);
                    if ( !v67 || v45 == *v67 )
                    {
                      v9 = v113;
                      v35 = v92;
                      goto LABEL_115;
                    }
                    v9 = v113;
                    v35 = v92;
                  }
                  else if ( v45 == v46 && (*(_BYTE *)v37 & 0x20) == 0 )
                  {
                    v36 = 1;
                    v82 = 1;
                  }
                }
                if ( !v36 )
                {
LABEL_22:
                  v19 = DWORD2(v94);
                  goto LABEL_23;
                }
LABEL_116:
                v83 = v35;
                if ( (*v35 & 0xF8) == 0x48 )
                {
                  v63 = v35[1];
                  switch ( v63 )
                  {
                    case -125:
                      v9 += v35[3];
                      v35 += 4;
                      goto LABEL_119;
                    case -127:
                      v9 += (((unsigned __int8)v35[4] | (*(unsigned __int16 *)(v35 + 5) << 8)) << 8) | (unsigned __int8)v35[3];
                      goto LABEL_164;
                    case -115:
                      v74 = v35[2] & 0xF8;
                      if ( v74 == 96 )
                      {
                        v113 = v112[v16];
                        v9 = v113 + v35[3];
                        v35 += 4;
                        goto LABEL_119;
                      }
                      if ( v74 == -96 )
                      {
                        v75 = (unsigned __int8)v35[3] | (((unsigned __int8)v35[4] | (*(unsigned __int16 *)(v35 + 5) << 8)) << 8);
                        v113 = v112[v16];
                        v9 = v113 + v75;
LABEL_164:
                        v35 += 7;
LABEL_119:
                        v83 = v35;
                        v113 = v9;
                      }
                      break;
                  }
                }
                v8 = v80;
                while ( 2 )
                {
                  v64 = *v35;
                  if ( (*v35 & 0xF8) == 0x58 )
                  {
                    if ( v9 < v8 || v9 > (unsigned __int64)(v31 - 8) )
                      goto LABEL_183;
                    v112[v64 & 7] = *(_QWORD *)v9;
                    v9 = v113 + 8;
                    ++v35;
                    goto LABEL_151;
                  }
                  if ( (v64 & 0xF0) == 0x40 )
                  {
                    v68 = v35[1];
                    if ( (v68 & 0xF8) == 0x58 )
                    {
                      if ( v9 < v8 || v9 > (unsigned __int64)(v31 - 8) )
                        goto LABEL_183;
                      v112[v68 & 7 | (8LL * (v64 & 1))] = *(_QWORD *)v9;
                      v9 = v113 + 8;
                      v35 += 2;
LABEL_151:
                      v83 = v35;
                      v113 = v9;
                      continue;
                    }
                  }
                  break;
                }
                if ( v9 >= v8 && v9 <= (unsigned __int64)(v31 - 8) )
                {
                  BaseAddress = *(PVOID *)v9;
                  v113 = v9 + 8;
                  RtlpPopUserShadowStack((__int64)v110);
                  goto LABEL_185;
                }
LABEL_183:
                VirtualMemory = -1073741784;
LABEL_48:
                v85 = VirtualMemory;
                v89 = VirtualMemory;
                v7 = v90;
                v4 = v100;
                v5 = v101;
                v6 = v106;
LABEL_49:
                if ( VirtualMemory < 0 || !BaseAddress )
                  return v7;
                if ( v7 >= v4 )
                {
                  *(_QWORD *)(v6 + 8LL * (v7 - v4)) = BaseAddress;
                  v9 = v113;
                }
                v90 = ++v7;
                if ( v7 >= v5 )
                  return v7;
                goto LABEL_54;
              }
              v15 += 2;
            }
            v83 = v15;
          }
        }
        v49 = v47 & 0xF8;
        if ( v49 == 96 )
        {
          v15 = v35 + 4;
        }
        else
        {
          if ( v49 != -96 )
            goto LABEL_12;
LABEL_161:
          v15 = v35 + 7;
        }
LABEL_114:
        v83 = v15;
        goto LABEL_12;
      }
      while ( (*v10 & 0x20) != 0 )
      {
        v65 = *v12;
        v96 = v65;
        if ( (v65 & 1) != 0 )
        {
          v65 = (unsigned int)(v65 + 1);
          v96 = v65;
        }
        v66 = &v10[2 * v65 + 4];
        v97 = ++v11;
        if ( v11 > 0x20 )
LABEL_111:
          RtlRaiseStatus(-1073741569);
        v10 = (_BYTE *)(v33 + *((unsigned int *)v66 + 2));
        v12 = v10 + 2;
        if ( v10[2] )
          goto LABEL_5;
      }
    }
    v36 = 1;
    v93 = 1;
    goto LABEL_5;
  }
  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    MemoryBasicInformation,
                    MemoryInformation,
                    0x30uLL,
                    0LL);
  v89 = VirtualMemory;
  if ( VirtualMemory < 0 || (MemoryInformation[36] & 0x40) == 0 )
  {
    v33 = *((_QWORD *)&v94 + 1);
    goto LABEL_59;
  }
  v89 = -1073741823;
  return v7;
}
