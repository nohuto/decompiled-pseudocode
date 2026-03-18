/*
 * XREFs of NtRaiseException @ 0x1401BC6F0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BD0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC070 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x1401BC6F0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401BCD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1060 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401D0F00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140295DC0 (KiCopyCounters.c)
 *     KiRaiseException @ 0x14029A0B0 (KiRaiseException.c)
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
      v13[21] = 0x1401BC928LL;
      v13[52] = 0x1401BCA3FLL;
      v13[51] = 0x1401BCA36LL;
      v13[50] = 0x1401BCA2DLL;
      v13[49] = 0x1401BCA24LL;
      v13[48] = 0x1401BCA1BLL;
      v13[47] = 0x1401BCA12LL;
      v13[46] = 0x1401BCA09LL;
      v13[45] = 0x1401BCA00LL;
      v13[44] = 0x1401BC9F7LL;
      v13[43] = 0x1401BC9EELL;
      v13[42] = 0x1401BC9E5LL;
      v13[41] = 0x1401BC9DCLL;
      v13[40] = 0x1401BC9D3LL;
      v13[39] = 0x1401BC9CALL;
      v13[38] = 0x1401BC9C1LL;
      v13[37] = 0x1401BC9B8LL;
      v13[36] = 0x1401BC9AFLL;
      v13[35] = 0x1401BC9A6LL;
      v13[34] = 0x1401BC99DLL;
      v13[33] = 0x1401BC994LL;
      v13[32] = 0x1401BC98BLL;
      v13[31] = 0x1401BC982LL;
      v13[30] = 0x1401BC979LL;
      v13[29] = 0x1401BC970LL;
      v13[28] = 0x1401BC967LL;
      v13[27] = 0x1401BC95ELL;
      v13[26] = 0x1401BC955LL;
      v13[25] = 0x1401BC94CLL;
      v13[24] = 0x1401BC943LL;
      v13[23] = 0x1401BC93ALL;
      v13[22] = 0x1401BC931LL;
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
