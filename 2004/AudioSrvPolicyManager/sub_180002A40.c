/*
 * XREFs of sub_180002A40 @ 0x180002A40
 * Callers:
 *     sub_180002F68 @ 0x180002F68 (sub_180002F68.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_18000258C @ 0x18000258C (sub_18000258C.c)
 *     sub_180005048 @ 0x180005048 (sub_180005048.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

__int64 __fastcall sub_180002A40(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  LPVOID *v35; // rbx
  volatile signed __int32 *v36; // rcx
  size_t v37; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 result; // rax
  __int64 v43; // rdi
  char *v44; // rax
  _BYTE *v45; // r8
  char *v46; // rbx
  char **v47; // r15
  __int64 v48; // r14
  size_t v49; // r14
  _BYTE *v50; // r8
  char **v51; // r15
  __int64 v52; // r14
  size_t v53; // r14
  _BYTE *v54; // r8
  char **v55; // r15
  __int64 v56; // r14
  size_t v57; // r14
  _BYTE *v58; // r8
  char **v59; // r15
  __int64 v60; // r14
  size_t v61; // r14
  _BYTE *v62; // r8
  char **v63; // r15
  __int64 v64; // r14
  size_t v65; // r14
  _BYTE *v66; // r8
  char **v67; // r15
  __int64 v68; // r14
  size_t v69; // r14
  char *v70; // rax
  _BYTE *v71; // r8
  _QWORD *v72; // r14
  char *v73; // rbx
  size_t v74; // rsi
  void *v75; // rax
  __int64 v76; // [rsp+50h] [rbp+8h]

  v3 = -1LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v5 = 2LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    v76 = 2 * v7 + 2;
  }
  else
  {
    v76 = 2LL;
  }
  v8 = *(_QWORD *)(a2 + 32);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *(_QWORD *)(a2 + 48);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *(_QWORD *)(a2 + 64);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *(_QWORD *)(a2 + 120);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *(_QWORD *)(a2 + 104);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *(_QWORD *)(a2 + 112);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *(_QWORD *)(a2 + 80);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v29 + v31) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *(_QWORD *)(a2 + 88);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v5 = 2 * v33 + 2;
  }
  v34 = v15 + v18 + v21 + v24 + v27 + v5 + v30;
  v35 = (LPVOID *)(a1 + 144);
  v36 = *(volatile signed __int32 **)(a1 + 144);
  v37 = v76 + v9 + v12 + v34;
  if ( !v36 )
    goto LABEL_56;
  if ( *v36 != 1 || *(_QWORD *)(a1 + 152) < v37 )
  {
    if ( _InterlockedExchangeAdd(v36, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *v35);
    }
    *v35 = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
LABEL_56:
    sub_18000258C(a1 + 144, 0LL, v37);
  }
  v39 = (__int64)*v35 + 4;
  v40 = v39 & -(__int64)(*v35 != 0LL);
  v41 = v40 + *(_QWORD *)(a1 + 152);
  result = -v40;
  v43 = v41 & -(__int64)(v40 != 0);
  if ( v40 )
  {
    v44 = (char *)sub_180005048(
                    v39 & -(__int64)(*v35 != 0LL),
                    v41 & -(__int64)((v39 & -(__int64)(*v35 != 0LL)) != 0),
                    *(_QWORD *)(a2 + 16),
                    a1 + 16);
    v45 = *(_BYTE **)(a2 + 32);
    v46 = v44;
    v47 = (char **)(a1 + 32);
    if ( v44 == (char *)v43 )
      goto LABEL_67;
    if ( !v45 )
      goto LABEL_67;
    if ( !*v45 )
      goto LABEL_67;
    v48 = -1LL;
    do
      ++v48;
    while ( v45[v48] );
    v49 = v48 + 1;
    if ( v43 - (__int64)v44 >= v49 )
    {
      sub_180001FD0(v44, v43 - (_QWORD)v44, v45, v49);
      if ( a1 != -32 )
        *v47 = v46;
      v46 += v49;
    }
    else
    {
LABEL_67:
      if ( a1 != -32 )
        *v47 = 0LL;
    }
    v50 = *(_BYTE **)(a2 + 40);
    v51 = (char **)(a1 + 40);
    if ( v46 == (char *)v43 )
      goto LABEL_78;
    if ( !v50 )
      goto LABEL_78;
    if ( !*v50 )
      goto LABEL_78;
    v52 = -1LL;
    do
      ++v52;
    while ( v50[v52] );
    v53 = v52 + 1;
    if ( v43 - (__int64)v46 >= v53 )
    {
      sub_180001FD0(v46, v43 - (_QWORD)v46, v50, v53);
      if ( a1 != -40 )
        *v51 = v46;
      v46 += v53;
    }
    else
    {
LABEL_78:
      if ( a1 != -40 )
        *v51 = 0LL;
    }
    v54 = *(_BYTE **)(a2 + 48);
    v55 = (char **)(a1 + 48);
    if ( v46 == (char *)v43 )
      goto LABEL_89;
    if ( !v54 )
      goto LABEL_89;
    if ( !*v54 )
      goto LABEL_89;
    v56 = -1LL;
    do
      ++v56;
    while ( v54[v56] );
    v57 = v56 + 1;
    if ( v43 - (__int64)v46 >= v57 )
    {
      sub_180001FD0(v46, v43 - (_QWORD)v46, v54, v57);
      if ( a1 != -48 )
        *v55 = v46;
      v46 += v57;
    }
    else
    {
LABEL_89:
      if ( a1 != -48 )
        *v55 = 0LL;
    }
    v58 = *(_BYTE **)(a2 + 64);
    v59 = (char **)(a1 + 64);
    if ( v46 == (char *)v43 )
      goto LABEL_100;
    if ( !v58 )
      goto LABEL_100;
    if ( !*v58 )
      goto LABEL_100;
    v60 = -1LL;
    do
      ++v60;
    while ( v58[v60] );
    v61 = v60 + 1;
    if ( v43 - (__int64)v46 >= v61 )
    {
      sub_180001FD0(v46, v43 - (_QWORD)v46, v58, v61);
      if ( a1 != -64 )
        *v59 = v46;
      v46 += v61;
    }
    else
    {
LABEL_100:
      if ( a1 != -64 )
        *v59 = 0LL;
    }
    v62 = *(_BYTE **)(a2 + 120);
    v63 = (char **)(a1 + 120);
    if ( v46 == (char *)v43 )
      goto LABEL_111;
    if ( !v62 )
      goto LABEL_111;
    if ( !*v62 )
      goto LABEL_111;
    v64 = -1LL;
    do
      ++v64;
    while ( v62[v64] );
    v65 = v64 + 1;
    if ( v43 - (__int64)v46 >= v65 )
    {
      sub_180001FD0(v46, v43 - (_QWORD)v46, v62, v65);
      if ( a1 != -120 )
        *v63 = v46;
      v46 += v65;
    }
    else
    {
LABEL_111:
      if ( a1 != -120 )
        *v63 = 0LL;
    }
    v66 = *(_BYTE **)(a2 + 104);
    v67 = (char **)(a1 + 104);
    if ( v46 == (char *)v43 )
      goto LABEL_122;
    if ( !v66 )
      goto LABEL_122;
    if ( !*v66 )
      goto LABEL_122;
    v68 = -1LL;
    do
      ++v68;
    while ( v66[v68] );
    v69 = v68 + 1;
    if ( v43 - (__int64)v46 >= v69 )
    {
      sub_180001FD0(v46, v43 - (_QWORD)v46, v66, v69);
      if ( a1 != -104 )
        *v67 = v46;
      v46 += v69;
    }
    else
    {
LABEL_122:
      if ( a1 != -104 )
        *v67 = 0LL;
    }
    v70 = (char *)sub_180005048(v46, v43, *(_QWORD *)(a2 + 112), a1 + 112);
    v71 = *(_BYTE **)(a2 + 80);
    v72 = (_QWORD *)(a1 + 80);
    v73 = v70;
    if ( v70 == (char *)v43 || !v71 || !*v71 )
      goto LABEL_132;
    do
      ++v3;
    while ( v71[v3] );
    v74 = v3 + 1;
    if ( v43 - (__int64)v70 >= v74 )
    {
      sub_180001FD0(v70, v43 - (_QWORD)v70, v71, v74);
      if ( a1 != -80 )
        *v72 = v73;
      v73 += v74;
    }
    else
    {
LABEL_132:
      if ( a1 != -80 )
        *v72 = 0LL;
    }
    v75 = (void *)sub_180005048(v73, v43, *(_QWORD *)(a2 + 88), a1 + 88);
    return (__int64)memset(v75, 0, v43 - (_QWORD)v75);
  }
  return result;
}
