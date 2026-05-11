/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C002505C
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0021804 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012840 (memset.c)
 *     TopologyCountComponents @ 0x1C0023684 (TopologyCountComponents.c)
 *     TopologyFreeFunctionUnits @ 0x1C002548C (TopologyFreeFunctionUnits.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned int v6; // edx
  __int64 *v7; // r8
  unsigned int i; // r9d
  __int64 v9; // r15
  bool v10; // r14
  __int64 *v11; // r10
  __int64 *v12; // rax
  int v13; // r11d
  unsigned int v14; // eax
  __int64 *j; // rax
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  GUID *PoolWithTag; // rax
  GUID *v25; // rsi
  int v26; // r15d
  size_t v27; // r8
  GUID *v28; // r13
  int *v29; // r14
  int *v30; // rdi
  __int64 v31; // rdx
  unsigned __int8 *Data4; // rcx
  _DWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 **v36; // rdi
  unsigned int v37; // r8d
  unsigned int v38; // r9d
  int v39; // eax
  int v40; // eax
  int v41; // edx
  bool k; // zf
  int v43; // r10d
  __int64 v44; // r15
  unsigned __int8 *v45; // rcx
  __int64 v46; // rax
  int v47; // edx
  unsigned int v48; // [rsp+40h] [rbp-28h] BYREF
  int v49; // [rsp+44h] [rbp-24h] BYREF
  NTSTATUS v50; // [rsp+48h] [rbp-20h] BYREF
  __int64 v51; // [rsp+50h] [rbp-18h] BYREF
  int v52; // [rsp+58h] [rbp-10h]
  int v55; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v56; // [rsp+C8h] [rbp+60h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 80LL);
  v55 = 0;
  v56 = 0;
  v3 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = (__int64 *)*v2;
  if ( (__int64 *)*v2 == v2 )
  {
    v3 = -1073741438;
  }
  else
  {
    do
    {
      if ( v3 < 0 )
        break;
      for ( i = 0; i < *((_DWORD *)v7 + 8); ++i )
      {
        v9 = v7[7];
        v10 = 0;
        v3 = -1073741275;
        v11 = 0LL;
        v12 = (__int64 *)*v2;
        v13 = *(_DWORD *)(v9 + 12LL * i);
        while ( v12 != v2 && !v10 )
        {
          v10 = *((_DWORD *)v12 + 4) == v13;
          if ( *((_DWORD *)v12 + 4) == v13 )
          {
            v11 = v12;
            v3 = 0;
          }
          else
          {
            v12 = (__int64 *)*v12;
          }
        }
        if ( v3 >= 0 )
        {
          *(_DWORD *)(v9 + 12LL * i + 4) = *((_DWORD *)v11 + 6);
          *(_DWORD *)(v7[7] + 12LL * i + 8) = *((_DWORD *)v11 + 7);
        }
      }
      if ( *((_DWORD *)v7 + 5) <= 1u )
      {
        v14 = *((_DWORD *)v7 + 16);
        if ( v14 != -1 && v14 > v6 )
          v6 = *((_DWORD *)v7 + 16);
      }
      v7 = (__int64 *)*v7;
    }
    while ( v7 != v2 );
    v4 = a2;
    v5 = a1;
  }
  for ( j = (__int64 *)*v2; j != v2; j = (__int64 *)*j )
  {
    if ( v3 < 0 )
      goto LABEL_33;
    if ( *((_DWORD *)j + 5) <= 1u && *((_DWORD *)j + 16) == -1 )
      *((_DWORD *)j + 16) = ++v6;
  }
  if ( v3 >= 0 )
  {
    TopologyCountComponents(v2, &v50, &v48, (int *)&v51, &v49);
    v16 = v48;
    v17 = v48;
    v18 = (unsigned int)v51;
    v52 = v50 + 1;
    v19 = (unsigned int)(v50 + 1);
    v20 = 184LL * v48 + 16 * ((unsigned int)v51 + v19);
    *(_DWORD *)(v4 + 68) = 152;
    v51 = v16;
    if ( v20 > 0xFFFFFFFF )
      return 3221225858LL;
    PoolWithTag = (GUID *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v20, 0x41627845u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v50 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v5 + 8), PoolWithTag, ExFreePool);
    v26 = v50;
    if ( v50 >= 0 )
    {
      v27 = 152 * v17;
      v28 = &v25[v19];
      *(_QWORD *)(a2 + 56) = v25;
      *(_QWORD *)(a2 + 72) = v28;
      v29 = (int *)v28 + 38 * v17;
      *(_QWORD *)(a2 + 88) = v29;
      memset(v28, 0, v27);
      v30 = &v29[4 * v18];
      if ( (_DWORD)v16 )
      {
        v31 = v16;
        Data4 = v28[6].Data4;
        do
        {
          *((_QWORD *)Data4 - 12) = v30;
          v33 = v30 + 4;
          *((_DWORD *)Data4 - 5) = -1;
          *((_QWORD *)Data4 - 11) = v33;
          v30 = v33 + 4;
          *(_DWORD *)Data4 = -1;
          *((_QWORD *)Data4 - 13) = Data4 - 80;
          Data4 += 152;
          --v31;
        }
        while ( v31 );
        LODWORD(v16) = v48;
      }
      v34 = 1LL;
      *v25 = KSCATEGORY_AUDIO;
      if ( (v49 & 1) != 0 )
      {
        v34 = 2LL;
        v25[1] = KSCATEGORY_RENDER;
      }
      if ( (v49 & 2) != 0 )
        v25[v34] = KSCATEGORY_CAPTURE;
      v35 = a2;
      *(_DWORD *)(a2 + 48) = v52;
      v36 = (__int64 **)*v2;
      if ( (__int64 *)*v2 == v2 )
      {
LABEL_54:
        if ( v26 >= 0 )
        {
          v37 = v56;
          v38 = 0;
          *(_DWORD *)(v35 + 64) = v55;
          for ( *(_DWORD *)(v35 + 80) = v37; v38 < v37; ++v38 )
          {
            v39 = *v29;
            if ( *v29 != -1 )
            {
              if ( v39 >= 0 )
              {
                v41 = v16;
                for ( k = (_DWORD)v16 == 0; ; k = v43 == 0 )
                {
                  v55 = v41;
                  if ( k )
                    break;
                  v43 = v41 - 1;
                  if ( *v29 == *(&v28[5].Data1 + 38 * (unsigned int)(v41 - 1)) )
                  {
                    v40 = v41 - 1;
                    goto LABEL_65;
                  }
                  --v41;
                }
              }
              else
              {
                v40 = v39 & 0x7FFFFFFF;
LABEL_65:
                *v29 = v40;
                v37 = v56;
              }
            }
            v29 += 4;
          }
          if ( (_DWORD)v16 )
          {
            v44 = v51;
            v45 = v28[1].Data4;
            do
            {
              v46 = 2LL * *((unsigned int *)v45 + 13);
              v47 = dword_1C0014390[4 * *((unsigned int *)v45 + 13)];
              if ( v47 )
              {
                *(_DWORD *)v45 = v47;
                *((_QWORD *)v45 + 1) = (&off_1C0014398)[v46];
                *((_DWORD *)v45 + 1) = 72;
              }
              v45 += 152;
              --v44;
            }
            while ( v44 );
            return (unsigned int)v50;
          }
          return (unsigned int)v26;
        }
      }
      else
      {
        while ( v26 >= 0 )
        {
          v50 = pUnitProcessRtn[*((unsigned int *)v36 + 5)](
                  a1,
                  (int)v36,
                  (int)v28,
                  (int)v29,
                  (__int64)&v55,
                  (__int64)&v56);
          v26 = v50;
          if ( v50 >= 0 )
            v36 = (__int64 **)*v36;
          if ( v36 == (__int64 **)v2 )
          {
            v35 = a2;
            goto LABEL_54;
          }
        }
      }
      TopologyFreeFunctionUnits(a1);
    }
    else
    {
      ExFreePool(v25);
    }
    return (unsigned int)v26;
  }
LABEL_33:
  while ( 1 )
  {
    v23 = (_QWORD *)*v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( (__int64 *)v23[1] != v2 || (v22 = *v23, *(_QWORD **)(*v23 + 8LL) != v23) )
      __fastfail(3u);
    *v2 = v22;
    *(_QWORD *)(v22 + 8) = v2;
    ExFreePool(v23);
  }
  return (unsigned int)v3;
}
