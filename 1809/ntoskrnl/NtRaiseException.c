/*
 * XREFs of NtRaiseException @ 0x1401BC870
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x1401BC870 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 *     KiRaiseException @ 0x14029A3A0 (KiRaiseException.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __stdcall NtRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  __int64 v3; // rbp
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v10; // cf
  _QWORD v13[87]; // [rsp-298h] [rbp-3D0h] BYREF
  char v15; // [rsp+160h] [rbp+28h]

  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 232);
  result = KiRaiseException((_DWORD)ExceptionRecord, (_DWORD)Context, (unsigned int)v13, (int)v3 - 128, SearchFrames);
  if ( !result )
  {
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v3 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v3 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v3 - 84));
      __asm { iretq }
    }
    while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
    {
      __writecr8(1uLL);
      _enable();
      KiInitiateUserApc();
      _disable();
      __writecr8(0LL);
    }
    if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 20) & 2) != 0 )
      ((void (__fastcall *)(_QWORD))KiUpdateStibpPairing)(0LL);
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      ((void (*)(void))KiRestoreSetContextState)();
    v6 = KeGetCurrentThread();
    if ( (v6->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v6->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v6 = KeGetCurrentThread();
      }
      if ( (v6->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v6) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v6);
      }
    }
    _mm_setcsr(*(_DWORD *)(v3 - 84));
    if ( *(_WORD *)(v3 + 128) )
      KiRestoreDebugRegisterState();
    v7 = *(_QWORD *)(v3 - 48);
    v8 = *(_QWORD *)(v3 - 56);
    __writegsbyte(0x856u, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x864u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v10 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
    if ( v10 )
      __writemsr(0x49u, 1uLL);
    v10 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
    if ( v10 )
    {
      v13[21] = 0x1401BCAA8LL;
      v13[52] = 0x1401BCBBFLL;
      v13[51] = 0x1401BCBB6LL;
      v13[50] = 0x1401BCBADLL;
      v13[49] = 0x1401BCBA4LL;
      v13[48] = 0x1401BCB9BLL;
      v13[47] = 0x1401BCB92LL;
      v13[46] = 0x1401BCB89LL;
      v13[45] = 0x1401BCB80LL;
      v13[44] = 0x1401BCB77LL;
      v13[43] = 0x1401BCB6ELL;
      v13[42] = 0x1401BCB65LL;
      v13[41] = 0x1401BCB5CLL;
      v13[40] = 0x1401BCB53LL;
      v13[39] = 0x1401BCB4ALL;
      v13[38] = 0x1401BCB41LL;
      v13[37] = 0x1401BCB38LL;
      v13[36] = 0x1401BCB2FLL;
      v13[35] = 0x1401BCB26LL;
      v13[34] = 0x1401BCB1DLL;
      v13[33] = 0x1401BCB14LL;
      v13[32] = 0x1401BCB0BLL;
      v13[31] = 0x1401BCB02LL;
      v13[30] = 0x1401BCAF9LL;
      v13[29] = 0x1401BCAF0LL;
      v13[28] = 0x1401BCAE7LL;
      v13[27] = 0x1401BCADELL;
      v13[26] = 0x1401BCAD5LL;
      v13[25] = 0x1401BCACCLL;
      v13[24] = 0x1401BCAC3LL;
      v13[23] = 0x1401BCABALL;
      v13[22] = 0x1401BCAB1LL;
    }
    if ( (KiKvaShadow & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
        __asm { verw    [rsp-298h+arg_2B0] }
      __asm
      {
        swapgs
        iretq
      }
    }
    return KiKernelExit(*(_QWORD *)(v3 - 72), *(_QWORD *)(v3 - 64), v8, v7, v15);
  }
  return result;
}
