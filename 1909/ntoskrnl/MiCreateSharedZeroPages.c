/*
 * XREFs of MiCreateSharedZeroPages @ 0x1400DD580
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400ACCF0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiInitializePfn @ 0x1400DD7F0 (MiInitializePfn.c)
 *     MiSharedVaToPartition @ 0x1400DDB3C (MiSharedVaToPartition.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiAdvanceFaultList @ 0x140124668 (MiAdvanceFaultList.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x1402E0684 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(__int64 a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rdi
  __int64 v4; // rsi
  __int64 v6; // r12
  _DWORD *v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 PageChain; // r15
  unsigned int v11; // r13d
  unsigned __int64 v12; // r12
  unsigned int i; // ebp
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 ClusterPage; // rax
  bool v24; // zf
  unsigned int v25; // eax
  char v26; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 *v27; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A0h] [rbp+18h]
  _QWORD *v29; // [rsp+A8h] [rbp+20h]

  v27 = a2;
  v2 = *(_DWORD **)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v2;
  v8 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v21 = *(unsigned int *)(v4 + 48);
    if ( (v21 & 0x100000) == 0 && MiVadPageSizes[(v21 >> 18) & 3] == 16 )
    {
      ClusterPage = MiGetClusterPage(v4, v6, *a2, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 36), (__int64)&v26);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v24 = v26 == 1;
          *a2 = 1LL;
          if ( v24 )
            *(_DWORD *)a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v25 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *(_QWORD *)(a1 + 16) = v6;
          v2 -= 2 * (v25 & 0xF);
        }
        goto LABEL_3;
      }
      v7 = *(_DWORD **)(a1 + 24);
      *a2 = 1LL;
    }
  }
  v9 = MiSharedVaToPartition(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), v6, v7);
  PageChain = MiGetPageChain(v9, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), *(_DWORD *)(a1 + 48), v8, 258, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_3:
  v11 = 0;
  v29 = *(_QWORD **)(a1 + 56);
  if ( v4 )
  {
    v22 = *(unsigned int *)(v4 + 52);
    LODWORD(v22) = v22 & 0x7FFFFFFF;
    if ( (v22 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
      v11 = 64;
  }
  v12 = v6 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; i < *v27; ++i )
  {
    v14 = PageChain;
    v15 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v28 = PageChain;
    if ( v15 == 0xFFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v15 - 0x58000000000LL;
    v16 = (v14 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero((v14 + 0x58000000000LL) / 48);
      v14 = v28;
    }
    v17 = (*v2 >> 5) & 0x1F;
    if ( v17 == 24 )
      v17 = 1;
    v11 |= 0x112u;
    if ( (*(_DWORD *)a1 & 4) != 0 || ((v17 - 4) & 0xFFFFFFFD) != 0 )
      v11 |= 0x20u;
    MiInitializePfn(v14, v2, v17, v11);
    MiMakeValidPte((unsigned __int64)v2, v16, v17 | 0x20000000);
    if ( MiPteInShadowRange((unsigned __int64)v2) )
    {
      if ( (unsigned int)MiPteHasShadow(v19) )
      {
        if ( !HIBYTE(word_1404658EC) && (v18 & 1) != 0 )
          v18 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v18;
        MiWritePteShadow(v2, v18);
        goto LABEL_14;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v18 & 1) != 0 )
      {
        v18 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v2 = v18;
LABEL_14:
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      MiLockAndDecrementShareCount(v28, 0LL);
      if ( v29 )
      {
        if ( (*(_DWORD *)a1 & 8) == 0 && v12 == *(_QWORD *)(v29[1] + 16LL * v29[3]) + (v29[4] << 12) )
          MiAdvanceFaultList(v29);
      }
    }
    v12 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}
