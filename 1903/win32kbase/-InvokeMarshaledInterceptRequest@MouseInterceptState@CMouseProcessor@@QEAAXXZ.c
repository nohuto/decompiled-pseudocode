/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0191D80
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C01840E0 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C0191E94 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0193390 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v5; // xmm1
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // xmm1_8
  struct _KEVENT *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE v16[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v17[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 8) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = *(_OWORD *)((char *)this + 56);
    v17[0] = *(_OWORD *)((char *)this + 40);
    memset(v16, 0, sizeof(v16));
    v17[2] = *(_OWORD *)((char *)this + 72);
    v17[1] = v5;
    v6 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v17, v16);
    v10 = v6;
    if ( v6 != 2 )
    {
      if ( v6 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      *(_DWORD *)v16 = v10;
      memset(&v16[4], 0, 20);
    }
    v11 = *(_QWORD *)&v16[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v16;
    *((_QWORD *)this + 13) = v11;
  }
  v12 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v12 )
  {
    if ( KeReadStateEvent(v12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    KeSetEvent(*((PRKEVENT *)this + 14), 1, 0);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
