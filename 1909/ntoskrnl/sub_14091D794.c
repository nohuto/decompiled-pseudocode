/*
 * XREFs of sub_14091D794 @ 0x14091D794
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 */

__int64 __fastcall sub_14091D794(__int64 a1, void *a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int *v6; // rdx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r11
  unsigned int *v10; // r10
  unsigned int v11; // r10d
  unsigned int *v12; // r9
  void **v13; // rax
  unsigned int j; // r8d
  __int64 v15; // rax
  unsigned int *v16; // r9
  unsigned int v17; // r9d
  void **v18; // rax
  UNICODE_STRING *v19; // r15
  unsigned __int16 *v20; // r14
  NTSTATUS v21; // eax
  struct _FILE_OBJECT *v22; // rbx
  int v23; // esi
  char *PoolWithTag; // rax
  unsigned __int16 *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  char *v28; // r8
  int v29; // r12d
  struct _IRP *v30; // r13
  int v31; // ebx
  char *v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // r9
  int v35; // r11d
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  _DWORD *v39; // rdx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int64 v43; // [rsp+50h] [rbp-30h]
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  __int64 Source2; // [rsp+60h] [rbp-20h] BYREF
  void *v46; // [rsp+68h] [rbp-18h]
  __int128 v47; // [rsp+70h] [rbp-10h]
  __int64 v48; // [rsp+C0h] [rbp+40h]
  struct _FILE_OBJECT *Handlea; // [rsp+C8h] [rbp+48h]
  HANDLE Handleb; // [rsp+C8h] [rbp+48h]
  __int64 v52; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v52) = a3;
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
    v12 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
LABEL_17:
      v5 = -1073741675;
      goto LABEL_18;
    }
    v13 = 0LL;
    if ( v11 )
      v13 = (void **)v12;
    v5 = 0;
    if ( v11 == 8 )
    {
      v46 = *v13;
      goto LABEL_18;
    }
    return (unsigned int)-1073741789;
  }
  v5 = -1073741811;
LABEL_18:
  if ( (v5 & 0x80000000) != 0 )
    return v5;
  if ( v6 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v15 = *v6;
      v16 = v6 + 1;
      if ( v6 + 1 < v6 )
        goto LABEL_32;
      v6 = (unsigned int *)((char *)v16 + v15);
      if ( (unsigned int *)((char *)v16 + v15) < v16 )
        goto LABEL_32;
    }
    v17 = *v6;
    if ( v6 + 1 < v6 )
    {
LABEL_32:
      v5 = -1073741675;
      goto LABEL_33;
    }
    v18 = 0LL;
    if ( v17 )
      v18 = (void **)(v6 + 1);
    v5 = 0;
    if ( v17 != 8 )
      return (unsigned int)-1073741762;
    a2 = *v18;
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_33:
  if ( (v5 & 0x80000000) != 0 )
    return v5;
  v19 = 0LL;
  v20 = 0LL;
  v48 = 0LL;
  v43 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v21 = ObReferenceObjectByHandle(a2, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v22 = (struct _FILE_OBJECT *)Object;
  v23 = v21;
  Handlea = (struct _FILE_OBJECT *)Object;
  if ( v21 >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
    v19 = (UNICODE_STRING *)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_38;
    *(_QWORD *)(PoolWithTag + 5) = 0LL;
    *(_QWORD *)(PoolWithTag + 13) = 0LL;
    *(_QWORD *)(PoolWithTag + 21) = 0LL;
    PoolWithTag[30] = 0;
    PoolWithTag[4] = 25;
    *(_DWORD *)PoolWithTag = 0;
    strcpy(PoolWithTag + 5, "$Kernel.Purge.AppxFICach");
    v25 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
    v20 = v25;
    if ( !v25 )
    {
LABEL_38:
      v23 = -1073741801;
      goto LABEL_60;
    }
    memset(v25, 0, 0x3AuLL);
    v26 = FsRtlQueryKernelEaFile(v22, v20, 0x3Au, 1, v19, 0x1Fu, 0LL, 1, &v52);
    v23 = v26;
    if ( v26 == -1073741275 )
      goto LABEL_41;
    if ( v26 >= 0 )
    {
      v27 = v20[3];
      v28 = (char *)v20 + *((unsigned __int8 *)v20 + 5) + 9;
      Object = v28;
      if ( &v28[v27] > (char *)v20 + (unsigned int)v52 )
        goto LABEL_44;
      if ( !(_WORD)v27 )
      {
LABEL_41:
        LODWORD(v52) = 0;
        v23 = 0;
        goto LABEL_60;
      }
      if ( (_DWORD)v27 != 24 || (Source2 = 0LL, RtlCompareMemory(v28 + 16, &Source2, 8uLL) != 8) )
      {
LABEL_44:
        v23 = -1073741762;
        goto LABEL_60;
      }
      v47 = 0uLL;
      v29 = 2;
      v30 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
      if ( !v30 )
        goto LABEL_59;
      v31 = FsRtlKernelFsControlFile(v22, 0x900F4u, 0LL, 0, v30, 0x248u, (ULONG *)&v52);
      if ( v31 >= 0 )
      {
        if ( (unsigned int)v52 >= 0x40 )
        {
          *(_QWORD *)&v47 = *(_QWORD *)&v30->Type;
          v31 = FsRtlKernelFsControlFile(Handlea, 0x900EBu, 0LL, 0, v30, 0x248u, (ULONG *)&v52);
          if ( v31 < 0 )
            goto LABEL_55;
          if ( (unsigned int)v52 >= 0x40 )
          {
            *((_QWORD *)&v47 + 1) = v30->AssociatedIrp.MasterIrp;
            v43 = *((_QWORD *)&v47 + 1);
            v48 = v47;
            goto LABEL_55;
          }
        }
        v31 = -1073741762;
      }
LABEL_55:
      ExFreePoolWithTag(v30, 0x20534C53u);
      if ( v31 >= 0 && v48 == *(_QWORD *)Object && v43 == *((_QWORD *)Object + 1) )
        v29 = 3;
LABEL_59:
      LODWORD(v52) = v29;
    }
  }
LABEL_60:
  if ( Handlea )
    ObfDereferenceObject(Handlea);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x20534C53u);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x20534C53u);
  v5 = v23;
  if ( v23 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    v32 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
    if ( !v32 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v32;
    *(_DWORD *)a4 = 0;
    Handleb = v46;
    if ( v32 + 4 >= v32 )
    {
      if ( v32 + 12 > &v32[*(unsigned int *)(a4 + 4)] )
        return (unsigned int)-1073741789;
      *(_DWORD *)v32 = 8;
      *(_QWORD *)(v32 + 4) = Handleb;
      v33 = ++*(_DWORD *)a4;
      v34 = *(_QWORD *)(a4 + 8);
      v35 = v52;
      if ( !v34 )
      {
        v36 = *(_DWORD *)(a4 + 4);
        v37 = -1;
        v38 = v36 + 8;
        if ( v36 + 8 >= v36 )
          v37 = v36 + 8;
        v5 = v38 < v36 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v37;
        if ( v38 >= v36 )
        {
          v5 = 0;
          *(_DWORD *)a4 = v33 + 1;
        }
        return v5;
      }
      v39 = *(_DWORD **)(a4 + 8);
      v40 = 0;
      if ( v33 )
      {
        while ( 1 )
        {
          v41 = *v39 + 4;
          if ( *v39 >= 0xFFFFFFFC || (_DWORD *)((char *)v39 + v41) < v39 )
            break;
          ++v40;
          v39 = (_DWORD *)((char *)v39 + v41);
          if ( v40 >= v33 )
            goto LABEL_80;
        }
      }
      else
      {
LABEL_80:
        if ( v39 + 1 >= v39 )
        {
          v5 = 0;
          if ( (unsigned __int64)(v39 + 2) <= v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v39 = 4;
            v39[1] = v35;
            ++*(_DWORD *)a4;
            return v5;
          }
          return (unsigned int)-1073741789;
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  return v5;
}
