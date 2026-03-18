/*
 * XREFs of MiReleaseFaultSynchronization @ 0x1402D3010
 * Callers:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x1402D2608 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiUnlockSystemVa @ 0x1400A15F4 (MiUnlockSystemVa.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiReleaseFaultSynchronization(__int64 a1)
{
  __int64 v2; // xmm1_8
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD v5[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x10) == 0 )
    return MiReleaseFaultState(a1 + 56, 17, 0LL);
  memset(v5, 0, 0x80uLL);
  v2 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)&v5[3] = *(_OWORD *)(a1 + 56);
  v5[5] = v2;
  result = MiUnlockSystemVa((__int64)v5, v3);
  *(_DWORD *)(a1 + 80) &= ~0x10u;
  return result;
}
