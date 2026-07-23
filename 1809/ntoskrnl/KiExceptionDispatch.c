/*
 * XREFs of KiExceptionDispatch @ 0x1401CFF80
 * Callers:
 *     KiDivideErrorFault @ 0x1401C8000 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401C8400 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1401C8CC0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1401C9000 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C99C0 (KiInvalidOpcodeFault.c)
 *     KiSegmentNotPresentFault @ 0x1401CABC0 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401CAF80 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1401CB2C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401CBDC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401CC180 (KiAlignmentFault.c)
 *     KiXmmException @ 0x1401CD140 (KiXmmException.c)
 *     KiRaiseAssertion @ 0x1401CE480 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1401CE7C0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1401CED40 (KiSystemCall32.c)
 *     KiSystemCall32Shadow @ 0x140330E00 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiUmsExceptionEntry @ 0x1401D1040 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiExceptionDispatch(int a1, unsigned int a2, void *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int128 v17; // xmm9
  __int128 v18; // xmm10
  __int128 v19; // xmm11
  __int128 v20; // xmm12
  __int128 v21; // xmm13
  __int128 v22; // xmm14
  __int128 v23; // xmm15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v32; // cf
  __int64 v36; // [rsp-338h] [rbp-510h] BYREF
  int v37; // [rsp-318h] [rbp-4F0h]
  int v38; // [rsp-310h] [rbp-4E8h]
  __int128 v39; // [rsp-308h] [rbp-4E0h]
  __int128 v40; // [rsp-2F8h] [rbp-4D0h]
  __int128 v41; // [rsp-2E8h] [rbp-4C0h]
  __int128 v42; // [rsp-2D8h] [rbp-4B0h]
  __int128 v43; // [rsp-2C8h] [rbp-4A0h]
  __int128 v44; // [rsp-2B8h] [rbp-490h]
  __int128 v45; // [rsp-2A8h] [rbp-480h]
  __int128 v46; // [rsp-298h] [rbp-470h]
  __int128 v47; // [rsp-288h] [rbp-460h]
  __int128 v48; // [rsp-278h] [rbp-450h]
  int v49; // [rsp-268h] [rbp-440h]
  int v50; // [rsp-260h] [rbp-438h]
  int v51; // [rsp-258h] [rbp-430h]
  int v52; // [rsp-250h] [rbp-428h]
  int v53; // [rsp-248h] [rbp-420h]
  int v54; // [rsp-240h] [rbp-418h]
  __int64 v55; // [rsp-238h] [rbp-410h]
  __int64 v56; // [rsp-230h] [rbp-408h]
  __int64 v57; // [rsp-228h] [rbp-400h]
  __int64 v58; // [rsp-220h] [rbp-3F8h]
  __int64 v59; // [rsp-218h] [rbp-3F0h]
  __int64 v60; // [rsp-210h] [rbp-3E8h]
  EXCEPTION_RECORD v61; // [rsp-200h] [rbp-3D8h] BYREF
  __int64 v62; // [rsp-168h] [rbp-340h]
  __int64 v63; // [rsp-160h] [rbp-338h]
  __int64 v64; // [rsp-158h] [rbp-330h]
  __int64 v65; // [rsp-150h] [rbp-328h]
  __int64 v66; // [rsp-148h] [rbp-320h]
  __int64 v67; // [rsp-140h] [rbp-318h]
  __int64 v68; // [rsp-138h] [rbp-310h]
  __int64 v69; // [rsp-130h] [rbp-308h]
  __int64 v70; // [rsp-128h] [rbp-300h]
  __int64 v71; // [rsp-120h] [rbp-2F8h]
  __int64 v72; // [rsp-118h] [rbp-2F0h]
  __int64 v73; // [rsp-110h] [rbp-2E8h]
  __int64 v74; // [rsp-108h] [rbp-2E0h]
  __int64 v75; // [rsp-100h] [rbp-2D8h]
  __int64 v76; // [rsp-F8h] [rbp-2D0h]

  v39 = v14;
  v40 = v15;
  v41 = v16;
  v42 = v17;
  v43 = v18;
  v44 = v19;
  v45 = v20;
  v46 = v21;
  v47 = v22;
  v48 = v23;
  v55 = v5;
  v56 = v7;
  v57 = v8;
  v58 = v11;
  v59 = v12;
  v60 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v37,
      v38,
      v39,
      DWORD2(v39),
      v40,
      DWORD2(v40),
      v41,
      DWORD2(v41),
      v42,
      DWORD2(v42),
      v43,
      DWORD2(v43),
      v44,
      DWORD2(v44),
      v45,
      DWORD2(v45),
      v46,
      DWORD2(v46),
      v47,
      DWORD2(v47),
      v48,
      DWORD2(v48),
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  v61.ExceptionCode = a1;
  v61.ExceptionFlags = 0;
  v61.ExceptionRecord = 0LL;
  v61.ExceptionAddress = a3;
  v61.NumberParameters = a2;
  v61.ExceptionInformation[0] = a4;
  v61.ExceptionInformation[1] = v9;
  v61.ExceptionInformation[2] = v10;
  KiDispatchException(&v61, (__int64)&v36, v6 - 128, *(_BYTE *)(v6 + 240) & 1, 1);
  _disable();
  if ( (*(_BYTE *)(v6 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v6 - 84));
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
    KiUpdateStibpPairing(0LL);
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)CurrentThread, v24, v25, v26, v37);
  v28 = KeGetCurrentThread();
  if ( (v28->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v28->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v28 = KeGetCurrentThread();
    }
    if ( (v28->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v28) = 1;
      KiUmsExit(v28);
    }
  }
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(v28);
  v29 = *(_QWORD *)(v6 - 48);
  v30 = *(_QWORD *)(v6 - 56);
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v32 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v32 )
    __writemsr(0x49u, 1uLL);
  v32 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v32 )
  {
    v61.ExceptionAddress = &loc_1401D01CE;
    v76 = 0x1401D02E5LL;
    v75 = 0x1401D02DCLL;
    v74 = 0x1401D02D3LL;
    v73 = 0x1401D02CALL;
    v72 = 0x1401D02C1LL;
    v71 = 0x1401D02B8LL;
    v70 = 0x1401D02AFLL;
    v69 = 0x1401D02A6LL;
    v68 = 0x1401D029DLL;
    v67 = 0x1401D0294LL;
    v66 = 0x1401D028BLL;
    v65 = 0x1401D0282LL;
    v64 = 0x1401D0279LL;
    v63 = 0x1401D0270LL;
    v62 = 0x1401D0267LL;
    v61.ExceptionInformation[14] = 0x1401D025ELL;
    v61.ExceptionInformation[13] = 0x1401D0255LL;
    v61.ExceptionInformation[12] = 0x1401D024CLL;
    v61.ExceptionInformation[11] = 0x1401D0243LL;
    v61.ExceptionInformation[10] = 0x1401D023ALL;
    v61.ExceptionInformation[9] = 0x1401D0231LL;
    v61.ExceptionInformation[8] = 0x1401D0228LL;
    v61.ExceptionInformation[7] = 0x1401D021FLL;
    v61.ExceptionInformation[6] = 0x1401D0216LL;
    v61.ExceptionInformation[5] = 0x1401D020DLL;
    v61.ExceptionInformation[4] = 0x1401D0204LL;
    v61.ExceptionInformation[3] = 0x1401D01FBLL;
    v61.ExceptionInformation[2] = 0x1401D01F2LL;
    v61.ExceptionInformation[1] = 0x1401D01E9LL;
    v61.ExceptionInformation[0] = 0x1401D01E0LL;
    *(_QWORD *)&v61.NumberParameters = 0x1401D01D7LL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp-338h+arg_350] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v30, v29, a5);
}
