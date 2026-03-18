/*
 * XREFs of PostPendingMouseMove @ 0x1C003B110
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C003AB80 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00379B8 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  __int64 result; // rax
  CMouseProcessor *v3; // rdi
  __int64 v4; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+28h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-20h]
  int v10; // [rsp+38h] [rbp-18h]

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  v3 = (CMouseProcessor *)result;
  if ( result && (*((_DWORD *)a1 + 97) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed() )
    {
      v4 = *((_QWORD *)a1 + 23);
      v10 = *((_DWORD *)a1 + 48);
    }
    else
    {
      v10 = 18;
      v4 = *((_QWORD *)gpsi + 620);
    }
    v9 = v4;
    v7 = v4;
    v8 = v10;
    CMouseProcessor::PostMouseMoveToQ(v3, a1, (const struct tagLOGICALPOINT *)&v7);
    result = *((unsigned int *)a1 + 97);
    if ( (result & 0x20) != 0 )
      return MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  }
  return result;
}
