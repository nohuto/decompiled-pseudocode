/*
 * XREFs of MiUnlockWsle @ 0x14001A18C
 * Callers:
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x14007AC90 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 *     MiUnlockVa @ 0x14015E1A0 (MiUnlockVa.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int EffectivePagePriorityThread; // eax
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbx

  v3 = *(_QWORD *)(a3 + 40);
  if ( (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v15 = *(_QWORD *)(qword_14043B808 + 8 * ((v3 >> 40) & 0x3FF));
    MiReturnCommit(v15, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v15 + 7808));
  }
  v7 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOBYTE(v7) = (v7 & 0x20) == 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v8, v9, v7);
  v11 = (unsigned __int8)v11;
  if ( EffectivePagePriorityThread < 5 )
    v11 = 7LL;
  MiSetVaAgeList(a1, a2, 1LL, v11);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v13 = *(_QWORD *)(a3 + 40);
    if ( (v13 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v13 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v14 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
