/*
 * XREFs of MiSessionCreate @ 0x1407162A8
 * Callers:
 *     MiMapProcessExecutable @ 0x140678E08 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiMakeDemandZeroPte @ 0x140097E20 (MiMakeDemandZeroPte.c)
 *     MiCreateSystemWsles @ 0x1400F3224 (MiCreateSystemWsles.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400F3990 (ExInitializePagedLookasideListInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     ExInitializeSessionHeapManager @ 0x1401701B8 (ExInitializeSessionHeapManager.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiDereferenceSession @ 0x1406C069C (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x14071655C (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x1407167FC (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x140716868 (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x140716924 (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140716DE8 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407174A4 (MiInitializeSessionGlobals.c)
 */

__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rbx
  __int64 ProcessPartition; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *PteAddress; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  PVOID PoolWithTag; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbp
  int v20; // ebx
  char v21; // r11

  result = MiInitializeSessionGlobals();
  if ( (int)result < 0 )
    return result;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  result = MiSessionCreateInternal(ProcessPartition);
  if ( (int)result < 0 )
    return result;
  v3 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !(unsigned int)MiCreateSystemWsles()
    || !(unsigned int)MiInitializeDynamicBitmap(v3 + 8136, qword_14043B050, 0x200000LL, 0LL) )
  {
    goto LABEL_28;
  }
  *(_QWORD *)(v3 + 8032) = qword_14043A030;
  *(_QWORD *)(v3 + 8024) = 0x10000LL;
  PteAddress = (_QWORD *)MiGetPteAddress(qword_14043A030);
  v6 = MiGetPteAddress(v4 + 0x1FFF);
  v7 = qword_14043A038;
  v8 = v6;
  if ( !qword_14043A038 )
  {
    v7 = ((v6 - (__int64)PteAddress) >> 3) + 1;
    qword_14043A038 = v7;
  }
  if ( !(unsigned int)MiChargeCommit(ProcessPartition, v7, 0) )
    goto LABEL_28;
  if ( !(unsigned int)MiMakeZeroedPageTables() )
  {
    MiReturnCommit(ProcessPartition, qword_14043A038);
    goto LABEL_28;
  }
  v9 = qword_14043A038 + *(_QWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 4) |= 8u;
  *(_QWORD *)(v3 + 48) = v9;
  MiMakeDemandZeroPte(4);
  if ( (unsigned __int64)PteAddress > v8 )
    goto LABEL_15;
  do
  {
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_11;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_11;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_11;
    }
    if ( (v21 & 1) != 0 )
      v11 |= 0x8000000000000000uLL;
LABEL_11:
    *PteAddress = v11;
    if ( v12 )
      MiWritePteShadow((__int64)PteAddress, v11);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress <= v8 );
  v10 = *(_DWORD *)(v3 + 4);
LABEL_15:
  *(_DWORD *)(v3 + 4) = v10 | 0x10;
  MiInitializeSystemWorkingSetList(ProcessPartition, v3 + 3008, 1LL, 0LL);
  v13 = qword_14043A040;
  *(_QWORD *)(v3 + 56) = qword_14043A040;
  v14 = qword_14043A040 - 1;
  *(_QWORD *)(v3 + 64) = qword_14043A040 + 0x1FFFFFFFFFLL;
  result = ExInitializeSessionHeapManager(v13, v14);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 4) |= 0x100u;
    v15 = MiInitializeSessionPool();
    if ( v15 >= 0 )
    {
      if ( (unsigned int)MiInitializeSpecialPool(33LL) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 1uLL, 0x6C6F6F50u);
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v17 = 0LL;
        v18 = 16LL;
        v19 = 21LL;
        do
        {
          ExInitializePagedLookasideListInternal(v17 + v3 + 256, 0LL, 0LL, 33, v18, 1819242320, 256, 0);
          v18 += 16LL;
          v17 += 128LL;
          --v19;
        }
        while ( v19 );
        *(_DWORD *)(v3 + 4) |= 1u;
        if ( (unsigned int)MiInitializeSystemSpaceMap(v3 + 2944) )
        {
          v20 = MiSessionObjectCreate();
          if ( v20 < 0 )
            MiDereferenceSession();
          return (unsigned int)v20;
        }
      }
LABEL_28:
      v15 = -1073741670;
    }
    MiDereferenceSession();
    return (unsigned int)v15;
  }
  return result;
}
