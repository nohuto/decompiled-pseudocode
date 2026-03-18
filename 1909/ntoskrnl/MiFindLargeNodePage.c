/*
 * XREFs of MiFindLargeNodePage @ 0x1402C0618
 * Callers:
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140096AB8 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetFreeZeroLargePage @ 0x1400972C8 (MiGetFreeZeroLargePage.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiSetPfnOwnedAndActive @ 0x140129F88 (MiSetPfnOwnedAndActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiFindLargeNodePage(__int64 a1, unsigned int a2, _DWORD *a3, int a4, int a5, char a6)
{
  unsigned __int64 v8; // r8
  unsigned int *v9; // rbx
  __int64 v10; // r14
  int v11; // r12d
  int v12; // ebp
  int v13; // r13d
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  char v20; // al
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbp
  int v23; // r14d
  int v24; // r12d
  unsigned __int8 v25; // bl
  char v26; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v28; // [rsp+30h] [rbp-38h]
  unsigned __int64 i; // [rsp+80h] [rbp+18h] BYREF

  v8 = MiLargePageSizes[*a3];
  v28 = v8;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    a2 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23572);
    v9 = (unsigned int *)(qword_140465750 + 4LL * a2 * (unsigned __int16)KeNumberNodes);
    v10 = (__int64)&v9[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v9 = 0LL;
    v10 = 4LL;
  }
  v11 = a5;
  v12 = (4 * ((a5 & 1) == 0)) | 1;
  if ( (a5 & 0x8000) == 0 )
    v12 = 4 * ((a5 & 1) == 0);
  v13 = a5 & 0x4000;
  v14 = MiLargePageSizes[a4];
  for ( i = v14; ; v14 = i )
  {
    v15 = v13
        ? MiGetFreeZeroLargePage(a1, (unsigned int)*a3, v12, a2, 0, 4u)
        : MiGetLargePageDemoteAsNeeded(a1, a2, v8, v14, v12);
    v16 = v15;
    if ( v15 )
      break;
    if ( ++v9 == (unsigned int *)v10 )
      return 0LL;
    a2 = *v9;
    v8 = v28;
  }
  v18 = (unsigned int)MiFreeZeroPageSizeIndex(v15);
  v19 = 0LL;
  v20 = *(_BYTE *)(v16 + 34);
  *a3 = v18;
  i = 0LL;
  v21 = MiLargePageSizes[v18];
  if ( (v20 & 7) == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&i);
    v19 = i;
  }
  MiUpdateLargePageBitMap(a1, (v16 + 0x58000000000LL) / 48, v21, 1, 1);
  v22 = v21;
  v23 = ((v11 & 0x100000) != 0) + 1;
  v24 = v11 & 0x40000000;
  do
  {
    *(_QWORD *)(v16 + 16) = v19;
    if ( v24 )
    {
      v25 = MiLockPageInline(v16);
      v26 = *(_BYTE *)(v16 + 34) & 0xFD;
      *(_QWORD *)(v16 + 40) &= 0xFFFFFFF000000000uLL;
      *(_BYTE *)(v16 + 34) = v26 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v25);
      v19 = i;
    }
    else
    {
      MiSetPfnOwnedAndActive(v16, a6, -8LL, 1u, v23);
      *(_QWORD *)(v16 + 16) = v19;
    }
    v16 += 48LL;
    --v22;
  }
  while ( v22 );
  return v16 - 48 * v21;
}
