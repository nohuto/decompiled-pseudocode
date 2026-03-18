/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0072BA4
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C0072ADC (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C01214A0 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     freepathalloc @ 0x1C0011F80 (freepathalloc.c)
 *     newpathalloc @ 0x1C0073080 (newpathalloc.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00AC8E0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C01215D0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C0121664 (-vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z.c)
 */

__int64 __fastcall EPATHOBJ::createrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  EXFORMOBJ *v6; // r11
  __int64 v8; // r10
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r13d
  int v14; // r8d
  unsigned int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // r15
  _DWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // rax
  int v25; // ecx
  int v26; // ecx
  _QWORD *v27; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp-38h]

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  v31 = *(_QWORD *)(v8 + 24);
  v9 = v31;
  v10 = 0LL;
  if ( v31 )
  {
    v11 = *(_QWORD *)(v31 + 8) + 24LL;
    v12 = v31 + *(unsigned int *)(v31 + 16);
    if ( v12 > v11 )
      v10 = (__int64)(v12 - v11) >> 3;
  }
  v13 = *(_DWORD *)(v8 + 80) & 1;
  v14 = *(_DWORD *)a3;
  if ( (v14 & 0x10) != 0 && (_DWORD)v10 )
    v10 = 3 * (((unsigned int)v10 - v13) / 3) + v13;
  if ( (unsigned int)v10 < v13 + *((_DWORD *)a3 + 1) && (unsigned int)v10 < 8 )
  {
    v30 = newpathalloc();
    v9 = v30;
    if ( !v30 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    *(_QWORD *)v30 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v30;
    v10 = (unsigned int)(v30 + *(_DWORD *)(v30 + 16) - *(_DWORD *)(v30 + 8) - 24) >> 3;
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      v10 = 3 * (((unsigned int)v10 - v13) / 3) + v13;
    v6 = a2;
  }
  v16 = v13 + *((_DWORD *)a3 + 1);
  if ( (unsigned int)v10 > v16 )
    v10 = v16;
  v17 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v17 + 16) = v14 | 2;
  *(_DWORD *)(v17 + 20) = v10;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)(v17 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v18 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v18 + 64);
    v10 = (unsigned int)(v10 - 1);
    *(_DWORD *)(v17 + 16) |= *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) &= 0xFFFFFFFA;
  }
  else
  {
    v29 = *(_QWORD *)(v18 + 40);
    if ( v29 )
      *(_DWORD *)(v29 + 16) &= ~2u;
  }
  if ( a4 )
  {
    vOffsetPoints((struct _POINTFIX *)(v17 + 8 * (v13 + 3LL)), *((struct _POINTFIX **)a3 + 1), v10, a4->x, a4->y);
  }
  else
  {
    v19 = v13 + 3LL;
    if ( !v6 )
    {
      v20 = (char *)*((_QWORD *)a3 + 1);
      memmove((void *)(v17 + 8 * v19), v20, 8LL * (unsigned int)v10);
      goto LABEL_22;
    }
    EXFORMOBJ::bXformRound(v6, *((struct _POINTL **)a3 + 1), (struct _POINTFIX *)(v17 + 8 * v19), (unsigned int)v10);
  }
  v20 = (char *)*((_QWORD *)a3 + 1);
LABEL_22:
  *((_DWORD *)a3 + 1) -= v10;
  *((_QWORD *)a3 + 1) = &v20[8 * v10];
  *(_DWORD *)a3 &= 0xFFFFFFFA;
  v21 = (_DWORD *)(v17 + 24);
  v22 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v22 + 40) )
  {
    *(_DWORD *)(v22 + 56) = *v21;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v17 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
    v22 = *((_QWORD *)this + 1);
  }
  if ( (_DWORD)v10 + v13 )
  {
    v23 = (unsigned int)v10 + v13;
    do
    {
      v24 = (_DWORD *)*((_QWORD *)this + 1);
      v25 = *v21;
      if ( v24[12] > *v21 )
      {
        v24[12] = v25;
      }
      else if ( v24[14] < v25 )
      {
        v24[14] = v25;
      }
      v26 = v21[1];
      if ( v24[15] < v26 )
      {
        v24[15] = v26;
      }
      else if ( v24[13] > v26 )
      {
        v24[13] = v26;
      }
      v21 += 2;
      --v23;
    }
    while ( v23 );
    v22 = *((_QWORD *)this + 1);
  }
  v27 = *(_QWORD **)(v22 + 40);
  if ( v27 )
  {
    *v27 = v17;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v17;
  }
  else
  {
    *(_QWORD *)(v22 + 40) = v17;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v17;
  }
  *(_QWORD *)(v9 + 8) = v17 + 8 * (*(unsigned int *)(v17 + 20) + 3LL);
  return 1LL;
}
