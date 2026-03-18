/*
 * XREFs of MiSessionCreate @ 0x14073FA18
 * Callers:
 *     MiMapProcessExecutable @ 0x1406796F4 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x1406921D8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiMakeDemandZeroPte @ 0x140076358 (MiMakeDemandZeroPte.c)
 *     MiMakeZeroedPageTables @ 0x1400AD084 (MiMakeZeroedPageTables.c)
 *     MiCreateSystemWsles @ 0x1400E5550 (MiCreateSystemWsles.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     ExInitializeSessionHeapManager @ 0x140179854 (ExInitializeSessionHeapManager.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDereferenceSession @ 0x1406E12DC (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x14073FCC0 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x14073FF84 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSessionPool @ 0x14073FFF0 (MiInitializeSessionPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407400C8 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140740B00 (MiInitializeSessionGlobals.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  PVOID PoolWithTag; // rax
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
  v3 = Process[1].ActiveProcessors.Bitmap[1];
  if ( !(unsigned int)MiCreateSystemWsles()
    || !(unsigned int)MiInitializeDynamicBitmap(v3 + 1160, qword_1404659A8, 0x200000LL, 0LL) )
  {
    goto LABEL_31;
  }
  *(_QWORD *)(v3 + 1120) = qword_140464988;
  *(_QWORD *)(v3 + 1112) = 0x10000LL;
  PteAddress = (_QWORD *)MiGetPteAddress(qword_140464988);
  v6 = MiGetPteAddress(v4 + 0x1FFF);
  v7 = qword_140464990;
  v8 = v6;
  if ( !qword_140464990 )
  {
    v7 = ((v6 - (__int64)PteAddress) >> 3) + 1;
    qword_140464990 = v7;
  }
  if ( !(unsigned int)MiChargeCommit(ProcessPartition, v7, 0) )
    goto LABEL_31;
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v8, 1u, 11) )
  {
    MiReturnCommit(ProcessPartition, qword_140464990);
    goto LABEL_31;
  }
  v11 = qword_140464990 + *(_QWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 4) |= 8u;
  v12 = *(unsigned int *)(v3 + 4);
  *(_QWORD *)(v3 + 48) = v11;
  MiMakeDemandZeroPte(4, v12, v9, v10);
  if ( (unsigned __int64)PteAddress > v8 )
    goto LABEL_15;
  do
  {
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_11;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_11;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_11;
    }
    if ( (v21 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
LABEL_11:
    *PteAddress = v14;
    if ( v15 )
      MiWritePteShadow((__int64)PteAddress);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress <= v8 );
  v13 = *(_DWORD *)(v3 + 4);
LABEL_15:
  *(_DWORD *)(v3 + 4) = v13 | 0x10;
  MiInitializeSystemWorkingSetList(ProcessPartition, v3 + 256, 1LL, 0LL);
  v16 = qword_140464998;
  *(_QWORD *)(v3 + 56) = qword_140464998;
  v17 = qword_140464998 - 1;
  *(_QWORD *)(v3 + 64) = qword_140464998 + 0x1FFFFFFFFFLL;
  result = ExInitializeSessionHeapManager(v16, v17);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 4) |= 0x80u;
    v18 = MiInitializeSessionPool();
    if ( v18 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 1uLL, 0x6C6F6F50u);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      *(_DWORD *)(v3 + 4) |= 1u;
      if ( (unsigned int)MiInitializeSystemSpaceMap(v3 + 192) )
      {
        v20 = MiSessionObjectCreate();
        if ( v20 < 0 )
          MiDereferenceSession();
        return (unsigned int)v20;
      }
LABEL_31:
      v18 = -1073741670;
    }
    MiDereferenceSession();
    return (unsigned int)v18;
  }
  return result;
}
