/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C016E320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00BA72C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016987C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0171F2C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0173D14 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_SF_qHL @ 0x1C017768C (WPP_RECORDER_SF_qHL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        struct _KTHREAD **this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  CInputDest *v11; // rcx
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  __int128 v15; // xmm6
  __int128 v16; // xmm7
  __int128 v17; // xmm8
  __int64 v18; // xmm0_8
  unsigned int WindowHandle; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v24; // [rsp+20h] [rbp-68h]
  CInputDest *v25; // [rsp+90h] [rbp+8h] BYREF
  CInpLockGuard *v26; // [rsp+A8h] [rbp+20h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v26, (struct CInpLockGuard *)(this + 6));
  v6 = 0LL;
  CTouchProcessor::GetPointerCapture(this, a2, 0LL, &v25, 0LL);
  if ( v25 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( this[10] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    v10 = *(_QWORD *)(a2 + 40);
    if ( v10 )
      CTouchProcessor::SetDelegateActionInt(v8, v10, 5LL);
    v11 = v25;
    v12 = *((_OWORD *)v25 + 1);
    v13 = *((_OWORD *)v25 + 2);
    v14 = *((_OWORD *)v25 + 3);
    v15 = *((_OWORD *)v25 + 4);
    v16 = *((_OWORD *)v25 + 5);
    v17 = *((_OWORD *)v25 + 6);
    v18 = *((_QWORD *)v25 + 14);
    *(_OWORD *)a3 = *(_OWORD *)v25;
    *((_OWORD *)a3 + 1) = v12;
    *((_OWORD *)a3 + 2) = v13;
    *((_OWORD *)a3 + 3) = v14;
    *((_OWORD *)a3 + 4) = v15;
    *((_OWORD *)a3 + 5) = v16;
    *((_OWORD *)a3 + 6) = v17;
    *((_QWORD *)a3 + 14) = v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WindowHandle = (unsigned int)CInputDest::GetWindowHandle(v11);
      WPP_RECORDER_SF_qHL(WindowHandle, v20, v21, v22, v24, WindowHandle, *(_WORD *)(a2 + 16), *(_DWORD *)(a2 + 28));
    }
    v6 = a3;
  }
  CInpLockGuard::UnLock(v26);
  return v6;
}
