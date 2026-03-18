/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C00425DC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     PostPendingMouseMove @ 0x1C00425B0 (PostPendingMouseMove.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00426B0 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  __int64 v4; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  int v11; // [rsp+38h] [rbp-18h]

  if ( (*((_DWORD *)a2 + 99) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed() )
    {
      v4 = *((_QWORD *)a2 + 24);
      v11 = *((_DWORD *)a2 + 50);
    }
    else
    {
      v11 = 18;
      v4 = *((_QWORD *)gpsi + 620);
    }
    v10 = v4;
    v8 = v4;
    v9 = v11;
    CMouseProcessor::PostMouseMoveToQ(this, a2, (const struct tagLOGICALPOINT *)&v8);
    if ( (*((_DWORD *)a2 + 99) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  }
}
