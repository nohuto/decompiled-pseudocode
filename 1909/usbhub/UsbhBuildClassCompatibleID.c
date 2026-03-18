/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C0023EA8
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C0021DFC (UsbhBuildCompatibleID.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0058FAC (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // r13
  char *v5; // rdi
  SIZE_T v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // esi
  char *v9; // rax
  char *v10; // r12
  char *v11; // rcx
  unsigned __int64 v12; // r13
  unsigned int v13; // edi
  char *v14; // rax
  char *v15; // r15
  char *v16; // rcx
  unsigned int v17; // esi
  char *v18; // rax
  char *v19; // r14
  char *v20; // rdx
  unsigned int v21; // edi
  char *v22; // rax
  char *v23; // r15
  char *v24; // rcx
  unsigned int v25; // ebp
  char *v26; // rax
  char *v27; // r14
  char *v28; // rcx
  int v29; // esi
  char *v30; // rax
  char *v31; // rdi
  char *v32; // rcx
  __int64 v33; // r9
  int v34; // edx
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v38; // rbx
  __int64 v39; // r12
  _BYTE *v40; // rbx
  SIZE_T v41; // rbp
  __int64 v42; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v44; // r15
  _WORD *i; // rcx
  unsigned int j; // edx
  _BYTE *v47; // rsi
  __int64 v48; // rax
  char *v49; // rax
  char *v50; // rcx
  unsigned int k; // edx
  _BYTE *v52; // rsi
  SIZE_T v53; // rbp
  char *v54; // rax
  char *v55; // r15
  char *v56; // rcx
  unsigned int m; // edx
  __int64 v58; // r12
  _BYTE *v59; // rbx
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // r15
  _WORD *n; // rcx
  unsigned int ii; // edx
  SIZE_T v65; // rbp
  _BYTE *v66; // rsi
  __int64 v67; // rax
  char *v68; // rax
  char *v69; // rcx
  unsigned int jj; // edx
  _BYTE *v71; // rsi
  SIZE_T v72; // rbp
  char *v73; // rax
  char *v74; // rcx
  unsigned int kk; // edx
  int v76; // r8d
  unsigned int v77; // r10d
  unsigned __int64 v78; // [rsp+40h] [rbp-58h]
  unsigned __int64 v79; // [rsp+48h] [rbp-50h]
  unsigned __int8 v83; // [rsp+B8h] [rbp+20h]

  v4 = PdoExt(a2);
  v5 = 0LL;
  LODWORD(v6) = 0;
  v83 = *((_BYTE *)v4 + 2440);
  v79 = *((unsigned __int8 *)v4 + 2439);
  v78 = *((unsigned __int8 *)v4 + 2438);
  Log(a1, 4096, 1684228420, v78, v79);
  if ( (v4[706] & 0x20) != 0 )
  {
    v38 = *((_QWORD *)v4 + 356);
    v39 = -1LL;
    if ( *(_BYTE *)(v38 + 12) )
    {
      v40 = (_BYTE *)(v38 + 4);
      if ( *v40 )
      {
        v41 = 26LL;
        if ( v40 )
        {
          v42 = -1LL;
          do
            ++v42;
          while ( v40[v42] );
          v41 = 2 * v42 + 24;
        }
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v41, 0x42554855u);
        v44 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_131;
        memset(PoolWithTag, 0, v41);
        *(_OWORD *)v44 = *(_OWORD *)L"USB\\MS_COMP_n";
        v44[2] = *(_QWORD *)L"OMP_n";
        *((_WORD *)v44 + 12) = aUsbMsCompN[12];
        for ( i = v44; *i != 110; ++i )
          ;
        if ( v40 )
        {
          for ( j = 0; j < 8; ++j )
          {
            if ( !*v40 )
              break;
            *i++ = (unsigned __int8)*v40++;
          }
        }
        v6 = (unsigned __int16)v41 + 28LL;
        v47 = (_BYTE *)(*((_QWORD *)v4 + 356) + 12LL);
        if ( *((_QWORD *)v4 + 356) != -12LL )
        {
          v48 = -1LL;
          do
            ++v48;
          while ( v47[v48] );
          v6 = v6 + 2 * v48 - 2;
        }
        v49 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
        v5 = v49;
        if ( v49 )
        {
          memset(v49, 0, v6);
          memmove(v5, v44, (unsigned int)v41);
          v50 = &v5[(unsigned int)v41];
          *(_OWORD *)v50 = *(_OWORD *)L"&MS_SUBCOMP_n";
          *((_QWORD *)v50 + 2) = *(_QWORD *)L"OMP_n";
          *((_WORD *)v50 + 12) = aMsSubcompN[12];
          while ( *(_WORD *)v50 != 110 )
            v50 += 2;
          if ( v47 )
          {
            for ( k = 0; k < 8; ++k )
            {
              if ( !*v47 )
                break;
              *(_WORD *)v50 = (unsigned __int8)*v47++;
              v50 += 2;
            }
          }
        }
        else
        {
          LODWORD(v6) = 0;
        }
        ExFreePoolWithTag(v44, 0);
        if ( !v5 )
          goto LABEL_131;
      }
    }
    v52 = (_BYTE *)(*((_QWORD *)v4 + 356) + 4LL);
    if ( !*v52 )
      goto LABEL_3;
    v53 = (unsigned __int16)v6 + 28LL;
    if ( *((_QWORD *)v4 + 356) != -4LL )
    {
      do
        ++v39;
      while ( v52[v39] );
      v53 = v53 + 2 * v39 - 2;
    }
    v54 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v53, 0x42554855u);
    v55 = v54;
    if ( v54 )
    {
      memset(v54, 0, v53);
      memmove(v55, v5, (unsigned int)v6);
      v56 = &v55[(unsigned int)v6];
      LODWORD(v6) = v53;
      *(_OWORD *)v56 = *(_OWORD *)L"USB\\MS_COMP_n";
      *((_QWORD *)v56 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v56 + 12) = aUsbMsCompN[12];
      while ( *(_WORD *)v56 != 110 )
        v56 += 2;
      if ( v52 )
      {
        for ( m = 0; m < 8; ++m )
        {
          if ( !*v52 )
            break;
          *(_WORD *)v56 = (unsigned __int8)*v52++;
          v56 += 2;
        }
      }
LABEL_128:
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v5 = v55;
      if ( !v55 )
        goto LABEL_131;
      goto LABEL_3;
    }
LABEL_127:
    LODWORD(v6) = 0;
    goto LABEL_128;
  }
  v7 = *((_QWORD *)v4 + 316);
  if ( !v7 )
    goto LABEL_3;
  v58 = -1LL;
  if ( *(_BYTE *)(v7 + 26) )
  {
    v6 = 26LL;
    v59 = (_BYTE *)(v7 + 18);
    if ( v59 )
    {
      v60 = -1LL;
      do
        ++v60;
      while ( v59[v60] );
      v6 = 2 * v60 + 24;
    }
    v61 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
    v62 = v61;
    if ( !v61 )
      goto LABEL_131;
    memset(v61, 0, v6);
    *(_OWORD *)v62 = *(_OWORD *)L"USB\\MS_COMP_n";
    v62[2] = *(_QWORD *)L"OMP_n";
    *((_WORD *)v62 + 12) = aUsbMsCompN[12];
    for ( n = v62; *n != 110; ++n )
      ;
    if ( v59 )
    {
      for ( ii = 0; ii < 8; ++ii )
      {
        if ( !*v59 )
          break;
        *n++ = (unsigned __int8)*v59++;
      }
    }
    v65 = (unsigned __int16)v6 + 28LL;
    v66 = (_BYTE *)(*((_QWORD *)v4 + 316) + 26LL);
    if ( *((_QWORD *)v4 + 316) != -26LL )
    {
      v67 = -1LL;
      do
        ++v67;
      while ( v66[v67] );
      v65 = v65 + 2 * v67 - 2;
    }
    v68 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v65, 0x42554855u);
    v5 = v68;
    if ( v68 )
    {
      memset(v68, 0, v65);
      memmove(v5, v62, (unsigned int)v6);
      v69 = &v5[(unsigned int)v6];
      LODWORD(v6) = v65;
      *(_OWORD *)v69 = *(_OWORD *)L"&MS_SUBCOMP_n";
      *((_QWORD *)v69 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v69 + 12) = aMsSubcompN[12];
      while ( *(_WORD *)v69 != 110 )
        v69 += 2;
      if ( v66 )
      {
        for ( jj = 0; jj < 8; ++jj )
        {
          if ( !*v66 )
            break;
          *(_WORD *)v69 = (unsigned __int8)*v66++;
          v69 += 2;
        }
      }
    }
    else
    {
      LODWORD(v6) = 0;
    }
    ExFreePoolWithTag(v62, 0);
    if ( !v5 )
    {
LABEL_131:
      v34 = 4;
LABEL_133:
      v76 = 1667839265;
LABEL_135:
      v33 = a2;
      v35 = a1;
LABEL_137:
      Log(v35, v34, v76, v33, -1073741670LL);
      return v77;
    }
  }
  v71 = (_BYTE *)(*((_QWORD *)v4 + 316) + 18LL);
  if ( *v71 )
  {
    v72 = (unsigned __int16)v6 + 28LL;
    if ( *((_QWORD *)v4 + 316) != -18LL )
    {
      do
        ++v58;
      while ( v71[v58] );
      v72 = v72 + 2 * v58 - 2;
    }
    v73 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v72, 0x42554855u);
    v55 = v73;
    if ( v73 )
    {
      memset(v73, 0, v72);
      memmove(v55, v5, (unsigned int)v6);
      v74 = &v55[(unsigned int)v6];
      LODWORD(v6) = v72;
      *(_OWORD *)v74 = *(_OWORD *)L"USB\\MS_COMP_n";
      *((_QWORD *)v74 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v74 + 12) = aUsbMsCompN[12];
      while ( *(_WORD *)v74 != 110 )
        v74 += 2;
      if ( v71 )
      {
        for ( kk = 0; kk < 8; ++kk )
        {
          if ( !*v71 )
            break;
          *(_WORD *)v74 = (unsigned __int8)*v71++;
          v74 += 2;
        }
      }
      goto LABEL_128;
    }
    goto LABEL_127;
  }
LABEL_3:
  v8 = (unsigned __int16)v6 + 24;
  v9 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v6 + 24LL, 0x42554855u);
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, (unsigned __int16)v6 + 24LL);
    memmove(v10, v5, (unsigned int)v6);
    v11 = &v10[(unsigned int)v6];
    *(_OWORD *)v11 = *(_OWORD *)L"USB\\Class_nn";
    *((_QWORD *)v11 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v11 != 110 )
      v11 += 2;
    v12 = v78;
    *(_WORD *)v11 = (unsigned __int8)Nibble[v78 >> 4];
    *((_WORD *)v11 + 1) = (unsigned __int8)Nibble[v78 & 0xF];
  }
  else
  {
    v12 = v78;
    v8 = 0;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( !v10 )
  {
    v34 = 4096;
    goto LABEL_133;
  }
  v13 = (unsigned __int16)v8 + 24;
  v14 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v8 + 24LL, 0x42554855u);
  v15 = v14;
  if ( v14 )
  {
    memset(v14, 0, (unsigned __int16)v8 + 24LL);
    memmove(v15, v10, v8);
    v16 = &v15[v8];
    *(_OWORD *)v16 = *(_OWORD *)L"&SubClass_nn";
    *((_QWORD *)v16 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v16 != 110 )
      v16 += 2;
    *(_WORD *)v16 = (unsigned __int8)Nibble[v79 >> 4];
    *((_WORD *)v16 + 1) = (unsigned __int8)Nibble[v79 & 0xF];
  }
  else
  {
    v13 = 0;
  }
  ExFreePoolWithTag(v10, 0);
  if ( !v15 )
  {
    v34 = 4096;
    v76 = 1667839009;
    goto LABEL_135;
  }
  v17 = (unsigned __int16)v13 + 18;
  v18 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v13 + 18LL, 0x42554855u);
  v19 = v18;
  if ( v18 )
  {
    memset(v18, 0, (unsigned __int16)v13 + 18LL);
    memmove(v19, v15, v13);
    v20 = &v19[v13];
    *(_OWORD *)v20 = *(_OWORD *)L"&Prot_nn";
    while ( *(_WORD *)v20 != 110 )
      v20 += 2;
    *(_WORD *)v20 = (unsigned __int8)Nibble[(unsigned __int64)v83 >> 4];
    *((_WORD *)v20 + 1) = (unsigned __int8)Nibble[v83 & 0xF];
  }
  else
  {
    v17 = 0;
  }
  ExFreePoolWithTag(v15, 0);
  if ( !v19 )
  {
    v34 = 4096;
    v76 = 1667838753;
    goto LABEL_135;
  }
  v21 = (unsigned __int16)v17 + 24;
  v22 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v17 + 24LL, 0x42554855u);
  v23 = v22;
  if ( v22 )
  {
    memset(v22, 0, (unsigned __int16)v17 + 24LL);
    memmove(v23, v19, v17);
    v24 = &v23[v17];
    *(_OWORD *)v24 = *(_OWORD *)L"USB\\Class_nn";
    *((_QWORD *)v24 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v24 != 110 )
      v24 += 2;
    *(_WORD *)v24 = (unsigned __int8)Nibble[v12 >> 4];
    *((_WORD *)v24 + 1) = (unsigned __int8)Nibble[v12 & 0xF];
  }
  else
  {
    v21 = 0;
  }
  ExFreePoolWithTag(v19, 0);
  if ( !v23 )
  {
    v34 = 4096;
    v76 = 1667838497;
    goto LABEL_135;
  }
  v25 = (unsigned __int16)v21 + 26;
  v26 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v21 + 26LL, 0x42554855u);
  v27 = v26;
  if ( v26 )
  {
    memset(v26, 0, (unsigned __int16)v21 + 26LL);
    memmove(v27, v23, v21);
    v28 = &v27[v21];
    *(_OWORD *)v28 = *(_OWORD *)L"&SubClass_nn";
    *((_QWORD *)v28 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v28 != 110 )
      v28 += 2;
    *(_WORD *)v28 = (unsigned __int8)Nibble[v79 >> 4];
    *((_WORD *)v28 + 1) = (unsigned __int8)Nibble[v79 & 0xF];
  }
  else
  {
    v25 = 0;
  }
  ExFreePoolWithTag(v23, 0);
  if ( !v27 )
  {
    v34 = 4096;
    v76 = 1667838241;
    goto LABEL_135;
  }
  v29 = (unsigned __int16)v25 + 28;
  v30 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v25 + 28LL, 0x42554855u);
  v31 = v30;
  if ( v30 )
  {
    memset(v30, 0, (unsigned __int16)v25 + 28LL);
    memmove(v31, v27, v25);
    v32 = &v31[v25];
    *(_OWORD *)v32 = *(_OWORD *)L"USB\\Class_nn";
    *((_QWORD *)v32 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v32 != 110 )
      v32 += 2;
    *(_WORD *)v32 = (unsigned __int8)Nibble[v12 >> 4];
    *((_WORD *)v32 + 1) = (unsigned __int8)Nibble[v12 & 0xF];
  }
  else
  {
    v29 = 0;
  }
  ExFreePoolWithTag(v27, 0);
  v33 = a2;
  v34 = 4096;
  v35 = a1;
  if ( !v31 )
  {
    v76 = 1667837985;
    goto LABEL_137;
  }
  *(_QWORD *)(a3 + 8) = v31;
  *(_DWORD *)(a3 + 4) = v29;
  Log(a1, 4096, 1667459428, a2, (__int64)v31);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sd(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v36,
        19,
        (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
        (__int64)v31,
        v29);
  }
  return 0LL;
}
