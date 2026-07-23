/*
 * XREFs of TpWaitForIoCompletion @ 0x1800626E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppIopValidateIo @ 0x180062A10 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010F1B0 (TppETWCallbackCancel.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  __int64 v4; // rcx

  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
      CancelPendingCallbacks = _InterlockedExchange((volatile __int32 *)Io + 70, 0);
    TppBarrierAdjust((char *)Io + 56, -CancelPendingCallbacks);
    if ( CancelPendingCallbacks )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v4 = 2147353478LL;
      if ( *(_BYTE *)v4 )
        TppETWCallbackCancel(
          *((_QWORD *)Io + 18),
          (_DWORD)Io + 200,
          (_DWORD)Io + 80,
          *((_QWORD *)Io + 11),
          *((_QWORD *)Io + 13),
          CancelPendingCallbacks);
    }
  }
}
