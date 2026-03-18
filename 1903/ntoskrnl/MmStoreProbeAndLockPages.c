/*
 * XREFs of MmStoreProbeAndLockPages @ 0x140157AA0
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140147EAC (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MiReferencePageForModifiedWrite @ 0x1400A469C (MiReferencePageForModifiedWrite.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400EF004 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x1400F0464 (MiProbeLeafFrame.c)
 *     MiStoreMarkLockedPagesModified @ 0x140157C10 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140157F98 (MiUnlockStoreLockedPages.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // eax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  int v8; // eax
  int v9; // edi
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rcx
  ULONG_PTR BugCheckParameter3[22]; // [rsp+48h] [rbp-69h] BYREF
  int v14; // [rsp+120h] [rbp+6Fh] BYREF

  memset(BugCheckParameter3, 0, 0xA8uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v6 = v5 & 0xFFFFFFF3 | 8;
  else
    v6 = v5 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6;
  MiProbeAndLockPrepare(
    (__int64)BugCheckParameter3,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(_DWORD *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v7 = (_QWORD *)BugCheckParameter3[6];
  do
  {
    *v7 = -1LL;
    v8 = MiProbeLeafFrame(BugCheckParameter3);
    v9 = v8;
    if ( v8 == -1073741801 )
      break;
    if ( v8 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v8, BugCheckParameter3[0], BugCheckParameter4);
    v10 = 48 * BugCheckParameter3[16] - 0x58000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v10, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v11 = BugCheckParameter3[6];
    BugCheckParameter3[0] += 4096LL;
    *(_QWORD *)BugCheckParameter3[6] = BugCheckParameter3[16];
    v7 = (_QWORD *)(v11 + 8);
    BugCheckParameter3[6] = (ULONG_PTR)v7;
    BugCheckParameter3[2] += 8LL;
  }
  while ( BugCheckParameter3[2] <= BugCheckParameter3[3] );
  MiUnlockProbePacketWorkingSet((__int64)BugCheckParameter3);
  if ( v9 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v9;
}
