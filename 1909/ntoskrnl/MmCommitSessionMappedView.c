/*
 * XREFs of MmCommitSessionMappedView @ 0x1406D3B60
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiLocatePagefileSubsection @ 0x1400710EC (MiLocatePagefileSubsection.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 PteAddress; // r14
  __int64 v9; // r14
  _QWORD *i; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  unsigned int *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 *v17; // r10
  unsigned __int64 v18; // rcx
  int v19; // eax
  volatile signed __int64 *v20; // rdi
  int v21; // r14d
  char v22; // bl
  volatile signed __int64 *v24; // rdi
  unsigned int v25; // ebx
  volatile signed __int64 *v26; // rdi
  unsigned __int64 v27; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)MiGetSystemRegionType(a1) != 1 )
    return 3221225711LL;
  if ( a1 + v2 <= a1 || (unsigned int)MiGetSystemRegionType(a1 + v2 - 1) != 1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225497LL;
  v6 = Process[1].ActiveProcessors.Bitmap[1];
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  PteAddress = MiGetPteAddress(v3 | 0xFFF);
  v9 = ((PteAddress - MiGetPteAddress(v7)) >> 3) + 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(v6 + 200), 0LL);
  for ( i = *(_QWORD **)(v6 + 208); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, v7, 2uLL, 0LL, 0LL);
      v11 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v7 < v11 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( v7 >= v11 )
      break;
  }
  v12 = i[6];
  if ( *(_QWORD *)(*(_QWORD *)v12 + 64LL) )
  {
    v24 = *(volatile signed __int64 **)(v6 + 200);
    if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24);
    KeAbPostRelease((ULONG_PTR)v24);
    v25 = -1073741791;
    goto LABEL_28;
  }
  v13 = (unsigned int *)(*(_QWORD *)v12 + 128LL);
  v27 = i[3] + ((v7 - (i[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v14 = MiLocatePagefileSubsection(v13, &v27);
  if ( !v14 )
  {
LABEL_25:
    v26 = *(volatile signed __int64 **)(v6 + 200);
    if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    KeAbPostRelease((ULONG_PTR)v26);
    v25 = -1073741584;
LABEL_28:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v25;
  }
  v15 = v14;
  v16 = v14[11];
  v17 = (__int64 *)(*((_QWORD *)v14 + 1) + 8 * v27);
  v18 = v9 + v27;
  v27 = v18;
  if ( v18 > v16 )
  {
    do
    {
      v15 = (unsigned int *)*((_QWORD *)v15 + 2);
      v18 -= (unsigned int)v16;
      v27 = v18;
      if ( !v15 )
        goto LABEL_25;
      LODWORD(v16) = v15[11];
    }
    while ( v18 > (unsigned int)v16 );
  }
  v19 = MiChargeSegmentCommit((__int64 *)v14, v17, v9);
  v20 = *(volatile signed __int64 **)(v6 + 200);
  v21 = v19;
  v22 = _InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
    ExfTryToWakePushLock(v20);
  KeAbPostRelease((ULONG_PTR)v20);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v21 == 0 ? 0xC000012D : 0;
}
