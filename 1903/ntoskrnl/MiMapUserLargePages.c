/*
 * XREFs of MiMapUserLargePages @ 0x14089A49C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiCopyLargeVad @ 0x140899938 (MiCopyLargeVad.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14002DA70 (MiFreeZeroPageSizeIndex.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiGetLargestPageIndex @ 0x1400F0C40 (MiGetLargestPageIndex.c)
 *     MiGetPfnLink @ 0x14013C7B0 (MiGetPfnLink.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C0B60 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402CF3BC (MiInitPerfMemoryFlags.c)
 *     MiComputePreferredNode @ 0x1402D1D28 (MiComputePreferredNode.c)
 *     MiLockPage @ 0x1402D8FA4 (MiLockPage.c)
 *     MiUnlockPage @ 0x1402D8FF8 (MiUnlockPage.c)
 *     MiSetLeafPfnBuddy @ 0x1402D96F8 (MiSetLeafPfnBuddy.c)
 *     MiCreateLargePfnList @ 0x1402DF1E8 (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x1402DF518 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     MiGetVadLargePageIndex @ 0x1402E5604 (MiGetVadLargePageIndex.c)
 *     MiGetVadPageSize @ 0x1402E5620 (MiGetVadPageSize.c)
 *     MiEndDpcGang @ 0x1402E8728 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x1402E8814 (MiInitializeDpcGang.c)
 *     MiInsertDpcGang @ 0x1402E88C0 (MiInsertDpcGang.c)
 *     MiRemoveDpcGang @ 0x1402E8914 (MiRemoveDpcGang.c)
 *     MiStartDpcGang @ 0x1402E897C (MiStartDpcGang.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, char a2, __int64 *a3)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 result; // rax
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  unsigned int VadLargePageIndex; // eax
  unsigned __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int8 v21; // r11
  unsigned int v22; // r14d
  _QWORD *i; // rax
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rbx
  unsigned int v26; // edi
  __int64 v27; // rcx
  unsigned __int8 v28; // r8
  unsigned __int64 LeafVa; // rax
  __int64 v30; // r10
  unsigned int inited; // eax
  int v32; // [rsp+28h] [rbp-D8h]
  __int64 PteAddress; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+48h] [rbp-B8h]
  _KPROCESS *Process; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38[5]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v39[38]; // [rsp+90h] [rbp-70h] BYREF

  memset(v38, 0, 0x20uLL);
  memset(v39, 0, sizeof(v39));
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v7 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) + 1;
  v36 = v7;
  v37 = (v7 - v6) >> 12;
  v8 = MiComputePreferredNode(a1);
  MiInitializeDpcGang((__int64)v39, v8, 0);
  HIDWORD(v39[13]) |= 0x40u;
  v39[1] = Process;
  result = MiCreateLargePfnList(a1, v37, a2, a3, v38);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)MiGetVadPageSize(a1) == 16 )
    {
      v10 = 2;
      v11 = 2;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 )
      {
        VadLargePageIndex = MiGetVadLargePageIndex(a1);
        v10 = VadLargePageIndex;
      }
      else
      {
        v10 = 1;
        VadLargePageIndex = MiGetLargestPageIndex();
      }
      v11 = VadLargePageIndex;
    }
    v34 = v6;
    PteAddress = MiGetPteAddress(v6);
    if ( v6 < v7 )
    {
      do
      {
        v14 = v11;
        if ( v11 <= v10 )
        {
          while ( 1 )
          {
            v15 = MiLargePageSizes[v14] << 12;
            if ( !(v13 % v15) && v7 - v13 >= v15 )
              break;
            if ( ++v14 > v10 )
              goto LABEL_20;
          }
          LODWORD(v16) = v14;
          if ( !v38[v14] )
          {
            while ( 1 )
            {
              v16 = (unsigned int)(v16 + 1);
              if ( (unsigned int)v16 > v10 )
                break;
              if ( v38[v16] )
                goto LABEL_17;
            }
LABEL_19:
            MiDemotePfnListChain((__int64)v38, v14);
            goto LABEL_20;
          }
LABEL_17:
          if ( (unsigned int)v16 > v10 )
            goto LABEL_19;
          v14 = v16;
        }
LABEL_20:
        v17 = v14;
        v18 = (__int64 *)v38[v14];
        v38[v14] = MiGetPfnLink((__int64)v18);
        v19 = MiLargePageSizes[v14];
        MiLockPage(v20);
        v18[1] = (PteAddress | v17) & 0x7FFFFFFFFFFFFFFFLL;
        MiInsertDpcGang((__int64)v39, v18);
        MiUnlockPage((__int64)v18, v21);
        v7 = v36;
        v13 = (v19 << 12) + v34;
        PteAddress += 8 * v19;
        v34 = v13;
      }
      while ( v13 < v36 );
    }
    MiStartDpcGang((__int64)v39);
    v22 = MmMakeProtectNotWriteCopy[(*(_DWORD *)(a1 + 48) >> 7) & 0x1F];
    for ( i = MiRemoveDpcGang((unsigned __int16 *)v39); ; i = MiRemoveDpcGang((unsigned __int16 *)v39) )
    {
      v24 = i;
      if ( !i )
        break;
      v25 = i[1] | 0x8000000000000000uLL;
      v26 = MiFreeZeroPageSizeIndex((__int64)i);
      MiLockPage((__int64)v24);
      *v24 = 0LL;
      MiSetLeafPfnBuddy(v24, (unsigned __int64)Process);
      MiUnlockPage(v27, v28);
      LeafVa = MiGetLeafVa(v25);
      MiInsertLargeUserMapping(a1, LeafVa, v30, v26, v22, v32, 0);
    }
    MiEndDpcGang((__int64)v39);
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
    {
      inited = MiInitPerfMemoryFlags(1, 13);
      MiLogPerfMemoryRangeEvent(v6, (__int64)Process, inited, v37);
    }
    return 0LL;
  }
  return result;
}
