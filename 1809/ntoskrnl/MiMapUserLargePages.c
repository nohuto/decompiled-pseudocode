/*
 * XREFs of MiMapUserLargePages @ 0x14085E7B8
 * Callers:
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiCopyLargeVad @ 0x14085DFB4 (MiCopyLargeVad.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiGetPfnLink @ 0x1400E10E0 (MiGetPfnLink.c)
 *     MiGetPdeAddress @ 0x1400EDBE4 (MiGetPdeAddress.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402B9210 (MiInitPerfMemoryFlags.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     MiDemotePfnListChain @ 0x1402C55C0 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x1402C59E0 (MiInsertLargeUserMapping.c)
 *     MiGetCrossPartitionCharges @ 0x1402D1C6C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D26AC (MiReturnCrossPartitionCharges.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v7; // r8
  __int64 ProcessPartition; // r14
  unsigned int v9; // ebx
  unsigned __int64 v10; // rbp
  int CrossPartitionCharges; // esi
  unsigned __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned int v14; // r13d
  unsigned __int16 *v15; // r12
  __int64 LargeZeroPages; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned __int64 PteAddress; // rax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 PdeAddress; // r15
  unsigned int v22; // ebp
  unsigned int v23; // r13d
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned int inited; // eax
  unsigned __int64 v28; // [rsp+40h] [rbp-68h]
  __int64 Process; // [rsp+50h] [rbp-58h]
  _QWORD *v30; // [rsp+58h] [rbp-50h] BYREF
  __int64 v31; // [rsp+60h] [rbp-48h]
  __int64 v32; // [rsp+68h] [rbp-40h]
  unsigned __int16 *v33; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v34; // [rsp+C0h] [rbp+18h]
  __int64 v35; // [rsp+C8h] [rbp+20h]

  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  ProcessPartition = MiGetProcessPartition(Process);
  v9 = 0;
  v35 = ProcessPartition;
  v10 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
      - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
      + 1;
  v34 = v10;
  if ( v7 )
  {
    ProcessPartition = v7;
    v35 = v7;
    CrossPartitionCharges = MiGetCrossPartitionCharges(v7, 4, 1, v10);
    if ( CrossPartitionCharges < 0 )
      goto LABEL_40;
    v9 = 1;
  }
  v12 = v10;
  if ( (*(_DWORD *)(ProcessPartition + 4) & 0x10) == 0 )
    v12 = v10 + 160;
  if ( !(unsigned int)MiSufficientAvailablePages(ProcessPartition, v12) )
  {
LABEL_7:
    CrossPartitionCharges = -1073741670;
    goto LABEL_36;
  }
  if ( a2
    || (*(_DWORD *)(a1 + 48) & 0x4000) == 0 && (a2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x3F) != 0 )
  {
    v13 = a2 - 1;
  }
  else
  {
    v13 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23572);
  }
  if ( !a3 )
  {
LABEL_17:
    if ( (unsigned int)MiChargeResident((ULONG_PTR *)ProcessPartition, v10, 0LL) )
    {
      v9 |= 4u;
      v14 = MmMakeProtectNotWriteCopy[(unsigned __int8)*(_DWORD *)(a1 + 48) >> 3];
      v15 = (unsigned __int16 *)((char *)qword_14043B110 + 2 * v13 * (unsigned __int16)KeNumberNodes);
      v33 = &v15[(unsigned __int16)KeNumberNodes];
      LargeZeroPages = MiAllocateLargeZeroPages(ProcessPartition, v10, 512LL, v13, v14, (__int64)&v30, 0);
      v17 = v10 - LargeZeroPages;
      if ( v10 == LargeZeroPages )
        goto LABEL_23;
      do
      {
        if ( ++v15 == v33 )
          break;
        v13 = *v15;
        v17 -= MiAllocateLargeZeroPages(ProcessPartition, v17, 512LL, v13, v14, (__int64)&v30, 0);
      }
      while ( v17 );
      if ( !v17 )
      {
LABEL_23:
        v18 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
        PteAddress = MiGetPteAddress(v18);
        ValidPte = MiMakeValidPte(PteAddress, -1LL, v14 | 0x84000000);
        PdeAddress = MiGetPdeAddress(v18);
        v28 = PdeAddress + 8 * (v10 >> 9);
        if ( PdeAddress < v28 )
        {
          v22 = v13 + 1;
          do
          {
            v23 = 1;
            if ( (PdeAddress & 0xFFF) != 0 || (__int64)((v28 - PdeAddress) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 || !v30 )
            {
              if ( !v31 )
                MiDemotePfnListChain((__int64)&v30, 1);
            }
            else
            {
              v23 = 0;
            }
            (&v30)[v23] = (_QWORD *)MiGetPfnLink((__int64)(&v30)[v23]);
            v24 = MiLargePageSizes[v23];
            ValidPte ^= (ValidPte ^ (((v25 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
            MiInsertLargeUserMapping((__int64)(PdeAddress << 25) >> 16 << 25 >> 16, ValidPte, v22, v23);
            PdeAddress += 8 * (v24 >> 9);
          }
          while ( PdeAddress < v28 );
          v10 = v34;
          ProcessPartition = v35;
        }
        if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
        {
          inited = MiInitPerfMemoryFlags(1, 13);
          MiLogPerfMemoryRangeEvent(v18, Process, inited, v10);
        }
        v9 = 0;
        CrossPartitionCharges = 0;
        goto LABEL_36;
      }
      MiFreeLargeZeroPages(ProcessPartition, &v30);
    }
    goto LABEL_7;
  }
  if ( (unsigned int)MiChargeCommit(ProcessPartition, v10, 0) )
  {
    v9 |= 2u;
    goto LABEL_17;
  }
  CrossPartitionCharges = -1073741523;
LABEL_36:
  if ( v9 >= 4 )
  {
    if ( (ULONG_PTR *)ProcessPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v10);
    else
      MiReturnPartitionResidentAvailable(ProcessPartition, v10);
  }
LABEL_40:
  if ( (v9 & 2) != 0 )
    MiReturnCommit(ProcessPartition, v10);
  if ( (v9 & 1) != 0 )
    MiReturnCrossPartitionCharges(ProcessPartition, 4, 1, v10);
  return (unsigned int)CrossPartitionCharges;
}
