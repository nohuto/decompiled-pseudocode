/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1406CA490
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x14086037C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiMakeSubsectionPte @ 0x140095A40 (MiMakeSubsectionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MmSizeOfMdl @ 0x14011A7B0 (MmSizeOfMdl.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v7; // r14
  unsigned __int64 *v8; // r15
  char *PoolWithTag; // rax
  char *v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // rdi
  unsigned __int64 *v13; // r9
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int16 v16; // dx
  BOOL v17; // eax
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // r11
  int v21; // r9d
  __int64 v22; // r13
  int v23; // edi
  __int64 v25; // r10
  char v26; // r11
  bool v27; // zf
  unsigned __int64 v28; // rdi
  SIZE_T v29; // rax
  struct _MDL *v30; // rax
  int v31; // edi
  int v32; // eax
  void *v33; // rcx
  int v34; // [rsp+50h] [rbp-88h]
  unsigned __int64 *v35; // [rsp+58h] [rbp-80h]
  _QWORD *v36; // [rsp+60h] [rbp-78h]
  ULONG_PTR *ControlAreaPartition; // [rsp+68h] [rbp-70h]
  _QWORD v38[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v39[9]; // [rsp+90h] [rbp-48h] BYREF

  *a5 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v36 = *(_QWORD **)a1;
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(*(_QWORD *)a1);
  if ( !(unsigned int)MiChargeCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x73536D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag
    || (memset(PoolWithTag, 0, 0x58uLL),
        *((_DWORD *)v10 + 20) = 1,
        v11 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du),
        (v12 = v11) == 0LL) )
  {
    v23 = -1073741670;
    goto LABEL_17;
  }
  *((_QWORD *)v10 + 9) = v11;
  memset(v11, 0, 8LL * *(unsigned int *)(a1 + 44));
  MiMakeSubsectionPte(a1);
  v13 = (unsigned __int64 *)(v10 + 24);
  v35 = (unsigned __int64 *)(v10 + 24);
  *((_QWORD *)v10 + 6) = *((_QWORD *)v10 + 6) & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v14 = 0LL;
  v34 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_14;
  v15 = *(_QWORD *)(a1 + 8);
  while ( MI_READ_PTE_LOCK_FREE(v15) )
  {
    if ( !a2 )
    {
      MiPteInShadowRange((unsigned __int64)v12);
      v17 = IS_PTE_NOT_DEMAND_ZERO(v16);
      v21 = 0;
      if ( v17 )
      {
        v18 = v20;
        if ( !v19 )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v27 = (v26 & 1) == 0;
            goto LABEL_36;
          }
LABEL_10:
          *v12 = v18;
          if ( v21 )
            MiWritePteShadow((__int64)v12, v18);
          goto LABEL_12;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_10;
        v27 = (v26 & 1) == 0;
      }
      else
      {
        if ( !v19 )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_10;
          v27 = (v18 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
            goto LABEL_10;
          v27 = (v18 & 1) == 0;
        }
      }
LABEL_36:
      if ( !v27 )
        v18 |= v25;
      goto LABEL_10;
    }
LABEL_12:
    ++v12;
    v15 += 8LL;
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 44) )
      break;
  }
  v34 = v14;
  v7 = 0LL;
  v13 = (unsigned __int64 *)(v10 + 24);
LABEL_14:
  *((_QWORD *)v10 + 7) = v14;
  MiUpdateSystemProtoPtesTree(v13, 1);
  v22 = *((_QWORD *)v10 + 9);
  if ( a2 )
  {
    v28 = v14 << 12;
    v29 = MmSizeOfMdl((PVOID)a2, v14 << 12);
    v30 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x206C644Du);
    v7 = v30;
    if ( !v30 )
      goto LABEL_44;
    v30->Next = 0LL;
    v30->Size = 8 * (((v28 + (a2 & 0xFFF) + 4095) >> 12) + 6);
    v30->MdlFlags = 0;
    v30->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
    v30->ByteOffset = a2 & 0xFFF;
    v30->ByteCount = v28;
    MmProbeAndLockPages(v30, 0, IoReadAccess);
    v31 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
    if ( (unsigned int)MiChargeResident(ControlAreaPartition, v14, 0LL) )
    {
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v31 & 2) != 0 )
      {
        v39[1] = *(_QWORD *)(v36[12] + 48LL);
        v39[0] = (unsigned __int64)a3 << 12;
        v38[1] = 0LL;
        v38[0] = a4 + v39[0] + *(_QWORD *)(*v36 + 32LL);
        v32 = MiFillPerSessionProtos((_DWORD)v36, v22, (int)v7 + 48, v34, v31, a3, a4, (__int64)v39, (__int64)v38);
      }
      else
      {
        v32 = MiFillPerSessionProtos((_DWORD)v36, v22, (int)v7 + 48, v34, v31, a3, a4, 0LL, 0LL);
      }
      v23 = v32;
      if ( v32 >= 0 )
        goto LABEL_15;
    }
    else
    {
LABEL_44:
      v23 = -1073741670;
    }
  }
  else
  {
LABEL_15:
    *a5 = v10;
    v10 = 0LL;
    v23 = 0;
  }
  v8 = v35;
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
    v33 = (void *)*((_QWORD *)v10 + 9);
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v23 < 0 )
    MiReturnCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v23;
}
