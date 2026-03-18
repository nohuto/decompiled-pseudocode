/*
 * XREFs of sub_14091E2F4 @ 0x14091E2F4
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 */

__int64 __fastcall sub_14091E2F4(__int64 a1, void *a2, int a3, __int64 a4)
{
  signed int v5; // ebx
  unsigned int *v6; // rdx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r11
  unsigned int *v10; // r10
  unsigned int v11; // r10d
  void **v12; // r9
  void **v13; // rax
  unsigned int *v14; // rax
  unsigned int j; // r9d
  __int64 v16; // r11
  unsigned int *v17; // r10
  unsigned int v18; // r10d
  HANDLE *v19; // r9
  HANDLE *v20; // rax
  unsigned int k; // r8d
  __int64 v22; // rax
  unsigned int *v23; // r9
  unsigned int v24; // r9d
  _DWORD *v25; // rax
  NTSTATUS v26; // eax
  struct _FILE_OBJECT *v27; // r14
  struct _IRP *PoolWithTag; // rsi
  struct _IRP *MasterIrp; // rax
  char *v30; // rax
  HANDLE v31; // xmm0_8
  unsigned int v32; // r8d
  __int64 v33; // r9
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned int v39; // eax
  void *v41; // [rsp+40h] [rbp-30h]
  __int128 v42; // [rsp+50h] [rbp-20h]
  __int128 v43; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+38h]
  __int64 v46; // [rsp+B0h] [rbp+40h] BYREF

  LODWORD(v46) = a3;
  Handle = a2;
  v43 = 0uLL;
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
    v12 = (void **)(v7 + 1);
    if ( v7 + 1 < v7 )
    {
LABEL_17:
      v5 = -1073741675;
      goto LABEL_18;
    }
    v13 = 0LL;
    if ( v11 )
      v13 = v12;
    v5 = 0;
    if ( v11 == 8 )
    {
      v41 = *v13;
      goto LABEL_18;
    }
    return (unsigned int)-1073741789;
  }
  v5 = -1073741811;
LABEL_18:
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( v6 && *(_DWORD *)a1 > 4u )
  {
    v14 = *(unsigned int **)(a1 + 8);
    for ( j = 0; j < 4; ++j )
    {
      v16 = *v14;
      v17 = v14 + 1;
      if ( v14 + 1 < v14 )
        goto LABEL_31;
      v14 = (unsigned int *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        goto LABEL_31;
    }
    v18 = *v14;
    v19 = (HANDLE *)(v14 + 1);
    if ( v14 + 1 < v14 )
    {
LABEL_31:
      v5 = -1073741675;
      goto LABEL_32;
    }
    v20 = 0LL;
    if ( v18 )
      v20 = v19;
    v5 = 0;
    if ( v18 == 8 )
    {
      Handle = *v20;
      goto LABEL_32;
    }
    return (unsigned int)-1073741762;
  }
  v5 = -1073741811;
LABEL_32:
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( v6 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v22 = *v6;
      v23 = v6 + 1;
      if ( v6 + 1 < v6 )
        goto LABEL_45;
      v6 = (unsigned int *)((char *)v23 + v22);
      if ( (unsigned int *)((char *)v23 + v22) < v23 )
        goto LABEL_45;
    }
    v24 = *v6;
    if ( v6 + 1 < v6 )
    {
LABEL_45:
      v5 = -1073741675;
      goto LABEL_46;
    }
    v25 = 0LL;
    if ( v24 )
      v25 = v6 + 1;
    v5 = 0;
    if ( v24 == 4 )
    {
      LODWORD(v46) = *v25;
      goto LABEL_46;
    }
    return (unsigned int)-1073741789;
  }
  v5 = -1073741811;
LABEL_46:
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( (_DWORD)v46 != 16 )
    return (unsigned int)-1073741762;
  if ( !Handle )
    return (unsigned int)-1073741811;
  v26 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v27 = (struct _FILE_OBJECT *)Object;
  v5 = v26;
  if ( v26 >= 0 )
  {
    PoolWithTag = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !PoolWithTag )
    {
      v5 = -1073741801;
      goto LABEL_66;
    }
    v5 = FsRtlKernelFsControlFile(v27, 0x900F4u, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v46);
    if ( v5 < 0 )
      goto LABEL_65;
    if ( (unsigned int)v46 < 0x40 )
      goto LABEL_56;
    *(_QWORD *)&v42 = *(_QWORD *)&PoolWithTag->Type;
    if ( v27->WriteAccess )
    {
      v5 = FsRtlKernelFsControlFile(v27, 0x900EFu, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v46);
      if ( v5 < 0 )
        goto LABEL_65;
      if ( (unsigned int)v46 < 8 )
      {
LABEL_56:
        v5 = -1073741762;
LABEL_65:
        ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
        goto LABEL_66;
      }
      MasterIrp = *(struct _IRP **)&PoolWithTag->Type;
    }
    else
    {
      v5 = FsRtlKernelFsControlFile(v27, 0x900EBu, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v46);
      if ( v5 < 0 )
        goto LABEL_65;
      if ( (unsigned int)v46 < 0x40 )
        goto LABEL_56;
      MasterIrp = PoolWithTag->AssociatedIrp.MasterIrp;
    }
    *((_QWORD *)&v42 + 1) = MasterIrp;
    v43 = v42;
    goto LABEL_65;
  }
LABEL_66:
  if ( v27 )
    ObfDereferenceObject(v27);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 32;
    v30 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20534C53u);
    if ( !v30 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v30;
    *(_DWORD *)a4 = 0;
    Handle = v41;
    if ( v30 + 4 >= v30 )
    {
      if ( v30 + 12 > &v30[*(unsigned int *)(a4 + 4)] )
        return (unsigned int)-1073741789;
      v31 = Handle;
      *(_DWORD *)v30 = 8;
      *(_QWORD *)(v30 + 4) = v31;
      v32 = ++*(_DWORD *)a4;
      v33 = *(_QWORD *)(a4 + 8);
      if ( !v33 )
      {
        v34 = *(_DWORD *)(a4 + 4);
        v35 = -1;
        v36 = v34 + 20;
        if ( v34 + 20 >= v34 )
          v35 = v34 + 20;
        v5 = v36 < v34 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v35;
        if ( v36 >= v34 )
        {
          v5 = 0;
          *(_DWORD *)a4 = v32 + 1;
        }
        return (unsigned int)v5;
      }
      v37 = 0;
      v38 = *(_QWORD *)(a4 + 8);
      if ( v32 )
      {
        while ( 1 )
        {
          v39 = *(_DWORD *)v38 + 4;
          if ( *(_DWORD *)v38 >= 0xFFFFFFFC || v38 + v39 < v38 )
            break;
          ++v37;
          v38 += v39;
          if ( v37 >= v32 )
            goto LABEL_82;
        }
      }
      else
      {
LABEL_82:
        if ( v38 + 4 >= v38 )
        {
          v5 = 0;
          if ( v38 + 20 <= v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v38 = 16;
            *(_OWORD *)(v38 + 4) = v43;
            ++*(_DWORD *)a4;
            return (unsigned int)v5;
          }
          return (unsigned int)-1073741789;
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v5;
}
