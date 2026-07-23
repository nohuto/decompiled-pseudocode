/*
 * XREFs of MiProcessCrcList @ 0x140620320
 * Callers:
 *     MiCombineWorkingSetTail @ 0x140122790 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiCapturePfnVm @ 0x140083638 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiValidCombineProtection @ 0x14009B7AC (MiValidCombineProtection.c)
 *     MiAllocateCombineProto @ 0x14009B7E0 (MiAllocateCombineProto.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiFreeCombineBlock @ 0x14011FB14 (MiFreeCombineBlock.c)
 *     MiPushCombineBlock @ 0x14012C9BC (MiPushCombineBlock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiHashIsCommon @ 0x1402CC1A8 (MiHashIsCommon.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiPopulateCombineMdls @ 0x1406B9DF8 (MiPopulateCombineMdls.c)
 *     MiFreeCombineMdls @ 0x1406D314C (MiFreeCombineMdls.c)
 *     MiDereferenceCombineCrc @ 0x140860234 (MiDereferenceCombineCrc.c)
 */

__int64 **__fastcall MiProcessCrcList(__int64 a1, void *a2, size_t a3, unsigned int a4)
{
  __int64 **result; // rax
  void *v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r11
  _QWORD *CombineProto; // r14
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // r15
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rdx
  __int64 v21; // r12
  int v22; // r13d
  _QWORD *v23; // rbx
  size_t v24; // r15
  char *v25; // rax
  __int64 v26; // rdi
  char *v27; // rsi
  char *v28; // rcx
  size_t v29; // r14
  char *v30; // rdi
  __int64 v31; // rcx
  void *v32; // rcx
  __int64 *v33; // rcx
  int v34; // r12d
  __int64 v35; // r13
  char *v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // rbx
  unsigned __int64 v39; // rax
  _QWORD *PoolWithTag; // rax
  char *v41; // rdx
  bool v42; // r8
  PVOID v43; // rax
  char *v44; // rax
  __int64 v45; // rax
  int IsCommon; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned int v49; // [rsp+38h] [rbp-79h]
  PVOID P; // [rsp+48h] [rbp-69h] BYREF
  PVOID Object; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v53[2]; // [rsp+58h] [rbp-59h] BYREF
  int v54; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-45h]
  __int64 v56; // [rsp+70h] [rbp-41h]
  unsigned __int64 v57; // [rsp+78h] [rbp-39h]
  unsigned __int64 v58; // [rsp+80h] [rbp-31h]
  unsigned __int64 v59; // [rsp+88h] [rbp-29h]
  __int64 v60; // [rsp+90h] [rbp-21h]
  unsigned __int64 v61; // [rsp+98h] [rbp-19h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-11h]
  struct _KTHREAD *v63; // [rsp+A8h] [rbp-9h]
  __int64 v64; // [rsp+B0h] [rbp-1h] BYREF
  _QWORD v65[3]; // [rsp+B8h] [rbp+7h] BYREF

  result = 0LL;
  v55 = a4;
  v60 = a1;
  v6 = a2;
  memset(v65, 0, sizeof(v65));
  if ( !a3 )
    return result;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 52);
  v49 = v8;
  v56 = *(_QWORD *)a1;
  v62 = v7;
  P = 0LL;
  v64 = v56;
  qsort(a2, a3, 0x20uLL, MiCombinePageSortByHash);
  CurrentThread = KeGetCurrentThread();
  v53[1] = (__int64 *)v53;
  v63 = CurrentThread;
  v58 = 0LL;
  v53[0] = (__int64 *)v53;
  v10 = (unsigned __int64)v6;
  v57 = 0LL;
  v59 = (unsigned __int64)v6 + 32 * a3 - 32;
  if ( (unsigned __int64)v6 > v59 )
    goto LABEL_19;
  v11 = 0x8000000000000000uLL;
  do
  {
    if ( v7 && *(_DWORD *)(v7 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      break;
    CombineProto = 0LL;
    v13 = 48LL * *(_QWORD *)(v10 + 8) - 0x58000000000LL;
    v14 = v11 | *(_QWORD *)(v13 + 8);
    v15 = (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
    if ( !MiValidCombineProtection(v15) || v14 < v18 || v14 > v19 )
      goto LABEL_18;
    if ( (v8 & 0x10) != 0 )
      goto LABEL_38;
    if ( (v8 & 4) == 0 )
    {
      if ( (v10 == v17 || *(_QWORD *)v10 != *(_QWORD *)(v10 + 32)) && ((void *)v10 == v6 || *(_QWORD *)v10 != v16) )
      {
        CombineProto = (_QWORD *)MiAllocateCombineProto(v56, *(_QWORD *)v10, v15, 0);
        if ( !CombineProto )
          goto LABEL_17;
        v34 = 2;
        v35 = 0LL;
        goto LABEL_40;
      }
LABEL_38:
      v34 = 1;
      goto LABEL_39;
    }
    IsCommon = MiHashIsCommon(v60, *(_QWORD *)v10);
    v34 = IsCommon != 0;
    if ( !IsCommon )
    {
      LOBYTE(v8) = v49;
      goto LABEL_18;
    }
LABEL_39:
    v35 = *(unsigned __int8 *)(v13 + 34) >> 6;
    if ( (unsigned int)v35 >= 3 )
    {
      LOBYTE(v8) = v49;
      v6 = a2;
      *(_QWORD *)v10 = 0LL;
      goto LABEL_18;
    }
LABEL_40:
    Object = 0LL;
    v36 = MiCapturePfnVm(v56, v13, v49, &Object, &v61, &v54);
    if ( !v36 || v61 != v14 || v54 != v15 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      if ( CombineProto )
      {
        MiDecrementCombinedPte(0LL, (__int64)(CombineProto + 6));
        v6 = a2;
        LOBYTE(v8) = v49;
        *(_QWORD *)v10 = 0LL;
        goto LABEL_17;
      }
      goto LABEL_83;
    }
    if ( v34 != 1 || *(_QWORD *)v10 == v58 && v57 != v10 - 32 )
      goto LABEL_49;
    v37 = MiAllocateCombineProto(v56, *(_QWORD *)v10, v15, 1);
    CombineProto = (_QWORD *)v37;
    if ( !v37 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
LABEL_83:
      *(_QWORD *)v10 = 0LL;
LABEL_84:
      v6 = a2;
      LOBYTE(v8) = v49;
      goto LABEL_17;
    }
    if ( *(_QWORD *)(v37 + 24) )
    {
      v57 = v10;
      v34 = 2;
    }
LABEL_49:
    *(_DWORD *)(v10 + 24) = v15;
    if ( CombineProto )
    {
      if ( CombineProto[3] )
        *(_QWORD *)(v10 + 24) = CombineProto;
      else
        MiPushCombineBlock((__int64 *)v53, CombineProto);
    }
    v38 = P;
    if ( !P )
      goto LABEL_56;
    while ( 1 )
    {
      v39 = v38[4];
      if ( (unsigned __int64)v36 <= v39 )
        break;
      v38 = (_QWORD *)v38[1];
LABEL_55:
      if ( !v38 )
        goto LABEL_56;
    }
    if ( (unsigned __int64)v36 < v39 )
    {
      v38 = (_QWORD *)*v38;
      goto LABEL_55;
    }
    if ( v38 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_68;
    }
LABEL_56:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
    v38 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      if ( CombineProto )
      {
        if ( CombineProto[3] )
        {
          MiDecrementCombinedPte(0LL, (__int64)(CombineProto + 6));
        }
        else
        {
          v47 = *CombineProto;
          if ( *(_QWORD **)(*CombineProto + 8LL) != CombineProto
            || (v48 = (_QWORD *)CombineProto[1], (_QWORD *)*v48 != CombineProto) )
          {
LABEL_105:
            __fastfail(3u);
          }
          *v48 = v47;
          *(_QWORD *)(v47 + 8) = v48;
          CombineProto[4] = 0LL;
          MiFreeCombineBlock((__int64)CombineProto);
        }
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
      v57 = 0LL;
      goto LABEL_84;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    v41 = (char *)P;
    v42 = 0;
    v43 = Object;
    v38[4] = v36;
    v38[5] = v43;
    if ( !v41 )
      goto LABEL_73;
    while ( 2 )
    {
      if ( v36 >= v41 + 32 )
      {
        v44 = (char *)*((_QWORD *)v41 + 1);
        if ( !v44 )
        {
          v42 = 1;
          goto LABEL_73;
        }
        goto LABEL_60;
      }
      v44 = *(char **)v41;
      if ( *(_QWORD *)v41 )
      {
LABEL_60:
        v41 = v44;
        continue;
      }
      break;
    }
    v42 = 0;
LABEL_73:
    RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v41, v42, v38);
LABEL_68:
    *(_QWORD *)(v10 + 16) = v38[6];
    ++v38[3];
    v38[6] = v10;
    *(_QWORD *)(v10 + 8) = (__int64)(v14 << 25) >> 16;
    if ( v34 == 1 && ((void *)v10 == a2 || *(_QWORD *)v10 != v58) )
      ++v65[v35];
    LOBYTE(v8) = v49;
    v6 = a2;
LABEL_17:
    v11 = 0x8000000000000000uLL;
LABEL_18:
    v20 = *(_QWORD *)v10;
    v10 += 32LL;
    v7 = v62;
    CurrentThread = v63;
    v58 = v20;
  }
  while ( v10 <= v59 );
LABEL_19:
  v21 = v60;
  v22 = v55;
  MiPopulateCombineMdls(v60, v55, v65);
  while ( P )
  {
    v23 = P;
    RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
    v24 = v23[3];
    v25 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v24, 0x6D56694Du);
    v26 = v23[6];
    v27 = v25;
    if ( v25 )
    {
      if ( v26 )
      {
        v28 = v25;
        do
        {
          *(_QWORD *)v28 = *(_QWORD *)(v26 + 8);
          *((_QWORD *)v28 + 1) = v26;
          v28 += 16;
          v26 = *(_QWORD *)(v26 + 16);
        }
        while ( v26 );
      }
      qsort(v25, v24, 0x10uLL, MiCombinePageSortByVa);
      v29 = 0LL;
      v23[6] = 0LL;
      if ( v24 )
      {
        v30 = v27 - 16;
        do
        {
          v31 = *((_QWORD *)v30 + 3);
          if ( v29 && *((_QWORD *)v30 + 2) == *(_QWORD *)v30 )
          {
            MiDereferenceCombineCrc(v31);
            --v23[3];
          }
          else
          {
            *(_QWORD *)(v31 + 16) = v23[6];
            v23[6] = v31;
          }
          ++v29;
          v30 += 16;
        }
        while ( v29 < v24 );
      }
      ExFreePoolWithTag(v27, 0);
      MiSharePages(v21, v23, v53, &v64, v22);
    }
    else
    {
      for ( ; v26; v26 = *(_QWORD *)(v26 + 16) )
        MiDereferenceCombineCrc(v26);
    }
    v32 = (void *)v23[5];
    if ( v32 )
      ObfDereferenceObject(v32);
    ExFreePoolWithTag(v23, 0);
  }
  if ( (*(_DWORD *)(v21 + 52) & 2) == 0 )
    MiFreeCombineMdls(v21);
  while ( 1 )
  {
    v33 = v53[0];
    result = v53;
    if ( (__int64 **)v53[0] == v53 )
      return result;
    if ( *((__int64 ***)v53[0] + 1) != v53 )
      goto LABEL_105;
    v45 = *v53[0];
    if ( *(__int64 **)(*v53[0] + 8) != v53[0] )
      goto LABEL_105;
    v53[0] = *(__int64 **)v53[0];
    *(_QWORD *)(v45 + 8) = v53;
    v33[4] = 0LL;
    MiFreeCombineBlock((__int64)v33);
  }
}
