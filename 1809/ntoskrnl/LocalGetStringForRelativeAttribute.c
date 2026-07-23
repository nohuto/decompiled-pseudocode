/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x1408AB234
 * Callers:
 *     LocalGetAceCondition @ 0x1408A7298 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _i64tow_s @ 0x14019A830 (_i64tow_s.c)
 *     _ui64tow_s @ 0x14019A890 (_ui64tow_s.c)
 *     _ultow_s @ 0x14019A8B0 (_ultow_s.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1408A7514 (LocalGetStringForSid.c)
 *     EncodeAttributeName @ 0x1408A846C (EncodeAttributeName.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        size_t *a7)
{
  void *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int16 *v14; // r11
  __int64 v15; // rdx
  size_t v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned int v25; // r9d
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // rcx
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  unsigned __int8 v35; // dl
  __int64 v36; // rax
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // r15d
  unsigned int *v40; // r11
  __int64 v41; // rcx
  __int64 v42; // r11
  int v43; // eax
  unsigned int v44; // ecx
  _WORD *v45; // rax
  unsigned int v46; // r12d
  unsigned int *v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // ecx
  int v51; // eax
  unsigned int v52; // r12d
  unsigned int *v53; // r15
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // ecx
  int v57; // eax
  unsigned __int64 v58; // rbx
  void *v59; // rdx
  _WORD *v60; // rdi
  _WORD *v61; // rdi
  int v62; // eax
  __int64 v63; // rax
  size_t v64; // rbx
  char *v65; // rdi
  __int64 v66; // r9
  char *v67; // rdi
  int v68; // r15d
  int v69; // r15d
  int v70; // r15d
  int v71; // r15d
  int v72; // r15d
  unsigned int *v73; // r8
  __int64 v74; // r12
  __int64 v75; // rcx
  unsigned int v76; // r9d
  unsigned __int8 *v77; // rdx
  __int64 v78; // r10
  unsigned int v79; // ecx
  unsigned int v80; // r15d
  _DWORD *v81; // r12
  __int64 v82; // r8
  char *v83; // rdi
  __int64 v84; // rax
  size_t v85; // rbx
  __int64 v86; // r12
  unsigned int *v87; // r15
  char *v88; // rdi
  _WORD *v89; // rdx
  __int64 v90; // rax
  size_t v91; // rbx
  char *v92; // rdi
  unsigned int *v93; // r15
  __int64 v94; // r12
  char *v95; // rdi
  __int64 v96; // rax
  size_t v97; // rbx
  unsigned int *v98; // r15
  __int64 v99; // r12
  char *v100; // rdi
  __int64 v101; // rax
  size_t v102; // rbx
  size_t *v103; // rax
  int v105; // [rsp+20h] [rbp-E0h]
  int v106; // [rsp+30h] [rbp-D0h]
  unsigned int v107; // [rsp+30h] [rbp-D0h]
  unsigned int v108; // [rsp+34h] [rbp-CCh]
  unsigned int v109; // [rsp+34h] [rbp-CCh]
  unsigned int v110; // [rsp+34h] [rbp-CCh]
  unsigned int v111; // [rsp+34h] [rbp-CCh]
  size_t pcbLength; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int StringForSid; // [rsp+40h] [rbp-C0h]
  PVOID P[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v116; // [rsp+60h] [rbp-A0h]
  size_t Size; // [rsp+68h] [rbp-98h]
  size_t *v118; // [rsp+70h] [rbp-90h]
  wchar_t v119[72]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t DstBuf[40]; // [rsp+110h] [rbp+10h] BYREF

  v116 = a3;
  v118 = a7;
  Src = 0LL;
  v9 = 0LL;
  memset(DstBuf, 0, 0x46uLL);
  memset(v119, 0, 0x8CuLL);
  P[0] = 0LL;
  pcbLength = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    v10 = 87;
LABEL_143:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    goto LABEL_145;
  }
  if ( a2 < 0x14 )
    return 1336;
  v11 = a1[3];
  LOWORD(v12) = *((_WORD *)a1 + 2);
  if ( !(_DWORD)v11 )
    return 1336;
  ultow_s(a1[2], DstBuf, 0x23uLL, 16);
  v13 = *a1;
  if ( a2 < (unsigned int)v13
    || a2 - (unsigned int)v13 < 4
    || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v13), a2 - (unsigned int)v13, &pcbLength) < 0
    || !(_DWORD)pcbLength )
  {
    return 1336;
  }
  StringForSid = EncodeAttributeName(v14, pcbLength, (__int64 *)&Src);
  v10 = StringForSid;
  if ( !StringForSid )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = (unsigned int)(2 * v15);
    Size = v16;
    if ( (unsigned __int64)(2 * v11) <= 0xFFFFFFFF
      && (unsigned int)(2 * v11 + 24) >= 0x18
      && 2 * (int)v11 + 24 + (int)v16 >= (unsigned int)(2 * v11 + 24) )
    {
      v17 = 2 * v11 + 24 + v16;
      v18 = -1LL;
      do
        ++v18;
      while ( DstBuf[v18] );
      v19 = v17 + 2 * v18;
      if ( v19 >= v17 )
      {
        v20 = v19;
        if ( (unsigned __int64)(4 * v11) <= 0xFFFFFFFF )
        {
          if ( a2 - 16 < 4 * (int)v11 )
            goto LABEL_29;
          v12 = (unsigned __int16)v12;
          v106 = (unsigned __int16)v12;
          if ( (unsigned __int16)v12 != 1 )
          {
            switch ( (unsigned __int16)v12 )
            {
              case 2u:
                goto LABEL_70;
              case 3u:
                v39 = 0;
                v40 = a1 + 4;
                while ( 1 )
                {
                  v41 = *v40;
                  v109 = v20;
                  if ( a2 < (unsigned int)v41
                    || a2 - (unsigned int)v41 < 2
                    || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v41), a2 - (unsigned int)v41, &pcbLength) < 0 )
                  {
                    goto LABEL_29;
                  }
                  v43 = -1;
                  v44 = v20 + pcbLength + 4;
                  if ( v44 >= v20 )
                    v43 = v20 + pcbLength + 4;
                  v20 = v43;
                  if ( v44 < v109 )
                    goto LABEL_15;
                  ++v39;
                  v40 = (unsigned int *)(v42 + 4);
                  if ( v39 >= (unsigned int)v11 )
                    goto LABEL_66;
                }
              case 5u:
                v107 = 0;
                v29 = a1 + 4;
                pcbLength = (size_t)(a1 + 4);
                while ( 1 )
                {
                  v30 = *v29;
                  v108 = v20;
                  if ( a2 < (unsigned int)v30 )
                    goto LABEL_29;
                  if ( a2 - (unsigned int)v30 < 4 )
                    goto LABEL_29;
                  v31 = *(unsigned int *)((char *)a1 + v30);
                  v32 = (unsigned int)(v30 + 4);
                  if ( !v31 )
                    goto LABEL_29;
                  v33 = a2 - v32;
                  if ( a2 - (unsigned int)v32 < v31 )
                    goto LABEL_29;
                  if ( v33 < 8 )
                    goto LABEL_29;
                  v34 = (char *)a1 + v32;
                  v35 = v34[1];
                  if ( !v35 || v33 - 8 < 4 * (unsigned __int64)v35 )
                    goto LABEL_29;
                  StringForSid = LocalGetStringForSid(v34, (wchar_t **)P, v116, 0LL, v105, a6);
                  v10 = StringForSid;
                  if ( StringForSid )
                    goto LABEL_145;
                  v36 = -1LL;
                  do
                    ++v36;
                  while ( *((_WORD *)P[0] + v36) );
                  v37 = v20 + 2 * v36;
                  v38 = -1;
                  if ( v37 >= v20 )
                    v38 = v37;
                  v20 = v38;
                  if ( v37 < v108 )
                    goto LABEL_15;
                  if ( P[0] )
                  {
                    ExFreePoolWithTag(P[0], 0);
                    P[0] = 0LL;
                  }
                  v29 = (unsigned int *)(pcbLength + 4);
                  ++v107;
                  pcbLength += 4LL;
                  if ( v107 >= (unsigned int)v11 )
                    goto LABEL_67;
                }
              case 6u:
LABEL_70:
                v46 = 0;
                v47 = a1 + 4;
                while ( 1 )
                {
                  v48 = *v47;
                  v110 = v20;
                  if ( a2 < (unsigned int)v48 || a2 - (unsigned int)v48 < 8 )
                    break;
                  ui64tow_s(*(_QWORD *)((char *)a1 + v48), v119, 0x46uLL, 10);
                  v49 = -1LL;
                  do
                    ++v49;
                  while ( v119[v49] );
                  v50 = v20 + 2 * v49;
                  v51 = -1;
                  if ( v50 >= v20 )
                    v51 = v50;
                  v20 = v51;
                  if ( v50 < v110 )
                    goto LABEL_15;
                  ++v46;
                  ++v47;
                  if ( v46 >= (unsigned int)v11 )
                    goto LABEL_66;
                }
                break;
              case 0x10u:
                v21 = 0;
                v22 = a1 + 4;
                while ( 1 )
                {
                  v23 = *v22;
                  v24 = v20;
                  if ( a2 < (unsigned int)v23 )
                    break;
                  if ( a2 - (unsigned int)v23 < 4 )
                    break;
                  v25 = *(unsigned int *)((char *)a1 + v23);
                  if ( a2 - (unsigned int)v23 - 4 < v25 )
                    break;
                  v26 = 4LL * v25;
                  if ( v26 > 0xFFFFFFFF )
                    goto LABEL_15;
                  v27 = v20 + v26;
                  v28 = -1;
                  if ( v27 >= v20 )
                    v28 = v27;
                  v20 = v28;
                  if ( v27 < v24 )
                    goto LABEL_15;
                  ++v21;
                  ++v22;
                  if ( v21 >= (unsigned int)v11 )
                    goto LABEL_67;
                }
                break;
            }
LABEL_29:
            v10 = 1336;
            goto LABEL_145;
          }
          v52 = 0;
          v53 = a1 + 4;
          do
          {
            v54 = *v53;
            v111 = v20;
            if ( a2 < (unsigned int)v54 || a2 - (unsigned int)v54 < 8 )
              goto LABEL_29;
            i64tow_s(*(_QWORD *)((char *)a1 + v54), v119, 0x46uLL, 10);
            v55 = -1LL;
            do
              ++v55;
            while ( v119[v55] );
            v56 = v20 + 2 * v55;
            v57 = -1;
            if ( v56 >= v20 )
              v57 = v56;
            v20 = v57;
            if ( v56 < v111 )
              goto LABEL_15;
            ++v52;
            ++v53;
          }
          while ( v52 < (unsigned int)v11 );
LABEL_66:
          v12 = v106;
LABEL_67:
          if ( v20 + 3 >= v20 )
          {
            v45 = SddlpAlloc((v20 + 3) & 0xFFFFFFFC);
            pcbLength = (size_t)v45;
            if ( !v45 )
            {
              v10 = 8;
              goto LABEL_145;
            }
            v58 = (unsigned int)Size;
            v59 = Src;
            *v45 = 40;
            v45[1] = 34;
            v60 = v45 + 2;
            memmove(v45 + 2, v59, (unsigned int)v58);
            v61 = &v60[v58 >> 1];
            *(_DWORD *)v61 = 2883618;
            switch ( v12 )
            {
              case 1:
                v62 = *(_DWORD *)L"TI";
                break;
              case 2:
                v62 = *(_DWORD *)L"TU";
                break;
              case 3:
                v62 = *(_DWORD *)L"TS";
                break;
              case 5:
                v62 = *(_DWORD *)L"TD";
                break;
              case 6:
                v62 = *(_DWORD *)L"TB";
                break;
              case 16:
                v62 = *(_DWORD *)L"TX";
                break;
              default:
LABEL_96:
                v10 = 1336;
LABEL_97:
                v9 = (void *)pcbLength;
                goto LABEL_143;
            }
            *((_DWORD *)v61 + 1) = v62;
            v63 = -1LL;
            v61[4] = 44;
            do
              ++v63;
            while ( DstBuf[v63] );
            *(_DWORD *)(v61 + 5) = 7864368;
            v64 = 2LL * (unsigned int)v63;
            v65 = (char *)(v61 + 7);
            memmove(v65, DstBuf, v64);
            v67 = &v65[v64];
            v68 = v12 - 1;
            if ( !v68 )
            {
              v98 = a1 + 4;
              v99 = v11;
              do
              {
                *(_WORD *)v67 = 44;
                v100 = v67 + 2;
                i64tow_s(*(_QWORD *)((char *)a1 + *v98), v119, 0x46uLL, 10);
                v101 = -1LL;
                do
                  ++v101;
                while ( v119[v101] );
                v102 = 2LL * (unsigned int)v101;
                memmove(v100, v119, v102);
                v67 = &v100[v102];
                ++v98;
                --v99;
              }
              while ( v99 );
              goto LABEL_140;
            }
            v69 = v68 - 1;
            if ( v69 )
            {
              v70 = v69 - 1;
              if ( !v70 )
              {
                v86 = v11;
                v87 = a1 + 4;
                do
                {
                  *(_DWORD *)v67 = 2228268;
                  v88 = v67 + 4;
                  v89 = (_WORD *)((char *)a1 + *v87);
                  v90 = -1LL;
                  do
                    ++v90;
                  while ( v89[v90] );
                  v91 = 2LL * (unsigned int)v90;
                  memmove(v88, v89, v91);
                  v92 = &v88[v91];
                  ++v87;
                  *(_WORD *)v92 = 34;
                  v67 = v92 + 2;
                  --v86;
                }
                while ( v86 );
                goto LABEL_140;
              }
              v71 = v70 - 2;
              if ( !v71 )
              {
                v80 = 0;
                v81 = a1 + 4;
                while ( 1 )
                {
                  v82 = v116;
                  *(_WORD *)v67 = 44;
                  v83 = v67 + 2;
                  v10 = LocalGetStringForSid((char *)a1 + (unsigned int)(*v81 + 4), (wchar_t **)P, v82, v66, v105, a6);
                  if ( v10 )
                    goto LABEL_97;
                  v84 = -1LL;
                  do
                    ++v84;
                  while ( *((_WORD *)P[0] + v84) );
                  v85 = 2LL * (unsigned int)v84;
                  memmove(v83, P[0], v85);
                  v67 = &v83[v85];
                  if ( P[0] )
                  {
                    ExFreePoolWithTag(P[0], 0);
                    P[0] = 0LL;
                  }
                  ++v80;
                  ++v81;
                  if ( v80 >= (unsigned int)v11 )
                    goto LABEL_141;
                }
              }
              v72 = v71 - 1;
              if ( v72 )
              {
                if ( v72 != 10 )
                  goto LABEL_96;
                v73 = a1 + 4;
                v74 = v11;
                do
                {
                  *(_WORD *)v67 = 44;
                  v67 += 2;
                  v75 = *v73;
                  v76 = *(unsigned int *)((char *)a1 + v75);
                  v77 = (unsigned __int8 *)a1 + (unsigned int)(v75 + 4);
                  if ( v76 )
                  {
                    v78 = v76;
                    do
                    {
                      v79 = *v77++;
                      *(_WORD *)v67 = a0123456789abcd[(unsigned __int64)v79 >> 4];
                      *((_WORD *)v67 + 1) = a0123456789abcd[v79 & 0xF];
                      v67 += 4;
                      --v78;
                    }
                    while ( v78 );
                  }
                  ++v73;
                  --v74;
                }
                while ( v74 );
LABEL_141:
                v103 = v118;
                *(_DWORD *)v67 = 41;
                *v103 = pcbLength;
                goto LABEL_145;
              }
            }
            v93 = a1 + 4;
            v94 = v11;
            do
            {
              *(_WORD *)v67 = 44;
              v95 = v67 + 2;
              ui64tow_s(*(_QWORD *)((char *)a1 + *v93), v119, 0x46uLL, 10);
              v96 = -1LL;
              do
                ++v96;
              while ( v119[v96] );
              v97 = 2LL * (unsigned int)v96;
              memmove(v95, v119, v97);
              v67 = &v95[v97];
              ++v93;
              --v94;
            }
            while ( v94 );
LABEL_140:
            v10 = StringForSid;
            goto LABEL_141;
          }
        }
      }
    }
LABEL_15:
    v10 = 534;
  }
LABEL_145:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return v10;
}
