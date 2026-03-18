/*
 * XREFs of KiCallUserMode @ 0x1401C70F0
 * Callers:
 *     KeUserModeCallback @ 0x140686D70 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 */

__int64 __fastcall KiCallUserMode(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char a16)
{
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r15
  __int128 v24; // xmm6
  __int128 v25; // xmm7
  __int128 v26; // xmm8
  __int128 v27; // xmm9
  __int128 v28; // xmm10
  __int128 v29; // xmm11
  __int128 v30; // xmm12
  __int128 v31; // xmm13
  __int128 v32; // xmm14
  __int128 v33; // xmm15
  struct _KTHREAD *CurrentThread; // rbx
  _KTRAP_FRAME *TrapFrame; // rsi
  char *v36; // r9
  _KTRAP_FRAME *v37; // rsi
  __int64 InstrumentationCallback; // r9
  unsigned __int8 BpbUserSpecCtrl; // al
  _OWORD v43[13]; // [rsp+0h] [rbp-138h] BYREF
  _KTRAP_FRAME *v44; // [rsp+D0h] [rbp-68h]
  __int64 v45; // [rsp+D8h] [rbp-60h]
  __int64 v46; // [rsp+E0h] [rbp-58h]
  __int64 v47; // [rsp+F8h] [rbp-40h]
  __int64 v48; // [rsp+100h] [rbp-38h]
  __int64 v49; // [rsp+108h] [rbp-30h]
  __int64 v50; // [rsp+110h] [rbp-28h]
  __int64 v51; // [rsp+118h] [rbp-20h]
  __int64 v52; // [rsp+120h] [rbp-18h]
  __int64 v53; // [rsp+128h] [rbp-10h]
  __int64 v54; // [rsp+130h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+138h] [rbp+0h] BYREF
  __int64 v56; // [rsp+160h] [rbp+28h]
  __int64 v57; // [rsp+168h] [rbp+30h]
  __int64 v58; // [rsp+170h] [rbp+38h]
  __int64 v59; // [rsp+178h] [rbp+40h]
  __int64 v60; // [rsp+180h] [rbp+48h]
  __int64 v61; // [rsp+188h] [rbp+50h]
  __int64 v62; // [rsp+190h] [rbp+58h]
  __int64 v63; // [rsp+198h] [rbp+60h]
  __int64 v64; // [rsp+1A0h] [rbp+68h]
  __int64 v65; // [rsp+1A8h] [rbp+70h]
  __int64 v66; // [rsp+1B0h] [rbp+78h]
  __int64 v67; // [rsp+1B8h] [rbp+80h]
  __int64 v68; // [rsp+1C0h] [rbp+88h]
  __int64 v69; // [rsp+1C8h] [rbp+90h]
  __int64 v70; // [rsp+1D0h] [rbp+98h]
  __int64 v71; // [rsp+1D8h] [rbp+A0h]
  __int64 v72; // [rsp+1E0h] [rbp+A8h]
  __int64 v73; // [rsp+1E8h] [rbp+B0h]
  __int64 v74; // [rsp+1F0h] [rbp+B8h]
  __int64 v75; // [rsp+1F8h] [rbp+C0h]
  __int64 v76; // [rsp+200h] [rbp+C8h]
  __int64 v77; // [rsp+208h] [rbp+D0h]
  __int64 v78; // [rsp+210h] [rbp+D8h]
  __int64 v79; // [rsp+218h] [rbp+E0h]
  __int64 v80; // [rsp+220h] [rbp+E8h]
  __int64 v81; // [rsp+228h] [rbp+F0h]
  __int64 v82; // [rsp+230h] [rbp+F8h]
  __int64 v83; // [rsp+238h] [rbp+100h]
  __int64 v84; // [rsp+240h] [rbp+108h]
  __int64 v85; // [rsp+248h] [rbp+110h]
  __int64 v86; // [rsp+250h] [rbp+118h]
  __int64 v87; // [rsp+258h] [rbp+120h]
  __int64 v88; // [rsp+260h] [rbp+128h]
  __int64 v89; // [rsp+268h] [rbp+130h]
  __int64 v90; // [rsp+270h] [rbp+138h]
  __int64 v91; // [rsp+278h] [rbp+140h]
  __int64 v92; // [rsp+280h] [rbp+148h]
  __int64 v93; // [rsp+288h] [rbp+150h]
  __int64 v94; // [rsp+290h] [rbp+158h]
  __int64 v95; // [rsp+298h] [rbp+160h]
  __int64 v96; // [rsp+2A0h] [rbp+168h]
  __int64 v97; // [rsp+2A8h] [rbp+170h]
  __int64 v98; // [rsp+2B0h] [rbp+178h]
  __int64 v99; // [rsp+2B8h] [rbp+180h]
  __int64 v100; // [rsp+2C0h] [rbp+188h]

  v43[3] = v24;
  v43[4] = v25;
  v43[5] = v26;
  v43[6] = v27;
  v43[7] = v28;
  v43[8] = v29;
  v43[9] = v30;
  v43[10] = v31;
  v43[11] = v32;
  v43[12] = v33;
  v47 = v17;
  v48 = v16;
  v49 = v18;
  v50 = v19;
  v51 = v20;
  v52 = v21;
  v53 = v22;
  v54 = v23;
  v45 = a1;
  v46 = a2;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a3 + 32) = v43;
  TrapFrame = CurrentThread->TrapFrame;
  v44 = TrapFrame;
  _disable();
  CurrentThread->InitialStack = (void *)a3;
  CurrentThread->StackBase = a4;
  if ( (KiKvaShadow & 1) != 0 )
    __writegsqword(0x7008u, a3);
  else
    *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = a3;
  v36 = &a4[-(unsigned int)KeKernelStackSize];
  __writegsqword(0x1A8u, a3);
  CurrentThread->StackLimit = v36;
  qmemcpy(&retaddr, TrapFrame, 0x190uLL);
  v37 = TrapFrame + 1;
  if ( (CurrentThread->ApcState.UserApcPendingAll & 3) != 0
    || (CurrentThread->Header.LockNV & 0x48010000) != 0
    || (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
  {
    JUMPOUT(0x1401D5360LL);
  }
  _mm_setcsr(v37[-1].MxCsr);
  if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
  {
    KiRestoreDebugRegisterState();
    InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
    if ( !InstrumentationCallback )
      InstrumentationCallback = KeUserCallbackDispatcher;
  }
  else
  {
    InstrumentationCallback = KeUserCallbackDispatcher;
  }
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
      sysret
    }
  }
  return KiKernelSysretExit(
           InstrumentationCallback,
           0LL,
           v37[-1].Rsp,
           v37[-1].Rbp,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           v68,
           v69,
           v70,
           v71,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98,
           v99,
           v100);
}
