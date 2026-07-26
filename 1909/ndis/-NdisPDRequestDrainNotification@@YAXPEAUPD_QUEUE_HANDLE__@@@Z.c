/*
 * XREFs of ?NdisPDRequestDrainNotification@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00BF410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDRequestDrainNotification(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      29,
      102,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 32, 1);
}
