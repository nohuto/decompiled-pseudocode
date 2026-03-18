/*
 * XREFs of PostPendingMouseMove @ 0x1C0032760
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C0031E50 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0032588 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  __int64 result; // rax
  CMouseProcessor *v3; // rdi
  __int64 v4; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  int v11; // [rsp+38h] [rbp-18h]

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  v3 = (CMouseProcessor *)result;
  if ( result && (*((_DWORD *)a1 + 97) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed() )
    {
      v4 = *((_QWORD *)a1 + 23);
      v11 = *((_DWORD *)a1 + 48);
    }
    else
    {
      v11 = 18;
      v4 = *((_QWORD *)gpsi + 620);
    }
    v10 = v4;
    v8 = v4;
    v9 = v11;
    CMouseProcessor::PostMouseMoveToQ(v3, a1, (const struct tagLOGICALPOINT *)&v8);
    result = *((unsigned int *)a1 + 97);
    if ( (result & 0x20) != 0 )
      return MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  }
  return result;
}
