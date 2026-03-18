/*
 * XREFs of MiInitializeDriverPtes @ 0x140A167D4
 * Callers:
 *     MiInitializeDriverImages @ 0x1409EE5A4 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReserveBootDriverPtes @ 0x140A16C18 (MiReserveBootDriverPtes.c)
 */

__int64 __fastcall MiInitializeDriverPtes(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // r9
  bool v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *i; // rbx
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  PVOID j; // r11
  unsigned int v16; // r9d
  unsigned int v17; // ebp
  unsigned int v18; // r10d
  unsigned int v19; // edx
  int v20; // ebx
  __int64 v21; // rdi
  unsigned int v22; // esi
  unsigned int v23; // edx
  __int64 *v25; // rdx
  __int64 k; // r8
  unsigned __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r10
  unsigned int v30; // ebp
  unsigned int v31; // esi
  unsigned int v32; // r9d
  unsigned int v33; // edx
  int v34; // ebx
  __int64 v35; // r14
  unsigned int v36; // edi
  unsigned int v37; // edx
  _QWORD *v38; // rdx
  __int64 m; // r8
  unsigned __int64 v40; // rax
  int v41; // edx
  unsigned __int64 v42; // rdi
  int v43; // ebx
  unsigned int v44; // r10d
  unsigned __int64 *v45; // rax
  unsigned __int64 *n; // rbx
  unsigned __int64 **v47; // rax
  unsigned __int64 *v48; // rdi
  unsigned __int64 *v49; // rcx
  unsigned __int64 *v50; // rcx
  _QWORD *v51; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  v51 = 0LL;
  while ( v3 != v2 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
      goto LABEL_13;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x70446D4Du);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    v6 = 0;
    PoolWithTag[3] = v3;
    v7 = v3[6];
    if ( !v1 )
      goto LABEL_12;
    while ( 1 )
    {
      v8 = v1[3];
      v9 = *(_QWORD *)(v8 + 48);
      if ( v7 > v9 + (unsigned int)(*(_DWORD *)(v8 + 64) - 1) || v7 >= v9 )
        break;
      v10 = (_QWORD *)*v1;
      if ( !*v1 )
      {
        v6 = 0;
        goto LABEL_12;
      }
LABEL_10:
      v1 = v10;
    }
    v10 = (_QWORD *)v1[1];
    if ( v10 )
      goto LABEL_10;
    v6 = 1;
LABEL_12:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v51, (unsigned __int64)v1, v6, v5);
    v1 = v51;
LABEL_13:
    v3 = (_QWORD *)*v3;
  }
  i = 0LL;
  while ( v1 )
  {
    i = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( i )
  {
    if ( !(unsigned int)MiReserveBootDriverPtes(
                          ((*(_QWORD *)(i[3] + 48LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          *(_DWORD *)(i[3] + 64LL) >> 12) )
      return 0LL;
    v12 = (_QWORD **)i[1];
    v13 = i;
    if ( v12 )
    {
      v14 = *v12;
      for ( i = (_QWORD *)i[1]; v14; v14 = (_QWORD *)*v14 )
        i = v14;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v13 )
          break;
        v13 = i;
      }
    }
  }
  for ( j = qword_140464628[0]; j; j = *(PVOID *)j )
  {
    v16 = 0;
    do
    {
      v17 = *((_DWORD *)j + 4);
      v18 = v16 < v17 ? v16 : 0;
      v19 = v17 - 1;
      v20 = (*((_DWORD *)j + 6) & 4) != 0LL ? 0x20 : 0;
      v21 = *((_QWORD *)j + 3) - ((*((_QWORD *)j + 3) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v22 = v20 + v19;
        if ( v19 - v18 == -1 )
          goto LABEL_33;
        v25 = (__int64 *)(v21 + 8 * ((unsigned __int64)(v20 + v18) >> 6));
        for ( k = *v25 | ((1LL << ((v20 + v18) & 0x3F)) - 1); k == -1; k = *v25 )
        {
          if ( (unsigned __int64)++v25 > v21 + 8 * ((unsigned __int64)v22 >> 6) )
            goto LABEL_33;
        }
        _BitScanForward64(&v27, ~k);
        v23 = v27 + ((unsigned int)(((__int64)v25 - v21) >> 3) << 6);
        if ( v23 > v22 )
        {
LABEL_33:
          v23 = -1;
        }
        else if ( v23 != -1 )
        {
          break;
        }
        if ( !v18 )
          break;
        v28 = v16 + 1;
        if ( v16 + 1 > v17 )
          v28 = *((_DWORD *)j + 4);
        v19 = v28 - 1;
        v18 = 0;
      }
      v29 = v23 - v20;
      if ( v23 == -1 )
        v29 = 0xFFFFFFFFLL;
      if ( (unsigned int)v29 < v16 || (_DWORD)v29 == -1 )
        break;
      v30 = *((_DWORD *)j + 4);
      v31 = v29 + 1;
      v32 = v31 < v30 ? v31 : 0;
      v33 = v30 - 1;
      v34 = (*((_DWORD *)j + 6) & 4) != 0LL ? 0x20 : 0;
      v35 = *((_QWORD *)j + 3) - ((*((_QWORD *)j + 3) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v36 = v34 + v33;
        if ( v33 - v32 == -1 )
          goto LABEL_51;
        v38 = (_QWORD *)(v35 + 8 * ((unsigned __int64)(v34 + v32) >> 6));
        for ( m = ~*v38 | ((1LL << ((v34 + v32) & 0x3F)) - 1); m == -1; m = ~*v38 )
        {
          if ( (unsigned __int64)++v38 > v35 + 8 * ((unsigned __int64)v36 >> 6) )
            goto LABEL_51;
        }
        _BitScanForward64(&v40, ~m);
        v37 = v40 + ((unsigned int)(((__int64)v38 - v35) >> 3) << 6);
        if ( v37 > v36 )
        {
LABEL_51:
          v37 = -1;
        }
        else if ( v37 != -1 )
        {
          break;
        }
        if ( !v32 )
          break;
        v41 = v29 + 2;
        if ( (int)v29 + 2 > v30 )
          v41 = *((_DWORD *)j + 4);
        v33 = v41 - 1;
        v32 = 0;
      }
      v16 = v37 - v34;
      if ( v37 == -1 )
        v16 = -1;
      if ( v16 < v31 || v16 == -1 )
        v16 = *((_DWORD *)j + 4);
      v42 = *((_QWORD *)j + 1) + 8 * v29;
      v43 = v16 - v29;
      if ( v16 != (_DWORD)v29 )
      {
        do
        {
          if ( MI_READ_PTE_LOCK_FREE(v42) )
            _bittestandset(*((signed __int32 **)j + 3), v44);
          v42 += 8LL;
          --v43;
        }
        while ( v43 );
      }
    }
    while ( v16 < *((_DWORD *)j + 4) );
  }
  if ( (KiSpeculationFeatures & 0x4000000) != 0 )
    qword_1404659B8 = (unsigned __int64)(((__int64)((*((_QWORD *)qword_140464628[0] + 1) << 25)
                                                  + ((unsigned __int64)*((unsigned int *)qword_140464628[0] + 4) << 28)) >> 16)
                                       - qword_1404659C0) >> 21;
  v45 = v51;
  n = 0LL;
  while ( v45 )
  {
    n = v45;
    v45 = (unsigned __int64 *)*v45;
  }
  while ( n )
  {
    v47 = (unsigned __int64 **)n[1];
    v48 = n;
    v49 = n;
    if ( v47 )
    {
      v50 = *v47;
      for ( n = (unsigned __int64 *)n[1]; v50; v50 = (unsigned __int64 *)*v50 )
        n = v50;
    }
    else
    {
      while ( 1 )
      {
        n = (unsigned __int64 *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !n || (unsigned __int64 *)*n == v49 )
          break;
        v49 = n;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v51, v48);
    ExFreePoolWithTag(v48, 0);
  }
  return 1LL;
}
