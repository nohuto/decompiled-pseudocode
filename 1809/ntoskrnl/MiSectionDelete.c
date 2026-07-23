/*
 * XREFs of MiSectionDelete @ 0x1405F1440
 * Callers:
 *     <none>
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x14007644C (MiDereferenceControlAreaBySection.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiLogSectionObjectEvent @ 0x14084FAC8 (MiLogSectionObjectEvent.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // edx
  struct _KTHREAD *CurrentThread; // rbp

  v2 = *(_WORD *)(a1 + 58) & 1;
  v3 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v5 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439C90, 0LL);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140439C88, (unsigned __int64 *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439C90);
    KeAbPostRelease((ULONG_PTR)&qword_140439C90);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( (v6 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v6 & 0xFFFFFFFFFFFFFFFCuLL));
  v7 = *(_DWORD *)(v3 + 56);
  if ( (v7 & 0x20) == 0 && (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 && *(_QWORD *)(v3 + 64) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 92), 0xFFFFFFFF);
    v7 = *(_DWORD *)(v3 + 56);
  }
  if ( (v7 & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v3);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v3 + 64) )
    MiLogSectionObjectEvent(a1, 0LL, v4);
  return MiDereferenceControlAreaBySection(v3, v2);
}
