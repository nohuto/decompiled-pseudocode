/*
 * XREFs of MiProcessCrcList @ 0x1406F56E0
 * Callers:
 *     MiCombineWorkingSetTail @ 0x1402E6170 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiValidCombineProtection @ 0x14013EFA8 (MiValidCombineProtection.c)
 *     MiAllocateCombineProto @ 0x14013EFD0 (MiAllocateCombineProto.c)
 *     MiCompareActiveCrcEntries @ 0x14013F2D0 (MiCompareActiveCrcEntries.c)
 *     MiCapturePfnVm @ 0x14013F330 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 *     MiFreeCombineBlock @ 0x140141AF4 (MiFreeCombineBlock.c)
 *     MiPushCombineBlock @ 0x1401430BC (MiPushCombineBlock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDereferenceCombineCrc @ 0x1406F7104 (MiDereferenceCombineCrc.c)
 *     MiPopulateCombineMdls @ 0x1406F92F4 (MiPopulateCombineMdls.c)
 *     MiFreeCombineMdls @ 0x1406F989C (MiFreeCombineMdls.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, __int64 *a2, size_t a3, unsigned int a4)
{
  __int64 *result; // rax
  unsigned int v5; // ebx
  __int64 v7; // r12
  __int64 v8; // r13
  size_t v9; // r10
  __int64 *v10; // r14
  _DWORD *v11; // rbx
  __int64 CombineProto; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // r9
  unsigned __int64 v19; // r11
  __int64 v20; // rcx
  char *v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rdi
  _QWORD *PoolWithTag; // rax
  bool v25; // r8
  char *v26; // rdx
  PVOID v27; // rax
  char *v28; // rax
  char *v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *j; // rcx
  __int64 i; // rax
  _QWORD **v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  _QWORD *v37; // r12
  size_t v38; // rsi
  _QWORD **v39; // r14
  _QWORD *v40; // rdi
  unsigned __int64 v41; // r10
  __int64 v42; // rdx
  __int64 *v43; // r12
  _QWORD *v44; // rdi
  size_t v45; // r14
  __int64 v46; // rsi
  _QWORD *v47; // rax
  size_t k; // rsi
  __int64 v49; // rcx
  __int64 v50; // rdx
  void *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rdx
  int v55; // eax
  size_t NumOfElements; // [rsp+48h] [rbp-79h]
  PVOID P; // [rsp+50h] [rbp-71h] BYREF
  PVOID Object; // [rsp+58h] [rbp-69h] BYREF
  __int64 *v59; // [rsp+60h] [rbp-61h]
  __int64 v60; // [rsp+68h] [rbp-59h] BYREF
  __int64 *v61; // [rsp+70h] [rbp-51h]
  unsigned int v62; // [rsp+78h] [rbp-49h]
  __int64 *v63; // [rsp+80h] [rbp-41h]
  unsigned int v64; // [rsp+88h] [rbp-39h]
  int v65; // [rsp+8Ch] [rbp-35h] BYREF
  __int64 v66; // [rsp+90h] [rbp-31h] BYREF
  __int64 v67; // [rsp+98h] [rbp-29h]
  __int64 *v68; // [rsp+A0h] [rbp-21h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-11h] BYREF
  _QWORD v71[3]; // [rsp+B8h] [rbp-9h] BYREF

  result = a2;
  v59 = a2;
  v63 = (__int64 *)a1;
  v5 = a4;
  v62 = a4;
  v60 = 0LL;
  v61 = 0LL;
  memset(v71, 0, sizeof(v71));
  if ( a3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)a1;
    v64 = *(_DWORD *)(a1 + 60);
    v67 = v8;
    v70 = v8;
    P = 0LL;
    qsort(a2, a3, 0x28uLL, MiCombinePageSortByHash);
    Object = KeGetCurrentThread();
    v9 = 0LL;
    NumOfElements = 0LL;
    v61 = &v60;
    v10 = v59;
    v68 = &v59[5 * a3 - 5];
    v60 = (__int64)&v60;
    if ( v59 <= v68 )
    {
      v11 = Object;
      while ( 1 )
      {
        if ( v7 && *(_DWORD *)(v7 + 4) || (v11[440] & 1) != 0 )
        {
LABEL_55:
          v5 = v62;
          v8 = v67;
          goto LABEL_56;
        }
        CombineProto = 0LL;
        v13 = 48 * v10[1] - 0x58000000000LL;
        v14 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        v15 = (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
        if ( !MiValidCombineProtection(v15) || v14 < v19 || v14 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_15;
        v20 = *v10;
        if ( (v10 == v17 || v20 != v10[5]) && (v20 != v16 || v10 == v18) )
        {
          CombineProto = MiAllocateCombineProto(v67, *v10, v15, 0LL, 0);
          if ( !CombineProto )
            goto LABEL_14;
          v20 = *v10;
        }
        else if ( (*(_BYTE *)(v13 + 34) & 0xC0u) >= 0xC0 )
        {
          *v10 = 0LL;
          goto LABEL_15;
        }
        Object = 0LL;
        v21 = MiCapturePfnVm(v63, v13, v64, v20, (unsigned __int64 *)&Object, &v69, &v65, &v66);
        if ( !v21 || v69 != v14 || v65 != v15 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
            MiDecrementCombinedPte(0LL, CombineProto + 48);
LABEL_49:
          *v10 = 0LL;
LABEL_14:
          v9 = NumOfElements;
          goto LABEL_15;
        }
        if ( !CombineProto )
          goto LABEL_23;
        v22 = v66;
        if ( *(_QWORD *)(CombineProto + 64) != v66 )
          break;
LABEL_24:
        *((_DWORD *)v10 + 8) = v15;
        v10[3] = v22;
        if ( CombineProto )
          v10[4] = CombineProto;
        v23 = P;
        if ( !P )
          goto LABEL_34;
        while ( (unsigned __int64)v21 > v23[4] )
        {
          v23 = (_QWORD *)v23[1];
LABEL_33:
          if ( !v23 )
            goto LABEL_34;
        }
        if ( (unsigned __int64)v21 < v23[4] )
        {
          v23 = (_QWORD *)*v23;
          goto LABEL_33;
        }
        if ( v23 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_41;
        }
LABEL_34:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
        v23 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
          {
            MiDecrementCombinedPte(0LL, CombineProto + 48);
            v10[4] = 0LL;
            goto LABEL_49;
          }
          goto LABEL_14;
        }
        v25 = 0;
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
        PoolWithTag[3] = 0LL;
        PoolWithTag[6] = 0LL;
        v26 = (char *)P;
        v27 = Object;
        v23[4] = v21;
        v23[5] = v27;
        if ( !v26 )
          goto LABEL_40;
        while ( 2 )
        {
          if ( v21 < v26 + 32 )
          {
            v28 = *(char **)v26;
            if ( !*(_QWORD *)v26 )
            {
              v25 = 0;
              goto LABEL_40;
            }
            goto LABEL_38;
          }
          v28 = (char *)*((_QWORD *)v26 + 1);
          if ( v28 )
          {
LABEL_38:
            v26 = v28;
            continue;
          }
          break;
        }
        v25 = 1;
LABEL_40:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v26, v25, v23);
LABEL_41:
        v9 = NumOfElements + 1;
        v10[2] = v23[6];
        ++v23[3];
        ++NumOfElements;
        v23[6] = v10;
        v10[1] = (__int64)(v14 << 25) >> 16;
LABEL_15:
        v10 += 5;
        if ( v10 > v68 )
          goto LABEL_55;
      }
      MiDecrementCombinedPte(0LL, CombineProto + 48);
      CombineProto = MiAllocateCombineProto(v67, *v10, v15, &v66, 0);
      if ( !CombineProto )
      {
        if ( !Object )
          goto LABEL_49;
        ObfDereferenceObject(Object);
        *v10 = 0LL;
        goto LABEL_14;
      }
LABEL_23:
      v22 = v66;
      goto LABEL_24;
    }
LABEL_56:
    v29 = 0LL;
    if ( v9 && (v29 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v9, 0x6D56694Du)) != 0LL )
    {
      v30 = P;
      v31 = 0LL;
      j = 0LL;
      if ( P )
      {
        do
        {
          j = v30;
          v30 = (_QWORD *)*v30;
        }
        while ( v30 );
      }
      while ( j )
      {
        for ( i = j[6]; i; i = *(_QWORD *)(i + 16) )
          *(_QWORD *)&v29[8 * v31++] = i;
        v34 = (_QWORD **)j[1];
        v35 = j;
        if ( v34 )
        {
          v36 = *v34;
          for ( j = (_QWORD *)j[1]; v36; v36 = (_QWORD *)*v36 )
            j = v36;
        }
        else
        {
          for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*j == v35 )
              break;
            v35 = j;
          }
        }
      }
      qsort(v29, NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByHash);
      v37 = 0LL;
      v38 = 0LL;
      if ( NumOfElements )
      {
        v39 = (_QWORD **)(v29 + 8);
        while ( 1 )
        {
          v40 = *(v39 - 1);
          v41 = v40[4];
          if ( v41 <= 0x100 )
          {
            if ( (v38 && !(unsigned int)MiCompareActiveCrcEntries(*(v39 - 1), *(v39 - 2))
               || v38 != NumOfElements - 1 && !(unsigned int)MiCompareActiveCrcEntries(v40, *v39))
              && v42 )
            {
              if ( v37 && !(unsigned int)MiCompareActiveCrcEntries(v37, v40) )
                goto LABEL_75;
              v54 = (_QWORD *)MiAllocateCombineProto(v8, *v40, v41, v40 + 3, 1);
              if ( !v54 )
                goto LABEL_75;
LABEL_112:
              if ( v54[3] )
              {
                v40[4] = v54;
              }
              else
              {
                MiPushCombineBlock(&v60, v54);
                v55 = MiProtectionToCacheAttribute(*((_DWORD *)v40 + 8));
                ++v71[v55];
              }
              v37 = v40;
              goto LABEL_75;
            }
            v54 = (_QWORD *)MiAllocateCombineProto(v8, *v40, v41, v40 + 3, 0);
            if ( v54 )
              goto LABEL_112;
            v40[1] = -1LL;
          }
LABEL_75:
          ++v38;
          ++v39;
          if ( v38 >= NumOfElements )
          {
            v5 = v62;
            break;
          }
        }
      }
      v43 = v63;
      MiPopulateCombineMdls(v63, v5, v71);
    }
    else
    {
      v43 = v63;
    }
    while ( P )
    {
      v44 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
      v45 = v44[3];
      v46 = v44[6];
      if ( v29 )
      {
        if ( v46 )
        {
          v47 = v29;
          do
          {
            *v47++ = v46;
            v46 = *(_QWORD *)(v46 + 16);
          }
          while ( v46 );
        }
        qsort(v29, v45, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByVa);
        v44[6] = 0LL;
        for ( k = 0LL; k < v45; ++k )
        {
          v49 = *(_QWORD *)&v29[8 * k];
          v50 = *(_QWORD *)(v49 + 8);
          if ( v50 == -1 || k && v50 == *(_QWORD *)(*(_QWORD *)&v29[8 * k - 8] + 8LL) )
          {
            MiDereferenceCombineCrc(v49);
            --v44[3];
          }
          else
          {
            *(_QWORD *)(v49 + 16) = v44[6];
            v44[6] = v49;
          }
        }
        if ( v44[3] )
          MiSharePages((__int64)v43, v44, (__int64)&v60, &v70, v5);
      }
      else
      {
        for ( ; v46; v46 = *(_QWORD *)(v46 + 16) )
          MiDereferenceCombineCrc(v46);
      }
      v51 = (void *)v44[5];
      if ( v51 )
        ObfDereferenceObject(v51);
      ExFreePoolWithTag(v44, 0);
    }
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    if ( (*((_DWORD *)v43 + 15) & 2) == 0 )
      MiFreeCombineMdls(v43);
    while ( 1 )
    {
      v52 = v60;
      result = &v60;
      if ( (__int64 *)v60 == &v60 )
        break;
      if ( *(__int64 **)(v60 + 8) != &v60 || (v53 = *(_QWORD *)v60, *(_QWORD *)(*(_QWORD *)v60 + 8LL) != v60) )
        __fastfail(3u);
      v60 = *(_QWORD *)v60;
      *(_QWORD *)(v53 + 8) = &v60;
      *(_QWORD *)(v52 + 32) = 0LL;
      MiFreeCombineBlock(v52);
    }
  }
  return result;
}
