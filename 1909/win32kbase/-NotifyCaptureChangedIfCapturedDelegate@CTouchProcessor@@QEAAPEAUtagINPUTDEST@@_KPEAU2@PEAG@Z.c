/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C016C280
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016767C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C016FD3C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0171B24 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  struct tagINPUTDEST *v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  __int128 v17; // xmm7
  __int128 v18; // xmm8
  __int64 v19; // xmm0_8
  CInpLockGuard *v21; // [rsp+30h] [rbp-58h] BYREF
  struct CInputDest *v22; // [rsp+90h] [rbp+8h] BYREF

  v6 = 0LL;
  v22 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v21, (struct CInpLockGuard *)(this + 6));
  CTouchProcessor::GetPointerCapture(this, a2, 0LL, &v22, 0LL);
  if ( v22 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[10] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    v12 = *(_QWORD *)(a2 + 40);
    if ( v12 )
      CTouchProcessor::SetDelegateActionInt(v10, v12, 5LL);
    v6 = a3;
    *a4 = *(_WORD *)(a2 + 16);
    v13 = *((_OWORD *)v22 + 1);
    v14 = *((_OWORD *)v22 + 2);
    v15 = *((_OWORD *)v22 + 3);
    v16 = *((_OWORD *)v22 + 4);
    v17 = *((_OWORD *)v22 + 5);
    v18 = *((_OWORD *)v22 + 6);
    v19 = *((_QWORD *)v22 + 14);
    *(_OWORD *)a3 = *(_OWORD *)v22;
    *((_OWORD *)a3 + 1) = v13;
    *((_OWORD *)a3 + 2) = v14;
    *((_OWORD *)a3 + 3) = v15;
    *((_OWORD *)a3 + 4) = v16;
    *((_OWORD *)a3 + 5) = v17;
    *((_OWORD *)a3 + 6) = v18;
    *((_QWORD *)a3 + 14) = v19;
  }
  CInpLockGuard::UnLock(v21);
  return v6;
}
