/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C015B834
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C016596C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     CheckAccessEx @ 0x1C002BDE4 (CheckAccessEx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)this + 23) == 2 )
    v4 = *((_QWORD *)this + 10);
  else
    v4 = 0LL;
  if ( !v4 )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return CheckAccessEx(
           (int *)(*(_QWORD *)(ThreadWin32Thread + 416) + 872LL),
           (int *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) + 872LL),
           0);
}
