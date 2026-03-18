/*
 * XREFs of KxStartUserThread @ 0x1401CBF90
 * Callers:
 *     KyStartUserThread @ 0x1401CBCC0 (KyStartUserThread.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiUmsExit @ 0x1401D7300 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

__int64 __fastcall KxStartUserThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  void (__fastcall *v17)(); // [rsp+10h] [rbp-128h]
  char v18; // [rsp+20h] [rbp-118h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  __writecr8(1uLL);
  v17();
  _disable();
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
  {
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
  }
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
    KiUpdateStibpPairing(0LL);
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)CurrentThread, v6, v7, v8, v18);
  v10 = KeGetCurrentThread();
  if ( (v10->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v10->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v10 = KeGetCurrentThread();
    }
    if ( (v10->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v10) = 1;
      KiUmsExit(v10);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v11 = *(_QWORD *)(v5 - 48);
  v12 = *(_QWORD *)(v5 - 56);
  __writegsbyte(0x853u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  if ( _bittestandreset16(MK_FP(__GS__, 632LL), 2u) )
    __writemsr(0x49u, 1uLL);
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v12, v11, a5);
}
