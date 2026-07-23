/*
 * XREFs of NtCallEnclave @ 0x1401CC6C0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401D6700 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 */

NTSTATUS __cdecl NtCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  char v16; // [rsp+20h] [rbp-8h]
  char v17; // [rsp+50h] [rbp+28h]

  *(_DWORD *)(v4 - 72) = 0;
  *(_DWORD *)(v4 - 64) = 0;
  *(_DWORD *)(v4 - 56) = 0;
  *(_DWORD *)(v4 - 48) = 0;
  *(_DWORD *)(v4 - 40) = 0;
  *(_DWORD *)(v4 - 32) = 0;
  *(_OWORD *)(v4 - 16) = 0LL;
  *(_OWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_OWORD *)(v4 + 32) = 0LL;
  *(_OWORD *)(v4 + 48) = 0LL;
  *(_OWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 - 80) = PsCallEnclave(Routine, Reserved, Flags, RoutineParamReturn);
  _disable();
  if ( (*(_BYTE *)(v4 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v4 - 84));
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
    KiRestoreSetContextState((__int64)CurrentThread, v5, v6, v7, v16);
  v9 = KeGetCurrentThread();
  if ( (v9->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v9->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v9 = KeGetCurrentThread();
    }
    if ( (v9->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v9) = 1;
      KiUmsExit(v9);
    }
  }
  _mm_setcsr(*(_DWORD *)(v4 - 84));
  if ( *(_WORD *)(v4 + 128) )
    KiRestoreDebugRegisterState();
  v10 = *(_QWORD *)(v4 - 48);
  v11 = *(_QWORD *)(v4 - 56);
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
  return KiKernelExit(*(_QWORD *)(v4 - 72), *(_QWORD *)(v4 - 64), v11, v10, v17);
}
