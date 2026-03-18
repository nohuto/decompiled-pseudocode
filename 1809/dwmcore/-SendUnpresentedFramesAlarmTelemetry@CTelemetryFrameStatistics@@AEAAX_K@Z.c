/*
 * XREFs of ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x180084A6C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(
        CTelemetryFrameStatistics *this,
        __int64 a2)
{
  DWORD CurrentProcessId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  DWORD *p_CurrentProcessId; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  char *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_180305E80 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 0x400000000000uLL) )
  {
    v8 = 0;
    v11 = 0;
    CurrentProcessId = GetCurrentProcessId();
    p_CurrentProcessId = &CurrentProcessId;
    v9 = (char *)this + 24;
    v7 = 4;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_180305E80, &unk_1802B3B99, 0LL, 0LL, 4u, &pData);
  }
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 6) = 0;
}
