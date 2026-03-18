/*
 * XREFs of MiGetLargePagesForSystemMapping @ 0x14088B1F8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiObtainSystemCharges @ 0x1400973CC (MiObtainSystemCharges.c)
 *     MiReturnSystemCharges @ 0x140125BB4 (MiReturnSystemCharges.c)
 *     MiThreadIdealNode @ 0x1402D1B5C (MiThreadIdealNode.c)
 *     MiAllocateLargeZeroPages @ 0x140898C74 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiGetLargePagesForSystemMapping(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 PteAddress; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  int v9; // r9d
  __int64 v10; // rbp
  int v11; // r12d
  unsigned __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // r15d
  int *v17; // r14
  int *v18; // r13

  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v3);
  v7 = v6 & (PteAddress + 8);
  if ( v5 >= v7 )
    return 1LL;
  v9 = *(_DWORD *)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v12 = (__int64)(v7 - v5) >> 3;
  if ( (v9 & 8) == 0 && *(_QWORD *)(v10 + 8552) )
  {
    result = MiObtainSystemCharges(*(_QWORD *)(a1 + 32), v12, *(_DWORD *)(a1 + 56));
    if ( !(_DWORD)result )
      return result;
    *(_QWORD *)(a1 + 40) += v12;
    v11 = 1;
    v9 = *(_DWORD *)(a1 + 64);
  }
  v13 = *(_DWORD *)(a1 + 60);
  if ( v13 )
    v14 = v13 - 1;
  else
    v14 = MiThreadIdealNode();
  v15 = (unsigned __int16)KeNumberNodes;
  if ( (v9 & 0x400) != 0 )
    v15 = 1LL;
  v16 = 0;
  v17 = (int *)(qword_140465750 + 4LL * v14 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v18 = &v17[v15];
  while ( 1 )
  {
    v12 -= MiAllocateLargeZeroPages(v10, v12, 512, 512, v14, 4, a1, 1);
    if ( !v12 )
      break;
    if ( ++v17 == v18 )
      goto LABEL_17;
    v14 = *v17;
  }
  v16 = 1;
LABEL_17:
  if ( v11 )
  {
    if ( v12 )
    {
      MiReturnCommit(v10, v12);
      MiReturnSystemCharges(v10, v12, *(_DWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 40) -= v12;
    }
  }
  return v16;
}
