/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00426B0
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C00425DC (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C00427E0 (ApiSetEditionPostMouseMoveToQ.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C00428B8 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3)
{
  _DWORD *v6; // rdi
  int v7; // edx
  _DWORD *v8; // rbx

  if ( (*((_DWORD *)a2 + 99) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = (_DWORD *)((char *)this + 3272);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 3272));
  if ( !(unsigned int)HasHidTable(*((_QWORD *)a2 + 12))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 416LL) + 824LL) + 100LL) & 2) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 6, 51, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
    }
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      *v6,
      *((_QWORD *)this + 410),
      *((_QWORD *)this + 399),
      (__int64)a2 + 428);
  }
  *((_DWORD *)a2 + 99) &= ~0x20u;
  v8 = (_DWORD *)((char *)a2 + 428);
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = 0;
  }
  *(_OWORD *)v6 = 0uLL;
  *((_QWORD *)this + 411) = 0LL;
}
