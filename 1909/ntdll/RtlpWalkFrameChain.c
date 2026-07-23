/*
 * XREFs of RtlpWalkFrameChain @ 0x18001F4F0
 * Callers:
 *     RtlWalkFrameChain @ 0x180074D40 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpSameFunction @ 0x18000108C (RtlpSameFunction.c)
 *     RtlpPopUserShadowStack @ 0x18001EA30 (RtlpPopUserShadowStack.c)
 *     RtlpGetStackLimits @ 0x18001EE1C (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800202C0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBounds @ 0x18006AC2C (RtlpIsFrameInBounds.c)
 *     RtlLocateExtendedFeature2 @ 0x180074490 (RtlLocateExtendedFeature2.c)
 *     RtlpUnwindOpSlots @ 0x18008300C (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext @ 0x1800A0E60 (RtlpCaptureContext.c)
 *     RtlpUnwindEpilogue @ 0x1800FB5D8 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v4; // di
  unsigned int v5; // ebx
  _BYTE *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int8 *v8; // rax
  unsigned int v9; // edi
  BOOL v10; // edi
  _BYTE *k; // rcx
  unsigned int v12; // esi
  char *v13; // r13
  unsigned int *v14; // rax
  __int64 v15; // rbx
  char v16; // r12
  unsigned int v17; // r14d
  _BYTE *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r9
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rcx
  char *v26; // rcx
  int v27; // edx
  int v28; // eax
  unsigned int v29; // r14d
  unsigned int *v30; // r12
  NTSTATUS VirtualMemory; // eax
  __int64 v32; // r10
  _BYTE *v33; // rcx
  unsigned __int8 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // r13
  char v37; // r9
  unsigned int v38; // r14d
  bool v39; // zf
  int v40; // eax
  char v41; // dl
  unsigned __int8 v42; // cl
  int v43; // eax
  unsigned __int8 v44; // al
  __int64 v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rcx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int16 v54; // ax
  unsigned int v55; // r11d
  int v56; // r10d
  unsigned int j; // r8d
  unsigned __int16 v58; // ax
  int v59; // edx
  __int64 v60; // rax
  _DWORD *v61; // rax
  unsigned int v62; // ecx
  char *v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rcx
  char v66; // al
  char *v67; // r8
  char v69; // [rsp+40h] [rbp-618h]
  unsigned __int64 v70; // [rsp+60h] [rbp-5F8h] BYREF
  char *v71; // [rsp+68h] [rbp-5F0h] BYREF
  unsigned __int16 v72; // [rsp+70h] [rbp-5E8h]
  int v73; // [rsp+74h] [rbp-5E4h]
  int v74; // [rsp+78h] [rbp-5E0h]
  unsigned int i; // [rsp+7Ch] [rbp-5DCh]
  NTSTATUS v76; // [rsp+80h] [rbp-5D8h]
  unsigned int v77; // [rsp+84h] [rbp-5D4h]
  int v78; // [rsp+88h] [rbp-5D0h]
  char *v79; // [rsp+90h] [rbp-5C8h]
  int v80; // [rsp+98h] [rbp-5C0h]
  int v81; // [rsp+9Ch] [rbp-5BCh]
  int v82; // [rsp+A0h] [rbp-5B8h]
  unsigned int v83; // [rsp+A4h] [rbp-5B4h]
  unsigned int v84; // [rsp+A8h] [rbp-5B0h]
  unsigned int v85; // [rsp+ACh] [rbp-5ACh]
  unsigned int *v86; // [rsp+B0h] [rbp-5A8h]
  __int128 v87; // [rsp+B8h] [rbp-5A0h]
  __int64 v88; // [rsp+C8h] [rbp-590h]
  _BYTE *v89; // [rsp+D0h] [rbp-588h]
  char *v90; // [rsp+D8h] [rbp-580h]
  char *v91; // [rsp+E0h] [rbp-578h]
  unsigned int *v92; // [rsp+E8h] [rbp-570h]
  __int64 v93; // [rsp+F0h] [rbp-568h]
  _BYTE *v94; // [rsp+100h] [rbp-558h]
  unsigned int *v95; // [rsp+118h] [rbp-540h]
  _BYTE MemoryInformation[48]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v97[48]; // [rsp+150h] [rbp-508h] BYREF
  int v98; // [rsp+180h] [rbp-4D8h]
  _QWORD v99[4]; // [rsp+1C8h] [rbp-490h]
  char *v100; // [rsp+1E8h] [rbp-470h]
  PVOID BaseAddress; // [rsp+248h] [rbp-410h]
  _QWORD v102[102]; // [rsp+2F0h] [rbp-368h]
  __int64 v103; // [rsp+620h] [rbp-38h] BYREF

  v84 = a4;
  v85 = a2;
  v93 = a1;
  if ( RtlpGetStackLimits(&v70, (void **)&v71) )
  {
    RtlpCaptureContext(v97);
    v4 = 0;
    v69 = 0;
    v5 = 0;
    v77 = 0;
    v87 = xmmword_18017A500;
    v88 = qword_18017A510;
    while ( 1 )
    {
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v70, v100, &v71) )
        return v5;
      v30 = (unsigned int *)RtlpLookupFunctionEntryForStackWalks(BaseAddress);
      v86 = v30;
      v95 = v30;
      if ( !v30 )
        return v5;
      VirtualMemory = 0;
      v76 = 0;
      v32 = *((_QWORD *)&v87 + 1);
      v33 = (_BYTE *)(*((_QWORD *)&v87 + 1) + v30[2]);
      v94 = v33;
      if ( !v33[2] && !v33[1] && (*v33 & 0x20) == 0 )
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          BaseAddress,
                          MemoryBasicInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        v76 = VirtualMemory;
        if ( VirtualMemory >= 0 )
        {
          if ( (MemoryInformation[36] & 0x40) != 0 )
            VirtualMemory = -1073741823;
          v76 = VirtualMemory;
        }
        v32 = *((_QWORD *)&v87 + 1);
      }
      if ( VirtualMemory < 0 )
        return v5;
      v34 = (unsigned __int8 *)BaseAddress;
      v92 = v30;
      v35 = 0LL;
      v78 = 0;
      v36 = v32 + v30[2];
      v37 = *(_BYTE *)v36;
      v38 = *(_BYTE *)v36 & 7;
      if ( !v4 )
        goto LABEL_60;
      if ( v38 < 2 )
      {
        v6 = (_BYTE *)(v32 + v30[2]);
        v7 = 0LL;
        v81 = 0;
        v8 = (unsigned __int8 *)(v36 + 2);
        if ( !*(_BYTE *)(v36 + 2) )
          break;
      }
LABEL_5:
      v9 = (_DWORD)BaseAddress - DWORD2(v87) - *v30;
      if ( (*(_BYTE *)(v36 + 3) & 0xF) == 0 )
        goto LABEL_6;
      if ( v9 >= *(unsigned __int8 *)(v36 + 1) || (v37 & 0x20) != 0 )
      {
        v42 = *(_BYTE *)(v36 + 3);
        v43 = v42;
      }
      else
      {
        v64 = 0LL;
        for ( i = 0; ; i = v64 )
        {
          v7 = (unsigned int)v64;
          if ( (unsigned int)v64 >= *(unsigned __int8 *)(v36 + 2) )
            break;
          v65 = *(unsigned __int16 *)(v36 + 2 * v64 + 4);
          v72 = v65;
          if ( (BYTE1(v65) & 0xF) == 3 )
            break;
          v64 = (unsigned int)RtlpUnwindOpSlots(v65, (unsigned int)v64) + (unsigned int)v64;
        }
        v32 = *((_QWORD *)&v87 + 1);
        if ( v9 < *(unsigned __int8 *)(v36 + 2LL * (unsigned int)v64 + 4) )
        {
LABEL_6:
          v79 = v100;
          goto LABEL_7;
        }
        v43 = *(unsigned __int8 *)(v36 + 3);
        v42 = *(_BYTE *)(v36 + 3);
      }
      v79 = (char *)(v99[v42 & 0xF] - (v43 & 0xFFFFFFF0));
LABEL_7:
      if ( !(_DWORD)v35 )
      {
        v10 = 0;
        if ( v38 >= 2 )
        {
          if ( *(_BYTE *)(v36 + 2) )
          {
            v54 = *(_WORD *)(v36 + 4);
            v72 = v54;
            v7 = v54;
            LOWORD(v7) = HIBYTE(v54);
            if ( (HIBYTE(v54) & 0xF) == 6 )
            {
              v55 = (unsigned __int8)v54;
              v56 = (_DWORD)v34 - DWORD2(v87);
              if ( (v54 & 0x1000) != 0 )
              {
                v7 = v30[1] - (unsigned __int8)v54;
                v74 = v7;
                v10 = v56 - (int)v7 < (unsigned int)(unsigned __int8)v54;
              }
              else
              {
                v7 = 0LL;
                v74 = 0;
              }
              if ( v10 )
              {
LABEL_185:
                RtlpUnwindEpilogue(
                  DWORD2(v87),
                  v7,
                  v56 - v7,
                  (_DWORD)v30,
                  (__int64)v97,
                  0LL,
                  (__int64)&v70,
                  (__int64)&v71);
LABEL_186:
                v69 = 0;
                goto LABEL_49;
              }
              for ( j = 1; ; ++j )
              {
                i = j;
                if ( j >= *(unsigned __int8 *)(v36 + 2) )
                  break;
                v58 = *(_WORD *)(v36 + 2LL * j + 4);
                v72 = v58;
                if ( (HIBYTE(v58) & 0xF) != 6 )
                  break;
                v59 = HIBYTE(v58) >> 4 << 8;
                v39 = (unsigned __int8)v58 + v59 == 0;
                v7 = (unsigned int)(unsigned __int8)v58 + v59;
                v74 = v7;
                if ( v39 )
                  break;
                v7 = v30[1] - (unsigned int)v7;
                v74 = v7;
                if ( v56 - (int)v7 < v55 )
                  goto LABEL_185;
              }
            }
          }
          goto LABEL_21;
        }
        k = v34;
        v82 = 0;
        if ( *v34 != 72 )
        {
LABEL_10:
          if ( (*v34 & 0xFE) != 0x48 )
            goto LABEL_11;
          if ( v34[1] != 0x8D )
            goto LABEL_11;
          v7 = v34[2];
          v40 = v34[2] & 7;
          v39 = (v40 | (8 * (*v34 & 1))) == 0;
          v35 = v40 | (8 * (*v34 & 1u));
          v82 = v40 | (8 * (*v34 & 1));
          if ( v39 || (_DWORD)v35 != (*(_BYTE *)(v36 + 3) & 0xF) )
            goto LABEL_11;
          v41 = v7 & 0xF8;
          if ( v41 != 96 )
          {
            if ( v41 == -96 )
              goto LABEL_66;
            goto LABEL_11;
          }
LABEL_84:
          k = v34 + 4;
          goto LABEL_11;
        }
        if ( v34[1] == 0x83 && v34[2] == 0xC4 )
          goto LABEL_84;
        if ( *v34 != 72 || v34[1] != 0x81 || v34[2] != 0xC4 )
          goto LABEL_10;
LABEL_66:
        for ( k = v34 + 7; ; k += 2 )
        {
LABEL_11:
          while ( 1 )
          {
            LOBYTE(v7) = *k;
            if ( (*k & 0xF8) != 0x58 )
              break;
            ++k;
          }
          if ( (v7 & 0xF0) != 0x40 || (k[1] & 0xF8) != 0x58 )
            break;
        }
        if ( (_BYTE)v7 == 0xF2 )
          LOBYTE(v7) = *++k;
        if ( (unsigned __int8)(v7 + 62) <= 1u || (_BYTE)v7 == 0xF3 && k[1] == 0xC3 )
        {
LABEL_72:
          v10 = 1;
          goto LABEL_20;
        }
        if ( (((_BYTE)v7 + 23) & 0xFD) != 0 )
        {
          if ( (_BYTE)v7 == 0xFF && k[1] == 37 )
          {
LABEL_85:
            if ( (*v34 & 0xF8) == 0x48 )
            {
              v44 = v34[1];
              switch ( v44 )
              {
                case 0x83:
                  v100 += (char)v34[3];
                  goto LABEL_88;
                case 0x81:
                  v100 += ((v34[4] | (*(unsigned __int16 *)(v34 + 5) << 8)) << 8) | v34[3];
                  goto LABEL_166;
                case 0x8D:
                  v66 = v34[2] & 0xF8;
                  if ( v66 == 96 )
                  {
                    v100 = (char *)v99[v35];
                    v100 += (char)v34[3];
LABEL_88:
                    v34 += 4;
                  }
                  else if ( v66 == -96 )
                  {
                    v100 = (char *)(v99[v35] + (((v34[4] | (*(unsigned __int16 *)(v34 + 5) << 8)) << 8) | v34[3]));
LABEL_166:
                    v34 += 7;
                  }
                  break;
              }
            }
            while ( 1 )
            {
              while ( (*v34 & 0xF8) == 0x58 )
              {
                if ( (unsigned __int64)v100 < v70 || v100 > v71 - 8 )
                  goto LABEL_184;
                v99[*v34 & 7] = *(_QWORD *)v100;
                v100 += 8;
                ++v34;
              }
              if ( (*v34 & 0xF0) != 0x40 || (v34[1] & 0xF8) != 0x58 )
                break;
              if ( (unsigned __int64)v100 < v70 || v100 > v71 - 8 )
                goto LABEL_184;
              v99[v34[1] & 7 | (8LL * (*v34 & 1))] = *(_QWORD *)v100;
              v100 += 8;
              v34 += 2;
            }
            if ( (unsigned __int64)v100 < v70 || v100 > v71 - 8 )
              goto LABEL_184;
            BaseAddress = *(PVOID *)v100;
            v100 += 8;
            RtlpPopUserShadowStack((__int64)v97);
            goto LABEL_186;
          }
          LOBYTE(v7) = v7 & 0xF8;
          if ( (_BYTE)v7 != 72 || k[1] != 0xFF )
            goto LABEL_20;
          v39 = (k[2] & 0x38) == 32;
LABEL_71:
          if ( v39 )
            goto LABEL_72;
        }
        else
        {
          v89 = &k[-v32];
          if ( (_BYTE)v7 == 0xEB )
            v46 = (char)k[1] + 2;
          else
            v46 = *(_DWORD *)(k + 1) + 5;
          v47 = (unsigned __int64)&k[v46 - v32];
          v89 = (_BYTE *)v47;
          v48 = *v30;
          if ( v47 < v48 || v47 >= v30[1] )
          {
            v61 = RtlpSameFunction((__int64)v30, v32, (void *)(v47 + v32));
            if ( !v61 )
              goto LABEL_72;
            v39 = v47 == *v61;
            goto LABEL_71;
          }
          if ( v47 == v48 )
          {
            v39 = (*(_BYTE *)v36 & 0x20) == 0;
            goto LABEL_71;
          }
        }
LABEL_20:
        if ( v10 )
          goto LABEL_85;
      }
LABEL_21:
      v12 = 0;
      v83 = 0;
      v13 = v79;
      v14 = v30;
      while ( 2 )
      {
        v15 = 0LL;
        v16 = 0;
        v17 = (_DWORD)v34 - *v14 - DWORD2(v87);
        v18 = (_BYTE *)(*((_QWORD *)&v87 + 1) + v14[2]);
        while ( 1 )
        {
          v19 = (unsigned __int8)v18[2];
          if ( (unsigned int)v15 >= (unsigned int)v19 )
            break;
          v20 = v18[2 * v15 + 5] & 0xF;
          v21 = (unsigned __int8)v18[2 * v15 + 5] >> 4;
          if ( v17 < (unsigned __int8)v18[2 * v15 + 4] )
          {
            v15 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)&v18[2 * v15 + 4], v7) + (unsigned int)v15;
          }
          else
          {
            if ( v20 > 5 )
            {
              v49 = v20 - 6;
              if ( v49 )
              {
                v50 = v49 - 1;
                if ( v50 )
                {
                  v51 = v50 - 1;
                  if ( !v51 )
                  {
                    v15 = (unsigned int)(v15 + 1);
                    v7 = (unsigned __int64)&v13[16 * *(unsigned __int16 *)&v18[2 * v15 + 4]];
                    if ( v7 < v70 || v7 > (unsigned __int64)(v71 - 16) )
                      goto LABEL_184;
                    v52 = 2LL * (unsigned int)v21;
                    v102[2 * (unsigned int)v21] = *(_QWORD *)v7;
                    v53 = *(_QWORD *)(v7 + 8);
LABEL_122:
                    v102[v52 + 1] = v53;
                    goto LABEL_42;
                  }
                  v62 = v51 - 1;
                  if ( !v62 )
                  {
                    v15 = (unsigned int)(v15 + 2);
                    v7 = (*(unsigned __int16 *)&v18[2 * v15 + 4] << 16)
                       + (unsigned int)*(unsigned __int16 *)&v18[2 * (unsigned int)(v15 - 1) + 4];
                    v67 = &v13[(unsigned int)v7];
                    if ( (unsigned __int64)v67 < v70 || v67 > v71 - 16 )
                      goto LABEL_184;
                    v52 = 2LL * (unsigned int)v21;
                    v102[2 * (unsigned int)v21] = *(_QWORD *)v67;
                    v53 = *((_QWORD *)v67 + 1);
                    goto LABEL_122;
                  }
                  if ( v62 != 1 )
LABEL_190:
                    RtlRaiseStatus(-1073741569);
                  v16 = 1;
                  v63 = v100;
                  v90 = v100;
                  v7 = (unsigned __int64)(v100 + 24);
                  v91 = v100 + 24;
                  if ( (_DWORD)v21 )
                  {
                    v63 = v100 + 8;
                    v90 = v100 + 8;
                    v7 = (unsigned __int64)(v100 + 32);
                    v91 = v100 + 32;
                  }
                  if ( (unsigned __int64)v63 < v70 || v63 > v71 - 8 || v7 < v70 || v7 > (unsigned __int64)(v71 - 8) )
                    goto LABEL_184;
                  BaseAddress = *(PVOID *)v63;
                  v100 = *(char **)v7;
                }
                else
                {
                  LODWORD(v15) = v15 + 2;
                }
              }
              else
              {
                LODWORD(v15) = v15 + 1;
              }
            }
            else
            {
              if ( v20 == 5 )
              {
                v15 = (unsigned int)(v15 + 2);
                v7 = (*(unsigned __int16 *)&v18[2 * v15 + 4] << 16)
                   + (unsigned int)*(unsigned __int16 *)&v18[2 * (unsigned int)(v15 - 1) + 4];
                v25 = (unsigned int)v7;
              }
              else
              {
                if ( (v18[2 * v15 + 5] & 0xF) == 0 )
                {
                  if ( (unsigned __int64)v100 < v70 || v100 > v71 - 8 )
                    goto LABEL_184;
                  v99[v21] = *(_QWORD *)v100;
                  v100 += 8;
                  goto LABEL_42;
                }
                v22 = v20 - 1;
                if ( !v22 )
                {
                  v15 = (unsigned int)(v15 + 1);
                  v27 = *(unsigned __int16 *)&v18[2 * v15 + 4];
                  if ( (_DWORD)v21 )
                  {
                    v15 = (unsigned int)(v15 + 1);
                    v7 = (*(unsigned __int16 *)&v18[2 * v15 + 4] << 16) + v27;
                  }
                  else
                  {
                    v7 = (unsigned int)(8 * v27);
                  }
                  v100 += (unsigned int)v7;
                  goto LABEL_42;
                }
                v23 = v22 - 1;
                if ( !v23 )
                {
                  v100 += (unsigned int)(8 * v21 + 8);
                  goto LABEL_42;
                }
                v24 = v23 - 1;
                if ( !v24 )
                {
                  v100 = (char *)v99[v18[3] & 0xF];
                  v100 -= v18[3] & 0xF0;
                  goto LABEL_42;
                }
                if ( v24 != 1 )
                  goto LABEL_190;
                v15 = (unsigned int)(v15 + 1);
                v25 = 8 * (unsigned int)*(unsigned __int16 *)&v18[2 * v15 + 4];
              }
              v26 = &v13[v25];
              if ( (unsigned __int64)v26 < v70 || v26 > v71 - 8 )
                goto LABEL_184;
              v99[v21] = *(_QWORD *)v26;
            }
LABEL_42:
            v15 = (unsigned int)(v15 + 1);
          }
        }
        if ( (*v18 & 0x20) != 0 )
        {
          if ( (v19 & 1) != 0 )
            v19 = (unsigned int)(v19 + 1);
          v14 = (unsigned int *)&v18[2 * v19 + 4];
          v86 = v14;
          v83 = ++v12;
          if ( v12 > 0x20 )
            RtlRaiseStatus(-1073741569);
          continue;
        }
        break;
      }
      if ( v16 )
      {
LABEL_48:
        v69 = v16;
        v92 = v86;
LABEL_49:
        v28 = 0;
        goto LABEL_50;
      }
      if ( (unsigned __int64)v100 >= v70 && v100 <= v71 - 8 )
      {
        BaseAddress = *(PVOID *)v100;
        v100 += 8;
        if ( (v98 & 0x100040) == 0x100040 )
        {
          v45 = RtlLocateExtendedFeature2(&v103, 11LL, 2147353560LL);
          if ( v45 )
          {
            if ( (*(_BYTE *)v45 & 1) != 0 )
              *(_QWORD *)(v45 + 8) += 8LL;
          }
        }
        goto LABEL_48;
      }
LABEL_184:
      v28 = -1073741784;
LABEL_50:
      v73 = v28;
      v76 = v28;
      v5 = v77;
      v4 = v69;
      v29 = v85;
      if ( v28 >= 0 && BaseAddress )
      {
        if ( v77 >= v84 )
          *(_QWORD *)(v93 + 8LL * (v77 - v84)) = BaseAddress;
        v77 = ++v5;
        if ( v5 < v29 )
          continue;
      }
      return v5;
    }
    while ( (*v6 & 0x20) != 0 )
    {
      v60 = *v8;
      v80 = v60;
      if ( (v60 & 1) != 0 )
      {
        v60 = (unsigned int)(v60 + 1);
        v80 = v60;
      }
      v7 = (unsigned int)(v7 + 1);
      v81 = v7;
      if ( (unsigned int)v7 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v6 = (_BYTE *)(v32 + *(unsigned int *)&v6[2 * v60 + 12]);
      v8 = v6 + 2;
      if ( v6[2] )
        goto LABEL_5;
    }
LABEL_60:
    v35 = 1LL;
    v78 = 1;
    goto LABEL_5;
  }
  return 0LL;
}
