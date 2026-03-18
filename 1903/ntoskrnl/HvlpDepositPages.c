/*
 * XREFs of HvlpDepositPages @ 0x140285BA8
 * Callers:
 *     HvlpHandleInsufficientMemory @ 0x1401BDFF0 (HvlpHandleInsufficientMemory.c)
 *     HvlpStartLogicalProcessor @ 0x140286EAC (HvlpStartLogicalProcessor.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     HvlpAddPhysicalMemory @ 0x14034D308 (HvlpAddPhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408512F4 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400EF300 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1, __int64 a2, char a3)
{
  char v3; // r12
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // edx
  unsigned int v7; // esi
  __int64 i; // rax
  __int64 v9; // r15
  unsigned int v10; // ecx
  __int64 PartitionNodePagesForMdl; // rax
  char *v12; // r14
  unsigned int v14; // r12d
  unsigned int v15; // eax
  _QWORD *v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // edi
  void *v19; // r13
  int v20; // eax
  __int64 v21; // [rsp+40h] [rbp-68h]
  PHYSICAL_ADDRESS v22[12]; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+10h]

  v3 = a3;
  v4 = a1;
  v5 = 128;
  memset(v22, 0, 0x20uLL);
  v6 = v4;
  v7 = 113;
  v23 = v4;
  for ( i = 0x200000LL; ; i = v9 & -(__int64)(v20 != 0) )
  {
    v21 = i;
    v9 = i;
    v10 = (v7 & 0x20) != 0 ? (v5 + 511) & 0xFFFFFE00 : v5;
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(0, -1, i, v10 << 12, 1, v6, v7, 0LL);
    v12 = (char *)PartitionNodePagesForMdl;
    if ( PartitionNodePagesForMdl )
    {
      v14 = (*(_DWORD *)(PartitionNodePagesForMdl + 40) >> 12)
          + ((*(_DWORD *)(PartitionNodePagesForMdl + 40) & 0xFFF) != 0);
      v15 = v5;
      v5 -= v14;
      if ( v15 < v14 )
        v5 = 0;
      v16 = HvlpAcquireHypercallPage(v22, 1, 0LL, 8LL);
      v17 = 0;
      *v16 = HvlPartitionId;
      if ( v14 )
      {
        v18 = 0;
        v19 = v16 + 1;
        do
        {
          if ( v14 - v17 < 0x1FF )
            v18 ^= ((unsigned __int16)v18 ^ (unsigned __int16)(v14 - v17)) & 0xFFF;
          else
            v18 = v18 & 0xFFFFF000 | 0x1FF;
          memmove(v19, &v12[8 * v17 + 48], 8LL * (v18 & 0xFFF));
          HvcallCodeVa();
          v17 += 511;
        }
        while ( v17 < v14 );
      }
      HvlpReleaseHypercallPage(v22);
      ExFreePoolWithTag(v12, 0);
      v9 = v21;
      v3 = a3;
    }
    else if ( (v7 & 0x20) == 0 || v3 && (v7 & 0x40) == 0 )
    {
      return 3221225495LL;
    }
    if ( !v5 )
      break;
    v20 = v7 & 0x40;
    if ( (v7 & 0x40) != 0 )
      v7 &= ~0x40u;
    else
      v7 = v7 & 0xFFFFFFDB | 4;
    v6 = v23;
  }
  return 0LL;
}
