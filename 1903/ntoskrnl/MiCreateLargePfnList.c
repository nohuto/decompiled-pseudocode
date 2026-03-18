/*
 * XREFs of MiCreateLargePfnList @ 0x1402DF1E8
 * Callers:
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiFreeLargeZeroPages @ 0x1401866E4 (MiFreeLargeZeroPages.c)
 *     MiComputePreferredNode @ 0x1402D1D28 (MiComputePreferredNode.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA810 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB2BC (MiReturnCrossPartitionCharges.c)
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreateLargePfnList(__int64 a1, unsigned __int64 a2, char a3, __int64 *a4, __int64 *a5)
{
  unsigned __int64 v5; // r14
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // r15
  int CrossPartitionCharges; // edi
  unsigned __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // r15d
  _DWORD *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // eax
  __int64 LargeZeroPages; // rax
  unsigned __int64 v21; // rdi
  int v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+48h] [rbp-60h]
  int v25; // [rsp+50h] [rbp-58h]
  _DWORD *v26; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+C8h] [rbp+20h]

  v5 = a2;
  v7 = 0;
  v8 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
  if ( a4 )
  {
    v9 = *a4;
    v8 = *a4;
    CrossPartitionCharges = MiGetCrossPartitionCharges(*a4, 4LL, 1LL, a2);
    if ( CrossPartitionCharges < 0 )
      goto LABEL_34;
    v7 = 1;
  }
  else
  {
    v9 = 0LL;
  }
  v11 = v5;
  if ( (*(_DWORD *)(v8 + 4) & 0x20) == 0 )
    v11 = v5 + 160;
  if ( !(unsigned int)MiSufficientAvailablePages(v8, v11) )
    goto LABEL_8;
  v12 = MiComputePreferredNode(a1);
  if ( v9 )
  {
    if ( !(unsigned int)MiChargeCommit(v8, v5, 0) )
    {
      CrossPartitionCharges = -1073741523;
      goto LABEL_30;
    }
    v7 |= 2u;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v8, v5, 0LL) )
  {
LABEL_8:
    CrossPartitionCharges = -1073741670;
    goto LABEL_30;
  }
  v13 = *(_DWORD *)(a1 + 48);
  v23 = MmMakeProtectNotWriteCopy[(v13 >> 7) & 0x1F];
  v14 = (_DWORD *)(qword_140465A50 + 4LL * v12 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v15 = (v13 >> 18) & 3;
  v26 = &v14[(unsigned __int16)KeNumberNodes];
  if ( LODWORD(MiVadPageSizes[v15]) == 16 )
  {
    v16 = 2LL;
    v17 = 2;
  }
  else if ( (v13 & 0x500000) == 0x500000 )
  {
    v16 = (unsigned int)MiVadPageIndices[v15];
    v17 = MiVadPageIndices[v15];
  }
  else
  {
    v16 = 1LL;
    v17 = (v13 & 0x300000) == 0x300000 || (KeFeatureBits & 0x2000000000LL) == 0;
  }
  v24 = MiLargePageSizes[v16];
  v18 = MiLargePageSizes[v17];
  v25 = v18;
  v19 = 2;
  if ( (v13 & 0xD00000) != 0xD00000 )
    v19 = 0;
  v29 = v19;
  LargeZeroPages = MiAllocateLargeZeroPages(
                     v8,
                     v5,
                     v18,
                     v24,
                     v12,
                     MmMakeProtectNotWriteCopy[(v13 >> 7) & 0x1F],
                     (__int64)a5,
                     v19);
  v21 = v5 - LargeZeroPages;
  if ( v5 != LargeZeroPages )
  {
    do
    {
      if ( a3 )
        break;
      if ( ++v14 == v26 )
        break;
      v21 -= MiAllocateLargeZeroPages(v8, v21, v25, v24, *v14, v23, (__int64)a5, v29);
    }
    while ( v21 );
    v7 |= 4u;
    v5 = a2;
    if ( v21 )
    {
      MiFreeLargeZeroPages(v8, a5);
      goto LABEL_8;
    }
  }
  v7 = 0;
  CrossPartitionCharges = 0;
LABEL_30:
  if ( v7 >= 4 )
  {
    if ( (ULONG_PTR *)v8 == &MiSystemPartition )
      MiReturnResidentAvailable(v5);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8128), v5);
  }
LABEL_34:
  if ( (v7 & 2) != 0 )
    MiReturnCommit(v8, v5);
  if ( (v7 & 1) != 0 )
    MiReturnCrossPartitionCharges(v8, 4LL, 1LL, v5);
  return (unsigned int)CrossPartitionCharges;
}
