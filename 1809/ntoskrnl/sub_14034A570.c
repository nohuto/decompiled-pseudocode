/*
 * XREFs of sub_14034A570 @ 0x14034A570
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x1401AF0AC (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     SdbpCheckDll @ 0x14034B890 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14034BB50 (KeGuardCheckICall.c)
 */

unsigned __int64 __fastcall sub_14034A570(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // esi
  _QWORD *v11; // r9
  int v12; // r10d
  const char *v13; // rax
  __int64 v14; // r11
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r11
  int v25; // r13d
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ecx
  _BYTE *v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  unsigned __int64 v33; // r9
  unsigned int v34; // r8d
  int *v35; // rbx
  __int64 v36; // r10
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // rax
  int v42; // eax
  _QWORD *v43; // r11
  int v44; // r14d
  int v45; // eax
  unsigned __int64 v46; // r15
  _QWORD *v47; // r9
  __int64 v48; // r8
  const char *v49; // rax
  unsigned __int64 v50; // rsi
  unsigned int v51; // r10d
  __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 i; // rax
  unsigned int v59; // esi
  BOOL v60; // r12d
  __int64 v61; // rcx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v63; // r14
  unsigned __int64 v64; // r15
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // r12
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v72; // r14
  __int64 v73; // r15
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // r8
  unsigned int v76; // r10d
  unsigned __int64 v77; // r9
  _QWORD *v78; // rdx
  unsigned __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  unsigned __int64 v82; // rax
  __int64 v83; // rsi
  _QWORD *v84; // rcx
  char *v85; // r10
  int v86; // r11d
  unsigned __int64 v87; // rbx
  signed __int64 v88; // r10
  unsigned __int64 v89; // r8
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  _QWORD *v92; // r9
  unsigned __int64 v93; // rax
  unsigned __int128 v94; // rax
  __int64 v95; // rdx
  char *v96; // rdx
  _QWORD *v97; // rcx
  __int64 v98; // r8
  char v99; // al
  unsigned __int64 v100; // rdx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  int v106; // ecx
  volatile signed __int32 *v107; // rax
  signed __int32 v108[8]; // [rsp+200h] [rbp+200h] BYREF
  _BYTE v109[512]; // [rsp+2C0h] [rbp+2C0h] BYREF

  v2 = (_QWORD *)((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL);
  v3 = a2;
  if ( (*(_DWORD *)(a2 + 2416) & 0x110000) != 0x110000 )
  {
    v4 = v2 + 16;
    v5 = 304;
    v6 = 38LL;
    do
    {
      *v4 = 0LL;
      v5 -= 8;
      ++v4;
      --v6;
    }
    while ( v6 );
    for ( ; v5; --v5 )
    {
      *(_BYTE *)v4 = 0;
      v4 = (_QWORD *)((char *)v4 + 1);
    }
    v7 = *(_OWORD *)(v3 + 2096);
    *(_WORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 304;
    v8 = *(_OWORD *)(v3 + 2112);
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x32) = ((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL)
                                                                         + 128;
    *(_OWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v7;
    *(_WORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v3 + 2144;
    v9 = *(_OWORD *)(v3 + 2128);
    *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = (v3 + 2144) >> 32;
    *(_OWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v8;
    *(_WORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x96) = (unsigned int)(v3 + 2144) >> 16;
    *(_OWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v9;
    _disable();
    if ( *(int *)(v3 + 2416) >= 0 )
    {
      __sidt(v2 + 9);
      __lidt(v2 + 6);
      __writedr(7u, 0LL);
      __lidt(v2 + 9);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  *(_DWORD *)(v3 + 2064) += 1552;
  v10 = *(_DWORD *)(v3 + 196);
  v11 = (_QWORD *)v3;
  v12 = *(_DWORD *)(v3 + 2044);
  v13 = (const char *)v3;
  v14 = *(_QWORD *)(v3 + 2048);
  *(_DWORD *)(v3 + 196) = 0;
  if ( v3 < v3 + 1552 )
  {
    do
    {
      _mm_prefetch(v13, 0);
      v13 += 64;
    }
    while ( (unsigned __int64)v13 < v3 + 1552 );
  }
  v15 = v14;
  v16 = 12;
  do
  {
    v17 = 8LL;
    do
    {
      v18 = v15 ^ *v11;
      v19 = v11 + 1;
      v20 = *v19;
      v11 = v19 + 1;
      v15 = __ROL8__(__ROL8__(v18, v12) ^ v20, v12);
      --v17;
    }
    while ( v17 );
    v21 = __ROL8__(v14 ^ ((unsigned __int64)v11 - v3), 17) ^ v14 ^ ((unsigned __int64)v11 - v3);
    v22 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v22;
    v12 = ((unsigned __int8)(v22 ^ v21) ^ (unsigned __int8)v12) & 0x3F;
    if ( !v12 )
      LOBYTE(v12) = 1;
    --v16;
  }
  while ( v16 );
  LODWORD(v23) = 16;
  v24 = 2LL;
  v25 = 64;
  do
  {
    v15 = __ROL8__(*v11++ ^ v15, v12);
    v23 = (unsigned int)(v23 - 8);
    --v24;
  }
  while ( v24 );
  if ( (_DWORD)v23 )
  {
    do
    {
      v26 = *(unsigned __int8 *)v11;
      v11 = (_QWORD *)((char *)v11 + 1);
      v15 = __ROL8__(v26 ^ v15, v12);
      v27 = (_DWORD)v23 == 1;
      v23 = (unsigned int)(v23 - 1);
    }
    while ( !v27 );
  }
  *(_DWORD *)(v3 + 196) = v10;
  if ( *(_QWORD *)(v3 + 2560) != v15 )
  {
    v28 = *(_QWORD *)(v3 + 1408);
    v29 = *(_DWORD *)(v3 + 1996);
    *(_QWORD *)v28 = v3;
    *(_DWORD *)(v28 + 16) = v29;
    v23 = *(_QWORD *)(v3 + 2560);
    if ( !*(_DWORD *)(v3 + 2264) )
    {
      *(_QWORD *)(*(_QWORD *)(v3 + 1408) + 24LL) = v23 ^ v15;
      if ( !*(_DWORD *)(v3 + 2264) )
      {
        *(_QWORD *)(v3 + 2280) = 0LL;
        *(_QWORD *)(v3 + 2272) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 2288) = 265LL;
        *(_QWORD *)(v3 + 2296) = v15;
        *(_DWORD *)(v3 + 2264) = 1;
      }
    }
  }
  *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0LL;
  v30 = v2 + 2;
  v31 = 4;
  do
  {
    *v30++ = 0;
    --v31;
  }
  while ( v31 );
  v32 = 0;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0;
  if ( *(_DWORD *)(v3 + 1992) )
  {
    while ( 1 )
    {
      v33 = v3;
      v34 = 0;
      if ( *(_QWORD *)(v3 + 2632) )
        v33 = *(_QWORD *)(v3 + 2632);
      v35 = (int *)(v33 + *(unsigned int *)(v33 + 2032));
      if ( *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 8)
        && *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0xC) <= v32 )
      {
        v34 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0xC);
        v35 = (int *)(v33 + *(unsigned int *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x10));
      }
      if ( v34 != v32 )
        break;
LABEL_58:
      v43 = (_QWORD *)*((_QWORD *)v35 + 1);
      v44 = *(_DWORD *)(v3 + 2044);
      v45 = (_DWORD)v35 - v33;
      v46 = *(_QWORD *)(v3 + 2048);
      v47 = v43;
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0xC) = v34;
      v48 = (unsigned int)v35[4];
      *(_DWORD *)(v3 + 2064) += v48;
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v45;
      v49 = (const char *)v43;
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 1;
      if ( v43 < (_QWORD *)((char *)v43 + v48) )
      {
        do
        {
          _mm_prefetch(v49, 0);
          v49 += 64;
        }
        while ( v49 < (const char *)v43 + v48 );
      }
      v50 = v46;
      v51 = (unsigned int)v48 >> 7;
      if ( (unsigned int)v48 >> 7 )
      {
        do
        {
          v52 = 8LL;
          do
          {
            v53 = v47[1] ^ __ROL8__(*v47 ^ v50, v44);
            v47 += 2;
            v50 = __ROL8__(v53, v44);
            --v52;
          }
          while ( v52 );
          v54 = __ROL8__(v46 ^ ((char *)v47 - (char *)v43), 17) ^ v46 ^ ((char *)v47 - (char *)v43);
          v23 = (v54 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v23;
          v44 = ((unsigned __int8)(v23 ^ v54) ^ (unsigned __int8)v44) & 0x3F;
          if ( !v44 )
            LOBYTE(v44) = 1;
          --v51;
        }
        while ( v51 );
        v3 = a2;
      }
      v55 = v48 & 0x7F;
      if ( (unsigned int)v55 >= 8 )
      {
        v56 = (unsigned __int64)(unsigned int)v55 >> 3;
        do
        {
          v50 = __ROL8__(*v47++ ^ v50, v44);
          v55 = (unsigned int)(v55 - 8);
          --v56;
        }
        while ( v56 );
      }
      if ( (_DWORD)v55 )
      {
        do
        {
          v57 = *(unsigned __int8 *)v47;
          v47 = (_QWORD *)((char *)v47 + 1);
          v50 = __ROL8__(v57 ^ v50, v44);
          v27 = (_DWORD)v55 == 1;
          v55 = (unsigned int)(v55 - 1);
        }
        while ( !v27 );
      }
      for ( i = v50; ; LODWORD(v50) = i ^ v50 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v59 = v50 & 0x7FFFFFFF;
      v60 = 0;
      if ( v59 != v35[5] )
      {
        if ( !*v35 )
          v60 = v35[6] != 0;
        v61 = (unsigned int)v35[4];
        v23 = *((_QWORD *)v35 + 1);
        if ( v35[4] && (*(_DWORD *)(v3 + 2420) & 0x40) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v63 = v23 & 0xFFFFFFFFFFFFF000uLL;
          *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = (v23 + v61 - 1) | 0xFFF;
          *v2 = (v23 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v64 = CurrentIrql;
            while ( 1 )
            {
              v65 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v3 + 1120))(
                      v63,
                      0LL,
                      v55,
                      v47);
              if ( v65 != -1073741267 )
                break;
              if ( v60 )
                goto LABEL_101;
              if ( CurrentIrql > 1u )
                goto LABEL_87;
              v64 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v65 < 0 )
            {
LABEL_101:
              __writecr8(v64);
              goto LABEL_102;
            }
LABEL_87:
            v23 = 4096LL;
            v66 = *v2 + 4096LL;
            v63 += 4096LL;
            *v2 = v66;
            if ( v66 != *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) )
              continue;
            break;
          }
          __writecr8(v64);
        }
        else
        {
LABEL_102:
          v80 = *(_DWORD *)(v3 + 2264);
          if ( !v80 )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 1408) + 24LL) = v59 ^ (unsigned __int64)(unsigned int)v35[5];
            v80 = *(_DWORD *)(v3 + 2264);
          }
          v81 = *((_QWORD *)v35 + 1);
          if ( !v80 )
          {
            *(_QWORD *)(v3 + 2272) = v3 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v3 + 2280) = (char *)v35 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v3 + 2288) = *v35;
            *(_QWORD *)(v3 + 2296) = v81;
            *(_DWORD *)(v3 + 2264) = 1;
          }
        }
      }
      v25 = 64;
      v32 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) + 1;
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v32;
      if ( v32 >= *(_DWORD *)(v3 + 1992) )
        goto LABEL_90;
    }
    v36 = v32 - v34;
    v34 = v32;
    while ( 1 )
    {
      v37 = *v35;
      if ( *v35 > 12 )
        break;
      if ( v37 == 12 )
        goto LABEL_50;
      v38 = v37 - 1;
      if ( !v38 )
        goto LABEL_50;
      v39 = v38 - 6;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( !v40 )
        {
          v42 = *((unsigned __int16 *)v35 + 16);
LABEL_55:
          v41 = (v42 + 55) & 0xFFFFFFF8;
          goto LABEL_56;
        }
        if ( v40 != 2 )
          goto LABEL_52;
        v41 = (unsigned int)(16 * (v35[7] + 3));
      }
      else
      {
        v41 = (unsigned int)(24 * (v35[6] + 2));
      }
LABEL_56:
      v35 = (int *)((char *)v35 + v41);
      if ( !--v36 )
      {
        v3 = a2;
        goto LABEL_58;
      }
    }
    if ( v37 == 28 )
    {
      v42 = *((unsigned __int16 *)v35 + 20);
      goto LABEL_55;
    }
    if ( v37 == 30 )
    {
      v23 = ((v35[9] - 1) / 0xCu + 7) & 0xFFFFFFF8;
      v41 = (unsigned int)v23 + 24 * (*((unsigned __int16 *)v35 + 20) + 2);
      goto LABEL_56;
    }
    if ( v37 <= 32 )
    {
LABEL_52:
      v41 = 48LL;
      goto LABEL_56;
    }
    if ( v37 <= 34 )
    {
      v23 = ((v35[8] & 0xFFF) + (unsigned __int64)(unsigned int)v35[10] + 4095) >> 12;
      v41 = (unsigned int)(20 * v23 + 48);
      goto LABEL_56;
    }
    if ( v37 != 43 )
      goto LABEL_52;
LABEL_50:
    v23 = (unsigned int)v35[4] / 0xCuLL;
    v41 = (unsigned int)(4 * v23 + 48);
    goto LABEL_56;
  }
LABEL_90:
  if ( *(_DWORD *)(v3 + 2264) )
  {
    v67 = *(_QWORD *)(v3 + 2288);
    v68 = *(_QWORD *)(v3 + 2296);
    v69 = *(_QWORD *)(v3 + 2280);
    v70 = *(_QWORD *)(v3 + 2272);
    *v2 = v67;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v68;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v69;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v70;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v3;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v72 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v3 + 1568));
    v73 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v3 + 1584));
    if ( !*((_BYTE *)&CurrentPrcb->MxCsr + *(_QWORD *)(v3 + 1576))
      || (unsigned __int64)(v2 + 5) > v72
      || (unsigned __int64)(v2 + 5) < v72 - 24576 )
    {
      v72 = *(_QWORD *)(v73 + *(_QWORD *)(v3 + 1632));
    }
    if ( (*(_DWORD *)(v3 + 2416) & 0x8000000) == 0 )
    {
      v74 = __readcr0();
      __writecr0(v74 & 0xFFFFFFFFFFFEFFFFuLL);
      v75 = v3 + 2680;
      v76 = 0;
      v77 = v3 + 2680 + 16LL * *(unsigned int *)(v3 + 2672);
      v78 = (_QWORD *)v77;
      if ( *(_DWORD *)(v3 + 2676) )
      {
        do
        {
          *(_QWORD *)*v78 = v78[1];
          v79 = __readcr4();
          if ( (v79 & 0x20080) != 0 )
          {
            __writecr4(v79 ^ 0x80);
            __writecr4(v79);
          }
          else
          {
            v82 = __readcr3();
            __writecr3(v82);
          }
          v78 += 2;
          ++v76;
        }
        while ( v76 < *(_DWORD *)(v3 + 2676) );
        v67 = *v2;
      }
      if ( v75 < v77 )
      {
        do
        {
          v83 = *(unsigned int *)(v75 + 8);
          v84 = v78;
          v85 = *(char **)v75;
          v86 = v83;
          if ( (unsigned int)v83 >= 8 )
          {
            v87 = (unsigned __int64)(unsigned int)v83 >> 3;
            do
            {
              v86 -= 8;
              *(_QWORD *)v85 = *v84++;
              v85 += 8;
              --v87;
            }
            while ( v87 );
          }
          if ( v86 )
          {
            v88 = v85 - (char *)v84;
            do
            {
              *((_BYTE *)v84 + v88) = *(_BYTE *)v84;
              v84 = (_QWORD *)((char *)v84 + 1);
              --v86;
            }
            while ( v86 );
          }
          v78 = (_QWORD *)((char *)v78 + v83);
          v75 += 16LL;
        }
        while ( v75 < v77 );
        v67 = *v2;
        v68 = *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        v69 = *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
      }
      **(_BYTE **)(v3 + 528) = -61;
      __writecr0(v74);
      v70 = *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
    }
    v102 = *(_DWORD *)(v3 + 2312);
    if ( v102 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v102 = *(_DWORD *)(v3 + 2312);
      }
      if ( v102 )
      {
        v103 = v102 - 1;
        if ( v103 )
        {
          v104 = v103 - 1;
          if ( v104 )
          {
            v105 = v104 - 1;
            if ( v105 )
            {
              v106 = v105 - 1;
              if ( v106 )
              {
                if ( v106 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v3 + 1584)),
                    (*(_DWORD *)(v3 + 2416) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v3 + 1448) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v3 + 1680)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v3 + 1584))
                                              + *(_QWORD *)(v3 + 1648)),
                  (*(_DWORD *)(v3 + 2416) >> 10) & 0x1F);
              }
              goto LABEL_152;
            }
            v107 = *(volatile signed __int32 **)(v3 + 1360);
          }
          else
          {
            v107 = *(volatile signed __int32 **)(v3 + 1352);
          }
        }
        else
        {
          v107 = *(volatile signed __int32 **)(v3 + 1336);
        }
        _interlockedbittestandset64(v107, 0LL);
      }
    }
LABEL_152:
    *(_QWORD *)(v73 + *(_QWORD *)(v3 + 1656)) = 0LL;
    *(_QWORD *)(v73 + *(_QWORD *)(v3 + 1672)) = 0LL;
    SdbpCheckDll(265, v70, v69, v68, v67, *(_QWORD *)(v3 + 336), v72);
    JUMPOUT(0x14034B08CLL);
  }
  v89 = v3 + *(unsigned int *)(v3 + 2008);
  if ( (*(_DWORD *)(v3 + 2416) & 0x10000000) != 0 )
  {
    v90 = __rdtsc();
    v91 = __ROR8__(v90, 3) ^ v90;
    v23 = (v91 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v23;
    v89 = (unsigned __int64)KiMachineCheckControl + 16 * (((unsigned __int8)v91 ^ (unsigned __int8)v23) & 0xF);
  }
  v92 = *(_QWORD **)(v3 + 2536);
  if ( v92 )
  {
    v93 = __rdtsc();
    v94 = (__ROR8__(v93, 3) ^ v93) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *((_QWORD *)&v94 + 1);
    *((_QWORD *)&v94 + 1) ^= v94;
    v92[2] = *((_QWORD *)&v94 + 1);
    *(_QWORD *)&v94 = v89 ^ *((_QWORD *)&v94 + 1);
    v23 = v3 ^ *((_QWORD *)&v94 + 1);
    v92[3] = v94;
    v92[1] = v23;
    _InterlockedOr(v108, 0);
    v89 = *(_QWORD *)(v3 + 744);
  }
  else
  {
    v92 = (_QWORD *)v3;
  }
  *(_QWORD *)(v3 + 1936) = v89;
  *(_QWORD *)(v3 + 1944) = v92;
  *(_QWORD *)(v3 + 1920) = 0LL;
  _disable();
  _enable();
  LOBYTE(v95) = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v3 + 608))(v3 + 2024, v23);
  (*(void (__fastcall **)(unsigned __int64, __int64))(v3 + 616))(v3 + 2024, v95);
  switch ( *(_DWORD *)(v3 + 2080) )
  {
    case 3:
      _disable();
      *(_QWORD *)(v3 + 2424) = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v3 + 1584));
      _enable();
      break;
    case 4:
      v100 = *(_QWORD *)(v3 + 2496);
      *(_QWORD *)(*(_QWORD *)(v100 + 56) ^ *(_QWORD *)(v100 + 64)) = v100 ^ *(_QWORD *)(v100 + 72) ^ *(_QWORD *)(v100 + 64);
      *(_QWORD *)(v100 + 72) = 0LL;
      *(_QWORD *)(v100 + 56) = 0LL;
      break;
    case 5:
      v96 = (char *)(v3 + 2432);
      v97 = (_QWORD *)(*(_QWORD *)(v3 + 2424) + 8LL);
      v98 = 8LL;
      do
      {
        v25 -= 8;
        *v97 = *(_QWORD *)v96;
        v96 += 8;
        ++v97;
        --v98;
      }
      while ( v98 );
      for ( ; v25; --v25 )
      {
        v99 = *v96++;
        *(_BYTE *)v97 = v99;
        v97 = (_QWORD *)((char *)v97 + 1);
      }
      break;
  }
  _InterlockedOr(v108, 0);
  return v3;
}
