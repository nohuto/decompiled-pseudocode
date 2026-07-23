/*
 * XREFs of sub_1408E1E28 @ 0x1408E1E28
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A6380 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 */

__int64 __fastcall sub_1408E1E28(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // r13
  unsigned __int64 v10; // r9
  unsigned int i; // r11d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r11
  void **v16; // rax
  unsigned int j; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // r9
  HANDLE *v22; // rax
  char *v23; // r15
  __int64 v24; // r12
  NTSTATUS v25; // esi
  char *PoolWithTag; // rax
  PVOID v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  _OWORD *v30; // r8
  int v31; // r13d
  PVOID v32; // rax
  int v33; // ebx
  HANDLE v34; // rcx
  char *v35; // rax
  char *v36; // rdx
  char *v37; // rax
  __int64 v38; // r8
  unsigned int v39; // r10d
  HANDLE v40; // xmm0_8
  __int64 v41; // r11
  int v42; // r15d
  unsigned int v43; // ecx
  int v44; // r9d
  unsigned int v45; // eax
  char *v46; // r8
  unsigned int v47; // eax
  unsigned int v48; // esi
  char *v49; // rcx
  char *v50; // rdx
  __int64 v51; // rax
  __int64 Source2; // [rsp+50h] [rbp-30h] BYREF
  _OWORD *v54; // [rsp+58h] [rbp-28h]
  void *v55; // [rsp+60h] [rbp-20h]
  __int128 v56; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h]
  __int64 v59; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v59) = a3;
  Handle = a2;
  v4 = 0;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( !v8 || *(_DWORD *)a1 <= 3u )
  {
    v7 = -1073741811;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v12 = -1LL;
    if ( v10 + 4 >= v10 )
      v12 = v10 + 4;
    v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
      goto LABEL_21;
    v13 = v12 + *(unsigned int *)v10;
    v10 = -1LL;
    if ( v13 >= v12 )
      v10 = v13;
    v7 = v13 < v12 ? 0xC0000095 : 0;
    if ( v13 < v12 )
      goto LABEL_21;
  }
  v14 = *(_DWORD *)v10;
  v15 = -1LL;
  if ( v10 + 4 >= v10 )
    v15 = v10 + 4;
  v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
  if ( v10 + 4 < v10 )
  {
LABEL_21:
    v14 = v59;
    v16 = (void **)Handle;
    goto LABEL_22;
  }
  v16 = 0LL;
  if ( v14 )
    v16 = (void **)v15;
LABEL_22:
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v55 = *v16;
LABEL_25:
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    if ( v8 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = -1LL;
        if ( v8 + 4 >= v8 )
          v18 = v8 + 4;
        v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
        if ( v8 + 4 < v8 )
          goto LABEL_43;
        v19 = v18 + *(unsigned int *)v8;
        v8 = -1LL;
        if ( v19 >= v18 )
          v8 = v19;
        v7 = v19 < v18 ? 0xC0000095 : 0;
        if ( v19 < v18 )
          goto LABEL_43;
      }
      v20 = *(_DWORD *)v8;
      v21 = -1LL;
      if ( v8 + 4 >= v8 )
        v21 = v8 + 4;
      v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
      {
LABEL_43:
        v20 = v59;
        v22 = (HANDLE *)Handle;
        goto LABEL_44;
      }
      v22 = 0LL;
      if ( v20 )
        v22 = (HANDLE *)v21;
LABEL_44:
      if ( (v7 & 0x80000000) == 0 )
      {
        if ( v20 != 8 )
          return (unsigned int)-1073741762;
        Handle = *v22;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    v23 = 0LL;
    v24 = 0LL;
    if ( !Handle )
      return (unsigned int)-1073741811;
    v25 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    if ( v25 < 0 )
      goto LABEL_75;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_53;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_WORD *)PoolWithTag + 14) = 0;
    PoolWithTag[4] = 25;
    *(_DWORD *)PoolWithTag = 0;
    strcpy(PoolWithTag + 5, "$Kernel.Purge.AppxFICache");
    v27 = ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
    v24 = (__int64)v27;
    if ( !v27 )
    {
LABEL_53:
      v25 = -1073741801;
LABEL_75:
      if ( Object )
        ObfDereferenceObject(Object);
      if ( v23 )
        ExFreePoolWithTag(v23, 0x20534C53u);
      if ( v24 )
        ExFreePoolWithTag((PVOID)v24, 0x20534C53u);
      v7 = v25;
      if ( v25 < 0 )
        return v7;
      *(_DWORD *)(a4 + 4) = 20;
      v35 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      v36 = v35;
      if ( !v35 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v35;
      *(_DWORD *)a4 = 0;
      Handle = v55;
      v37 = v35 + 4;
      v38 = -1LL;
      v39 = 0;
      if ( v36 + 4 >= v36 )
        v38 = (__int64)(v36 + 4);
      v7 = v36 + 4 < v36 ? 0xC0000095 : 0;
      if ( v37 >= v36 )
      {
        if ( v36 + 12 > &v36[*(unsigned int *)(a4 + 4)] )
          return (unsigned int)-1073741789;
        v40 = Handle;
        *(_DWORD *)v36 = 8;
        *(_QWORD *)v38 = v40;
        v39 = ++*(_DWORD *)a4;
      }
      if ( v36 + 4 < v36 )
        return v7;
      v41 = *(_QWORD *)(a4 + 8);
      v42 = v59;
      if ( !v41 )
      {
        v43 = *(_DWORD *)(a4 + 4);
        v44 = -1;
        v45 = v43 + 8;
        if ( v43 + 8 >= v43 )
          v44 = v43 + 8;
        v7 = v45 < v43 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v44;
        if ( v45 >= v43 )
        {
          v7 = 0;
          *(_DWORD *)a4 = v39 + 1;
        }
        return v7;
      }
      v46 = *(char **)(a4 + 8);
      if ( v39 )
      {
        do
        {
          v47 = -1;
          if ( *(_DWORD *)v46 < 0xFFFFFFFC )
            v47 = *(_DWORD *)v46 + 4;
          v7 = *(_DWORD *)v46 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( (unsigned int)(*(_DWORD *)v46 + 4) < 4 )
            return v7;
          v48 = v47;
          v49 = v46;
          v50 = &v46[v47];
          v51 = -1LL;
          if ( v50 >= v46 )
            v51 = (__int64)&v46[v48];
          v46 = (char *)v51;
          v7 = v50 < v49 ? 0xC0000095 : 0;
          if ( v50 < v49 )
            return v7;
        }
        while ( ++v4 < v39 );
      }
      if ( v46 + 4 >= v46 )
        v9 = (__int64)(v46 + 4);
      v7 = v46 + 4 < v46 ? 0xC0000095 : 0;
      if ( v46 + 4 < v46 )
        return v7;
      if ( (unsigned __int64)(v46 + 8) <= v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)v46 = 4;
        *(_DWORD *)v9 = v42;
        ++*(_DWORD *)a4;
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    memset(v27, 0, 0x3AuLL);
    v28 = FsRtlQueryKernelEaFile((PFILE_OBJECT)Object, v24, 58, 1, (__int64)v23, 31, 0LL, 1, &v59);
    v25 = v28;
    if ( v28 == -1073741275 )
    {
LABEL_56:
      LODWORD(v59) = 0;
      v25 = 0;
      goto LABEL_75;
    }
    if ( v28 < 0 )
      goto LABEL_75;
    v29 = *(unsigned __int16 *)(v24 + 6);
    v30 = (_OWORD *)(v24 + *(unsigned __int8 *)(v24 + 5) + 9LL);
    v54 = v30;
    if ( (unsigned __int64)v30 + v29 > v24 + (unsigned __int64)(unsigned int)v59 )
      goto LABEL_59;
    if ( !(_WORD)v29 )
      goto LABEL_56;
    if ( (_DWORD)v29 != 24 || (Source2 = 0LL, RtlCompareMemory(v30 + 1, &Source2, 8uLL) != 8) )
    {
LABEL_59:
      v25 = -1073741762;
      goto LABEL_75;
    }
    v31 = 2;
    v32 = ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    Handle = v32;
    if ( !v32 )
    {
LABEL_74:
      LODWORD(v59) = v31;
      v9 = -1LL;
      goto LABEL_75;
    }
    v33 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590068, 0LL, 0, v32, 0x248u, (ULONG *)&v59);
    if ( v33 >= 0 )
    {
      v34 = Handle;
      if ( (unsigned int)v59 < 0x40 )
        goto LABEL_66;
      *(_QWORD *)&v56 = *(_QWORD *)Handle;
      v33 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590059, 0LL, 0, Handle, 0x248u, (ULONG *)&v59);
      if ( v33 >= 0 )
      {
        v34 = Handle;
        if ( (unsigned int)v59 >= 0x40 )
        {
          *((_QWORD *)&v56 + 1) = *((_QWORD *)Handle + 3);
          goto LABEL_71;
        }
LABEL_66:
        v33 = -1073741762;
LABEL_71:
        ExFreePoolWithTag(v34, 0x20534C53u);
        if ( v33 >= 0 && v56 == *v54 )
          v31 = 3;
        goto LABEL_74;
      }
    }
    v34 = Handle;
    goto LABEL_71;
  }
  return v7;
}
