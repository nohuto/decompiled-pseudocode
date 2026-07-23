/*
 * XREFs of MmStoreProbeAndLockPages @ 0x140153E74
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14014B298 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x140094BAC (MiProbeLeafFrame.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     MiStoreMarkLockedPagesModified @ 0x140153FD0 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x1401542C0 (MiUnlockStoreLockedPages.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v4; // eax
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rbx
  _QWORD *v12; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-59h]
  unsigned __int64 v16; // [rsp+60h] [rbp-51h]
  _QWORD *v17; // [rsp+78h] [rbp-39h]
  __int64 v18; // [rsp+C8h] [rbp+17h]
  int v19; // [rsp+120h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v5 = v4 & 0xFFFFFFF3 | 8;
  else
    v5 = v4 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v5;
  MiProbeAndLockPrepare(
    (__int64)BugCheckParameter3,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(_DWORD *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v6 = v17;
  do
  {
    *v6 = -1LL;
    v7 = MiProbeLeafFrame(BugCheckParameter3);
    v10 = v7;
    if ( v7 == -1073741801 )
      break;
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v7, BugCheckParameter3[0], BugCheckParameter4);
    v11 = 48 * v18 - 0x58000000000LL;
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19, v8, v9);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v11 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v11, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = v17;
    BugCheckParameter3[0] += 4096LL;
    *v17 = v18;
    v6 = v12 + 1;
    v17 = v6;
    v15 += 8LL;
  }
  while ( v15 <= v16 );
  MiUnlockProbePacketWorkingSet((__int64)BugCheckParameter3);
  if ( v10 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v10;
}
