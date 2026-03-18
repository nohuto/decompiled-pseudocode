/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C013F820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C013B1AC (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C01430A0 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0144E04 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_SF_qHL @ 0x1C01486C4 (WPP_RECORDER_SF_qHL.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  char WindowHandle; // al
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v31; // [rsp+20h] [rbp-108h]
  CInpLockGuard *v32[6]; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+70h] [rbp-B8h]
  __int128 v34; // [rsp+80h] [rbp-A8h]
  __int128 v35; // [rsp+90h] [rbp-98h]
  __int128 v36; // [rsp+A0h] [rbp-88h]
  __int128 v37; // [rsp+B0h] [rbp-78h]
  __int128 v38; // [rsp+C0h] [rbp-68h]
  __int128 v39; // [rsp+D0h] [rbp-58h]
  __int128 v40; // [rsp+E0h] [rbp-48h]
  __int128 v41; // [rsp+F0h] [rbp-38h]
  __int128 v42; // [rsp+100h] [rbp-28h]
  __int128 v43; // [rsp+110h] [rbp-18h]
  CInputDest *v44; // [rsp+130h] [rbp+8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v32,
    (struct CInpLockGuard *)(this + 7),
    (void *)a2);
  v6 = 0LL;
  CTouchProcessor::GetPointerCapture(this, a2, 0LL, &v44, 0LL);
  if ( v44 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    CTouchProcessor::SetDelegateAction(this, a2);
    v7 = *((_OWORD *)v44 + 1);
    v33 = *(_OWORD *)v44;
    v8 = *((_OWORD *)v44 + 2);
    v34 = v7;
    v9 = *((_OWORD *)v44 + 3);
    v35 = v8;
    v10 = *((_OWORD *)v44 + 4);
    v36 = v9;
    v11 = *((_OWORD *)v44 + 5);
    v37 = v10;
    v12 = *((_OWORD *)v44 + 6);
    v38 = v11;
    v13 = *((_OWORD *)v44 + 8);
    v39 = v12;
    v40 = *((_OWORD *)v44 + 7);
    v14 = *((_OWORD *)v44 + 9);
    v41 = v13;
    v15 = *((_OWORD *)v44 + 10);
    v42 = v14;
    v43 = v15;
    v16 = v34;
    *(_OWORD *)a3 = v33;
    v17 = v35;
    *((_OWORD *)a3 + 1) = v16;
    v18 = v36;
    *((_OWORD *)a3 + 2) = v17;
    v19 = v37;
    *((_OWORD *)a3 + 3) = v18;
    v20 = v38;
    *((_OWORD *)a3 + 4) = v19;
    v21 = v39;
    *((_OWORD *)a3 + 5) = v20;
    v22 = v40;
    *((_OWORD *)a3 + 6) = v21;
    v23 = v41;
    *((_OWORD *)a3 + 7) = v22;
    v24 = v42;
    *((_OWORD *)a3 + 8) = v23;
    v25 = v43;
    *((_OWORD *)a3 + 9) = v24;
    *((_OWORD *)a3 + 10) = v25;
    WindowHandle = (unsigned __int8)CInputDest::GetWindowHandle(v44);
    WPP_RECORDER_SF_qHL(
      (unsigned int)this[1],
      v27,
      v28,
      v29,
      v31,
      WindowHandle,
      *(_WORD *)(a2 + 16),
      *(_DWORD *)(a2 + 28));
    v6 = a3;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v32);
  return v6;
}
