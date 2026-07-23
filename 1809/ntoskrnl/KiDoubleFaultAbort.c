/*
 * XREFs of KiDoubleFaultAbort @ 0x1401CA300
 * Callers:
 *     KiDoubleFaultAbortShadow @ 0x14032F500 (KiDoubleFaultAbortShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiDoubleFaultAbort @ 0x1401CA300 (KiDoubleFaultAbort.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiDoubleFaultAbort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v14; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  bool v17; // zf
  _BYTE v18[44]; // [rsp+0h] [rbp-80h] BYREF
  int v19; // [rsp+2Ch] [rbp-54h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int128 v27; // [rsp+70h] [rbp-10h]
  __int128 v28; // [rsp+80h] [rbp+0h]
  __int128 v29; // [rsp+90h] [rbp+10h]
  __int128 v30; // [rsp+A0h] [rbp+20h]
  __int128 v31; // [rsp+B0h] [rbp+30h]
  __int128 v32; // [rsp+C0h] [rbp+40h]
  __int16 v33; // [rsp+100h] [rbp+80h]
  char v34; // [rsp+170h] [rbp+F0h]
  __int64 v35; // [rsp+180h] [rbp+100h]

  v18[43] = 1;
  v20 = v4;
  v21 = a1;
  v22 = a2;
  v23 = a3;
  v24 = a4;
  v25 = v5;
  v26 = v6;
  if ( (v34 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v14 = *(_QWORD *)&CurrentThread->Process[2].AddressPolicy;
    __writegsqword(0x858u, v14);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v14) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v14);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v14 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v14 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x1401CA531LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v14);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    v17 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v33 = 0;
    if ( !v17 )
      *(double *)&v7 = KiSaveDebugRegisterState(v14);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v19 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v27 = v7;
  v28 = v8;
  v29 = v9;
  v30 = v10;
  v31 = v11;
  v32 = v12;
  KiBugCheckDispatch(127LL, 8LL, v18, v35);
}
