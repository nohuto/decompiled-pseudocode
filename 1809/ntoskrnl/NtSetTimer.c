/*
 * XREFs of NtSetTimer @ 0x140140260
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x1400020AC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     ExpSetTimer @ 0x1401403B8 (ExpSetTimer.c)
 */

NTSTATUS __stdcall NtSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN WakeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  PLARGE_INTEGER v9; // rbx
  bool v11; // si
  char PreviousMode; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  BOOLEAN v15; // cl
  int v16; // eax
  NTSTATUS v17; // ebx
  NTSTATUS result; // eax
  _BYTE v19[8]; // [rsp+50h] [rbp-38h] BYREF
  PVOID P; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-28h] BYREF

  v9 = DueTime;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DueTime < 0x7FFFFFFF0000LL )
      v13 = (__int64)DueTime;
    v21[0] = *(_QWORD *)v13;
    v9 = (PLARGE_INTEGER)v21;
    v21[1] = v21;
    v14 = 1LL;
    v15 = WakeTimer;
  }
  else
  {
    v15 = WakeTimer;
    v14 = 1LL;
    if ( WakeTimer )
      v11 = PoPowerDownActionInProgress != 0;
  }
  if ( Period < 0 )
    return -1073741580;
  if ( !v15 || v11 )
  {
    P = 0LL;
    v19[0] = 0;
  }
  else
  {
    LOBYTE(v14) = PreviousMode;
    result = PoCaptureReasonContext(0LL, v14, 0LL, 1, (__int64)v19, &P);
    if ( result < 0 )
      return result;
  }
  LOBYTE(v14) = PreviousMode;
  v16 = ExpSetTimer(TimerHandle, v14, v9, TimerApcRoutine, TimerContext, P, v19[0], Period, 0, PreviousState);
  v17 = v16;
  if ( (v16 < 0 || v16 == 1073741861) && P )
    PoDestroyReasonContext(P);
  if ( v17 >= 0 && v11 )
    return 1073741861;
  return v17;
}
