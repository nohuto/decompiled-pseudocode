/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C0023360
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C0021150 (UsbhBuildCompatibleID.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     memmove @ 0x1C002B4C0 (memmove.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0056C48 (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rdi
  char *v5; // r15
  SIZE_T v6; // rbp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v10; // esi
  char *v11; // rax
  char *v12; // r14
  char *v13; // rcx
  unsigned int v14; // edi
  char *v15; // rax
  char *v16; // rbp
  char *v17; // rcx
  unsigned int v18; // esi
  char *v19; // rax
  char *v20; // r14
  char *v21; // rdx
  unsigned int v22; // edi
  char *v23; // rax
  char *v24; // r15
  char *v25; // rcx
  unsigned int v26; // ebp
  char *v27; // rax
  char *v28; // r14
  char *v29; // rcx
  int v30; // esi
  char *v31; // rax
  char *v32; // rdi
  char *v33; // rcx
  int v34; // r8d
  __int64 v36; // rbx
  __int64 v37; // r12
  _BYTE *v38; // rbx
  SIZE_T v39; // r14
  __int64 v40; // r14
  bool v41; // zf
  _QWORD *PoolWithTag; // rax
  _QWORD *v43; // r13
  _WORD *i; // rcx
  unsigned int j; // edx
  _BYTE *v46; // rsi
  __int64 v47; // rax
  char *v48; // rax
  char *v49; // rcx
  unsigned int k; // edx
  _BYTE *v51; // rdi
  SIZE_T v52; // rsi
  char *v53; // rax
  char *v54; // r14
  __int64 v55; // rbx
  char *v56; // rcx
  unsigned int m; // edx
  __int64 v58; // r12
  _BYTE *v59; // rbx
  SIZE_T v60; // r14
  __int64 v61; // r14
  _QWORD *v62; // rax
  _QWORD *v63; // r13
  _WORD *n; // rcx
  unsigned int ii; // edx
  _BYTE *v66; // rsi
  __int64 v67; // rax
  char *v68; // rax
  char *v69; // rcx
  unsigned int jj; // edx
  _BYTE *v71; // rdi
  SIZE_T v72; // rsi
  char *v73; // rax
  char *v74; // r14
  __int64 v75; // rbx
  char *v76; // rcx
  unsigned int kk; // edx
  unsigned __int64 v78; // [rsp+40h] [rbp-58h]
  unsigned __int64 v79; // [rsp+48h] [rbp-50h]
  unsigned __int8 v83; // [rsp+B8h] [rbp+20h]

  v4 = PdoExt(a2);
  v5 = 0LL;
  LODWORD(v6) = 0;
  v7 = *((unsigned __int8 *)v4 + 2438);
  v8 = *((unsigned __int8 *)v4 + 2439);
  v83 = *((_BYTE *)v4 + 2440);
  v79 = v8;
  v78 = v7;
  Log(a1, 4096, 1684228420, v7, v8);
  if ( (v4[706] & 0x20) != 0 )
  {
    v36 = *((_QWORD *)v4 + 356);
    v37 = -1LL;
    if ( *(_BYTE *)(v36 + 12) )
    {
      v38 = (_BYTE *)(v36 + 4);
      if ( *v38 )
      {
        v39 = 26LL;
        if ( v38 )
        {
          v40 = -1LL;
          do
            v41 = v38[++v40] == 0;
          while ( !v41 );
          v39 = 2 * v40 + 24;
        }
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v39, 0x42554855u);
        v43 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_127;
        memset(PoolWithTag, 0, v39);
        *(_OWORD *)v43 = *(_OWORD *)L"USB\\MS_COMP_n";
        v43[2] = *(_QWORD *)L"OMP_n";
        *((_WORD *)v43 + 12) = aUsbMsCompN[12];
        for ( i = v43; *i != 110; ++i )
          ;
        if ( v38 )
        {
          for ( j = 0; j < 8; ++j )
          {
            if ( !*v38 )
              break;
            *i++ = (unsigned __int8)*v38++;
          }
        }
        v6 = (unsigned __int16)v39 + 28LL;
        v46 = (_BYTE *)(*((_QWORD *)v4 + 356) + 12LL);
        if ( *((_QWORD *)v4 + 356) != -12LL )
        {
          v47 = -1LL;
          do
            v41 = v46[++v47] == 0;
          while ( !v41 );
          v6 = v6 + 2 * v47 - 2;
        }
        v48 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
        v5 = v48;
        if ( v48 )
        {
          memset(v48, 0, v6);
          memmove(v5, v43, (unsigned int)v39);
          v49 = &v5[(unsigned int)v39];
          *(_OWORD *)v49 = *(_OWORD *)L"&MS_SUBCOMP_n";
          *((_QWORD *)v49 + 2) = *(_QWORD *)L"OMP_n";
          for ( *((_WORD *)v49 + 12) = aMsSubcompN[12]; *(_WORD *)v49 != 110; v49 += 2 )
            ;
          if ( v46 )
          {
            for ( k = 0; k < 8; ++k )
            {
              if ( !*v46 )
                break;
              *(_WORD *)v49 = (unsigned __int8)*v46++;
              v49 += 2;
            }
          }
        }
        else
        {
          LODWORD(v6) = 0;
        }
        ExFreePoolWithTag(v43, 0);
        if ( !v5 )
          goto LABEL_127;
        v8 = v79;
      }
    }
    v51 = (_BYTE *)(*((_QWORD *)v4 + 356) + 4LL);
    if ( *v51 )
    {
      v52 = (unsigned __int16)v6 + 28LL;
      if ( v51 )
      {
        do
          v41 = v51[++v37] == 0;
        while ( !v41 );
        v52 = v52 + 2 * v37 - 2;
      }
      v53 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v52, 0x42554855u);
      v54 = v53;
      if ( v53 )
      {
        memset(v53, 0, v52);
        v55 = (unsigned int)v6;
        memmove(v54, v5, (unsigned int)v6);
        v56 = &v54[(unsigned int)v6];
        LODWORD(v6) = v52;
        *(_OWORD *)v56 = *(_OWORD *)L"USB\\MS_COMP_n";
        *((_QWORD *)v56 + 2) = *(_QWORD *)L"OMP_n";
        *((_WORD *)v56 + 12) = aUsbMsCompN[12];
        if ( *(_WORD *)&v54[v55] != 110 )
        {
          do
            v56 += 2;
          while ( *(_WORD *)v56 != 110 );
        }
        if ( v51 )
        {
          for ( m = 0; m < 8; ++m )
          {
            if ( !*v51 )
              break;
            *(_WORD *)v56 = (unsigned __int8)*v51++;
            v56 += 2;
          }
        }
      }
      else
      {
        LODWORD(v6) = 0;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v5 = v54;
      if ( !v54 )
        goto LABEL_127;
    }
    goto LABEL_83;
  }
  v9 = *((_QWORD *)v4 + 316);
  if ( v9 )
  {
    v58 = -1LL;
    if ( *(_BYTE *)(v9 + 26) )
    {
      v59 = (_BYTE *)(v9 + 18);
      v60 = 26LL;
      if ( v9 != -18 )
      {
        v61 = -1LL;
        do
          v41 = v59[++v61] == 0;
        while ( !v41 );
        v60 = 2 * v61 + 24;
      }
      v62 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v60, 0x42554855u);
      v63 = v62;
      if ( !v62 )
        goto LABEL_127;
      memset(v62, 0, v60);
      *(_OWORD *)v63 = *(_OWORD *)L"USB\\MS_COMP_n";
      v63[2] = *(_QWORD *)L"OMP_n";
      *((_WORD *)v63 + 12) = aUsbMsCompN[12];
      for ( n = v63; *n != 110; ++n )
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
      v6 = (unsigned __int16)v60 + 28LL;
      v66 = (_BYTE *)(*((_QWORD *)v4 + 316) + 26LL);
      if ( *((_QWORD *)v4 + 316) != -26LL )
      {
        v67 = -1LL;
        do
          v41 = v66[++v67] == 0;
        while ( !v41 );
        v6 = v6 + 2 * v67 - 2;
      }
      v68 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
      v5 = v68;
      if ( v68 )
      {
        memset(v68, 0, v6);
        memmove(v5, v63, (unsigned int)v60);
        v69 = &v5[(unsigned int)v60];
        *(_OWORD *)v69 = *(_OWORD *)L"&MS_SUBCOMP_n";
        *((_QWORD *)v69 + 2) = *(_QWORD *)L"OMP_n";
        for ( *((_WORD *)v69 + 12) = aMsSubcompN[12]; *(_WORD *)v69 != 110; v69 += 2 )
          ;
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
      ExFreePoolWithTag(v63, 0);
      if ( !v5 )
        goto LABEL_127;
      v8 = v79;
    }
    v71 = (_BYTE *)(*((_QWORD *)v4 + 316) + 18LL);
    if ( *v71 )
    {
      v72 = (unsigned __int16)v6 + 28LL;
      if ( v71 )
      {
        do
          v41 = v71[++v58] == 0;
        while ( !v41 );
        v72 = v72 + 2 * v58 - 2;
      }
      v73 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v72, 0x42554855u);
      v74 = v73;
      if ( v73 )
      {
        memset(v73, 0, v72);
        v75 = (unsigned int)v6;
        memmove(v74, v5, (unsigned int)v6);
        v76 = &v74[(unsigned int)v6];
        LODWORD(v6) = v72;
        *(_OWORD *)v76 = *(_OWORD *)L"USB\\MS_COMP_n";
        *((_QWORD *)v76 + 2) = *(_QWORD *)L"OMP_n";
        *((_WORD *)v76 + 12) = aUsbMsCompN[12];
        if ( *(_WORD *)&v74[v75] != 110 )
        {
          do
            v76 += 2;
          while ( *(_WORD *)v76 != 110 );
        }
        if ( v71 )
        {
          for ( kk = 0; kk < 8; ++kk )
          {
            if ( !*v71 )
              break;
            *(_WORD *)v76 = (unsigned __int8)*v71++;
            v76 += 2;
          }
        }
      }
      else
      {
        LODWORD(v6) = 0;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v5 = v74;
      if ( !v74 )
      {
LABEL_127:
        Log(a1, 4, 1667839265, a2, -1073741670LL);
        return 3221225626LL;
      }
    }
LABEL_83:
    v7 = v78;
  }
  v10 = (unsigned __int16)v6 + 24;
  v11 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v6 + 24LL, 0x42554855u);
  v12 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned __int16)v6 + 24LL);
    memmove(v12, v5, (unsigned int)v6);
    v13 = &v12[(unsigned int)v6];
    *(_OWORD *)v13 = *(_OWORD *)L"USB\\Class_nn";
    for ( *((_QWORD *)v13 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v13 != 110; v13 += 2 )
      ;
    *(_WORD *)v13 = (unsigned __int8)Nibble[v7 >> 4];
    *((_WORD *)v13 + 1) = (unsigned __int8)Nibble[v7 & 0xF];
  }
  else
  {
    v10 = 0;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v12 )
  {
    v14 = (unsigned __int16)v10 + 24;
    v15 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v10 + 24LL, 0x42554855u);
    v16 = v15;
    if ( v15 )
    {
      memset(v15, 0, (unsigned __int16)v10 + 24LL);
      memmove(v16, v12, v10);
      v17 = &v16[v10];
      *(_OWORD *)v17 = *(_OWORD *)L"&SubClass_nn";
      for ( *((_QWORD *)v17 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v17 != 110; v17 += 2 )
        ;
      *(_WORD *)v17 = (unsigned __int8)Nibble[v8 >> 4];
      *((_WORD *)v17 + 1) = (unsigned __int8)Nibble[v8 & 0xF];
    }
    else
    {
      v14 = 0;
    }
    ExFreePoolWithTag(v12, 0);
    if ( v16 )
    {
      v18 = (unsigned __int16)v14 + 18;
      v19 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v14 + 18LL, 0x42554855u);
      v20 = v19;
      if ( v19 )
      {
        memset(v19, 0, (unsigned __int16)v14 + 18LL);
        memmove(v20, v16, v14);
        v21 = &v20[v14];
        for ( *(_OWORD *)v21 = *(_OWORD *)L"&Prot_nn"; *(_WORD *)v21 != 110; v21 += 2 )
          ;
        *(_WORD *)v21 = (unsigned __int8)Nibble[(unsigned __int64)v83 >> 4];
        *((_WORD *)v21 + 1) = (unsigned __int8)Nibble[v83 & 0xF];
      }
      else
      {
        v18 = 0;
      }
      ExFreePoolWithTag(v16, 0);
      if ( v20 )
      {
        v22 = (unsigned __int16)v18 + 24;
        v23 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v18 + 24LL, 0x42554855u);
        v24 = v23;
        if ( v23 )
        {
          memset(v23, 0, (unsigned __int16)v18 + 24LL);
          memmove(v24, v20, v18);
          v25 = &v24[v18];
          *(_OWORD *)v25 = *(_OWORD *)L"USB\\Class_nn";
          for ( *((_QWORD *)v25 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v25 != 110; v25 += 2 )
            ;
          *(_WORD *)v25 = (unsigned __int8)Nibble[v7 >> 4];
          *((_WORD *)v25 + 1) = (unsigned __int8)Nibble[v7 & 0xF];
        }
        else
        {
          v22 = 0;
        }
        ExFreePoolWithTag(v20, 0);
        if ( v24 )
        {
          v26 = (unsigned __int16)v22 + 26;
          v27 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v22 + 26LL, 0x42554855u);
          v28 = v27;
          if ( v27 )
          {
            memset(v27, 0, (unsigned __int16)v22 + 26LL);
            memmove(v28, v24, v22);
            v29 = &v28[v22];
            *(_OWORD *)v29 = *(_OWORD *)L"&SubClass_nn";
            for ( *((_QWORD *)v29 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v29 != 110; v29 += 2 )
              ;
            *(_WORD *)v29 = (unsigned __int8)Nibble[v8 >> 4];
            *((_WORD *)v29 + 1) = (unsigned __int8)Nibble[v8 & 0xF];
          }
          else
          {
            v26 = 0;
          }
          ExFreePoolWithTag(v24, 0);
          if ( v28 )
          {
            v30 = (unsigned __int16)v26 + 28;
            v31 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v26 + 28LL, 0x42554855u);
            v32 = v31;
            if ( v31 )
            {
              memset(v31, 0, (unsigned __int16)v26 + 28LL);
              memmove(v32, v28, v26);
              v33 = &v32[v26];
              *(_OWORD *)v33 = *(_OWORD *)L"USB\\Class_nn";
              for ( *((_QWORD *)v33 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v33 != 110; v33 += 2 )
                ;
              *(_WORD *)v33 = (unsigned __int8)Nibble[v7 >> 4];
              *((_WORD *)v33 + 1) = (unsigned __int8)Nibble[v7 & 0xF];
            }
            else
            {
              v30 = 0;
            }
            ExFreePoolWithTag(v28, 0);
            if ( v32 )
            {
              *(_QWORD *)(a3 + 8) = v32;
              *(_DWORD *)(a3 + 4) = v30;
              Log(a1, 4096, 1667459428, a2, (__int64)v32);
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_Sd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  v34,
                  19,
                  (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
                  (__int64)v32,
                  v30);
              return 0LL;
            }
            else
            {
              Log(a1, 4096, 1667837985, a2, -1073741670LL);
              return 3221225626LL;
            }
          }
          else
          {
            Log(a1, 4096, 1667838241, a2, -1073741670LL);
            return 3221225626LL;
          }
        }
        else
        {
          Log(a1, 4096, 1667838497, a2, -1073741670LL);
          return 3221225626LL;
        }
      }
      else
      {
        Log(a1, 4096, 1667838753, a2, -1073741670LL);
        return 3221225626LL;
      }
    }
    else
    {
      Log(a1, 4096, 1667839009, a2, -1073741670LL);
      return 3221225626LL;
    }
  }
  else
  {
    Log(a1, 4096, 1667839265, a2, -1073741670LL);
    return 3221225626LL;
  }
}
