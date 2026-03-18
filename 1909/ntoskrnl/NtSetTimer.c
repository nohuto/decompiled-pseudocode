/*
 * XREFs of NtSetTimer @ 0x1401583E0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14010535C (PoCaptureReasonContext.c)
 *     ExpSetTimer @ 0x140158544 (ExpSetTimer.c)
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
  _BYTE v19[8]; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h]
  __int64 *v23; // [rsp+70h] [rbp-28h]

  v9 = DueTime;
  v21 = 0LL;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DueTime < 0x7FFFFFFF0000LL )
      v13 = (__int64)DueTime;
    v22 = *(_QWORD *)v13;
    v21 = v22;
    v9 = (PLARGE_INTEGER)&v21;
    v23 = &v21;
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
    result = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, (__int64)v19, &P);
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
