/*
 * XREFs of sub_14091FC58 @ 0x14091FC58
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1400D5CD0 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091FC58(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  unsigned int j; // edx
  __int64 v17; // rax
  unsigned int *v18; // r8
  size_t v19; // rdx
  const wchar_t *v20; // r11
  unsigned int *v21; // rax
  __int64 v22; // r14
  void *v23; // r11
  unsigned int v24; // eax
  size_t v25; // r14
  PVOID PoolWithTag; // rax
  PVOID v27; // rbx
  void *v28; // r12
  unsigned int k; // ecx
  __int64 v30; // r8
  unsigned int *v31; // rdx
  __int64 v32; // r8
  unsigned int *v33; // rdx
  int v34; // esi
  int v35; // edx
  unsigned int v36; // ecx
  _DWORD *v37; // rax
  int v38; // esi
  unsigned int v39; // r8d
  __int64 v40; // r10
  int v41; // r11d
  unsigned int v42; // edx
  int v43; // eax
  unsigned int v44; // ecx
  unsigned __int64 v45; // rdx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  __int64 v48; // xmm0_8
  __int64 v49; // r8
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned __int64 v52; // rdx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  size_t pcbLength; // [rsp+30h] [rbp-30h] BYREF
  __int64 v57; // [rsp+38h] [rbp-28h]
  void *Src; // [rsp+40h] [rbp-20h]
  __int128 v59; // [rsp+48h] [rbp-18h] BYREF

  v59 = 0uLL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = v8;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_17;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_17;
    }
    v13 = *v9;
    v14 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_17:
      v7 = -1073741675;
    }
    else
    {
      v15 = 0LL;
      if ( v13 )
        v15 = v14;
      v7 = 0;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v57 = *(_QWORD *)v15;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v17 = *v8;
      v18 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_39;
      v8 = (unsigned int *)((char *)v18 + v17);
      if ( (unsigned int *)((char *)v18 + v17) < v18 )
        goto LABEL_39;
    }
    v19 = *v8;
    if ( v8 + 1 < v8 )
    {
LABEL_39:
      v7 = -1073741675;
    }
    else
    {
      v20 = 0LL;
      if ( (_DWORD)v19 )
        v20 = (const wchar_t *)(v8 + 1);
      v7 = 0;
      if ( !(_DWORD)v19 || (v19 & 1) != 0 )
        return (unsigned int)-1073741762;
      v22 = *v8;
      if ( v20[(v19 >> 1) - 1] || StringCbLengthW(v20, v19, &pcbLength) < 0 || pcbLength + 2 != v22 )
        return (unsigned int)-1073741762;
      LODWORD(pcbLength) = pcbLength >> 1;
      Src = v23;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  v24 = 2 * pcbLength + 2;
  if ( 2 * (_DWORD)pcbLength == -2 )
    return (unsigned int)-1073741762;
  v25 = v24;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
  v27 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, Src, v25);
  v28 = v27;
  v21 = *(unsigned int **)(a1 + 8);
  if ( !v21 || *(_DWORD *)a1 <= 5u )
  {
    v7 = -1073741811;
    goto LABEL_92;
  }
  for ( k = 0; k < 5; ++k )
  {
    v30 = *v21;
    v31 = v21 + 1;
    if ( v21 + 1 < v21 )
      goto LABEL_91;
    v21 = (unsigned int *)((char *)v31 + v30);
    if ( (unsigned int *)((char *)v31 + v30) < v31 )
      goto LABEL_91;
  }
  v32 = *v21;
  if ( v21 + 1 >= v21 )
  {
    v33 = 0LL;
    if ( (_DWORD)v32 )
      v33 = v21 + 1;
    v34 = qword_1409AD430 ? qword_1409AD430(v27, v33, v32, &v59) : -1073700223;
    v35 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0 )
    {
      v36 = *(_DWORD *)(a2 + 16) + 68;
      if ( v36 >= *(_DWORD *)(a2 + 16) + 64 )
      {
        v7 = v36 + v35 < v36 ? 0xC0000095 : 0;
        if ( v36 + v35 < v36 )
          goto LABEL_92;
        *(_DWORD *)(a4 + 4) = 40;
        v37 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
        if ( !v37 )
        {
          v7 = -1073741801;
          goto LABEL_92;
        }
        *(_QWORD *)(a4 + 8) = v37;
        *(_DWORD *)a4 = 0;
        v38 = v34 | 0x10000000;
        if ( v37 + 1 >= v37 )
        {
          if ( v37 + 2 > (_DWORD *)((char *)v37 + *(unsigned int *)(a4 + 4)) )
          {
LABEL_63:
            v7 = -1073741789;
            goto LABEL_92;
          }
          *v37 = 4;
          v37[1] = v38;
          v39 = ++*(_DWORD *)a4;
          v40 = *(_QWORD *)(a4 + 8);
          v41 = -1;
          if ( !v40 )
          {
            v42 = *(_DWORD *)(a4 + 4);
            v43 = -1;
            v44 = v42 + 12;
            if ( v42 + 12 >= v42 )
              v43 = v42 + 12;
            v7 = v44 < v42 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v43;
            if ( v44 >= v42 )
            {
              *(_DWORD *)a4 = v39 + 1;
LABEL_77:
              v49 = *(_QWORD *)(a4 + 8);
              if ( !v49 )
              {
                v50 = *(_DWORD *)(a4 + 4);
                v51 = v50 + 20;
                if ( v50 + 20 >= v50 )
                  v41 = v50 + 20;
                v7 = v51 < v50 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v41;
                if ( v51 >= v50 )
                {
                  ++*(_DWORD *)a4;
                  v7 = 0;
                }
                goto LABEL_92;
              }
              v52 = *(_QWORD *)(a4 + 8);
              v53 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v54 = *(_DWORD *)v52 + 4;
                  if ( *(_DWORD *)v52 >= 0xFFFFFFFC || v52 + v54 < v52 )
                    break;
                  ++v53;
                  v52 += v54;
                  if ( v53 >= *(_DWORD *)a4 )
                    goto LABEL_88;
                }
              }
              else
              {
LABEL_88:
                if ( v52 + 4 >= v52 )
                {
                  v7 = 0;
                  if ( v52 + 20 > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_63;
                  *(_DWORD *)v52 = 16;
                  *(_OWORD *)(v52 + 4) = v59;
                  ++*(_DWORD *)a4;
                  goto LABEL_92;
                }
              }
              goto LABEL_82;
            }
LABEL_76:
            if ( v7 < 0 )
              goto LABEL_92;
            goto LABEL_77;
          }
          v45 = *(_QWORD *)(a4 + 8);
          v46 = 0;
          if ( v39 )
          {
            while ( 1 )
            {
              v47 = *(_DWORD *)v45 + 4;
              if ( *(_DWORD *)v45 >= 0xFFFFFFFC )
                break;
              if ( v45 + v47 < v45 )
                goto LABEL_82;
              ++v46;
              v45 += v47;
              if ( v46 >= v39 )
                goto LABEL_73;
            }
            v7 = -1073741675;
            goto LABEL_76;
          }
LABEL_73:
          if ( v45 + 4 >= v45 )
          {
            v7 = 0;
            if ( v45 + 12 > v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_63;
            v48 = v57;
            *(_DWORD *)v45 = 8;
            *(_QWORD *)(v45 + 4) = v48;
            ++*(_DWORD *)a4;
            goto LABEL_76;
          }
        }
LABEL_82:
        v7 = -1073741675;
        goto LABEL_92;
      }
    }
  }
LABEL_91:
  v7 = -1073741675;
LABEL_92:
  if ( v28 )
    ExFreePoolWithTag(v28, 0x20534C53u);
  return (unsigned int)v7;
}
