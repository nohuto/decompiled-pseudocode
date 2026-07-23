/*
 * XREFs of MiGetLargePagesForSystemMapping @ 0x1408531D0
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiObtainSystemCharges @ 0x140026DC8 (MiObtainSystemCharges.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiReturnSystemCharges @ 0x1401208A4 (MiReturnSystemCharges.c)
 *     MiThreadIdealNode @ 0x1402BBA5C (MiThreadIdealNode.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 */

void __fastcall MiGetLargePagesForSystemMapping(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 PteAddress; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // r14d
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // r8d
  unsigned __int16 *v14; // rsi
  unsigned __int16 *v15; // r15

  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v3);
  v7 = v6 & (PteAddress + 8);
  if ( v5 < v7 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    v10 = (__int64)(v7 - v5) >> 3;
    if ( (*(_DWORD *)(a1 + 56) & 8) == 0 && *(_QWORD *)(v8 + 7784) )
    {
      if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 24), v10, *(_DWORD *)(a1 + 48)) )
        return;
      *(_QWORD *)(a1 + 32) += v10;
      v9 = 1;
    }
    v11 = *(_DWORD *)(a1 + 52);
    if ( v11 )
      v12 = v11 - 1;
    else
      v12 = MiThreadIdealNode();
    v13 = (unsigned __int16)KeNumberNodes;
    v14 = (unsigned __int16 *)((char *)qword_14043B110 + 2 * v12 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v15 = &v14[(unsigned __int16)KeNumberNodes];
    while ( 1 )
    {
      v10 -= MiAllocateLargeZeroPages(v8, v10, v13, v12, 4, a1, 3);
      if ( !v10 )
        break;
      if ( ++v14 == v15 )
        break;
      v12 = *v14;
    }
    if ( v9 )
    {
      if ( v10 )
      {
        MiReturnCommit(v8, v10);
        MiReturnSystemCharges(v8, v10, *(_DWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 32) -= v10;
      }
    }
  }
}
