/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01662B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004196C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0041A84 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00BA72C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0171574 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C019D288 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, __int64 a3)
{
  CInpLockGuard *v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  const struct CPointerInputFrame *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // r8
  CInpLockGuard *v27; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v28[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v30[7]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-30h]
  _BYTE v32[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v33[128]; // [rsp+120h] [rbp+20h] BYREF

  v3 = (CInpLockGuard *)(a1 + 48);
  memset(v28, 0, sizeof(v28));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v27, (struct CInpLockGuard *)(a1 + 48));
  if ( a3 )
  {
    v10 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    if ( v10 )
    {
      v11 = *(_DWORD *)(a3 + 32);
      if ( v11 >= *((_DWORD *)v10 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
        v11 = *(_DWORD *)(a3 + 32);
      }
      v12 = *((_QWORD *)v10 + 16) + 496LL * v11;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
      if ( *(_WORD *)(a3 + 16) != *(_WORD *)(v12 + 180) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
      PushW32ThreadLock(v10, v28, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v33, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v32, (struct CInputDest *)v33, v16);
      CInpLockGuard::UnLock(v3);
      v17 = *(_QWORD *)(v12 + 16);
      v18 = *(_OWORD *)(a2 + 16);
      v19 = *(unsigned __int16 *)(v12 + 152);
      v30[0] = *(_OWORD *)a2;
      v20 = *(_OWORD *)(a2 + 32);
      v30[1] = v18;
      v21 = *(_OWORD *)(a2 + 48);
      v30[2] = v20;
      v22 = *(_OWORD *)(a2 + 64);
      v30[3] = v21;
      v23 = *(_OWORD *)(a2 + 80);
      v30[4] = v22;
      v24 = *(_OWORD *)(a2 + 96);
      v30[5] = v23;
      *(_QWORD *)&v23 = *(_QWORD *)(a2 + 112);
      v30[6] = v24;
      v31 = v23;
      ApiSetEditionPointerActivate(v30, v19, v17, v12 + 168);
      CInpLockGuard::LockExclusive(v3, (struct CLockListEntryStack *)v29);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v32);
      PopW32ThreadLock(v28);
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)a1, v10);
      CInputDest::SetEmpty((CInputDest *)v33, v25, v26);
    }
  }
  CInpLockGuard::UnLock(v27);
}
