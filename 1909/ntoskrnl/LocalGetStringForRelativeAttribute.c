/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x1408E6B18
 * Callers:
 *     LocalGetAceCondition @ 0x1405B33F4 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _i64tow_s @ 0x1401A5680 (_i64tow_s.c)
 *     _ui64tow_s @ 0x1401A56E0 (_ui64tow_s.c)
 *     _ultow_s @ 0x1401A5700 (_ultow_s.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406ED59C (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1408E31C0 (LocalGetStringForSid.c)
 *     EncodeAttributeName @ 0x1408E3E8C (EncodeAttributeName.c)
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
  unsigned int StringForSid; // esi
  __int64 v11; // r15
  int v12; // r12d
  __int64 v13; // rcx
  unsigned __int16 *v14; // r11
  __int64 v15; // r13
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rax
  unsigned int *v26; // r13
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // eax
  _BYTE *v31; // rcx
  unsigned __int8 v32; // r8
  __int64 v33; // rax
  _WORD *v34; // rax
  unsigned int v35; // r12d
  unsigned int *v36; // r11
  __int64 v37; // rcx
  __int64 v38; // r11
  unsigned int v39; // r13d
  unsigned int *v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r13d
  unsigned int *v44; // r12
  __int64 v45; // rcx
  __int64 v46; // rax
  void *v47; // rdx
  _WORD *v48; // rdi
  _WORD *v49; // rdi
  int v50; // eax
  __int64 v51; // rax
  size_t v52; // rbx
  char *v53; // rdi
  __int64 v54; // r9
  char *v55; // rdi
  int v56; // r12d
  int v57; // r12d
  int v58; // r12d
  int v59; // r12d
  int v60; // r12d
  unsigned int *v61; // r8
  __int64 v62; // r12
  __int64 v63; // rcx
  unsigned int v64; // r9d
  unsigned __int8 *v65; // rdx
  __int64 v66; // r10
  unsigned int v67; // ecx
  unsigned int v68; // r12d
  _DWORD *v69; // r13
  __int64 v70; // r8
  char *v71; // rdi
  __int64 v72; // rax
  size_t v73; // rbx
  __int64 v74; // r12
  unsigned int *v75; // r15
  char *v76; // rdi
  _WORD *v77; // rdx
  __int64 v78; // rax
  size_t v79; // rbx
  char *v80; // rdi
  __int64 v81; // r12
  unsigned int *v82; // r15
  char *v83; // rdi
  __int64 v84; // rax
  size_t v85; // rbx
  __int64 v86; // r12
  unsigned int *v87; // r15
  char *v88; // rdi
  __int64 v89; // rax
  size_t v90; // rbx
  size_t *v91; // rax
  int v93; // [rsp+20h] [rbp-E0h]
  int v94; // [rsp+30h] [rbp-D0h]
  int v95; // [rsp+30h] [rbp-D0h]
  size_t pcbLength; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v98; // [rsp+48h] [rbp-B8h]
  __int64 v99; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v101; // [rsp+60h] [rbp-A0h]
  size_t *v102; // [rsp+68h] [rbp-98h]
  wchar_t v103[72]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t DstBuf[40]; // [rsp+100h] [rbp+0h] BYREF

  v101 = a3;
  v102 = a7;
  Src = 0LL;
  v9 = 0LL;
  memset(DstBuf, 0, 0x46uLL);
  memset(v103, 0, 0x8CuLL);
  P = 0LL;
  pcbLength = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    StringForSid = 87;
LABEL_133:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    goto LABEL_135;
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
  if ( !StringForSid )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = (unsigned int)(2 * v15);
    v98 = v16;
    v99 = v11;
    if ( (unsigned __int64)(2 * v11) > 0xFFFFFFFF )
      goto LABEL_131;
    v17 = 2 * v11 + 24;
    if ( v17 < 0x18 )
      goto LABEL_131;
    v18 = v17 + v16;
    if ( v17 + (unsigned int)v16 < v17 )
      goto LABEL_131;
    v19 = -1LL;
    do
      ++v19;
    while ( DstBuf[v19] );
    v20 = v18 + 2 * v19;
    if ( v20 < v18 || (unsigned __int64)(4 * v11) > 0xFFFFFFFF )
      goto LABEL_131;
    if ( a2 - 16 < 4 * (int)v11 )
      goto LABEL_28;
    v12 = (unsigned __int16)v12;
    v94 = (unsigned __int16)v12;
    if ( (unsigned __int16)v12 != 1 )
    {
      switch ( (unsigned __int16)v12 )
      {
        case 2u:
          goto LABEL_63;
        case 3u:
          v35 = 0;
          v36 = a1 + 4;
          while ( 1 )
          {
            v37 = *v36;
            if ( a2 < (unsigned int)v37
              || a2 - (unsigned int)v37 < 2
              || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v37), a2 - (unsigned int)v37, &pcbLength) < 0 )
            {
              goto LABEL_28;
            }
            if ( v20 + (_DWORD)pcbLength + 4 < v20 )
              goto LABEL_131;
            ++v35;
            v36 = (unsigned int *)(v38 + 4);
            v20 += pcbLength + 4;
            if ( v35 >= (unsigned int)v11 )
            {
              v12 = v94;
              goto LABEL_53;
            }
          }
        case 5u:
          v95 = 0;
          v26 = a1 + 4;
          while ( 1 )
          {
            v27 = *v26;
            if ( a2 < (unsigned int)v27 )
              goto LABEL_28;
            if ( a2 - (unsigned int)v27 < 4 )
              goto LABEL_28;
            v28 = *(unsigned int *)((char *)a1 + v27);
            v29 = (unsigned int)(v27 + 4);
            if ( !v28 )
              goto LABEL_28;
            v30 = a2 - v29;
            if ( a2 - (unsigned int)v29 < v28 )
              goto LABEL_28;
            if ( v30 < 8 )
              goto LABEL_28;
            v31 = (char *)a1 + v29;
            v32 = v31[1];
            if ( !v32 || v30 - 8 < 4 * (unsigned __int64)v32 )
              goto LABEL_28;
            StringForSid = LocalGetStringForSid(v31, (wchar_t **)&P, v101, 0LL, v93, a6);
            if ( StringForSid )
              goto LABEL_135;
            v33 = -1LL;
            do
              ++v33;
            while ( *((_WORD *)P + v33) );
            if ( v20 + 2 * (_DWORD)v33 < v20 )
              goto LABEL_131;
            v20 += 2 * v33;
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            ++v26;
            if ( ++v95 >= (unsigned int)v11 )
              goto LABEL_52;
          }
        case 6u:
LABEL_63:
          v39 = 0;
          v40 = a1 + 4;
          while ( 1 )
          {
            v41 = *v40;
            if ( a2 < (unsigned int)v41 || a2 - (unsigned int)v41 < 8 )
              break;
            ui64tow_s(*(_QWORD *)((char *)a1 + v41), v103, 0x46uLL, 10);
            v42 = -1LL;
            do
              ++v42;
            while ( v103[v42] );
            if ( v20 + 2 * (_DWORD)v42 < v20 )
              goto LABEL_131;
            ++v39;
            ++v40;
            v20 += 2 * v42;
            if ( v39 >= (unsigned int)v11 )
              goto LABEL_78;
          }
          break;
        case 0x10u:
          v21 = 0;
          v22 = a1 + 4;
          while ( 1 )
          {
            v23 = *v22;
            if ( a2 < (unsigned int)v23 )
              break;
            if ( a2 - (unsigned int)v23 < 4 )
              break;
            v24 = *(unsigned int *)((char *)a1 + v23);
            if ( a2 - (unsigned int)v23 - 4 < v24 )
              break;
            v25 = 4LL * v24;
            if ( v25 > 0xFFFFFFFF || (unsigned int)v25 + v20 < v20 )
              goto LABEL_131;
            ++v21;
            ++v22;
            v20 += v25;
            if ( v21 >= (unsigned int)v11 )
              goto LABEL_53;
          }
          break;
      }
LABEL_28:
      StringForSid = 1336;
      goto LABEL_135;
    }
    v43 = 0;
    v44 = a1 + 4;
    do
    {
      v45 = *v44;
      if ( a2 < (unsigned int)v45 || a2 - (unsigned int)v45 < 8 )
        goto LABEL_28;
      i64tow_s(*(_QWORD *)((char *)a1 + v45), v103, 0x46uLL, 10);
      v46 = -1LL;
      do
        ++v46;
      while ( v103[v46] );
      if ( v20 + 2 * (_DWORD)v46 < v20 )
        goto LABEL_131;
      ++v43;
      ++v44;
      v20 += 2 * v46;
    }
    while ( v43 < (unsigned int)v11 );
LABEL_78:
    v12 = v94;
LABEL_52:
    LODWORD(v16) = v98;
LABEL_53:
    if ( v20 + 3 < v20 )
    {
LABEL_131:
      StringForSid = 534;
      goto LABEL_135;
    }
    v34 = SddlpAlloc((v20 + 3) & 0xFFFFFFFC);
    pcbLength = (size_t)v34;
    if ( !v34 )
    {
      StringForSid = 8;
      goto LABEL_135;
    }
    v47 = Src;
    *v34 = 40;
    v34[1] = 34;
    v48 = v34 + 2;
    memmove(v34 + 2, v47, (unsigned int)v16);
    v49 = &v48[(unsigned __int64)(unsigned int)v16 >> 1];
    *(_DWORD *)v49 = 2883618;
    switch ( v12 )
    {
      case 1:
        v50 = *(_DWORD *)L"TI";
        break;
      case 2:
        v50 = *(_DWORD *)L"TU";
        break;
      case 3:
        v50 = *(_DWORD *)L"TS";
        break;
      case 5:
        v50 = *(_DWORD *)L"TD";
        break;
      case 6:
        v50 = *(_DWORD *)L"TB";
        break;
      case 16:
        v50 = *(_DWORD *)L"TX";
        break;
      default:
LABEL_85:
        StringForSid = 1336;
LABEL_86:
        v9 = (void *)pcbLength;
        goto LABEL_133;
    }
    *((_DWORD *)v49 + 1) = v50;
    v51 = -1LL;
    v49[4] = 44;
    do
      ++v51;
    while ( DstBuf[v51] );
    *(_DWORD *)(v49 + 5) = 7864368;
    v52 = 2LL * (unsigned int)v51;
    v53 = (char *)(v49 + 7);
    memmove(v53, DstBuf, v52);
    v55 = &v53[v52];
    v56 = v12 - 1;
    if ( !v56 )
    {
      v86 = v99;
      v87 = a1 + 4;
      do
      {
        *(_WORD *)v55 = 44;
        v88 = v55 + 2;
        i64tow_s(*(_QWORD *)((char *)a1 + *v87), v103, 0x46uLL, 10);
        v89 = -1LL;
        do
          ++v89;
        while ( v103[v89] );
        v90 = 2LL * (unsigned int)v89;
        memmove(v88, v103, v90);
        v55 = &v88[v90];
        ++v87;
        --v86;
      }
      while ( v86 );
      goto LABEL_129;
    }
    v57 = v56 - 1;
    if ( v57 )
    {
      v58 = v57 - 1;
      if ( !v58 )
      {
        v74 = v99;
        v75 = a1 + 4;
        do
        {
          *(_DWORD *)v55 = 2228268;
          v76 = v55 + 4;
          v77 = (_WORD *)((char *)a1 + *v75);
          v78 = -1LL;
          do
            ++v78;
          while ( v77[v78] );
          v79 = 2LL * (unsigned int)v78;
          memmove(v76, v77, v79);
          v80 = &v76[v79];
          ++v75;
          *(_WORD *)v80 = 34;
          v55 = v80 + 2;
          --v74;
        }
        while ( v74 );
        goto LABEL_129;
      }
      v59 = v58 - 2;
      if ( !v59 )
      {
        v68 = 0;
        v69 = a1 + 4;
        while ( 1 )
        {
          v70 = v101;
          *(_WORD *)v55 = 44;
          v71 = v55 + 2;
          StringForSid = LocalGetStringForSid((char *)a1 + (unsigned int)(*v69 + 4), (wchar_t **)&P, v70, v54, v93, a6);
          if ( StringForSid )
            goto LABEL_86;
          v72 = -1LL;
          do
            ++v72;
          while ( *((_WORD *)P + v72) );
          v73 = 2LL * (unsigned int)v72;
          memmove(v71, P, v73);
          v55 = &v71[v73];
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          ++v68;
          ++v69;
          if ( v68 >= (unsigned int)v11 )
            goto LABEL_130;
        }
      }
      v60 = v59 - 1;
      if ( v60 )
      {
        if ( v60 != 10 )
          goto LABEL_85;
        v61 = a1 + 4;
        v62 = v11;
        do
        {
          *(_WORD *)v55 = 44;
          v55 += 2;
          v63 = *v61;
          v64 = *(unsigned int *)((char *)a1 + v63);
          v65 = (unsigned __int8 *)a1 + (unsigned int)(v63 + 4);
          if ( v64 )
          {
            v66 = v64;
            do
            {
              v67 = *v65++;
              *(_WORD *)v55 = a0123456789abcd[(unsigned __int64)v67 >> 4];
              *((_WORD *)v55 + 1) = a0123456789abcd[v67 & 0xF];
              v55 += 4;
              --v66;
            }
            while ( v66 );
          }
          ++v61;
          --v62;
        }
        while ( v62 );
LABEL_130:
        v91 = v102;
        *(_DWORD *)v55 = 41;
        *v91 = pcbLength;
        goto LABEL_135;
      }
    }
    v81 = v99;
    v82 = a1 + 4;
    do
    {
      *(_WORD *)v55 = 44;
      v83 = v55 + 2;
      ui64tow_s(*(_QWORD *)((char *)a1 + *v82), v103, 0x46uLL, 10);
      v84 = -1LL;
      do
        ++v84;
      while ( v103[v84] );
      v85 = 2LL * (unsigned int)v84;
      memmove(v83, v103, v85);
      v55 = &v83[v85];
      ++v82;
      --v81;
    }
    while ( v81 );
LABEL_129:
    StringForSid = 0;
    goto LABEL_130;
  }
LABEL_135:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return StringForSid;
}
