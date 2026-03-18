/*
 * XREFs of sub_140344B2C @ 0x140344B2C
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140344B2C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  const void *v5; // r12
  signed int v9; // ebx
  unsigned int *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r10
  unsigned int *v13; // rdx
  unsigned int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int j; // ecx
  __int64 v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // edx
  unsigned int *v21; // rax
  unsigned int v22; // esi
  int v23; // r14d
  PVOID PoolWithTag; // rax
  const void *v25; // rcx
  int v26; // r14d
  unsigned int v27; // r13d
  SIZE_T v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  unsigned int v33; // eax
  PVOID v34; // rax
  __int64 v35; // r9
  int v36; // r14d
  int v37; // r15d
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  _DWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // r8
  unsigned int v45; // edx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // r8
  int v52; // r11d
  unsigned int v53; // ecx
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int *v60; // rdx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  _DWORD *k; // rdx
  unsigned int v64; // eax
  __int64 v66; // [rsp+20h] [rbp-10h]
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(NumberOfBytes) = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v10 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_14;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_14;
    }
    v14 = *v10;
    v15 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_14:
      v9 = -1073741675;
      goto LABEL_15;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = v15;
    v9 = 0;
    if ( v14 == 8 )
    {
      v66 = *(_QWORD *)v16;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v9 = -1073741811;
LABEL_15:
  if ( v9 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = *v4;
        v19 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_28;
        v4 = (unsigned int *)((char *)v19 + v18);
        if ( (unsigned int *)((char *)v19 + v18) < v19 )
          goto LABEL_28;
      }
      v20 = *v4;
      if ( v4 + 1 < v4 )
      {
LABEL_28:
        v9 = -1073741675;
        goto LABEL_29;
      }
      v21 = 0LL;
      if ( v20 )
        v21 = v4 + 1;
      v9 = 0;
      if ( v20 == 4 )
      {
        v22 = *v21;
        goto LABEL_30;
      }
      return (unsigned int)-1073741789;
    }
    v9 = -1073741811;
LABEL_29:
    v22 = NumberOfBytes;
LABEL_30:
    if ( v9 >= 0 )
    {
      if ( v22 )
      {
        v23 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x20534C53u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memset(PoolWithTag, 0, v22);
      }
      else
      {
        v23 = 1;
      }
      if ( qword_1409AD498 )
      {
        v25 = 0LL;
        if ( !v23 )
          v25 = v5;
        v26 = qword_1409AD498(v25, v22, &NumberOfBytes);
      }
      else
      {
        v26 = -1073741637;
      }
      v27 = v22 + 4;
      if ( v22 >= 0xFFFFFFFC )
      {
        v28 = (unsigned int)NumberOfBytes;
        v9 = -1073741675;
      }
      else
      {
        if ( v27 >= 0xFFFFFFEC )
          goto LABEL_132;
        v28 = v22 + 32;
        if ( (unsigned int)v28 < v22 + 24 )
          goto LABEL_132;
        v9 = 0;
      }
      if ( v9 < 0 )
        goto LABEL_133;
      if ( (unsigned int)v28 >= 0xFFFFFFF8 )
      {
        v9 = -1073741675;
        goto LABEL_133;
      }
      v29 = (v28 + 15) & 0xFFFFFFF8;
      if ( v29 >= (int)v28 + 8 )
      {
        v30 = v29 + 8;
        if ( v29 + 8 < v29 )
          goto LABEL_59;
        v9 = 0;
      }
      else
      {
        v30 = NumberOfBytes;
        v9 = -1073741675;
      }
      if ( v9 < 0 )
        goto LABEL_133;
      v31 = v30 + 4;
      if ( v31 >= 4 )
      {
        v32 = v31 + 4;
        if ( v31 + 4 >= v31 )
        {
          v33 = v32 + *(_DWORD *)(a2 + 16);
          if ( v33 >= v32 && v33 + 4 >= v33 )
          {
            v9 = v33 + 4 + *(_DWORD *)(a2 + 32) < v33 + 4 ? 0xC0000095 : 0;
LABEL_60:
            if ( v9 < 0 )
              goto LABEL_133;
            if ( !a4 )
            {
              v9 = -1073741811;
              goto LABEL_133;
            }
            v9 = 0;
            *(_DWORD *)(a4 + 4) = v28;
            if ( (_DWORD)v28 )
            {
              v34 = ExAllocatePoolWithTag(PagedPool, v28, 0x20534C53u);
              if ( v34 )
              {
                *(_QWORD *)(a4 + 8) = v34;
                *(_DWORD *)a4 = 0;
              }
              else
              {
                v9 = -1073741801;
              }
            }
            else
            {
              v9 = -1073741762;
            }
            if ( v9 < 0 )
              goto LABEL_133;
            v35 = *(_QWORD *)(a4 + 8);
            v36 = v26 | 0x10000000;
            v37 = -1;
            if ( !v35 )
            {
              v38 = *(_DWORD *)(a4 + 4);
              v39 = -1;
              v40 = v38 + 8;
              if ( v38 + 8 >= v38 )
                v39 = v38 + 8;
              v9 = v40 < v38 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v39;
              if ( v40 >= v38 )
              {
                ++*(_DWORD *)a4;
                goto LABEL_84;
              }
LABEL_83:
              if ( v9 < 0 )
                goto LABEL_133;
LABEL_84:
              v44 = *(_QWORD *)(a4 + 8);
              if ( v44 )
              {
                v48 = 0;
                v49 = *(_QWORD *)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v50 = *(_DWORD *)v49 + 4;
                    if ( *(_DWORD *)v49 >= 0xFFFFFFFC )
                      break;
                    if ( v49 + v50 < v49 )
                      goto LABEL_106;
                    ++v48;
                    v49 += v50;
                    if ( v48 >= *(_DWORD *)a4 )
                      goto LABEL_93;
                  }
                  v9 = -1073741675;
                }
                else
                {
LABEL_93:
                  if ( v49 + 4 < v49 )
                    goto LABEL_106;
                  v9 = 0;
                  if ( v49 + 12 > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_80;
                  *(_DWORD *)v49 = 8;
                  *(_QWORD *)(v49 + 4) = v66;
                  ++*(_DWORD *)a4;
                }
              }
              else
              {
                v45 = *(_DWORD *)(a4 + 4);
                v46 = -1;
                v47 = v45 + 12;
                if ( v45 + 12 >= v45 )
                  v46 = v45 + 12;
                v9 = v47 < v45 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v46;
                if ( v47 >= v45 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_97;
                }
              }
              if ( v9 < 0 )
                goto LABEL_133;
LABEL_97:
              if ( v5 )
              {
                if ( !v22 )
                  goto LABEL_99;
              }
              else if ( v22 )
              {
LABEL_99:
                v9 = -1073741811;
                goto LABEL_100;
              }
              v55 = *(_QWORD *)(a4 + 8);
              if ( v55 )
              {
                v59 = 0;
                v60 = *(unsigned int **)(a4 + 8);
                if ( !*(_DWORD *)a4 )
                {
LABEL_120:
                  if ( v60 + 1 < v60 )
                    goto LABEL_106;
                  v9 = 0;
                  if ( (unsigned __int64)v60 + v22 + 4 > v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_80;
                  *v60 = v22;
                  if ( v5 )
                    memmove(v60 + 1, v5, v22);
                  ++*(_DWORD *)a4;
                  goto LABEL_100;
                }
                while ( 1 )
                {
                  v61 = *v60 + 4;
                  if ( *v60 >= 0xFFFFFFFC )
                    break;
                  if ( (unsigned int *)((char *)v60 + v61) < v60 )
                    goto LABEL_106;
                  ++v59;
                  v60 = (unsigned int *)((char *)v60 + v61);
                  if ( v59 >= *(_DWORD *)a4 )
                    goto LABEL_120;
                }
              }
              else if ( v27 >= 4 )
              {
                v56 = *(_DWORD *)(a4 + 4);
                v57 = -1;
                v58 = v56 + v27;
                if ( v56 + v27 >= v56 )
                  v57 = v56 + v27;
                v9 = v58 < v56 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v57;
                if ( v58 >= v56 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_101;
                }
LABEL_100:
                if ( v9 < 0 )
                  goto LABEL_133;
LABEL_101:
                v51 = *(_QWORD *)(a4 + 8);
                v52 = NumberOfBytes;
                if ( !v51 )
                {
                  v53 = *(_DWORD *)(a4 + 4);
                  v54 = v53 + 8;
                  if ( v53 + 8 >= v53 )
                    v37 = v53 + 8;
                  v9 = v54 < v53 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v37;
                  if ( v54 >= v53 )
                  {
                    ++*(_DWORD *)a4;
                    v9 = 0;
                  }
                  goto LABEL_133;
                }
                v62 = 0;
                for ( k = *(_DWORD **)(a4 + 8); v62 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v64) )
                {
                  v64 = *k + 4;
                  if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v64) < k )
                    goto LABEL_106;
                  ++v62;
                }
                if ( k + 1 >= k )
                {
                  v9 = 0;
                  if ( (unsigned __int64)(k + 2) <= v51 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *k = 4;
                    k[1] = v52;
                    ++*(_DWORD *)a4;
                    goto LABEL_133;
                  }
LABEL_80:
                  v9 = -1073741789;
                  goto LABEL_133;
                }
LABEL_106:
                v9 = -1073741675;
                goto LABEL_133;
              }
              v9 = -1073741675;
              goto LABEL_100;
            }
            v41 = 0;
            v42 = *(_DWORD **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v43 = *v42 + 4;
                if ( *v42 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v42 + v43) < v42 )
                  goto LABEL_132;
                ++v41;
                v42 = (_DWORD *)((char *)v42 + v43);
                if ( v41 >= *(_DWORD *)a4 )
                  goto LABEL_78;
              }
              v9 = -1073741675;
              goto LABEL_83;
            }
LABEL_78:
            if ( v42 + 1 >= v42 )
            {
              v9 = 0;
              if ( (unsigned __int64)(v42 + 2) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_80;
              *v42 = 4;
              v42[1] = v36;
              ++*(_DWORD *)a4;
              goto LABEL_83;
            }
LABEL_132:
            v9 = -1073741675;
LABEL_133:
            if ( v5 )
              ExFreeHeapPool((ULONG_PTR)v5);
            return (unsigned int)v9;
          }
        }
      }
LABEL_59:
      v9 = -1073741675;
      goto LABEL_60;
    }
  }
  return (unsigned int)v9;
}
