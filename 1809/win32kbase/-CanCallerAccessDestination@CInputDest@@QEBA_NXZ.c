/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0130F30
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)this + 21) == 2 )
    v4 = *((_QWORD *)this + 9);
  else
    v4 = 0LL;
  if ( !v4 )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return CheckAccessForIntegrityLevelEx(
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) + 880LL),
           0);
}
