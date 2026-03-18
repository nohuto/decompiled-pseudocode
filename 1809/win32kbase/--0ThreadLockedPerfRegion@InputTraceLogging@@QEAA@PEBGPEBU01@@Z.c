/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C002F2E0 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C002F6D0 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ApiSetClientCallDitThread @ 0x1C002FEA4 (ApiSetClientCallDitThread.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C007BD70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0085B38 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A50FC (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00ED970 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00EDAF0 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00EDC10 (NtMITSynthesizeTouchInput.c)
 *     NtUserInjectDeviceInput @ 0x1C00F03E0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00F05A0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C00F0AD0 (NtUserInjectPointerInput.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0141A34 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0141D28 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0149D30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0158B84 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01599C0 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C00256F0 (Win32AllocateFromPagedLookasideList.c)
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

LPCWSTR **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        LPCWSTR **this,
        const unsigned __int16 *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  LPCWSTR *v7; // rax
  __int64 CurrentThreadWin32Thread; // rax
  signed __int32 v9; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+70h] [rbp-38h] BYREF
  signed __int32 *v13; // [rsp+80h] [rbp-28h]
  int v14; // [rsp+88h] [rbp-20h]
  int v15; // [rsp+8Ch] [rbp-1Ch]

  *this = 0LL;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 1uLL) )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      v7 = (LPCWSTR *)Win32AllocateFromPagedLookasideList((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
      *this = v7;
      if ( v7 )
      {
        *v7 = a2;
        (*this)[5] = 0LL;
        v9 = 0x80000000;
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
        if ( CurrentThreadWin32Thread )
          v9 = _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (LPCWSTR)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( dword_1C01C7F10 > 6u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 1uLL) )
        {
          TlgCreateWsz(&pDesc, **this);
          TlgCreateWsz(&v12, L"Start");
          v15 = 0;
          v13 = &v9;
          v14 = 4;
          TlgWrite(
            (TraceLoggingHProvider)&dword_1C01C7F10,
            &unk_1C019DDA5,
            (LPCGUID)(*this + 1),
            (LPCGUID)(*this)[5],
            5u,
            &pData);
        }
        PushW32ThreadLock(this, *this + 6, lambda_01d02e0fe91b87acfd5bf6b036e4910e_::_lambda_invoker_cdecl_);
      }
    }
  }
  return this;
}
