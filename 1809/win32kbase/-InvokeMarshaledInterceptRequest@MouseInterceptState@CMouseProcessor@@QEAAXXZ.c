/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01585B4
 * Callers:
 *     ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x1C0157BB0 (-Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C01586C4 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01599C0 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // xmm1_8
  struct _KEVENT *v13; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v15[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 8) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = *(_OWORD *)((char *)this + 56);
    v15[0] = *(_OWORD *)((char *)this + 40);
    v6 = *(_OWORD *)((char *)this + 72);
    v15[1] = v5;
    v15[2] = v6;
    v7 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v15, v14);
    v11 = v7;
    if ( v7 != 2 )
    {
      if ( v7 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      *(_DWORD *)v14 = v11;
      memset(&v14[4], 0, 20);
    }
    v12 = *(_QWORD *)&v14[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v14;
    *((_QWORD *)this + 13) = v12;
  }
  v13 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v13 )
  {
    if ( KeReadStateEvent(v13) )
      MicrosoftTelemetryAssertTriggeredMsgKM("_waitForCallOutCompletion state is SIGNALED. This is unexpected and indicates potential RACE condition");
    KeSetEvent(*((PRKEVENT *)this + 14), 1, 0);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
