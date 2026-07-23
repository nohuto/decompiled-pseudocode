/*
 * XREFs of sub_1408E2B24 @ 0x1408E2B24
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 */

__int64 __fastcall sub_1408E2B24(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v4; // edi
  signed int v7; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // r12
  unsigned __int64 v10; // r9
  unsigned int i; // r11d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r11
  void **v16; // rax
  unsigned __int64 v17; // r9
  unsigned int j; // r11d
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // r11
  HANDLE *v23; // rax
  unsigned int k; // r9d
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // r9
  _DWORD *v29; // rax
  NTSTATUS v30; // eax
  struct _FILE_OBJECT *v31; // r15
  _QWORD *PoolWithTag; // r14
  __int64 v33; // rax
  char *v34; // rax
  char *v35; // rdx
  char *v36; // rax
  __int64 v37; // r8
  unsigned int v38; // r10d
  HANDLE v39; // xmm0_8
  __int64 v40; // r11
  unsigned int v41; // ecx
  int v42; // r9d
  unsigned int v43; // eax
  char *v44; // r8
  unsigned int v45; // eax
  unsigned int v46; // r14d
  char *v47; // rcx
  char *v48; // rdx
  __int64 v49; // rax
  __int128 v51; // [rsp+40h] [rbp-10h]
  void *v52; // [rsp+90h] [rbp+40h]
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v54) = a3;
  Handle = a2;
  v4 = 0;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
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
      v14 = v54;
      v16 = (void **)Handle;
      goto LABEL_22;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (void **)v15;
LABEL_22:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v52 = *v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( v8 && *(_DWORD *)a1 > 4u )
    {
      v17 = v8;
      for ( j = 0; j < 4; ++j )
      {
        v19 = -1LL;
        if ( v17 + 4 >= v17 )
          v19 = v17 + 4;
        v7 = v17 + 4 < v17 ? 0xC0000095 : 0;
        if ( v17 + 4 < v17 )
          goto LABEL_43;
        v20 = v19 + *(unsigned int *)v17;
        v17 = -1LL;
        if ( v20 >= v19 )
          v17 = v20;
        v7 = v20 < v19 ? 0xC0000095 : 0;
        if ( v20 < v19 )
          goto LABEL_43;
      }
      v21 = *(_DWORD *)v17;
      v22 = -1LL;
      if ( v17 + 4 >= v17 )
        v22 = v17 + 4;
      v7 = v17 + 4 < v17 ? 0xC0000095 : 0;
      if ( v17 + 4 < v17 )
      {
LABEL_43:
        v21 = v54;
        v23 = (HANDLE *)Handle;
        goto LABEL_44;
      }
      v23 = 0LL;
      if ( v21 )
        v23 = (HANDLE *)v22;
LABEL_44:
      if ( v7 >= 0 )
      {
        if ( v21 != 8 )
          return (unsigned int)-1073741762;
        Handle = *v23;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 >= 0 )
    {
      if ( !v8 || *(_DWORD *)a1 <= 5u )
      {
        v7 = -1073741811;
        goto LABEL_69;
      }
      for ( k = 0; k < 5; ++k )
      {
        v25 = -1LL;
        if ( v8 + 4 >= v8 )
          v25 = v8 + 4;
        v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
        if ( v8 + 4 < v8 )
          goto LABEL_65;
        v26 = v25 + *(unsigned int *)v8;
        v8 = -1LL;
        if ( v26 >= v25 )
          v8 = v26;
        v7 = v26 < v25 ? 0xC0000095 : 0;
        if ( v26 < v25 )
          goto LABEL_65;
      }
      v27 = *(_DWORD *)v8;
      v28 = -1LL;
      if ( v8 + 4 >= v8 )
        v28 = v8 + 4;
      v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
      {
LABEL_65:
        v27 = v54;
        v29 = Handle;
        goto LABEL_66;
      }
      v29 = 0LL;
      if ( v27 )
        v29 = (_DWORD *)v28;
LABEL_66:
      if ( v7 >= 0 )
      {
        if ( v27 != 4 )
          return (unsigned int)-1073741789;
        LODWORD(v54) = *v29;
LABEL_69:
        if ( v7 < 0 )
          return (unsigned int)v7;
        if ( (_DWORD)v54 != 16 )
          return (unsigned int)-1073741762;
        if ( !Handle )
          return (unsigned int)-1073741811;
        v30 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Handle, 0LL);
        v31 = (struct _FILE_OBJECT *)Handle;
        v7 = v30;
        if ( v30 < 0 )
          goto LABEL_89;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
        if ( !PoolWithTag )
        {
          v7 = -1073741801;
LABEL_89:
          if ( v31 )
            ObfDereferenceObject(v31);
          if ( v7 < 0 )
            return (unsigned int)v7;
          *(_DWORD *)(a4 + 4) = 32;
          v34 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20534C53u);
          v35 = v34;
          if ( !v34 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = v34;
          *(_DWORD *)a4 = 0;
          Handle = v52;
          v36 = v34 + 4;
          v37 = -1LL;
          v38 = 0;
          if ( v35 + 4 >= v35 )
            v37 = (__int64)(v35 + 4);
          v7 = v35 + 4 < v35 ? 0xC0000095 : 0;
          if ( v36 >= v35 )
          {
            if ( v35 + 12 > &v35[*(unsigned int *)(a4 + 4)] )
              return (unsigned int)-1073741789;
            v39 = Handle;
            *(_DWORD *)v35 = 8;
            *(_QWORD *)v37 = v39;
            v38 = ++*(_DWORD *)a4;
          }
          if ( v35 + 4 < v35 )
            return (unsigned int)v7;
          v40 = *(_QWORD *)(a4 + 8);
          if ( !v40 )
          {
            v41 = *(_DWORD *)(a4 + 4);
            v42 = -1;
            v43 = v41 + 20;
            if ( v41 + 20 >= v41 )
              v42 = v41 + 20;
            v7 = v43 < v41 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v42;
            if ( v43 >= v41 )
            {
              v7 = 0;
              *(_DWORD *)a4 = v38 + 1;
            }
            return (unsigned int)v7;
          }
          v44 = *(char **)(a4 + 8);
          if ( v38 )
          {
            while ( 1 )
            {
              v45 = -1;
              if ( *(_DWORD *)v44 < 0xFFFFFFFC )
                v45 = *(_DWORD *)v44 + 4;
              v7 = *(_DWORD *)v44 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v44 + 4) < 4 )
                break;
              v46 = v45;
              v47 = v44;
              v48 = &v44[v45];
              v49 = -1LL;
              if ( v48 >= v44 )
                v49 = (__int64)&v44[v46];
              v44 = (char *)v49;
              v7 = v48 < v47 ? 0xC0000095 : 0;
              if ( v48 < v47 )
                break;
              if ( ++v4 >= v38 )
                goto LABEL_113;
            }
            return (unsigned int)v7;
          }
LABEL_113:
          if ( v44 + 4 >= v44 )
            v9 = (__int64)(v44 + 4);
          v7 = v44 + 4 < v44 ? 0xC0000095 : 0;
          if ( v44 + 4 < v44 )
            return (unsigned int)v7;
          if ( (unsigned __int64)(v44 + 20) <= v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v44 = 16;
            *(_OWORD *)v9 = v51;
            ++*(_DWORD *)a4;
            return (unsigned int)v7;
          }
          return (unsigned int)-1073741789;
        }
        v7 = FsRtlKernelFsControlFile(v31, 590068, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v54);
        if ( v7 < 0 )
        {
LABEL_88:
          ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
          goto LABEL_89;
        }
        if ( (unsigned int)v54 < 0x40 )
        {
LABEL_79:
          v7 = -1073741762;
          goto LABEL_88;
        }
        *(_QWORD *)&v51 = *PoolWithTag;
        if ( v31->WriteAccess )
        {
          v7 = FsRtlKernelFsControlFile(v31, 590063, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v54);
          if ( v7 < 0 )
            goto LABEL_88;
          if ( (unsigned int)v54 < 8 )
            goto LABEL_79;
          v33 = *PoolWithTag;
        }
        else
        {
          v7 = FsRtlKernelFsControlFile(v31, 590059, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v54);
          if ( v7 < 0 )
            goto LABEL_88;
          if ( (unsigned int)v54 < 0x40 )
            goto LABEL_79;
          v33 = PoolWithTag[3];
        }
        *((_QWORD *)&v51 + 1) = v33;
        goto LABEL_88;
      }
    }
  }
  return (unsigned int)v7;
}
