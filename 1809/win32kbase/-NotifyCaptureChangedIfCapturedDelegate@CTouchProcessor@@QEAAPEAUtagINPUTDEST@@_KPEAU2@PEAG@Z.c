/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C013F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C013B1AC (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C01430A0 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0144E04 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v7; // rbx
  struct CInputDest *v9; // rdi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  CInpLockGuard *v30[6]; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-C8h]
  __int128 v32; // [rsp+70h] [rbp-B8h]
  __int128 v33; // [rsp+80h] [rbp-A8h]
  __int128 v34; // [rsp+90h] [rbp-98h]
  __int128 v35; // [rsp+A0h] [rbp-88h]
  __int128 v36; // [rsp+B0h] [rbp-78h]
  __int128 v37; // [rsp+C0h] [rbp-68h]
  __int128 v38; // [rsp+D0h] [rbp-58h]
  __int128 v39; // [rsp+E0h] [rbp-48h]
  __int128 v40; // [rsp+F0h] [rbp-38h]
  __int128 v41; // [rsp+100h] [rbp-28h]
  struct CInputDest *v42; // [rsp+130h] [rbp+8h] BYREF

  v7 = 0LL;
  v42 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v30,
    (struct CInpLockGuard *)(this + 7),
    (void *)a2);
  CTouchProcessor::GetPointerCapture(this, a2, 0LL, &v42, 0LL);
  v9 = v42;
  if ( v42 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    CTouchProcessor::SetDelegateAction(this, a2);
    *a4 = *(_WORD *)(a2 + 16);
    v7 = a3;
    v10 = *((_OWORD *)v9 + 1);
    v31 = *(_OWORD *)v9;
    v11 = *((_OWORD *)v9 + 2);
    v32 = v10;
    v12 = *((_OWORD *)v9 + 3);
    v33 = v11;
    v13 = *((_OWORD *)v9 + 4);
    v34 = v12;
    v14 = *((_OWORD *)v9 + 5);
    v35 = v13;
    v15 = *((_OWORD *)v9 + 6);
    v36 = v14;
    v16 = *((_OWORD *)v9 + 8);
    v37 = v15;
    v38 = *((_OWORD *)v9 + 7);
    v17 = *((_OWORD *)v9 + 9);
    v39 = v16;
    v18 = *((_OWORD *)v9 + 10);
    v40 = v17;
    v41 = v18;
    v19 = v32;
    *(_OWORD *)a3 = v31;
    v20 = v33;
    *((_OWORD *)a3 + 1) = v19;
    v21 = v34;
    *((_OWORD *)a3 + 2) = v20;
    v22 = v35;
    *((_OWORD *)a3 + 3) = v21;
    v23 = v36;
    *((_OWORD *)a3 + 4) = v22;
    v24 = v37;
    *((_OWORD *)a3 + 5) = v23;
    v25 = v38;
    *((_OWORD *)a3 + 6) = v24;
    v26 = v39;
    *((_OWORD *)a3 + 7) = v25;
    v27 = v40;
    *((_OWORD *)a3 + 8) = v26;
    v28 = v41;
    *((_OWORD *)a3 + 9) = v27;
    *((_OWORD *)a3 + 10) = v28;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v30);
  return v7;
}
