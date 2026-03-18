/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x140869800
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     PnpStringToDwordValue @ 0x1401450D0 (PnpStringToDwordValue.c)
 *     PnpMultiSzContainsString @ 0x14016F2A4 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x14016F324 (PnpValidateRegistryMultiSz.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     RtlCompareUnicodeStrings @ 0x1406B9CB0 (RtlCompareUnicodeStrings.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x140866DE0 (PiDevCfgCopyVariableData.c)
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
  __int64 v14; // r12
  wchar_t *v15; // r13
  __int64 *v16; // rdx
  wchar_t **v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // r9
  size_t v22; // r14
  size_t v23; // rsi
  unsigned __int16 v24; // bx
  __int64 *v25; // r15
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // eax
  _WORD *v29; // rdx
  int v30; // ecx
  int v31; // ebx
  bool v32; // zf
  __int64 v33; // rax
  unsigned int v34; // ebx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  wchar_t *v38; // rax
  __int64 v39; // rax
  unsigned __int16 v40; // ax
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  unsigned int v44; // eax
  int v45; // ecx
  SIZE_T v46; // r15
  const WCHAR *v47; // r14
  const WCHAR *v48; // r12
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rax
  unsigned int v56; // esi
  unsigned __int16 v57; // bx
  unsigned __int64 v58; // rbx
  wchar_t *v59; // rax
  wchar_t *v60; // r13
  BOOL v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  unsigned int v66; // eax
  LONG v67; // eax
  int v68; // r8d
  _WORD *v69; // rsi
  unsigned int v70; // ebx
  int v71; // ecx
  __int64 v72; // rax
  wchar_t *v73; // rax
  unsigned __int64 v74; // rsi
  _BYTE *v75; // r12
  const void *v76; // r13
  PCWSTR v77; // rax
  PCWSTR v78; // r15
  wchar_t *v79; // rax
  __int64 v80; // rbx
  SIZE_T v81; // r15
  wchar_t *v82; // rax
  int v83; // ecx
  unsigned int v84; // r9d
  unsigned int v85; // r8d
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  int v92; // ecx
  int v93; // ecx
  int v94; // r8d
  unsigned int v95; // r9d
  int v96; // eax
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // eax
  const void *v105; // r10
  size_t v106; // r8
  const void *v107; // r11
  int v108; // r9d
  BOOL v109; // eax
  int v110; // eax
  int v111; // ecx
  size_t v112; // rbx
  const void *v113; // r14
  const void *v114; // r15
  size_t v115; // rsi
  wchar_t *v116; // rax
  wchar_t *v117; // r12
  int v118; // eax
  unsigned __int16 v119; // r8
  int v120; // ecx
  unsigned __int16 v121; // bx
  wchar_t *v122; // r15
  unsigned __int16 v123; // si
  int v124; // ecx
  int v125; // ecx
  int v126; // ecx
  int v127; // ecx
  int v128; // ecx
  int v129; // ecx
  int v130; // ecx
  int v131; // ecx
  unsigned int v132; // eax
  BOOL v133; // ecx
  wchar_t *v134; // rax
  unsigned int v135; // eax
  bool v136; // al
  _BYTE *v137; // rdx
  int v138; // ecx
  wchar_t *v140; // rax
  __int64 v141; // r14
  __int64 *v142; // rsi
  _QWORD *v143; // rbx
  void *v144; // rcx
  __int64 v145; // rax
  unsigned int v146; // eax
  __int64 *v147; // rbx
  __int64 v148; // r14
  _QWORD *v149; // rsi
  void *v150; // rcx
  PVOID v151; // r14
  PVOID **v152; // rbx
  __int64 v153; // rsi
  PVOID *v154; // rcx
  wchar_t *v156; // [rsp+30h] [rbp-79h]
  wchar_t *v157; // [rsp+30h] [rbp-79h]
  __int16 v158; // [rsp+38h] [rbp-71h]
  unsigned int v159; // [rsp+3Ch] [rbp-6Dh]
  unsigned __int16 v160; // [rsp+40h] [rbp-69h]
  unsigned int v161; // [rsp+58h] [rbp-51h]
  UNICODE_STRING *v162; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v163; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v164; // [rsp+6Ch] [rbp-3Dh]
  UNICODE_STRING String2; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-29h] BYREF
  __int64 v167; // [rsp+90h] [rbp-19h]
  PVOID P; // [rsp+98h] [rbp-11h]
  PVOID v169; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v170; // [rsp+A8h] [rbp-1h]
  __int64 v171; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v172; // [rsp+B8h] [rbp+Fh]
  __int64 v173; // [rsp+C0h] [rbp+17h]

  v167 = a3;
  v170 = a1;
  v3 = a3;
  v169 = 0LL;
  v161 = 0;
  v4 = 0;
  LODWORD(v5) = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &v169);
  v7 = (unsigned int *)v169;
  v8 = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_378;
  if ( !PnpValidateRegistryMultiSz(v169) )
    goto LABEL_377;
  v9 = (UNICODE_STRING *)((char *)v7 + v7[2]);
  v162 = v9;
  v10 = v9;
  if ( !v9->Length )
    goto LABEL_377;
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
  v164 = v4;
  if ( !v4 )
  {
LABEL_377:
    v8 = -1073741823;
    goto LABEL_378;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x63647050u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_378;
  }
  Length = v9->Length;
  if ( !v9->Length )
    goto LABEL_365;
  v14 = v171;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = 0LL;
    if ( Length )
    {
      if ( !v9->MaximumLength || !*(&v9->MaximumLength + 1) )
      {
        v17 = &off_14094C030;
        v18 = 1;
        while ( *(_DWORD *)&v9->Length != *(_DWORD *)*v17 )
        {
          ++v18;
          v17 += 3;
          if ( v18 >= 0x1B )
            goto LABEL_18;
        }
        v16 = &qword_14094C010[3 * v18];
        goto LABEL_22;
      }
LABEL_18:
      if ( (unsigned int)v5 >= v4 )
      {
        v8 = -1073741571;
      }
      else
      {
        v162 = 0LL;
        v19 = PiDevCfgResolveVariable(v170, &v9->Length, &v162);
        v8 = v19;
        if ( v19 >= 0 )
        {
          PoolWithTag[(unsigned int)v5] = v162;
          goto LABEL_338;
        }
        if ( v19 == -1073741772 )
          v8 = -1073741823;
      }
LABEL_364:
      v3 = v167;
LABEL_365:
      if ( v8 >= 0 )
      {
        if ( (_DWORD)v5 == 1 )
        {
          v8 = PiDevCfgCopyVariableData(v3, *PoolWithTag);
          v146 = 0;
          goto LABEL_353;
        }
        v8 = -1073741823;
      }
      goto LABEL_369;
    }
LABEL_22:
    if ( !v16 )
      goto LABEL_18;
    v20 = *((_DWORD *)v16 + 4);
    v21 = 0LL;
    v159 = 0;
    if ( v20 )
    {
      v159 = 0;
      while ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        v161 = v5;
        *(&v171 + v21) = PoolWithTag[v5];
        v21 = (unsigned int)(v21 + 1);
        v159 = v21;
        if ( (unsigned int)v21 >= v20 )
          goto LABEL_29;
      }
      v8 = -1073741823;
LABEL_29:
      v14 = v171;
    }
    if ( v8 < 0 )
      goto LABEL_352;
    v163 = 0;
    LODWORD(v22) = 0;
    v156 = 0LL;
    LOWORD(v23) = 0;
    v24 = 0;
    v158 = 0;
    v160 = 0;
    v25 = 0LL;
    if ( (_DWORD)v21 == 1 )
    {
      v26 = *(_DWORD *)v16;
      v27 = *(_DWORD *)v16 - 22;
      if ( v27 )
      {
        if ( v27 != 1 )
        {
          v28 = *(_DWORD *)(v171 + 32);
          if ( !v28 )
          {
LABEL_40:
            v25 = qword_140947318;
LABEL_41:
            v15 = 0LL;
LABEL_42:
            v14 = v171;
            goto LABEL_43;
          }
          if ( v28 > 2 )
          {
            if ( v28 != 4 )
            {
              if ( v28 != 7 )
                goto LABEL_40;
              v29 = *(_WORD **)(v171 + 40);
              v30 = v26 - 11;
              if ( !v30 )
              {
                while ( *v29 )
                {
                  LODWORD(v22) = v22 + 1;
                  v33 = -1LL;
                  do
                    ++v33;
                  while ( v29[v33] );
                  v29 += v33 + 1;
                }
                goto LABEL_41;
              }
              if ( v30 != 1 )
                goto LABEL_40;
              v32 = *v29 == 0;
LABEL_51:
              LODWORD(v22) = v32;
              goto LABEL_41;
            }
            v34 = **(_DWORD **)(v171 + 40);
            v35 = v26 - 11;
            if ( !v35 )
            {
              LODWORD(v22) = ~v34;
              goto LABEL_41;
            }
            v36 = v35 - 1;
            if ( !v36 )
            {
              v32 = v34 == 0;
              goto LABEL_51;
            }
            v37 = v36 - 13;
            if ( !v37 )
            {
              LODWORD(v22) = **(_DWORD **)(v171 + 40);
              goto LABEL_41;
            }
            if ( v37 != 1 )
              goto LABEL_40;
            v160 = 20;
            v158 = 22;
            LOWORD(v23) = 22;
            v38 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
            v15 = v38;
            if ( v38 )
            {
              v8 = RtlStringCchPrintfW(v38, 0xBuLL, L"%u", v34);
              if ( v8 < 0 )
              {
                ExFreePoolWithTag(v15, 0);
                v15 = 0LL;
              }
              else
              {
                v39 = -1LL;
                do
                  ++v39;
                while ( v15[v39] );
                v40 = 2 * v39;
                LOWORD(v23) = v40 + 2;
                v160 = v40;
                v158 = v40 + 2;
              }
              goto LABEL_82;
            }
            goto LABEL_342;
          }
          v41 = v26 - 11;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( !v42 )
            {
              LODWORD(v22) = **(_WORD **)(v171 + 40) == 0;
              goto LABEL_81;
            }
            v43 = v42 - 13;
            if ( v43 )
            {
              v15 = 0LL;
              v14 = v171;
              if ( v43 == 1 )
                v25 = (__int64 *)v171;
              else
                v25 = qword_140947318;
              goto LABEL_43;
            }
            v15 = 0LL;
            if ( PnpStringToDwordValue(*(_QWORD *)(v171 + 40), &v163) )
              LODWORD(v22) = v163;
            else
              LODWORD(v22) = 0;
LABEL_78:
            v14 = v171;
            goto LABEL_43;
          }
          v22 = -1LL;
          do
            ++v22;
          while ( *(_WORD *)(*(_QWORD *)(v171 + 40) + 2 * v22) );
          goto LABEL_81;
        }
        v15 = 0LL;
        if ( *(_DWORD *)(v14 + 32) )
          goto LABEL_43;
      }
      else
      {
        v15 = 0LL;
        if ( !*(_DWORD *)(v14 + 32) )
          goto LABEL_43;
      }
      LODWORD(v22) = 1;
      goto LABEL_43;
    }
    if ( (_DWORD)v21 != 2 )
    {
      if ( (_DWORD)v21 != 3 )
        goto LABEL_43;
      v135 = *(_DWORD *)(v173 + 32);
      if ( !v135 )
      {
        v136 = 0;
        goto LABEL_323;
      }
      if ( v135 > 2 )
      {
        switch ( v135 )
        {
          case 3u:
            v137 = *(_BYTE **)(v173 + 40);
            v138 = *(_DWORD *)(v173 + 36);
            if ( v138 )
            {
              while ( !*v137++ )
              {
                if ( !--v138 )
                  goto LABEL_324;
              }
              goto LABEL_325;
            }
            break;
          case 4u:
            v136 = **(_DWORD **)(v173 + 40) != 0;
LABEL_323:
            if ( v136 )
              goto LABEL_325;
            break;
          case 7u:
            v136 = *(_DWORD *)(v173 + 36) > 4u;
            goto LABEL_323;
          default:
LABEL_325:
            v25 = (__int64 *)v172;
            goto LABEL_43;
        }
LABEL_324:
        v25 = (__int64 *)v14;
        goto LABEL_43;
      }
      v136 = *(_DWORD *)(v173 + 36) >= 2u;
      goto LABEL_323;
    }
    v44 = *(_DWORD *)(v172 + 32);
    if ( !v44 )
      goto LABEL_238;
    if ( v44 <= 2 )
    {
      v111 = *(_DWORD *)(v171 + 32);
      if ( (unsigned int)(v111 - 1) > 1 )
      {
        if ( v111 == 7 )
        {
          v112 = *(unsigned int *)(v172 + 36);
          v113 = *(const void **)(v172 + 40);
          v114 = *(const void **)(v171 + 40);
          v115 = *(unsigned int *)(v171 + 36);
          if ( (unsigned int)v112 <= 0xFFFE && (unsigned int)v115 <= 0xFFFE )
          {
            switch ( *(_DWORD *)v16 )
            {
              case 1:
                goto LABEL_263;
              case 8:
                if ( PnpMultiSzContainsString(*(PCWSTR *)(v171 + 40), *(const WCHAR **)(v172 + 40)) )
                  v25 = (__int64 *)v172;
                else
                  v25 = 0LL;
                break;
              case 9:
                if ( PnpMultiSzContainsString(*(PCWSTR *)(v171 + 40), *(const WCHAR **)(v172 + 40)) )
                {
                  v14 = v171;
                  v25 = (__int64 *)v171;
LABEL_268:
                  LOWORD(v23) = v160;
                  LODWORD(v22) = 0;
                  v15 = v156;
                  v158 = v160;
                  goto LABEL_43;
                }
LABEL_263:
                if ( (unsigned int)(v115 + v112) > 0xFFFE )
                {
                  v146 = v159;
                  v8 = -2147483643;
                  goto LABEL_354;
                }
                v160 = v115 + v112;
                v116 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v115 + v112), 0x63647050u);
                v156 = v116;
                v117 = v116;
                if ( !v116 )
                {
                  v146 = v159;
                  v8 = -1073741670;
                  goto LABEL_354;
                }
                memmove(v116, v113, v112);
                memmove(&v117[v112 >> 1], v114, v115);
                v25 = 0LL;
                break;
              default:
                v25 = qword_140947318;
                break;
            }
            v14 = v171;
            goto LABEL_268;
          }
LABEL_346:
          v146 = v159;
          v8 = -2147483643;
          goto LABEL_354;
        }
LABEL_166:
        v25 = qword_140947318;
        goto LABEL_42;
      }
      v118 = 0;
      *(_QWORD *)&String1.Length = 0LL;
      String1.Buffer = 0LL;
      *(_QWORD *)&String2.Length = 0LL;
      String2.Buffer = 0LL;
      if ( *(_DWORD *)(v172 + 36) > 0xFFFEu || *(_DWORD *)(v171 + 36) > 0xFFFEu )
        goto LABEL_346;
      v119 = *(_WORD *)(v172 + 36);
      v120 = *(_DWORD *)v16;
      v121 = v119 - 2;
      v22 = *(_QWORD *)(v172 + 40);
      v122 = *(wchar_t **)(v171 + 40);
      String2.MaximumLength = *(_WORD *)(v171 + 36);
      v123 = String2.MaximumLength - 2;
      String1.Buffer = (wchar_t *)v22;
      String1.MaximumLength = v119;
      String1.Length = v119 - 2;
      String2.Buffer = v122;
      String2.Length = String2.MaximumLength - 2;
      v124 = v120 - 1;
      if ( v124 )
      {
        v125 = v124 - 12;
        if ( v125 )
        {
          v126 = v125 - 1;
          if ( v126 )
          {
            v127 = v126 - 1;
            if ( v127 )
            {
              v128 = v127 - 1;
              if ( v128 )
              {
                v129 = v128 - 1;
                if ( !v129 )
                {
                  v132 = RtlCompareUnicodeString(&String1, &String2, 1u);
                  goto LABEL_283;
                }
                v130 = v129 - 1;
                if ( v130 )
                {
                  v131 = v130 - 1;
                  if ( v131 )
                  {
                    if ( v131 != 1 )
                    {
                      v25 = qword_140947318;
                      goto LABEL_281;
                    }
                    v132 = ~RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_283:
                    LODWORD(v22) = v132 >> 31;
                    goto LABEL_284;
                  }
                  v133 = RtlCompareUnicodeString(&String1, &String2, 1u) <= 0;
                }
                else
                {
                  v133 = RtlCompareUnicodeString(&String1, &String2, 1u) > 0;
                }
              }
              else
              {
                v133 = RtlCompareUnicodeString(&String1, &String2, 1u) != 0;
              }
            }
            else
            {
              v133 = RtlCompareUnicodeString(&String1, &String2, 1u) == 0;
            }
            LODWORD(v22) = v133;
            v25 = 0LL;
            goto LABEL_285;
          }
          if ( v121 >= 2u )
          {
LABEL_294:
            v118 = 1;
            goto LABEL_295;
          }
LABEL_299:
          if ( v123 >= 2u )
            goto LABEL_294;
        }
        else if ( v121 >= 2u )
        {
          goto LABEL_299;
        }
LABEL_295:
        v25 = 0LL;
        LODWORD(v22) = v118;
        v15 = 0LL;
LABEL_296:
        v14 = v171;
        LOWORD(v23) = 0;
        goto LABEL_43;
      }
      if ( !*(_WORD *)v22 )
      {
        v25 = (__int64 *)v171;
        goto LABEL_281;
      }
      if ( !*v122 )
      {
        v25 = (__int64 *)v172;
        goto LABEL_281;
      }
      if ( v121 + (unsigned int)v123 >= 0xFFFE )
      {
        v8 = -2147483643;
        goto LABEL_343;
      }
      v160 = v121 + v123;
      v158 = v119 + v123;
      v134 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v119 + v123), 0x63647050u);
      v15 = v134;
      if ( v134 )
      {
        memmove(v134, (const void *)v22, v121);
        memmove(&v15[(unsigned __int64)v121 >> 1], v122, v123 + 2LL);
        LODWORD(v22) = 0;
        v25 = 0LL;
        goto LABEL_286;
      }
LABEL_342:
      v8 = -1073741670;
LABEL_343:
      v146 = v159;
      goto LABEL_354;
    }
    if ( v44 == 3 )
    {
      if ( *(_DWORD *)(v171 + 32) != 3 )
        goto LABEL_166;
      v105 = *(const void **)(v172 + 40);
      v106 = *(unsigned int *)(v172 + 36);
      v107 = *(const void **)(v171 + 40);
      v108 = *(_DWORD *)(v171 + 36);
      if ( *(_DWORD *)v16 != 15 )
      {
        if ( *(_DWORD *)v16 == 16 )
        {
          v109 = (_DWORD)v106 != v108 || memcmp(v105, v107, v106);
          LODWORD(v22) = v109;
          goto LABEL_78;
        }
        goto LABEL_242;
      }
      if ( (_DWORD)v106 != v108 )
        goto LABEL_82;
      v110 = memcmp(v105, v107, v106);
      v14 = v171;
      if ( v110 )
        goto LABEL_43;
LABEL_250:
      LODWORD(v22) = 1;
      goto LABEL_43;
    }
    if ( v44 == 4 )
    {
      if ( *(_DWORD *)(v14 + 32) != 4 )
      {
LABEL_238:
        v25 = qword_140947318;
        goto LABEL_43;
      }
      v83 = *(_DWORD *)v16;
      v84 = **(_DWORD **)(v172 + 40);
      v85 = **(_DWORD **)(v14 + 40);
      if ( *(int *)v16 > 10 )
      {
        v97 = v83 - 13;
        if ( !v97 )
        {
          v15 = 0LL;
          if ( !v84 || !v85 )
            goto LABEL_43;
          goto LABEL_250;
        }
        v98 = v97 - 1;
        if ( !v98 )
        {
          v104 = 0;
          if ( v84 || v85 )
            v104 = 1;
          LODWORD(v22) = v104;
          goto LABEL_43;
        }
        v99 = v98 - 1;
        if ( v99 )
        {
          v100 = v99 - 1;
          if ( v100 )
          {
            v101 = v100 - 1;
            if ( v101 )
            {
              v102 = v101 - 1;
              if ( v102 )
              {
                v103 = v102 - 1;
                if ( v103 )
                {
                  if ( v103 != 1 )
                    goto LABEL_224;
                  v96 = v84 >= v85;
                }
                else
                {
                  v96 = v84 <= v85;
                }
              }
              else
              {
                v96 = v84 > v85;
              }
            }
            else
            {
              v96 = v84 < v85;
            }
          }
          else
          {
            v96 = v84 != v85;
          }
        }
        else
        {
          v96 = v84 == v85;
        }
      }
      else
      {
        if ( v83 == 10 )
        {
          v94 = v84 ^ v85;
          goto LABEL_211;
        }
        v86 = v83 - 1;
        if ( !v86 )
        {
          LODWORD(v22) = v85 + v84;
          goto LABEL_43;
        }
        v87 = v86 - 1;
        if ( !v87 )
        {
          v95 = v84 - v85;
          goto LABEL_213;
        }
        v88 = v87 - 1;
        if ( !v88 )
        {
          v94 = v84 * v85;
          goto LABEL_211;
        }
        v89 = v88 - 1;
        if ( v89 )
        {
          v90 = v89 - 1;
          if ( v90 )
          {
            v91 = v90 - 1;
            if ( v91 )
            {
              v92 = v91 - 1;
              if ( v92 )
              {
                v93 = v92 - 1;
                if ( !v93 )
                {
                  v94 = v84 & v85;
                  goto LABEL_211;
                }
                if ( v93 == 1 )
                {
                  v94 = v84 | v85;
LABEL_211:
                  LODWORD(v22) = v94;
                  goto LABEL_43;
                }
LABEL_224:
                v25 = qword_140947318;
                goto LABEL_43;
              }
              v95 = v84 >> v85;
            }
            else
            {
              v95 = v84 << v85;
            }
LABEL_213:
            LODWORD(v22) = v95;
            goto LABEL_43;
          }
          if ( v85 )
          {
            LODWORD(v22) = v84 % v85;
            goto LABEL_43;
          }
LABEL_209:
          v8 = -1073741676;
          goto LABEL_43;
        }
        if ( !v85 )
          goto LABEL_209;
        v96 = v84 / v85;
      }
      LODWORD(v22) = v96;
      goto LABEL_43;
    }
    if ( v44 != 7 )
      goto LABEL_238;
    v45 = *(_DWORD *)(v171 + 32);
    if ( v45 != 7 )
    {
      if ( (unsigned int)(v45 - 1) > 1 )
      {
        if ( v45 != 4 )
          goto LABEL_166;
        v68 = **(_DWORD **)(v171 + 40);
        if ( *(_DWORD *)v16 == 24 )
        {
          v69 = *(_WORD **)(v172 + 40);
          v70 = 0;
          v71 = 0;
          while ( *v69 )
          {
            v72 = -1LL;
            do
              ++v72;
            while ( v69[v72] );
            v70 = 2 * v72 + 2;
            if ( v71 == v68 )
              goto LABEL_161;
            ++v71;
            v69 += (unsigned __int64)v70 >> 1;
          }
          if ( v71 == v68 )
          {
LABEL_161:
            if ( *v69 && v70 > 2 )
            {
              v160 = v70 - 16;
              v158 = v70;
              v73 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v70, 0x63647050u);
              v15 = v73;
              if ( v73 )
              {
                memmove(v73, v69, v70);
                goto LABEL_286;
              }
              goto LABEL_342;
            }
          }
          v25 = qword_140947318;
          goto LABEL_296;
        }
LABEL_242:
        v25 = qword_140947318;
        goto LABEL_82;
      }
      v74 = *(unsigned int *)(v172 + 36);
      v75 = *(_BYTE **)(v172 + 40);
      v76 = *(const void **)(v171 + 40);
      v22 = *(unsigned int *)(v171 + 36);
      if ( (unsigned int)v74 > 0xFFFE || (unsigned int)v22 > 0xFFFE )
        goto LABEL_346;
      switch ( *(_DWORD *)v16 )
      {
        case 1:
          goto LABEL_185;
        case 2:
          v78 = PnpMultiSzContainsString(*(PCWSTR *)(v172 + 40), *(const WCHAR **)(v171 + 40));
          if ( v78 )
          {
            v160 = v74 - v22;
            v79 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v74 - v22), 0x63647050u);
            v15 = v79;
            if ( !v79 )
              goto LABEL_344;
            v80 = ((char *)v78 - v75) >> 1;
            if ( v80 > 0 )
              memmove(v79, v75, ((char *)v78 - v75) >> 1);
            memmove((char *)v15 + v80, (char *)v78 + v22, (unsigned int)(v74 - v22) - v80);
            v25 = 0LL;
            v24 = v74 - v22;
          }
          else
          {
            v25 = (__int64 *)v172;
            v15 = 0LL;
          }
          LODWORD(v22) = 0;
          LOWORD(v23) = v24;
          v158 = v24;
          goto LABEL_82;
        case 8:
          v77 = PnpMultiSzContainsString(*(PCWSTR *)(v172 + 40), *(const WCHAR **)(v171 + 40));
          v14 = v171;
          LODWORD(v22) = 0;
          v15 = 0LL;
          LOWORD(v23) = 0;
          if ( v77 )
            v25 = (__int64 *)v171;
          goto LABEL_43;
      }
      if ( *(_DWORD *)v16 != 9 )
      {
        LODWORD(v22) = 0;
        v25 = qword_140947318;
        v15 = 0LL;
        goto LABEL_109;
      }
      if ( PnpMultiSzContainsString(*(PCWSTR *)(v172 + 40), *(const WCHAR **)(v171 + 40)) )
      {
        v25 = (__int64 *)v172;
LABEL_281:
        LODWORD(v22) = 0;
        goto LABEL_285;
      }
LABEL_185:
      if ( (unsigned int)(v22 + v74) <= 0xFFFE )
      {
        v81 = (unsigned __int16)(v22 + v74);
        v160 = v22 + v74;
        v158 = v22 + v74;
        v82 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v81, 0x63647050u);
        v157 = v82;
        if ( v82 )
        {
          memmove(v82, v75, v74 - 2);
          memmove(&v157[(v74 >> 1) - 1], v76, v22);
          v15 = v157;
          LODWORD(v22) = 0;
          v157[(v81 >> 1) - 1] = 0;
          v25 = 0LL;
          goto LABEL_286;
        }
        goto LABEL_344;
      }
      v8 = -2147483643;
LABEL_345:
      v146 = v159;
      goto LABEL_354;
    }
    v46 = *(unsigned int *)(v172 + 36);
    v47 = *(const WCHAR **)(v172 + 40);
    v48 = *(const WCHAR **)(v171 + 40);
    v23 = *(unsigned int *)(v171 + 36);
    if ( (unsigned int)v46 > 0xFFFE || (unsigned int)v23 > 0xFFFE )
      goto LABEL_346;
    v49 = *(_DWORD *)v16;
    if ( *(int *)v16 > 15 )
    {
      v62 = v49 - 16;
      if ( !v62 )
      {
        v67 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v23 >> 1, 1u);
        v14 = v171;
        LOWORD(v23) = 0;
        v25 = 0LL;
        if ( !v67 )
        {
          LODWORD(v22) = 0;
          goto LABEL_43;
        }
        goto LABEL_250;
      }
      v63 = v62 - 1;
      if ( !v63 )
      {
        v66 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v23 >> 1, 1u);
        goto LABEL_148;
      }
      v64 = v63 - 1;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( v65 )
        {
          if ( v65 != 1 )
          {
LABEL_143:
            LODWORD(v22) = 0;
            v25 = qword_140947318;
            goto LABEL_109;
          }
          v66 = ~RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v23 >> 1, 1u);
LABEL_148:
          v25 = 0LL;
          LODWORD(v22) = v66 >> 31;
          goto LABEL_286;
        }
        v61 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v23 >> 1, 1u) <= 0;
      }
      else
      {
        v61 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v23 >> 1, 1u) > 0;
      }
LABEL_137:
      LODWORD(v22) = v61;
      v25 = 0LL;
      goto LABEL_286;
    }
    if ( v49 == 15 )
    {
      v61 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v23 >> 1, 1u) == 0;
      goto LABEL_137;
    }
    v50 = v49 - 1;
    if ( !v50 )
      goto LABEL_128;
    v51 = v50 - 7;
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( !v52 )
      {
LABEL_128:
        if ( *v47 )
        {
          if ( *v48 )
          {
            if ( (unsigned __int64)(unsigned int)(v23 + v46) - 2 > 0xFFFE )
              goto LABEL_346;
            v160 = v23 + v46 - 2;
            v59 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v160, 0x63647050u);
            v156 = v59;
            v60 = v59;
            if ( !v59 )
            {
LABEL_344:
              v8 = -1073741670;
              goto LABEL_345;
            }
            memmove(v59, v47, v46 - 2);
            memmove(&v60[(v46 >> 1) - 1], v48, v23);
            v25 = 0LL;
            v24 = v160;
          }
          else
          {
            v25 = (__int64 *)v172;
          }
        }
        else
        {
          v25 = (__int64 *)v171;
        }
        LODWORD(v22) = 0;
        LOWORD(v23) = v24;
        v158 = v24;
LABEL_81:
        v15 = v156;
LABEL_82:
        v14 = v171;
        goto LABEL_43;
      }
      v53 = v52 - 4;
      if ( v53 )
      {
        if ( v53 != 1 )
          goto LABEL_143;
        if ( (unsigned int)v46 > 2 )
        {
LABEL_107:
          v54 = 1;
LABEL_108:
          v25 = 0LL;
          LODWORD(v22) = v54;
LABEL_109:
          LOWORD(v23) = 0;
          goto LABEL_42;
        }
LABEL_112:
        if ( (unsigned int)v23 > 2 )
          goto LABEL_107;
      }
      else if ( (unsigned int)v46 > 2 )
      {
        goto LABEL_112;
      }
      v54 = 0;
      goto LABEL_108;
    }
    if ( !*v47 )
      goto LABEL_127;
    while ( 1 )
    {
      v55 = -1LL;
      do
        ++v55;
      while ( v47[v55] );
      v56 = 2 * v55 + 2;
      if ( !PnpMultiSzContainsString(v48, v47) )
      {
        v58 = v56;
        goto LABEL_122;
      }
      if ( !v15 )
      {
        v57 = 0;
        v160 = 0;
        v156 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v46, 0x63647050u);
        v15 = v156;
        if ( !v156 )
          break;
      }
      v58 = v56;
      memmove((char *)v15 + v160, v47, v56);
      v160 += v56;
LABEL_122:
      v47 += v58 >> 1;
      if ( !*v47 )
      {
        v57 = v160;
        goto LABEL_124;
      }
    }
    v8 = -1073741670;
LABEL_124:
    if ( v15 )
    {
      LODWORD(v22) = 0;
      LOWORD(v23) = v57 + 2;
      v160 = v23;
      v158 = v57 + 2;
      v25 = 0LL;
      v15[((unsigned __int64)(unsigned __int16)v23 >> 1) - 1] = 0;
      goto LABEL_81;
    }
LABEL_127:
    LODWORD(v22) = 0;
LABEL_284:
    v25 = 0LL;
LABEL_285:
    v15 = v156;
LABEL_286:
    v14 = v171;
    LOWORD(v23) = v158;
LABEL_43:
    if ( v8 < 0 )
      goto LABEL_352;
    if ( v25 )
      goto LABEL_329;
    v25 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    if ( !v25 )
      goto LABEL_351;
    *((_DWORD *)v25 + 4) = 0;
    v25[3] = 0LL;
    if ( !v15 )
      break;
    v31 = 7;
    LODWORD(v23) = (unsigned __int16)v23;
    if ( v160 != v158 )
      v31 = 1;
LABEL_328:
    *((_DWORD *)v25 + 8) = v31;
    *((_DWORD *)v25 + 9) = v23;
    v25[5] = (__int64)v15;
LABEL_329:
    LODWORD(v5) = v161;
    v15 = 0LL;
    PoolWithTag = P;
    *((_QWORD *)P + v161) = v25;
    if ( v159 )
    {
      v141 = v159;
      v142 = &v171;
      do
      {
        v143 = (_QWORD *)*v142;
        if ( !*(_QWORD *)(*v142 + 24) )
        {
          v144 = (void *)v143[5];
          if ( v144 )
            ExFreePoolWithTag(v144, 0);
          ExFreePoolWithTag(v143, 0);
        }
        ++v142;
        --v141;
      }
      while ( v141 );
      LODWORD(v5) = v161;
      PoolWithTag = P;
    }
    v4 = v164;
    v9 = v162;
LABEL_338:
    LODWORD(v5) = v5 + 1;
    v161 = v5;
    v145 = -1LL;
    do
      ++v145;
    while ( *(&v9->Length + v145) );
    v9 = (UNICODE_STRING *)((char *)v9 + 2 * v145 + 2);
    v162 = v9;
    Length = v9->Length;
    if ( !v9->Length )
    {
      v161 = v5;
      goto LABEL_364;
    }
  }
  v31 = 4;
  LODWORD(v23) = 4;
  v140 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
  v15 = v140;
  if ( v140 )
  {
    *(_DWORD *)v140 = v22;
    goto LABEL_328;
  }
LABEL_351:
  v8 = -1073741670;
LABEL_352:
  v146 = v159;
LABEL_353:
  if ( v146 )
  {
LABEL_354:
    v147 = &v171;
    v148 = v146;
    do
    {
      v149 = (_QWORD *)*v147;
      if ( !*(_QWORD *)(*v147 + 24) )
      {
        v150 = (void *)v149[5];
        if ( v150 )
          ExFreePoolWithTag(v150, 0);
        ExFreePoolWithTag(v149, 0);
      }
      ++v147;
      --v148;
    }
    while ( v148 );
  }
LABEL_369:
  v151 = P;
  if ( v161 )
  {
    v152 = (PVOID **)P;
    v153 = v161;
    do
    {
      v154 = *v152;
      if ( !(*v152)[3] )
      {
        if ( v154[5] )
        {
          ExFreePoolWithTag(v154[5], 0);
          v154 = *v152;
        }
        ExFreePoolWithTag(v154, 0);
      }
      ++v152;
      --v153;
    }
    while ( v153 );
  }
  ExFreePoolWithTag(v151, 0);
  v7 = (unsigned int *)v169;
LABEL_378:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
