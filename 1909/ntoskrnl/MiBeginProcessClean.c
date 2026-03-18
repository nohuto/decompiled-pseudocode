/*
 * XREFs of MiBeginProcessClean @ 0x14008CD24
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiOutlawInswaps @ 0x14008CC90 (MiOutlawInswaps.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406ED9BC (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx

  v2 = a2 + 1280;
  if ( (*(_DWORD *)(a2 + 780) & 0x20) != 0 )
    return 1LL;
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 880, 0LL);
  *(_BYTE *)(a1 + 1768) |= 1u;
  SharedVm = MiGetSharedVm(v2);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v10 = 0;
  SharedVm[1] = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 780), 0x20u);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 187) &= 0x9Fu;
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive(v2, v7, v8, v9);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v11 = MiOutlawInswaps(a2);
  v12 = v11;
  if ( v11 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a2 + 1454)), v11);
  LOBYTE(v10) = v12 != 0;
  return v10;
}
