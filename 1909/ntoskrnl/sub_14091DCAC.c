/*
 * XREFs of sub_14091DCAC @ 0x14091DCAC
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x1401C3CB0 (ZwSetCachedSigningLevel.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 */

__int64 __fastcall sub_14091DCAC(__int64 a1, int a2, int a3, __int64 a4)
{
  signed int v5; // ebx
  unsigned int *v6; // rdx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r11
  unsigned int *v10; // r10
  unsigned int v11; // r10d
  HANDLE *v12; // r9
  HANDLE *v13; // rax
  unsigned int *v14; // rax
  unsigned int j; // r9d
  __int64 v16; // r11
  unsigned int *v17; // r10
  unsigned int v18; // r10d
  unsigned int *v19; // r9
  unsigned int *v20; // rax
  unsigned int *v21; // rax
  unsigned int k; // r9d
  __int64 v23; // r11
  unsigned int *v24; // r10
  unsigned int v25; // r10d
  unsigned int *v26; // r9
  unsigned int *v27; // rax
  unsigned int m; // r8d
  __int64 v29; // rax
  unsigned int *v30; // r9
  unsigned int v31; // r8d
  _OWORD *v32; // r14
  PVOID v33; // r15
  void *v34; // r12
  NTSTATUS v35; // eax
  struct _FILE_OBJECT *v36; // r13
  struct _IRP *PoolWithTag; // r12
  __int64 v38; // r8
  unsigned int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  struct _IRP *v42; // r14
  char *v43; // rax
  char *v44; // rbx
  unsigned int v45; // ecx
  _DWORD *v46; // rdx
  unsigned int v47; // eax
  _DWORD *v48; // rax
  HANDLE TargetFile; // [rsp+48h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-30h]
  PVOID Object[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v53; // [rsp+70h] [rbp-10h]
  unsigned int v54; // [rsp+C0h] [rbp+40h]
  HANDLE v55; // [rsp+C8h] [rbp+48h]
  __int64 v56; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v56) = a3;
  LODWORD(v55) = a2;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    v7 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v9 = *v7;
      v10 = v7 + 1;
      if ( v7 + 1 < v7 )
        goto LABEL_17;
      v7 = (unsigned int *)((char *)v10 + v9);
      if ( (unsigned int *)((char *)v10 + v9) < v10 )
        goto LABEL_17;
    }
    v11 = *v7;
    v12 = (HANDLE *)(v7 + 1);
    if ( v7 + 1 < v7 )
    {
LABEL_17:
      v5 = -1073741675;
    }
    else
    {
      v13 = 0LL;
      if ( v11 )
        v13 = v12;
      v5 = 0;
      if ( v11 != 8 )
        return (unsigned int)-1073741762;
      v55 = *v13;
      Handle = *v13;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( v6 && *(_DWORD *)a1 > 4u )
  {
    v14 = v6;
    for ( j = 0; j < 4; ++j )
    {
      v16 = *v14;
      v17 = v14 + 1;
      if ( v14 + 1 < v14 )
        goto LABEL_32;
      v14 = (unsigned int *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        goto LABEL_32;
    }
    v18 = *v14;
    v19 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
LABEL_32:
      v5 = -1073741675;
    }
    else
    {
      v20 = 0LL;
      if ( v18 )
        v20 = v19;
      v5 = 0;
      if ( v18 != 4 )
        return (unsigned int)-1073741789;
      LODWORD(v55) = *v20;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( v6 && *(_DWORD *)a1 > 5u )
  {
    v21 = v6;
    for ( k = 0; k < 5; ++k )
    {
      v23 = *v21;
      v24 = v21 + 1;
      if ( v21 + 1 < v21 )
        goto LABEL_46;
      v21 = (unsigned int *)((char *)v24 + v23);
      if ( (unsigned int *)((char *)v24 + v23) < v24 )
        goto LABEL_46;
    }
    v25 = *v21;
    v26 = v21 + 1;
    if ( v21 + 1 < v21 )
    {
LABEL_46:
      v5 = -1073741675;
    }
    else
    {
      v27 = 0LL;
      if ( v25 )
        v27 = v26;
      v5 = 0;
      if ( v25 != 4 )
        return (unsigned int)-1073741789;
      v54 = *v27;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !v6 || *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v29 = *v6;
    v30 = v6 + 1;
    if ( v6 + 1 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      return (unsigned int)-1073741675;
  }
  v31 = *v6;
  if ( v6 + 1 < v6 )
    return (unsigned int)-1073741675;
  v32 = 0LL;
  if ( v31 )
    v32 = v6 + 1;
  if ( v31 != 16 )
    return (unsigned int)-1073741811;
  v33 = 0LL;
  v34 = 0LL;
  v53 = 0uLL;
  TargetFile = 0LL;
  if ( !Handle || !v32 )
    return (unsigned int)-1073741811;
  v35 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, Object, 0LL);
  v36 = (struct _FILE_OBJECT *)Object[0];
  v5 = v35;
  if ( v35 < 0 )
    goto LABEL_74;
  Object[0] = 0LL;
  Object[1] = 0LL;
  PoolWithTag = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
  if ( !PoolWithTag )
  {
    v5 = -1073741801;
    v34 = 0LL;
    goto LABEL_74;
  }
  v5 = FsRtlKernelFsControlFile(v36, 0x900F4u, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v56);
  if ( v5 >= 0 )
  {
    if ( (unsigned int)v56 < 0x40 )
    {
LABEL_66:
      v5 = -1073741762;
      goto LABEL_70;
    }
    Object[0] = *(PVOID *)&PoolWithTag->Type;
    v5 = FsRtlKernelFsControlFile(v36, 0x900EBu, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v56);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)v56 < 0x40 )
        goto LABEL_66;
      Object[1] = PoolWithTag->AssociatedIrp.MasterIrp;
      v53 = *(_OWORD *)Object;
      v33 = Object[0];
    }
  }
LABEL_70:
  ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
  if ( v5 < 0 )
  {
LABEL_73:
    v34 = 0LL;
    goto LABEL_74;
  }
  if ( __PAIR128__(*((unsigned __int64 *)&v53 + 1), (unsigned __int64)v33) != *v32 )
  {
    v5 = -1073741762;
    goto LABEL_73;
  }
  if ( !(_DWORD)v55 )
  {
    if ( ObOpenObjectByPointer(v36, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
      ZwSetCachedSigningLevel(2u, v54 - 2 > 1 ? 0 : 6, &TargetFile, 1u, TargetFile);
    Object[0] = 0LL;
    Object[1] = 0LL;
    v42 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !v42 )
      goto LABEL_90;
    v5 = FsRtlKernelFsControlFile(v36, 0x900F4u, 0LL, 0, v42, 0x248u, (ULONG *)&v56);
    if ( v5 < 0 )
      goto LABEL_97;
    if ( (unsigned int)v56 < 0x40 )
      goto LABEL_93;
    Object[0] = *(PVOID *)&v42->Type;
    v5 = FsRtlKernelFsControlFile(v36, 0x900EBu, 0LL, 0, v42, 0x248u, (ULONG *)&v56);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)v56 < 0x40 )
      {
LABEL_93:
        v5 = -1073741762;
        goto LABEL_97;
      }
      Object[1] = v42->AssociatedIrp.MasterIrp;
      v53 = *(_OWORD *)Object;
    }
LABEL_97:
    ExFreePoolWithTag(v42, 0x20534C53u);
    if ( v5 < 0 )
      goto LABEL_73;
    goto LABEL_100;
  }
  *(_QWORD *)&v53 = -1LL;
  *((_QWORD *)&v53 + 1) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_100:
  v43 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
  v44 = v43;
  if ( !v43 )
  {
LABEL_90:
    v5 = -1073741801;
    goto LABEL_73;
  }
  memset(v43, 0, 0x3AuLL);
  *((_WORD *)v44 + 3) = 24;
  v44[5] = 25;
  qmemcpy(v44 + 8, "$Kernel.Purge.AppxFICache", 25);
  *(_OWORD *)(v44 + 34) = v53;
  *(_QWORD *)(v44 + 50) = 0LL;
  v34 = v44;
  v5 = FsRtlSetKernelEaFile(v36, v44, 0x3Au);
LABEL_74:
  if ( TargetFile )
    ZwClose(TargetFile);
  if ( v36 )
    ObfDereferenceObject(v36);
  if ( v34 )
    ExFreePoolWithTag(v34, 0x20534C53u);
  if ( v5 >= 0 )
  {
    v38 = *(_QWORD *)(a4 + 8);
    if ( v38 )
    {
      v45 = 0;
      v46 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v47 = *v46 + 4;
          if ( *v46 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v46 + v47) < v46 )
            return (unsigned int)-1073741675;
          ++v45;
          v46 = (_DWORD *)((char *)v46 + v47);
          if ( v45 >= *(_DWORD *)a4 )
            goto LABEL_106;
        }
        v5 = -1073741675;
      }
      else
      {
LABEL_106:
        if ( v46 + 1 < v46 )
          return (unsigned int)-1073741675;
        v5 = 0;
        if ( (unsigned __int64)(v46 + 2) > v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v46 = 4;
        v46[1] = 0;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v39 = *(_DWORD *)(a4 + 4);
      v40 = -1;
      v41 = v39 + 8;
      if ( v39 + 8 >= v39 )
        v40 = v39 + 8;
      v5 = v41 < v39 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v40;
      if ( v41 >= v39 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_110;
      }
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
LABEL_110:
    if ( !*(_DWORD *)(a4 + 4) )
      return (unsigned int)-1073741762;
    v48 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
    if ( !v48 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v48;
    *(_DWORD *)a4 = 0;
    if ( v48 + 1 >= v48 )
    {
      v5 = 0;
      if ( v48 + 2 <= (_DWORD *)((char *)v48 + *(unsigned int *)(a4 + 4)) )
      {
        *v48 = 4;
        v48[1] = 0;
        ++*(_DWORD *)a4;
        return (unsigned int)v5;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v5;
}
