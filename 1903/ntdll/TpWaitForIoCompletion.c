/*
 * XREFs of TpWaitForIoCompletion @ 0x180062640
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18010F080 @ 0x18010F080 (sub_18010F080.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  __int64 v4; // rcx

  if ( (unsigned int)sub_180062970(Io, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
      CancelPendingCallbacks = _InterlockedExchange((volatile __int32 *)Io + 70, 0);
    sub_180066BBC((char *)Io + 56, -CancelPendingCallbacks);
    if ( CancelPendingCallbacks )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      else
        v4 = 2147353478LL;
      if ( *(_BYTE *)v4 )
        sub_18010F080(
          *((_QWORD *)Io + 18),
          (_DWORD)Io + 200,
          (_DWORD)Io + 80,
          *((_QWORD *)Io + 11),
          *((_QWORD *)Io + 13),
          CancelPendingCallbacks);
    }
  }
}
