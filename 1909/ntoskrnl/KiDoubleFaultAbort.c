/*
 * XREFs of KiDoubleFaultAbort @ 0x1401D10C0
 * Callers:
 *     KiDoubleFaultAbortShadow @ 0x140350500 (KiDoubleFaultAbortShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiDoubleFaultAbort @ 0x1401D10C0 (KiDoubleFaultAbort.c)
 *     KiBugCheckDispatch @ 0x1401D64C0 (KiBugCheckDispatch.c)
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
  unsigned __int8 BpbKernelSpecCtrl; // al
  bool v16; // zf
  _BYTE v17[44]; // [rsp+0h] [rbp-80h] BYREF
  int v18; // [rsp+2Ch] [rbp-54h]
  __int64 v19; // [rsp+30h] [rbp-50h]
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  __int128 v27; // [rsp+80h] [rbp+0h]
  __int128 v28; // [rsp+90h] [rbp+10h]
  __int128 v29; // [rsp+A0h] [rbp+20h]
  __int128 v30; // [rsp+B0h] [rbp+30h]
  __int128 v31; // [rsp+C0h] [rbp+40h]
  __int16 v32; // [rsp+100h] [rbp+80h]
  char v33; // [rsp+170h] [rbp+F0h]
  __int64 v34; // [rsp+180h] [rbp+100h]

  v17[43] = 1;
  v19 = v4;
  v20 = a1;
  v21 = a2;
  v22 = a3;
  v23 = a4;
  v24 = v5;
  v25 = v6;
  if ( (v33 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v14 = *(_QWORD *)&CurrentThread->Process[2].Spare2[23];
    __writegsqword(0x270u, v14);
    __writegsbyte(0x851u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOBYTE(v14) = KeGetPcr()->Prcb.BpbState;
    __writegsbyte(0x852u, v14);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v14 = 72LL;
      HIDWORD(a2) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
    if ( (a2 & 8) != 0 )
    {
      a2 = 0LL;
      v14 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
        JUMPOUT(0x1401D12F4LL);
      _mm_lfence();
    }
    __writegsbyte(0x853u, 0);
    v16 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v32 = 0;
    if ( !v16 )
      *(double *)&v7 = KiSaveDebugRegisterState(v14, a2);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v18 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v26 = v7;
  v27 = v8;
  v28 = v9;
  v29 = v10;
  v30 = v11;
  v31 = v12;
  if ( (_BYTE)KeSmapEnabled )
  {
    if ( (v33 & 1) != 0 )
      __asm { stac }
  }
  KiBugCheckDispatch(127LL, 8LL, v17, v34);
}
