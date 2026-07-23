/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x140830190
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     PnpStringToDwordValue @ 0x14015D2EC (PnpStringToDwordValue.c)
 *     PnpValidateRegistryMultiSz @ 0x140169A18 (PnpValidateRegistryMultiSz.c)
 *     PnpMultiSzContainsString @ 0x14016B884 (PnpMultiSzContainsString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     RtlCompareUnicodeStrings @ 0x14069C310 (RtlCompareUnicodeStrings.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x14082D7B8 (PiDevCfgCopyVariableData.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // rsi
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // r12
  int v8; // edi
  UNICODE_STRING *v9; // rbx
  UNICODE_STRING *v10; // rax
  __int64 v11; // rcx
  _QWORD *PoolWithTag; // r14
  unsigned __int16 Length; // ax
  __int16 v14; // r12
  __int64 *v15; // rdx
  wchar_t **v16; // rdx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // r9
  __int64 *v21; // r15
  size_t v22; // r14
  int v23; // esi
  wchar_t *v24; // r13
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  _WORD *v28; // rdx
  int v29; // ecx
  bool v30; // zf
  __int64 v31; // rax
  unsigned int v32; // ebx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  wchar_t *v36; // rax
  __int64 v37; // rax
  __int16 v38; // ax
  _WORD *v39; // r8
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 *v43; // rbx
  unsigned int v44; // eax
  int v45; // ecx
  SIZE_T v46; // r15
  _WORD *v47; // r14
  const WCHAR *v48; // r12
  size_t v49; // rsi
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // eax
  __int64 v56; // rax
  unsigned int v57; // esi
  unsigned __int64 v58; // rbx
  wchar_t *v59; // rax
  wchar_t *v60; // r13
  BOOL v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  unsigned int v66; // eax
  int v67; // r8d
  _WORD *v68; // rsi
  int v69; // ecx
  unsigned int v70; // ebx
  __int64 v71; // rax
  wchar_t *v72; // rax
  unsigned __int64 v73; // rsi
  _BYTE *v74; // r12
  const void *v75; // r13
  PCWSTR v76; // r15
  wchar_t *v77; // rax
  __int64 v78; // rbx
  SIZE_T v79; // r15
  wchar_t *v80; // rax
  unsigned int v81; // r9d
  int v82; // ecx
  unsigned int v83; // r8d
  int v84; // ecx
  int v85; // ecx
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  int v92; // r8d
  unsigned int v93; // r9d
  int v94; // ecx
  int v95; // ecx
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  BOOL v101; // eax
  const void *v102; // r11
  size_t v103; // r8
  int v104; // r9d
  int v105; // ecx
  const WCHAR *v106; // r14
  size_t v107; // rbx
  const void *v108; // r15
  size_t v109; // rsi
  wchar_t *v110; // rax
  wchar_t *v111; // r12
  unsigned int v112; // r8d
  unsigned int v113; // esi
  int v114; // ecx
  unsigned __int16 v115; // bx
  wchar_t *v116; // r15
  unsigned __int16 v117; // si
  int v118; // ecx
  int v119; // ecx
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  int v124; // ecx
  int v125; // ecx
  unsigned int v126; // eax
  int v127; // eax
  BOOL v128; // ecx
  wchar_t *v129; // rax
  unsigned int v130; // eax
  bool v131; // al
  _BYTE *v132; // rdx
  int v133; // ecx
  int v135; // ebx
  wchar_t *v136; // rax
  __int64 v137; // r14
  __int64 *v138; // rsi
  _QWORD *v139; // rbx
  void *v140; // rcx
  __int64 v141; // rax
  unsigned int v142; // eax
  __int64 *v143; // rbx
  __int64 v144; // r14
  _QWORD *v145; // rsi
  void *v146; // rcx
  PVOID v147; // r14
  PVOID **v148; // rbx
  __int64 v149; // rsi
  PVOID *v150; // rcx
  wchar_t *v152; // [rsp+30h] [rbp-79h]
  wchar_t *v153; // [rsp+30h] [rbp-79h]
  unsigned __int16 v154; // [rsp+38h] [rbp-71h]
  unsigned int v155; // [rsp+3Ch] [rbp-6Dh]
  unsigned __int16 v156; // [rsp+40h] [rbp-69h]
  unsigned int v157; // [rsp+58h] [rbp-51h]
  UNICODE_STRING *v158; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v159; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v160; // [rsp+6Ch] [rbp-3Dh]
  __int64 v161; // [rsp+70h] [rbp-39h]
  PVOID P; // [rsp+78h] [rbp-31h]
  PVOID v163; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-21h] BYREF
  UNICODE_STRING String1; // [rsp+98h] [rbp-11h] BYREF
  __int64 v166; // [rsp+A8h] [rbp-1h]
  __int64 v167; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v168; // [rsp+B8h] [rbp+Fh]
  __int64 v169; // [rsp+C0h] [rbp+17h]

  v161 = a3;
  v166 = a1;
  v3 = a3;
  v163 = 0LL;
  v157 = 0;
  v4 = 0;
  LODWORD(v5) = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &v163);
  v7 = (unsigned int *)v163;
  v8 = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_363;
  if ( !PnpValidateRegistryMultiSz(v163) )
    goto LABEL_362;
  v9 = (UNICODE_STRING *)((char *)v7 + v7[2]);
  v158 = v9;
  v10 = v9;
  if ( !v9->Length )
    goto LABEL_362;
  do
  {
    ++v4;
    v11 = -1LL;
    do
      ++v11;
    while ( *(&v10->Length + v11) );
    v10 = (UNICODE_STRING *)((char *)v10 + 2 * v11 + 2);
  }
  while ( v10->Length );
  v160 = v4;
  if ( !v4 )
  {
LABEL_362:
    v8 = -1073741823;
    goto LABEL_363;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x63647050u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_363;
  }
  Length = v9->Length;
  v14 = 0;
  if ( !v9->Length )
  {
LABEL_350:
    if ( v8 < 0 )
      goto LABEL_353;
    if ( (_DWORD)v5 != 1 )
    {
      v8 = -1073741823;
      goto LABEL_353;
    }
    v8 = PiDevCfgCopyVariableData(v3, *PoolWithTag);
    v142 = 0;
    goto LABEL_338;
  }
LABEL_11:
  v15 = 0LL;
  if ( !Length )
    goto LABEL_21;
  if ( v9->MaximumLength && *(&v9->MaximumLength + 1) )
  {
LABEL_17:
    if ( (unsigned int)v5 >= v4 )
    {
      v8 = -1073741571;
    }
    else
    {
      v158 = 0LL;
      v18 = PiDevCfgResolveVariable(v166, &v9->Length, &v158);
      v8 = v18;
      if ( v18 >= 0 )
      {
        PoolWithTag[(unsigned int)v5] = v158;
        goto LABEL_327;
      }
      if ( v18 == -1073741772 )
        v8 = -1073741823;
    }
LABEL_349:
    v3 = v161;
    goto LABEL_350;
  }
  v16 = &off_14090EC10;
  v17 = 1;
  while ( *(_DWORD *)&v9->Length != *(_DWORD *)*v16 )
  {
    ++v17;
    v16 += 3;
    if ( v17 >= 0x1B )
      goto LABEL_17;
  }
  v15 = &qword_14090EBF0[3 * v17];
LABEL_21:
  if ( !v15 )
    goto LABEL_17;
  v19 = *((_DWORD *)v15 + 4);
  v20 = 0LL;
  v155 = 0;
  if ( v19 )
  {
    v155 = 0;
    while ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      v157 = v5;
      *(&v167 + v20) = PoolWithTag[v5];
      v20 = (unsigned int)(v20 + 1);
      v155 = v20;
      if ( (unsigned int)v20 >= v19 )
        goto LABEL_28;
    }
    v8 = -1073741823;
  }
LABEL_28:
  if ( v8 < 0 )
    goto LABEL_337;
  v21 = 0LL;
  v159 = 0;
  v156 = 0;
  LODWORD(v22) = 0;
  LOWORD(v23) = 0;
  v154 = 0;
  v24 = 0LL;
  v152 = 0LL;
  if ( (_DWORD)v20 != 1 )
  {
    if ( (_DWORD)v20 == 2 )
    {
      v43 = (__int64 *)v168;
      v44 = *(_DWORD *)(v168 + 32);
      if ( !v44 )
        goto LABEL_51;
      if ( v44 > 2 )
      {
        switch ( v44 )
        {
          case 3u:
            if ( *(_DWORD *)(v167 + 32) != 3 )
              goto LABEL_51;
            v102 = *(const void **)(v167 + 40);
            v103 = *(unsigned int *)(v168 + 36);
            v104 = *(_DWORD *)(v167 + 36);
            if ( *(_DWORD *)v15 == 15 )
            {
              LODWORD(v22) = (_DWORD)v103 == v104 && memcmp(*(const void **)(v168 + 40), v102, v103) == 0;
              goto LABEL_307;
            }
            if ( *(_DWORD *)v15 != 16 )
              goto LABEL_51;
            if ( (_DWORD)v103 != v104 || (v30 = memcmp(*(const void **)(v168 + 40), v102, v103) == 0, v101 = 0, !v30) )
              v101 = 1;
            break;
          case 4u:
            if ( *(_DWORD *)(v167 + 32) != 4 )
              goto LABEL_51;
            v81 = **(_DWORD **)(v168 + 40);
            v82 = *(_DWORD *)v15;
            v83 = **(_DWORD **)(v167 + 40);
            if ( *(int *)v15 <= 10 )
            {
              if ( v82 == 10 )
              {
                v92 = v81 ^ v83;
                goto LABEL_193;
              }
              v84 = v82 - 1;
              if ( !v84 )
              {
                LODWORD(v22) = v83 + v81;
                goto LABEL_307;
              }
              v85 = v84 - 1;
              if ( v85 )
              {
                v86 = v85 - 1;
                if ( !v86 )
                {
                  v92 = v81 * v83;
                  goto LABEL_193;
                }
                v87 = v86 - 1;
                if ( v87 )
                {
                  v88 = v87 - 1;
                  if ( v88 )
                  {
                    v89 = v88 - 1;
                    if ( v89 )
                    {
                      v90 = v89 - 1;
                      if ( v90 )
                      {
                        v91 = v90 - 1;
                        if ( v91 )
                        {
                          if ( v91 != 1 )
                            goto LABEL_51;
                          v92 = v81 | v83;
                        }
                        else
                        {
                          v92 = v81 & v83;
                        }
LABEL_193:
                        LODWORD(v22) = v92;
                        goto LABEL_307;
                      }
                      v93 = v81 >> v83;
                    }
                    else
                    {
                      v93 = v81 << v83;
                    }
LABEL_196:
                    LODWORD(v22) = v93;
                    goto LABEL_307;
                  }
                  if ( v83 )
                  {
                    LODWORD(v22) = v81 % v83;
                    goto LABEL_307;
                  }
                }
                else if ( v83 )
                {
                  LODWORD(v22) = v81 / v83;
                  goto LABEL_307;
                }
                v8 = -1073741676;
                goto LABEL_307;
              }
              v93 = v81 - v83;
              goto LABEL_196;
            }
            v94 = v82 - 13;
            if ( !v94 )
            {
              LODWORD(v22) = 0;
              if ( v81 )
                LODWORD(v22) = v83 != 0;
              goto LABEL_307;
            }
            v95 = v94 - 1;
            if ( v95 )
            {
              v96 = v95 - 1;
              if ( v96 )
              {
                v97 = v96 - 1;
                if ( v97 )
                {
                  v98 = v97 - 1;
                  if ( v98 )
                  {
                    v99 = v98 - 1;
                    if ( v99 )
                    {
                      v100 = v99 - 1;
                      if ( v100 )
                      {
                        if ( v100 != 1 )
                          goto LABEL_51;
                        v101 = v81 >= v83;
                      }
                      else
                      {
                        v101 = v81 <= v83;
                      }
                    }
                    else
                    {
                      v101 = v81 > v83;
                    }
                  }
                  else
                  {
                    v101 = v81 < v83;
                  }
                }
                else
                {
                  v101 = v81 != v83;
                }
              }
              else
              {
                v101 = v81 == v83;
              }
            }
            else
            {
              v101 = 0;
              if ( v81 || v83 )
                v101 = 1;
            }
            break;
          case 7u:
            v45 = *(_DWORD *)(v167 + 32);
            if ( v45 == 7 )
            {
              v46 = *(unsigned int *)(v168 + 36);
              v47 = *(_WORD **)(v168 + 40);
              v48 = *(const WCHAR **)(v167 + 40);
              v49 = *(unsigned int *)(v167 + 36);
              if ( (unsigned int)v46 > 0xFFFE || (unsigned int)v49 > 0xFFFE )
                goto LABEL_333;
              v50 = *(_DWORD *)v15;
              if ( *(int *)v15 <= 15 )
              {
                if ( v50 != 15 )
                {
                  v51 = v50 - 1;
                  if ( !v51 )
                    goto LABEL_120;
                  v52 = v51 - 7;
                  if ( !v52 )
                  {
                    if ( !*v47 )
                      goto LABEL_118;
                    while ( 1 )
                    {
                      v56 = -1LL;
                      do
                        ++v56;
                      while ( v47[v56] );
                      v57 = 2 * v56 + 2;
                      if ( PnpMultiSzContainsString(v48, v47) )
                      {
                        if ( !v24 )
                        {
                          v156 = 0;
                          v152 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v46, 0x63647050u);
                          v24 = v152;
                          if ( !v152 )
                          {
                            v8 = -1073741670;
LABEL_114:
                            if ( v24 )
                            {
                              v21 = 0LL;
                              v14 = v156 + 2;
                              LOWORD(v23) = v156 + 2;
                              v154 = v156 + 2;
                              v24[((unsigned __int64)(unsigned __int16)(v156 + 2) >> 1) - 1] = 0;
                              goto LABEL_116;
                            }
LABEL_118:
                            v21 = 0LL;
                            LODWORD(v22) = 0;
LABEL_119:
                            v24 = v152;
LABEL_97:
                            v14 = v156;
LABEL_98:
                            LOWORD(v23) = v154;
LABEL_307:
                            if ( v8 < 0 )
                              goto LABEL_337;
                            if ( v21 )
                            {
                              v14 = 0;
                              goto LABEL_318;
                            }
                            v21 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
                            if ( v21 )
                            {
                              *((_DWORD *)v21 + 4) = 0;
                              v21[3] = 0LL;
                              if ( v24 )
                              {
                                v135 = 7;
                                v23 = (unsigned __int16)v23;
                                if ( v14 != v154 )
                                  v135 = 1;
                                v14 = 0;
LABEL_316:
                                *((_DWORD *)v21 + 8) = v135;
                                *((_DWORD *)v21 + 9) = v23;
                                v21[5] = (__int64)v24;
LABEL_318:
                                LODWORD(v5) = v157;
                                PoolWithTag = P;
                                *((_QWORD *)P + v157) = v21;
                                if ( v155 )
                                {
                                  v137 = v155;
                                  v138 = &v167;
                                  do
                                  {
                                    v139 = (_QWORD *)*v138;
                                    if ( !*(_QWORD *)(*v138 + 24) )
                                    {
                                      v140 = (void *)v139[5];
                                      if ( v140 )
                                        ExFreePoolWithTag(v140, 0);
                                      ExFreePoolWithTag(v139, 0);
                                    }
                                    ++v138;
                                    --v137;
                                  }
                                  while ( v137 );
                                  LODWORD(v5) = v157;
                                  PoolWithTag = P;
                                }
                                v4 = v160;
                                v9 = v158;
LABEL_327:
                                LODWORD(v5) = v5 + 1;
                                v157 = v5;
                                v141 = -1LL;
                                do
                                  ++v141;
                                while ( *(&v9->Length + v141) );
                                v9 = (UNICODE_STRING *)((char *)v9 + 2 * v141 + 2);
                                v158 = v9;
                                Length = v9->Length;
                                if ( !v9->Length )
                                {
                                  v157 = v5;
                                  goto LABEL_349;
                                }
                                goto LABEL_11;
                              }
                              v135 = 4;
                              v23 = 4;
                              v136 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
                              v14 = 0;
                              v24 = v136;
                              if ( v136 )
                              {
                                *(_DWORD *)v136 = v22;
                                goto LABEL_316;
                              }
                              v8 = -1073741670;
                            }
                            else
                            {
                              v8 = -1073741670;
                            }
LABEL_337:
                            v142 = v155;
LABEL_338:
                            if ( v142 )
                              goto LABEL_339;
                            goto LABEL_353;
                          }
                        }
                        v58 = v57;
                        memmove((char *)v24 + v156, v47, v57);
                        v156 += v57;
                      }
                      else
                      {
                        v58 = v57;
                      }
                      v47 += v58 >> 1;
                      if ( !*v47 )
                        goto LABEL_114;
                    }
                  }
                  v53 = v52 - 1;
                  if ( v53 )
                  {
                    v54 = v53 - 4;
                    if ( !v54 )
                    {
                      if ( (unsigned int)v46 <= 2 )
                        goto LABEL_99;
                      goto LABEL_101;
                    }
                    if ( v54 == 1 )
                    {
                      if ( (unsigned int)v46 > 2 )
                      {
LABEL_95:
                        v55 = 1;
LABEL_96:
                        LODWORD(v22) = v55;
                        v21 = 0LL;
                        goto LABEL_97;
                      }
LABEL_101:
                      if ( (unsigned int)v49 > 2 )
                        goto LABEL_95;
LABEL_99:
                      v55 = 0;
                      goto LABEL_96;
                    }
LABEL_135:
                    LODWORD(v22) = 0;
                    v21 = qword_140909EE8;
                    goto LABEL_97;
                  }
LABEL_120:
                  if ( !*v47 )
                  {
                    v21 = (__int64 *)v167;
                    goto LABEL_127;
                  }
                  if ( !*v48 )
                  {
                    v21 = (__int64 *)v168;
LABEL_127:
                    LOWORD(v23) = v154;
                    v14 = v154;
LABEL_116:
                    LODWORD(v22) = 0;
                    goto LABEL_117;
                  }
                  if ( (unsigned __int64)(unsigned int)(v49 + v46) - 2 <= 0xFFFE )
                  {
                    v154 = v49 + v46 - 2;
                    v59 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v154, 0x63647050u);
                    v152 = v59;
                    v60 = v59;
                    if ( !v59 )
                      goto LABEL_331;
                    memmove(v59, v47, v46 - 2);
                    memmove(&v60[(v46 >> 1) - 1], v48, v49);
                    v21 = 0LL;
                    goto LABEL_127;
                  }
LABEL_333:
                  v8 = -2147483643;
                  goto LABEL_332;
                }
                v61 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) == 0;
LABEL_129:
                LODWORD(v22) = v61;
                v21 = 0LL;
                v24 = 0LL;
                goto LABEL_97;
              }
              v62 = v50 - 16;
              if ( !v62 )
              {
                v61 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) != 0;
                goto LABEL_129;
              }
              v63 = v62 - 1;
              if ( v63 )
              {
                v64 = v63 - 1;
                if ( !v64 )
                {
                  v61 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) > 0;
                  goto LABEL_129;
                }
                v65 = v64 - 1;
                if ( !v65 )
                {
                  v61 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) <= 0;
                  goto LABEL_129;
                }
                if ( v65 != 1 )
                  goto LABEL_135;
                v66 = ~RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u);
              }
              else
              {
                v66 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u);
              }
              v55 = v66 >> 31;
              goto LABEL_96;
            }
            if ( (unsigned int)(v45 - 1) > 1 )
            {
              if ( v45 != 4 )
                goto LABEL_51;
              v67 = **(_DWORD **)(v167 + 40);
              if ( *(_DWORD *)v15 != 24 )
                goto LABEL_51;
              v68 = *(_WORD **)(v168 + 40);
              v69 = 0;
              v70 = 0;
              while ( *v68 )
              {
                v71 = -1LL;
                do
                  ++v71;
                while ( v68[v71] );
                v70 = 2 * v71 + 2;
                if ( v69 == v67 )
                  goto LABEL_152;
                ++v69;
                v68 += (unsigned __int64)v70 >> 1;
              }
              if ( v69 == v67 )
              {
LABEL_152:
                if ( *v68 && v70 > 2 )
                {
                  v154 = v70;
                  v14 = v70 - 16;
                  v72 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v70, 0x63647050u);
                  v24 = v72;
                  if ( v72 )
                  {
                    memmove(v72, v68, v70);
                    goto LABEL_98;
                  }
                  goto LABEL_331;
                }
              }
              v21 = qword_140909EE8;
              goto LABEL_98;
            }
            v73 = *(unsigned int *)(v168 + 36);
            v74 = *(_BYTE **)(v168 + 40);
            v75 = *(const void **)(v167 + 40);
            v22 = *(unsigned int *)(v167 + 36);
            if ( (unsigned int)v73 > 0xFFFE || (unsigned int)v22 > 0xFFFE )
              goto LABEL_333;
            if ( *(_DWORD *)v15 != 1 )
            {
              if ( *(_DWORD *)v15 == 2 )
              {
                v24 = 0LL;
                v76 = PnpMultiSzContainsString(*(PCWSTR *)(v168 + 40), *(const WCHAR **)(v167 + 40));
                if ( v76 )
                {
                  v154 = v73 - v22;
                  v77 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v73 - v22), 0x63647050u);
                  v24 = v77;
                  if ( !v77 )
                    goto LABEL_331;
                  v78 = ((char *)v76 - v74) >> 1;
                  if ( v78 > 0 )
                    memmove(v77, v74, ((char *)v76 - v74) >> 1);
                  memmove((char *)v24 + v78, (char *)v76 + v22, (unsigned int)(v73 - v22) - v78);
                  v21 = 0LL;
                }
                else
                {
                  v21 = v43;
                }
                LOWORD(v23) = v154;
                v14 = v154;
                LODWORD(v22) = 0;
                goto LABEL_307;
              }
              if ( *(_DWORD *)v15 == 8 )
              {
                v14 = 0;
                v24 = 0LL;
                if ( PnpMultiSzContainsString(*(PCWSTR *)(v168 + 40), *(const WCHAR **)(v167 + 40)) )
                  v21 = (__int64 *)v167;
                LODWORD(v22) = 0;
                LOWORD(v23) = 0;
                goto LABEL_307;
              }
              if ( *(_DWORD *)v15 != 9 )
              {
                v21 = qword_140909EE8;
LABEL_164:
                LODWORD(v22) = 0;
                goto LABEL_119;
              }
              if ( PnpMultiSzContainsString(*(PCWSTR *)(v168 + 40), *(const WCHAR **)(v167 + 40)) )
              {
                v21 = v43;
                goto LABEL_164;
              }
            }
            if ( (unsigned int)(v22 + v73) <= 0xFFFE )
            {
              v79 = (unsigned __int16)(v22 + v73);
              v156 = v22 + v73;
              v154 = v22 + v73;
              v80 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v79, 0x63647050u);
              v153 = v80;
              if ( v80 )
              {
                memmove(v80, v74, v73 - 2);
                memmove(&v153[(v73 >> 1) - 1], v75, v22);
                v24 = v153;
                LODWORD(v22) = 0;
                v153[(v79 >> 1) - 1] = 0;
                v21 = 0LL;
                goto LABEL_97;
              }
              goto LABEL_331;
            }
            goto LABEL_333;
          default:
            goto LABEL_51;
        }
        LODWORD(v22) = v101;
        goto LABEL_307;
      }
      v105 = *(_DWORD *)(v167 + 32);
      if ( (unsigned int)(v105 - 1) > 1 )
      {
        if ( v105 != 7 )
          goto LABEL_51;
        v106 = *(const WCHAR **)(v168 + 40);
        v107 = *(unsigned int *)(v168 + 36);
        v108 = *(const void **)(v167 + 40);
        v109 = *(unsigned int *)(v167 + 36);
        if ( (unsigned int)v107 > 0xFFFE || (unsigned int)v109 > 0xFFFE )
          goto LABEL_333;
        if ( *(_DWORD *)v15 != 1 )
        {
          if ( *(_DWORD *)v15 == 8 )
          {
            if ( !PnpMultiSzContainsString(*(PCWSTR *)(v167 + 40), v106) )
            {
              LODWORD(v22) = 0;
              v21 = 0LL;
LABEL_253:
              LOWORD(v23) = v154;
              v14 = v154;
LABEL_117:
              v24 = v152;
              goto LABEL_307;
            }
            v21 = (__int64 *)v168;
LABEL_252:
            LODWORD(v22) = 0;
            goto LABEL_253;
          }
          if ( *(_DWORD *)v15 != 9 )
          {
            v21 = qword_140909EE8;
            goto LABEL_252;
          }
          if ( PnpMultiSzContainsString(*(PCWSTR *)(v167 + 40), v106) )
          {
            v21 = (__int64 *)v167;
            goto LABEL_252;
          }
        }
        if ( (unsigned int)(v109 + v107) > 0xFFFE )
        {
          v142 = v155;
          v8 = -2147483643;
          goto LABEL_339;
        }
        v154 = v109 + v107;
        v110 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v109 + v107), 0x63647050u);
        v152 = v110;
        v111 = v110;
        if ( !v110 )
          goto LABEL_331;
        memmove(v110, v106, v107);
        memmove(&v111[v107 >> 1], v108, v109);
        v21 = 0LL;
        goto LABEL_252;
      }
      v112 = *(_DWORD *)(v168 + 36);
      if ( v112 > 0xFFFE )
        goto LABEL_333;
      v113 = *(_DWORD *)(v167 + 36);
      if ( v113 > 0xFFFE )
        goto LABEL_333;
      v22 = *(_QWORD *)(v168 + 40);
      v114 = *(_DWORD *)v15;
      v115 = v112 - 2;
      v116 = *(wchar_t **)(v167 + 40);
      String2.MaximumLength = *(_DWORD *)(v167 + 36);
      v117 = v113 - 2;
      String1.Buffer = (wchar_t *)v22;
      String1.MaximumLength = v112;
      String1.Length = v112 - 2;
      String2.Buffer = v116;
      String2.Length = v117;
      v118 = v114 - 1;
      if ( !v118 )
      {
        if ( *(_WORD *)v22 )
        {
          if ( *v116 )
          {
            if ( v115 + (unsigned int)v117 < 0xFFFE )
            {
              v14 = v115 + v117;
              v154 = v117 + v112;
              v129 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v117 + v112), 0x63647050u);
              v24 = v129;
              if ( v129 )
              {
                memmove(v129, (const void *)v22, v115);
                memmove(&v24[(unsigned __int64)v115 >> 1], v116, v117 + 2LL);
                LODWORD(v22) = 0;
                v21 = 0LL;
                goto LABEL_98;
              }
              goto LABEL_331;
            }
            goto LABEL_333;
          }
          v21 = (__int64 *)v168;
        }
        else
        {
          v21 = (__int64 *)v167;
        }
LABEL_266:
        LODWORD(v22) = 0;
        goto LABEL_98;
      }
      v119 = v118 - 12;
      if ( v119 )
      {
        v120 = v119 - 1;
        if ( v120 )
        {
          v121 = v120 - 1;
          if ( v121 )
          {
            v122 = v121 - 1;
            if ( v122 )
            {
              v123 = v122 - 1;
              if ( !v123 )
              {
                v126 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_268:
                v127 = v126 >> 31;
LABEL_269:
                LODWORD(v22) = v127;
                v21 = 0LL;
                goto LABEL_98;
              }
              v124 = v123 - 1;
              if ( v124 )
              {
                v125 = v124 - 1;
                if ( v125 )
                {
                  if ( v125 != 1 )
                  {
                    v21 = qword_140909EE8;
                    goto LABEL_266;
                  }
                  v126 = ~RtlCompareUnicodeString(&String1, &String2, 1u);
                  goto LABEL_268;
                }
                v128 = RtlCompareUnicodeString(&String1, &String2, 1u) <= 0;
              }
              else
              {
                v128 = RtlCompareUnicodeString(&String1, &String2, 1u) > 0;
              }
            }
            else
            {
              v128 = RtlCompareUnicodeString(&String1, &String2, 1u) != 0;
            }
          }
          else
          {
            v128 = RtlCompareUnicodeString(&String1, &String2, 1u) == 0;
          }
          LODWORD(v22) = v128;
          v21 = 0LL;
          v24 = 0LL;
          goto LABEL_98;
        }
        if ( v115 >= 2u )
        {
LABEL_277:
          v127 = 1;
          goto LABEL_269;
        }
      }
      else if ( v115 < 2u )
      {
        goto LABEL_278;
      }
      if ( v117 >= 2u )
        goto LABEL_277;
LABEL_278:
      v127 = 0;
      goto LABEL_269;
    }
    if ( (_DWORD)v20 != 3 )
      goto LABEL_307;
    v130 = *(_DWORD *)(v169 + 32);
    if ( v130 )
    {
      if ( v130 <= 2 )
      {
        v131 = *(_DWORD *)(v169 + 36) >= 2u;
      }
      else
      {
        switch ( v130 )
        {
          case 3u:
            v132 = *(_BYTE **)(v169 + 40);
            v133 = *(_DWORD *)(v169 + 36);
            if ( !v133 )
            {
LABEL_305:
              v21 = (__int64 *)v167;
              goto LABEL_307;
            }
            while ( !*v132++ )
            {
              if ( !--v133 )
                goto LABEL_305;
            }
LABEL_306:
            v21 = (__int64 *)v168;
            goto LABEL_307;
          case 4u:
            v131 = **(_DWORD **)(v169 + 40) != 0;
            break;
          case 7u:
            v131 = *(_DWORD *)(v169 + 36) > 4u;
            break;
          default:
            goto LABEL_306;
        }
      }
    }
    else
    {
      v131 = 0;
    }
    if ( !v131 )
      goto LABEL_305;
    goto LABEL_306;
  }
  v25 = *(_DWORD *)v15;
  v26 = *(_DWORD *)v15 - 22;
  if ( !v26 )
  {
    if ( !*(_DWORD *)(v167 + 32) )
      goto LABEL_307;
    goto LABEL_77;
  }
  if ( v26 == 1 )
  {
    if ( *(_DWORD *)(v167 + 32) )
      goto LABEL_307;
LABEL_77:
    LODWORD(v22) = 1;
    goto LABEL_307;
  }
  v27 = *(_DWORD *)(v167 + 32);
  if ( !v27 )
    goto LABEL_51;
  if ( v27 <= 2 )
  {
    v39 = *(_WORD **)(v167 + 40);
    v40 = v25 - 11;
    if ( !v40 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v39[v22] );
      goto LABEL_307;
    }
    v41 = v40 - 1;
    if ( v41 )
    {
      v42 = v41 - 13;
      if ( v42 )
      {
        if ( v42 == 1 )
          v21 = (__int64 *)v167;
        else
          v21 = qword_140909EE8;
      }
      else if ( PnpStringToDwordValue(*(_QWORD *)(v167 + 40), &v159) )
      {
        LODWORD(v22) = v159;
      }
      else
      {
        LODWORD(v22) = 0;
      }
      goto LABEL_307;
    }
    v30 = *v39 == 0;
LABEL_40:
    LODWORD(v22) = v30;
    goto LABEL_307;
  }
  if ( v27 != 4 )
  {
    if ( v27 == 7 )
    {
      v28 = *(_WORD **)(v167 + 40);
      v29 = v25 - 11;
      if ( !v29 )
      {
        LODWORD(v22) = 0;
        while ( *v28 )
        {
          LODWORD(v22) = v22 + 1;
          v31 = -1LL;
          do
            ++v31;
          while ( v28[v31] );
          v28 += v31 + 1;
        }
        goto LABEL_307;
      }
      if ( v29 != 1 )
      {
        v21 = qword_140909EE8;
        goto LABEL_307;
      }
      v30 = *v28 == 0;
      goto LABEL_40;
    }
LABEL_51:
    v21 = qword_140909EE8;
    goto LABEL_307;
  }
  v32 = **(_DWORD **)(v167 + 40);
  v33 = v25 - 11;
  if ( !v33 )
  {
    LODWORD(v22) = ~v32;
    goto LABEL_307;
  }
  v34 = v33 - 1;
  if ( !v34 )
  {
    v30 = v32 == 0;
    goto LABEL_40;
  }
  v35 = v34 - 13;
  if ( !v35 )
  {
    LODWORD(v22) = **(_DWORD **)(v167 + 40);
    goto LABEL_307;
  }
  if ( v35 != 1 )
    goto LABEL_51;
  v154 = 22;
  LOWORD(v23) = 22;
  v14 = 20;
  v36 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
  v24 = v36;
  if ( v36 )
  {
    v8 = RtlStringCchPrintfW(v36, 0xBuLL, L"%u", v32);
    if ( v8 < 0 )
    {
      ExFreePoolWithTag(v24, 0);
      v24 = 0LL;
    }
    else
    {
      v37 = -1LL;
      do
        ++v37;
      while ( v24[v37] );
      v38 = 2 * v37;
      LOWORD(v23) = v38 + 2;
      v14 = v38;
      v154 = v38 + 2;
    }
    goto LABEL_307;
  }
LABEL_331:
  v8 = -1073741670;
LABEL_332:
  v142 = v155;
LABEL_339:
  v143 = &v167;
  v144 = v142;
  do
  {
    v145 = (_QWORD *)*v143;
    if ( !*(_QWORD *)(*v143 + 24) )
    {
      v146 = (void *)v145[5];
      if ( v146 )
        ExFreePoolWithTag(v146, 0);
      ExFreePoolWithTag(v145, 0);
    }
    ++v143;
    --v144;
  }
  while ( v144 );
LABEL_353:
  v147 = P;
  if ( v157 )
  {
    v148 = (PVOID **)P;
    v149 = v157;
    do
    {
      v150 = *v148;
      if ( !(*v148)[3] )
      {
        if ( v150[5] )
        {
          ExFreePoolWithTag(v150[5], 0);
          v150 = *v148;
        }
        ExFreePoolWithTag(v150, 0);
      }
      ++v148;
      --v149;
    }
    while ( v149 );
  }
  ExFreePoolWithTag(v147, 0);
  v7 = (unsigned int *)v163;
LABEL_363:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
