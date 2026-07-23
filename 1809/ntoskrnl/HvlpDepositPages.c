/*
 * XREFs of HvlpDepositPages @ 0x140271D90
 * Callers:
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpStartLogicalProcessor @ 0x140273178 (HvlpStartLogicalProcessor.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     HvlpAddPhysicalMemory @ 0x14032BD00 (HvlpAddPhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140818AD0 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // edx
  char v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 PartitionNodePagesForMdl; // rax
  char *v11; // r14
  unsigned int v13; // r15d
  unsigned int v14; // eax
  _QWORD *v15; // rax
  unsigned int v16; // r12d
  unsigned __int64 v17; // rsi
  void *v18; // r13
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-68h]
  PHYSICAL_ADDRESS v23[3]; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v26; // [rsp+C8h] [rbp+20h]

  v3 = 128;
  v4 = a1;
  v5 = a3;
  v24 = a1;
  v6 = 0x200000LL;
  v7 = 113;
  while ( 1 )
  {
    v22 = v6;
    v8 = v6;
    v9 = (v7 & 0x20) != 0 ? (v3 + 511) & 0xFFFFFE00 : v3;
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(0, -1, v6, v9 << 12, 1, v4, v7, 0LL);
    v11 = (char *)PartitionNodePagesForMdl;
    if ( PartitionNodePagesForMdl )
    {
      v13 = (*(_DWORD *)(PartitionNodePagesForMdl + 40) >> 12)
          + ((*(_DWORD *)(PartitionNodePagesForMdl + 40) & 0xFFF) != 0);
      v14 = v3;
      v3 -= v13;
      if ( v14 < v13 )
        v3 = 0;
      v15 = HvlpAcquireHypercallPage(v23, 1, 0LL, 8LL);
      v16 = 0;
      LODWORD(v26) = 72;
      *v15 = HvlPartitionId;
      if ( v13 )
      {
        LODWORD(v17) = 0;
        v18 = v15 + 1;
        v19 = 0;
        do
        {
          if ( v13 - v16 < 0x1FF )
          {
            LOWORD(v20) = v19 ^ (v19 ^ (v13 - v16)) & 0xFFF;
            HIDWORD(v26) = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(v13 - v16)) & 0xFFF;
          }
          else
          {
            v20 = v17 & 0xFFFFF000 | 0x1FF;
            HIDWORD(v26) = v20;
          }
          memmove(v18, &v11[8 * v16 + 48], 8LL * (v20 & 0xFFF));
          v17 = HIDWORD(v26);
          HvcallCodeVa();
          v19 = HIDWORD(v26);
          v16 += 511;
        }
        while ( v16 < v13 );
      }
      HvlpReleaseHypercallPage(v23);
      ExFreePoolWithTag(v11, 0);
      v8 = v22;
      v5 = a3;
    }
    else if ( (v7 & 0x20) == 0 || v5 && (v7 & 0x40) == 0 )
    {
      return 3221225495LL;
    }
    if ( !v3 )
      break;
    v21 = v7 & 0x40;
    if ( (v7 & 0x40) != 0 )
      v7 &= ~0x40u;
    else
      v7 = v7 & 0xFFFFFFDB | 4;
    v4 = v24;
    v6 = v8 & -(__int64)(v21 != 0);
  }
  return 0LL;
}
