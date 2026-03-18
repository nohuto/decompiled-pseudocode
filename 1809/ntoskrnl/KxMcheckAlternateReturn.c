/*
 * XREFs of KxMcheckAlternateReturn @ 0x1401CC900
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x14032EA00 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BD0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC070 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC0F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1060 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x1401CC900 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x1401D0A80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D0F00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1080 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140295DC0 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x14029DC50 (KiMcheckAlternateReturn.c)
 */

__int64 __fastcall KxMcheckAlternateReturn(__int64 a1, unsigned __int64 BpbState, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v15; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  ULONG64 v17; // rax
  bool v18; // zf
  struct _KTHREAD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // rcx
  struct _KTHREAD *v24; // rcx
  int v25; // r9d
  int v26; // r8d
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v28; // cf
  __int64 v32; // [rsp+0h] [rbp-90h] BYREF
  __int64 v33; // [rsp+8h] [rbp-88h]
  __int64 v34; // [rsp+10h] [rbp-80h]
  __int64 v35; // [rsp+18h] [rbp-78h]
  __int64 v36; // [rsp+20h] [rbp-70h]
  __int64 v37; // [rsp+28h] [rbp-68h]
  __int64 v38; // [rsp+30h] [rbp-60h]
  __int64 v39; // [rsp+38h] [rbp-58h]
  __int64 v40; // [rsp+40h] [rbp-50h]
  __int64 v41; // [rsp+48h] [rbp-48h]
  __int64 v42; // [rsp+50h] [rbp-40h]
  __int64 v43; // [rsp+58h] [rbp-38h]
  __int64 v44; // [rsp+60h] [rbp-30h]
  __int64 v45; // [rsp+68h] [rbp-28h]
  __int64 v46; // [rsp+70h] [rbp-20h]
  __int64 v47; // [rsp+78h] [rbp-18h]
  __int128 v48; // [rsp+80h] [rbp-10h]
  __int128 v49; // [rsp+90h] [rbp+0h]
  __int128 v50; // [rsp+A0h] [rbp+10h]
  __int128 v51; // [rsp+B0h] [rbp+20h]
  __int128 v52; // [rsp+C0h] [rbp+30h]
  __int128 v53; // [rsp+D0h] [rbp+40h]
  __int64 v54; // [rsp+E0h] [rbp+50h]
  __int64 v55; // [rsp+E8h] [rbp+58h]
  __int64 v56; // [rsp+F0h] [rbp+60h]
  __int64 v57; // [rsp+F8h] [rbp+68h]
  __int64 v58; // [rsp+100h] [rbp+70h]
  __int16 v59; // [rsp+110h] [rbp+80h]
  char v60; // [rsp+180h] [rbp+F0h]

  BYTE3(v39) = 1;
  v40 = v5;
  v41 = a1;
  v42 = BpbState;
  v43 = a3;
  v44 = a4;
  v45 = v6;
  v46 = v7;
  if ( (v60 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)&CurrentThread->Process[2].AddressPolicy;
    __writegsqword(0x858u, v15);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v15) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v15);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v15 = 72LL;
      HIDWORD(BpbState) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(BpbState) = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v15 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
      LODWORD(BpbState) = (unsigned __int16)BpbState;
    }
    if ( (BpbState & 2) != 0 )
    {
      v33 = 0x1401CCA27LL;
      v58 = 0x1401CCB3ELL;
      v57 = 0x1401CCB35LL;
      v56 = 0x1401CCB2CLL;
      v55 = 0x1401CCB23LL;
      v54 = 0x1401CCB1ALL;
      *((_QWORD *)&v53 + 1) = 0x1401CCB11LL;
      *(_QWORD *)&v53 = 0x1401CCB08LL;
      *((_QWORD *)&v52 + 1) = 0x1401CCAFFLL;
      *(_QWORD *)&v52 = 0x1401CCAF6LL;
      *((_QWORD *)&v51 + 1) = 0x1401CCAEDLL;
      *(_QWORD *)&v51 = 0x1401CCAE4LL;
      *((_QWORD *)&v50 + 1) = 0x1401CCADBLL;
      *(_QWORD *)&v50 = 0x1401CCAD2LL;
      *((_QWORD *)&v49 + 1) = 0x1401CCAC9LL;
      *(_QWORD *)&v49 = 0x1401CCAC0LL;
      *((_QWORD *)&v48 + 1) = 0x1401CCAB7LL;
      *(_QWORD *)&v48 = 0x1401CCAAELL;
      v47 = 0x1401CCAA5LL;
      v46 = 0x1401CCA9CLL;
      v45 = 0x1401CCA93LL;
      v44 = 0x1401CCA8ALL;
      v43 = 0x1401CCA81LL;
      v42 = 0x1401CCA78LL;
      v41 = 0x1401CCA6FLL;
      v40 = 0x1401CCA66LL;
      v39 = 0x1401CCA5DLL;
      v38 = 0x1401CCA54LL;
      v37 = 0x1401CCA4BLL;
      v36 = 0x1401CCA42LL;
      v35 = 0x1401CCA39LL;
      v34 = 0x1401CCA30LL;
    }
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v15);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v15 = 3221225730LL;
      v17 = __readmsr(0xC0000102);
      BpbState = (unsigned __int64)HIDWORD(v17) << 32;
      if ( v17 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v17 )
      {
        BpbState = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(BpbState + 128) = v17;
      }
    }
    v18 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v59 = 0;
    if ( !v18 )
      *(double *)&v8 = KiSaveDebugRegisterState(v15);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      BpbState = 0LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  HIDWORD(v39) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v48 = v8;
  v49 = v9;
  v50 = v10;
  v51 = v11;
  v52 = v12;
  v53 = v13;
  _enable();
  v19 = KeGetCurrentThread();
  if ( _bittest((const signed __int32 *)&v19->116, 8u) )
  {
    KiUmsTrapEntry();
    v19 = KeGetCurrentThread();
  }
  KiMcheckAlternateReturn(&v32, BpbState, a3, v19);
  _disable();
  if ( (v60 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v39));
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
  v23 = KeGetCurrentThread();
  if ( (v23->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v23, v20, v21, v22, v32);
  v24 = KeGetCurrentThread();
  if ( (v24->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v24->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v24 = KeGetCurrentThread();
    }
    if ( (v24->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v24) = 1;
      KiUmsExit(v24);
    }
  }
  _mm_setcsr(HIDWORD(v39));
  if ( v59 )
    KiRestoreDebugRegisterState(v24);
  v25 = v44;
  v26 = v43;
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v28 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v28 )
    __writemsr(0x49u, 1uLL);
  v28 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v28 )
  {
    v32 = 0x1401CCD46LL;
    v57 = 0x1401CCE5DLL;
    v56 = 0x1401CCE54LL;
    v55 = 0x1401CCE4BLL;
    v54 = 0x1401CCE42LL;
    *((_QWORD *)&v53 + 1) = 0x1401CCE39LL;
    *(_QWORD *)&v53 = 0x1401CCE30LL;
    *((_QWORD *)&v52 + 1) = 0x1401CCE27LL;
    *(_QWORD *)&v52 = 0x1401CCE1ELL;
    *((_QWORD *)&v51 + 1) = 0x1401CCE15LL;
    *(_QWORD *)&v51 = 0x1401CCE0CLL;
    *((_QWORD *)&v50 + 1) = 0x1401CCE03LL;
    *(_QWORD *)&v50 = 0x1401CCDFALL;
    *((_QWORD *)&v49 + 1) = 0x1401CCDF1LL;
    *(_QWORD *)&v49 = 0x1401CCDE8LL;
    *((_QWORD *)&v48 + 1) = 0x1401CCDDFLL;
    *(_QWORD *)&v48 = 0x1401CCDD6LL;
    v47 = 0x1401CCDCDLL;
    v46 = 0x1401CCDC4LL;
    v45 = 0x1401CCDBBLL;
    v44 = 0x1401CCDB2LL;
    v43 = 0x1401CCDA9LL;
    v42 = 0x1401CCDA0LL;
    v41 = 0x1401CCD97LL;
    v40 = 0x1401CCD8ELL;
    v39 = 0x1401CCD85LL;
    v38 = 0x1401CCD7CLL;
    v37 = 0x1401CCD73LL;
    v36 = 0x1401CCD6ALL;
    v35 = 0x1401CCD61LL;
    v34 = 0x1401CCD58LL;
    v33 = 0x1401CCD4FLL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp+arg_18] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(v41, v42, v26, v25, a5);
}
