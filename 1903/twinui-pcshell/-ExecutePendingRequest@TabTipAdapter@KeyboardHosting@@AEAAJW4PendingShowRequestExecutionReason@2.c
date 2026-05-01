/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x180320090
 * Callers:
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x180320E00 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1803216CC (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180322580 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C928 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031E030 (--1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18032349C (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0I@Z @ 0x180325F70 (-StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeybo.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803261B0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // r15d
  unsigned int v6; // esi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-188h]
  _QWORD v15[40]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(a1 + 344);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 344));
  v14 = *(_QWORD *)(a1 + 316);
  v5 = *(_DWORD *)(a1 + 324);
  *(_WORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  v6 = 9;
  *(_DWORD *)(a1 + 324) = 9;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"PendingRequestExecuted");
  v15[0] = &TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::`vftable';
  LOBYTE(v7) = BYTE1(v14);
  LOBYTE(v8) = v14;
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(v15, v8, v5, v7, a2);
  if ( !(_BYTE)v14 )
    goto LABEL_16;
  if ( !BYTE1(v14) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8, HIDWORD(v14), v5);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 863LL;
      goto LABEL_15;
    }
LABEL_16:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    v11 = 0;
    goto LABEL_17;
  }
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        v6 = 4;
    }
    else
    {
      v6 = 3;
    }
  }
  else
  {
    v6 = 2;
  }
  v10 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v5, HIDWORD(v14), v6);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_16;
  v12 = 859LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v10);
LABEL_17:
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::~PendingRequestExecuted((TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted *)v15);
  return v11;
}
