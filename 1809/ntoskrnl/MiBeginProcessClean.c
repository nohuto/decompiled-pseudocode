/*
 * XREFs of MiBeginProcessClean @ 0x140011D68
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiOutlawInswaps @ 0x140011E64 (MiOutlawInswaps.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406BA084 (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx

  v2 = a2 + 1280;
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
    return 1LL;
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1752) |= 1u;
  SharedVm = MiGetSharedVm(v2, v5);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v9 = 0;
  *(_DWORD *)(SharedVm + 4) = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x20u);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 187) &= 0x9Fu;
  LOBYTE(v8) = v7;
  MiUnlockWorkingSetExclusive(v2, v8);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v10 = MiOutlawInswaps(a2);
  v11 = v10;
  if ( v10 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a2 + 1454)), v10);
  LOBYTE(v9) = v11 != 0;
  return v9;
}
