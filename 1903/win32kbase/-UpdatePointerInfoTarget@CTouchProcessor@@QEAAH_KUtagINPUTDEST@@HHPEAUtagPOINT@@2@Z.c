/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01765D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00BA72C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0171574 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0174124 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01841E0 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C019B950 (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C01A0104 (ApiSetPointerPromotionOnPointerInputRetrieval.c)
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
  __int64 v9; // rsi
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v13; // r8
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  const struct CPointerInputFrame *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  __int64 v20; // r8
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27; // edx
  CInpLockGuard *v29; // [rsp+58h] [rbp-89h] BYREF
  _OWORD v30[7]; // [rsp+60h] [rbp-81h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-11h]

  v9 = a2;
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      108,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v29, (struct CInpLockGuard *)(a1 + 6));
  if ( v9 )
  {
    v16 = CTouchProcessor::ReferenceFrame(a1, *(unsigned int *)(v9 + 28), v13);
    if ( v16 )
    {
      CInputDest::CInputDest((CInputDest *)v30, (const struct tagINPUTDEST *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v16,
        *(unsigned int *)(v9 + 32),
        (const struct CInputDest *)v30,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v30, v17, v18);
      v19 = (_QWORD *)(*((_QWORD *)v16 + 16) + 496LL * *(unsigned int *)(v9 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v19[26], *(_QWORD *)((char *)v19 + 156), a6) )
        *a6 = v19[26];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v19[28], *(_QWORD *)((char *)v19 + 156), a7) )
        *a7 = v19[28];
      CTouchProcessor::UnreferenceFrame(a1, v16, v20);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(v9 + 16), *(unsigned int *)(v9 + 28), *a7, a5);
      v21 = *(_OWORD *)(a3 + 16);
      v30[0] = *(_OWORD *)a3;
      v22 = *(_OWORD *)(a3 + 32);
      v30[1] = v21;
      v23 = *(_OWORD *)(a3 + 48);
      v30[2] = v22;
      v24 = *(_OWORD *)(a3 + 64);
      v30[3] = v23;
      v25 = *(_OWORD *)(a3 + 80);
      v30[4] = v24;
      v26 = *(_OWORD *)(a3 + 96);
      v30[5] = v25;
      *(_QWORD *)&v25 = *(_QWORD *)(a3 + 112);
      v30[6] = v26;
      v31 = v25;
      ApiSetEditionDoPointerDPITransforms(v30, a6, a7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v27) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v27,
          7,
          111,
          (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      }
      v11 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 110;
        goto LABEL_12;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 109;
LABEL_12:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v12, 7, v15, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  CInpLockGuard::UnLock(v29);
  return v11;
}
