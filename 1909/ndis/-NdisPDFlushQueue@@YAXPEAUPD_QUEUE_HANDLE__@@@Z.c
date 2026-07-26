/*
 * XREFs of ?NdisPDFlushQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00BEE40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDFlushQueue(struct PD_QUEUE_HANDLE__ *a1)
{
  struct _KEVENT *v2; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      103,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 12, 1);
  v2 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          29,
          104,
          (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
          (char)a1);
        v2 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      }
    }
    KeSetEvent(v2, 2, 0);
  }
}
