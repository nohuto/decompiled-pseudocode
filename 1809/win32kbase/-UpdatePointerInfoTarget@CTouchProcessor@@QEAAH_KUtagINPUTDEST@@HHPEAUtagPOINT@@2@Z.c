/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C0147620
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01451DC (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C0151060 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C0161584 (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C0164784 (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        struct _KTHREAD **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int v11; // ebx
  __int64 v12; // r8
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  const struct CPointerInputFrame *v15; // r12
  _QWORD *v16; // rdi
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  CInpLockGuard *v28[6]; // [rsp+50h] [rbp-138h] BYREF
  _OWORD v29[12]; // [rsp+80h] [rbp-108h] BYREF

  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x68u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v28,
    (struct CInpLockGuard *)(a1 + 7),
    (void *)a2);
  if ( a2 )
  {
    v15 = CTouchProcessor::ReferenceFrame(a1, *(unsigned int *)(a2 + 28), v12);
    if ( v15 )
    {
      CInputDest::CInputDest((CInputDest *)v29, (const struct tagINPUTDEST *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v15,
        *(unsigned int *)(a2 + 32),
        (const struct CInputDest *)v29,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::~CInputDest((CInputDest *)v29);
      v16 = (_QWORD *)(*((_QWORD *)v15 + 13) + 576LL * *(unsigned int *)(a2 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v16[33], *(_QWORD *)((char *)v16 + 212), a6) )
        *a6 = v16[33];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v16[35], *(_QWORD *)((char *)v16 + 212), a7) )
        *a7 = v16[35];
      CTouchProcessor::UnreferenceFrame((__int64)a1, (__int64)v15, v17);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(a2 + 16), *(unsigned int *)(a2 + 28), *a7, a5);
      v18 = *(_OWORD *)(a3 + 16);
      v29[0] = *(_OWORD *)a3;
      v19 = *(_OWORD *)(a3 + 32);
      v29[1] = v18;
      v20 = *(_OWORD *)(a3 + 48);
      v29[2] = v19;
      v21 = *(_OWORD *)(a3 + 64);
      v29[3] = v20;
      v22 = *(_OWORD *)(a3 + 80);
      v29[4] = v21;
      v23 = *(_OWORD *)(a3 + 96);
      v29[5] = v22;
      v24 = *(_OWORD *)(a3 + 128);
      v29[6] = v23;
      v29[7] = *(_OWORD *)(a3 + 112);
      v25 = *(_OWORD *)(a3 + 144);
      v29[8] = v24;
      v26 = *(_OWORD *)(a3 + 160);
      v29[9] = v25;
      v29[10] = v26;
      ApiSetEditionDoPointerDPITransforms(v29, a6, a7);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x6Bu,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v11 = 1;
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 106;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 105;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v28);
  return v11;
}
