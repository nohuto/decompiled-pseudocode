/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0032588
 * Callers:
 *     PostPendingMouseMove @ 0x1C0032760 (PostPendingMouseMove.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0158894 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003254C (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C0032694 (ApiSetEditionPostMouseMoveToQ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rbx

  if ( (*((_DWORD *)a2 + 97) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = (_DWORD *)((char *)this + 2520);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 2520));
  if ( !(unsigned int)HasHidTable(*((_QWORD *)a2 + 11))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 424LL) + 832LL) + 100LL) & 2) == 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xAu, 0x2Eu, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      *v6,
      *((_QWORD *)this + 316),
      *((_QWORD *)this + 306),
      (__int64)a2 + 420);
  }
  *((_DWORD *)a2 + 97) &= ~0x20u;
  v7 = (_DWORD *)((char *)a2 + 420);
  if ( v7 )
  {
    *v7 = 0;
    v7[1] = 0;
  }
  *(_OWORD *)v6 = 0uLL;
}
