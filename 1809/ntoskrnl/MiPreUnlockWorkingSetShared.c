/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x140130D18
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReduceWs @ 0x140130E6C (MiReduceWs.c)
 *     MiForcedTrim @ 0x14013F310 (MiForcedTrim.c)
 *     MiForceAgeWorkingSet @ 0x1402B3310 (MiForceAgeWorkingSet.c)
 */

char __fastcall MiPreUnlockWorkingSetShared(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ecx
  int v6; // eax
  LONG *v7; // rax
  LONG *v8; // rax
  __int64 v9; // rdx
  LONG *SharedVm; // rax
  LONG *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  LONG *v16; // rax
  LONG *v17; // rax
  __int64 v18; // rdx

  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)(a1 + 184);
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
  if ( (v6 & 0x400000) == 0 )
  {
    if ( (v4 & 0x8000000) != 0 )
    {
      SharedVm = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel(SharedVm + 10);
      *(_BYTE *)(a1 + 187) &= ~8u;
      v11 = MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel(v11 + 10);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v12) = a2;
      if ( !MiForcedTrim(a1, v12) && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 120);
        if ( v14 > *(_QWORD *)(a1 + 152) )
        {
          LOBYTE(v13) = a2;
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
            v15 = v14 - 1;
          else
            v15 = *(_QWORD *)(a1 + 152);
          MiReduceWs(a1, v13, v15);
        }
      }
    }
    LOBYTE(v6) = *(_BYTE *)(a1 + 187);
    if ( (v6 & 4) != 0 )
    {
      v16 = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel(v16 + 10);
      *(_BYTE *)(a1 + 187) &= ~4u;
      v17 = MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel(v17 + 10);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v18) = a2;
      MiForceAgeWorkingSet(a1, v18);
      LOBYTE(v6) = *(_BYTE *)(a1 + 187);
    }
    if ( (v6 & 0x10) != 0 )
    {
      v7 = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel(v7 + 10);
      *(_BYTE *)(a1 + 187) &= ~0x10u;
      v8 = MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel(v8 + 10);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v9) = a2;
      LOBYTE(v6) = MiReduceWs(a1, v9, *(_QWORD *)(a1 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return v6;
}
