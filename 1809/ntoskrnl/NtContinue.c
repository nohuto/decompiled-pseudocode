/*
 * XREFs of NtContinue @ 0x1401BC450
 * Callers:
 *     <none>
 * Callees:
 *     KiContinueEx @ 0x1400A2480 (KiContinueEx.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     NtContinue @ 0x1401BC450 (NtContinue.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __stdcall NtContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v12; // cf
  _QWORD v15[32]; // [rsp-298h] [rbp-3D0h] BYREF
  __int64 v16; // [rsp-198h] [rbp-2D0h]
  __int64 v17; // [rsp-190h] [rbp-2C8h]
  __int64 v18; // [rsp-188h] [rbp-2C0h]
  __int64 v19; // [rsp-180h] [rbp-2B8h]
  __int64 v20; // [rsp-178h] [rbp-2B0h]
  __int64 v21; // [rsp-170h] [rbp-2A8h]
  __int64 v22; // [rsp-168h] [rbp-2A0h]
  __int64 v23; // [rsp-160h] [rbp-298h]
  __int64 v24; // [rsp-158h] [rbp-290h]
  __int64 v25; // [rsp-150h] [rbp-288h]
  __int64 v26; // [rsp-148h] [rbp-280h]
  __int64 v27; // [rsp-140h] [rbp-278h]
  __int64 v28; // [rsp-138h] [rbp-270h]
  __int64 v29; // [rsp-130h] [rbp-268h]
  __int64 v30; // [rsp-128h] [rbp-260h]
  __int64 v31; // [rsp-120h] [rbp-258h]
  __int64 v32; // [rsp-118h] [rbp-250h]
  __int64 v33; // [rsp-110h] [rbp-248h]
  __int64 v34; // [rsp-108h] [rbp-240h]
  __int64 v35; // [rsp-100h] [rbp-238h]
  __int64 v36; // [rsp-F8h] [rbp-230h]
  char v38; // [rsp+160h] [rbp+28h]

  v3 = *(_QWORD *)(v2 + 192);
  v4 = *(_QWORD *)(v2 + 200);
  v5 = *(_QWORD *)(v2 + 208);
  *(_QWORD *)(v2 - 80) = 0LL;
  v16 = v3;
  v17 = v4;
  v18 = v5;
  result = KiContinueEx((unsigned __int64)Context, TestAlert, (unsigned __int64)v15, (_KTRAP_FRAME *)(v2 - 128));
  if ( result > 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v2 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v2 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v2 - 84));
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
    v8 = KeGetCurrentThread();
    if ( (v8->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v8->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v8 = KeGetCurrentThread();
      }
      if ( (v8->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v8) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v2 - 84));
    if ( *(_WORD *)(v2 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v2 - 48);
    v10 = *(_QWORD *)(v2 - 56);
    __writegsbyte(0x856u, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x864u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v12 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
    if ( v12 )
      __writemsr(0x49u, 1uLL);
    v12 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
    if ( v12 )
    {
      v15[21] = 0x1401BC693LL;
      v36 = 0x1401BC7AALL;
      v35 = 0x1401BC7A1LL;
      v34 = 0x1401BC798LL;
      v33 = 0x1401BC78FLL;
      v32 = 0x1401BC786LL;
      v31 = 0x1401BC77DLL;
      v30 = 0x1401BC774LL;
      v29 = 0x1401BC76BLL;
      v28 = 0x1401BC762LL;
      v27 = 0x1401BC759LL;
      v26 = 0x1401BC750LL;
      v25 = 0x1401BC747LL;
      v24 = 0x1401BC73ELL;
      v23 = 0x1401BC735LL;
      v22 = 0x1401BC72CLL;
      v21 = 0x1401BC723LL;
      v20 = 0x1401BC71ALL;
      v19 = 0x1401BC711LL;
      v18 = 0x1401BC708LL;
      v17 = 0x1401BC6FFLL;
      v16 = 0x1401BC6F6LL;
      v15[31] = 0x1401BC6EDLL;
      v15[30] = 0x1401BC6E4LL;
      v15[29] = 0x1401BC6DBLL;
      v15[28] = 0x1401BC6D2LL;
      v15[27] = 0x1401BC6C9LL;
      v15[26] = 0x1401BC6C0LL;
      v15[25] = 0x1401BC6B7LL;
      v15[24] = 0x1401BC6AELL;
      v15[23] = 0x1401BC6A5LL;
      v15[22] = 0x1401BC69CLL;
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
    return KiKernelExit(*(_QWORD *)(v2 - 72), *(_QWORD *)(v2 - 64), v10, v9, v38);
  }
  return result;
}
