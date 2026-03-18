/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C0137F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C01628D4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct CPointerInputFrame *v8; // rsi
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // r8
  _BYTE v28[24]; // [rsp+30h] [rbp-D0h] BYREF
  CInpLockGuard *v29[6]; // [rsp+48h] [rbp-B8h] BYREF
  CInpLockGuard *v30[7]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v31[64]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v32[11]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v33[192]; // [rsp+1A0h] [rbp+A0h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v30,
    (struct CInpLockGuard *)(a1 + 56),
    (void *)a3);
  if ( a3 )
  {
    v8 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    if ( v8 )
    {
      v10 = *(_DWORD *)(a3 + 32);
      if ( v10 >= *((_DWORD *)v8 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
        v10 = *(_DWORD *)(a3 + 32);
      }
      v11 = *((_QWORD *)v8 + 13) + 576LL * v10;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      if ( *(_WORD *)(a3 + 16) != *(_WORD *)(v11 + 236) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      PushW32ThreadLock(v8, v28, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v33, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v31, (struct CInputDest *)v33, v15);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v29,
        (struct CInpLockGuard *)(a1 + 56),
        *(void **)(v11 + 16));
      v16 = *(_QWORD *)(v11 + 16);
      v17 = *(_OWORD *)(a2 + 16);
      v18 = *(unsigned __int16 *)(v11 + 208);
      v32[0] = *(_OWORD *)a2;
      v19 = *(_OWORD *)(a2 + 32);
      v32[1] = v17;
      v20 = *(_OWORD *)(a2 + 48);
      v32[2] = v19;
      v21 = *(_OWORD *)(a2 + 64);
      v32[3] = v20;
      v22 = *(_OWORD *)(a2 + 80);
      v32[4] = v21;
      v23 = *(_OWORD *)(a2 + 96);
      v32[5] = v22;
      v24 = *(_OWORD *)(a2 + 128);
      v32[6] = v23;
      v32[7] = *(_OWORD *)(a2 + 112);
      v25 = *(_OWORD *)(a2 + 144);
      v32[8] = v24;
      v26 = *(_OWORD *)(a2 + 160);
      v32[9] = v25;
      v32[10] = v26;
      ApiSetEditionPointerActivate(v32, v18, v16, v11 + 224);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v29);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v31);
      PopW32ThreadLock(v28);
      CTouchProcessor::UnreferenceFrame(a1, (__int64)v8, v27);
      CInputDest::~CInputDest((CInputDest *)v33);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v30);
}
