/*
 * XREFs of MiReleaseFaultSynchronization @ 0x1402BC8BC
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x1402BBFF4 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiReleaseFaultSynchronization(__int64 a1)
{
  __int64 v2; // xmm1_8
  __int64 result; // rax
  _QWORD v4[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x10) == 0 )
    return MiReleaseFaultState((__int64 *)(a1 + 56), 17, 0LL);
  memset(v4, 0, 0x80uLL);
  v2 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)&v4[3] = *(_OWORD *)(a1 + 56);
  v4[5] = v2;
  result = MiUnlockSystemVa((__int64)v4);
  *(_DWORD *)(a1 + 80) &= ~0x10u;
  return result;
}
