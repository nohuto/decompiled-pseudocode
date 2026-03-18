/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1406E8AF8
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406E89D4 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x14089BC04 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x1400E0328 (MiMakeSubsectionPte.c)
 *     MmSizeOfMdl @ 0x140119480 (MmSizeOfMdl.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v7; // r14
  unsigned __int64 *v8; // r15
  char *PoolWithTag; // rax
  char *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  unsigned __int64 *v13; // r9
  unsigned __int64 v14; // r15
  unsigned int v15; // eax
  unsigned int i; // r14d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  unsigned __int64 v20; // r15
  __int64 v21; // r12
  int v22; // ebx
  __int64 v24; // r9
  char v25; // r11
  bool v26; // zf
  unsigned __int64 v27; // rbx
  SIZE_T v28; // rax
  struct _MDL *v29; // rax
  int v30; // ebx
  int v31; // eax
  void *v32; // rcx
  unsigned int v33; // [rsp+50h] [rbp-88h]
  unsigned __int64 *v34; // [rsp+58h] [rbp-80h]
  _QWORD *v35; // [rsp+60h] [rbp-78h]
  ULONG_PTR *ControlAreaPartition; // [rsp+68h] [rbp-70h]
  unsigned __int64 v37; // [rsp+80h] [rbp-58h] BYREF
  __int64 v38; // [rsp+88h] [rbp-50h]
  unsigned __int64 v39; // [rsp+90h] [rbp-48h] BYREF
  __int64 v40; // [rsp+98h] [rbp-40h]

  v39 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  *a5 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v35 = *(_QWORD **)a1;
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(*(_QWORD *)a1);
  if ( !(unsigned int)MiChargeCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x73536D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag
    || (memset(PoolWithTag, 0, 0x58uLL),
        *((_DWORD *)v10 + 20) = 1,
        v11 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du),
        (v12 = v11) == 0LL) )
  {
    v22 = -1073741670;
    goto LABEL_17;
  }
  *((_QWORD *)v10 + 9) = v11;
  memset(v11, 0, 8LL * *(unsigned int *)(a1 + 44));
  MiMakeSubsectionPte(a1);
  v13 = (unsigned __int64 *)(v10 + 24);
  v34 = (unsigned __int64 *)(v10 + 24);
  *((_QWORD *)v10 + 6) = *((_QWORD *)v10 + 6) & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 0;
  v33 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_14;
  for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
  {
    v17 = MI_READ_PTE_LOCK_FREE(v14);
    if ( !v17 )
      break;
    if ( !a2 )
    {
      if ( IS_PTE_NOT_DEMAND_ZERO(v17) )
      {
        if ( !MiPteInShadowRange((unsigned __int64)v12) )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v19 = 1;
          if ( !HIBYTE(word_140465BEC) )
          {
            v26 = (v25 & 1) == 0;
            goto LABEL_36;
          }
LABEL_10:
          *v12 = v18;
          if ( v19 )
            MiWritePteShadow((__int64)v12);
          goto LABEL_12;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_10;
        v26 = (v25 & 1) == 0;
      }
      else
      {
        if ( !MiPteInShadowRange((unsigned __int64)v12) )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v19 = 1;
          if ( HIBYTE(word_140465BEC) )
            goto LABEL_10;
          v26 = (v18 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_10;
          v26 = (v18 & 1) == 0;
        }
      }
LABEL_36:
      if ( !v26 )
        v18 |= v24;
      goto LABEL_10;
    }
LABEL_12:
    ++v12;
    v14 += 8LL;
  }
  v33 = i;
  v7 = 0LL;
  v13 = (unsigned __int64 *)(v10 + 24);
  v15 = v33;
LABEL_14:
  v20 = v15;
  *((_QWORD *)v10 + 7) = v15;
  MiUpdateSystemProtoPtesTree(v13, 1);
  v21 = *((_QWORD *)v10 + 9);
  if ( a2 )
  {
    v27 = v20 << 12;
    v28 = MmSizeOfMdl((PVOID)a2, v20 << 12);
    v29 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x206C644Du);
    v7 = v29;
    if ( !v29 )
      goto LABEL_44;
    v29->Next = 0LL;
    v29->Size = 8 * (((v27 + (a2 & 0xFFF) + 4095) >> 12) + 6);
    v29->MdlFlags = 0;
    v29->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
    v29->ByteOffset = a2 & 0xFFF;
    v29->ByteCount = v27;
    MmProbeAndLockPages(v29, 0, IoReadAccess);
    v30 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
    if ( (unsigned int)MiChargeResident(ControlAreaPartition, v20, 0LL) )
    {
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v30 & 2) != 0 )
      {
        v40 = *(_QWORD *)(v35[12] + 56LL);
        v39 = (unsigned __int64)a3 << 12;
        v38 = 0LL;
        v37 = a4 + v39 + *(_QWORD *)(*v35 + 32LL);
        v31 = MiFillPerSessionProtos((_DWORD)v35, v21, (int)v7 + 48, v33, v30, a3, a4, (__int64)&v39, (__int64)&v37);
      }
      else
      {
        v31 = MiFillPerSessionProtos((_DWORD)v35, v21, (int)v7 + 48, v33, v30, a3, a4, 0LL, 0LL);
      }
      v22 = v31;
      if ( v31 >= 0 )
        goto LABEL_15;
    }
    else
    {
LABEL_44:
      v22 = -1073741670;
    }
  }
  else
  {
LABEL_15:
    *a5 = v10;
    v10 = 0LL;
    v22 = 0;
  }
  v8 = v34;
LABEL_17:
  if ( v7 )
  {
    MmUnlockPages(v7);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v10 )
  {
    if ( v8 )
      MiUpdateSystemProtoPtesTree(v8, 0);
    v32 = (void *)*((_QWORD *)v10 + 9);
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v22 < 0 )
    MiReturnCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v22;
}
