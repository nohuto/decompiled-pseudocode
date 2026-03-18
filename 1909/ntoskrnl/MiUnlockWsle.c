/*
 * XREFs of MiUnlockWsle @ 0x14001FE74
 * Callers:
 *     MiUnlockVa @ 0x14001F824 (MiUnlockVa.c)
 *     MiTerminateWsle @ 0x14004B1E0 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x140020F18 (MiUnlockPageTableCharges.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiSetVaAgeList @ 0x1400A55E0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx

  v3 = *(_QWORD *)(a3 + 40);
  if ( (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v12 = *(_QWORD *)(qword_140465E88 + 8 * ((v3 >> 40) & 0x3FF));
    MiReturnCommit(v12, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v12 + 8576));
  }
  MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  v8 = (unsigned __int8)v8;
  if ( EffectivePagePriorityThread < 5 )
    v8 = 7LL;
  MiSetVaAgeList(a1, a2, 1LL, v8);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v10 = *(_QWORD *)(a3 + 40);
    if ( (v10 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v10 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v11 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
