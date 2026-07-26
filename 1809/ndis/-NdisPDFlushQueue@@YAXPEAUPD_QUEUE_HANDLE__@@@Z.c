/*
 * XREFs of ?NdisPDFlushQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C007ADF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisPDFlushQueue(struct PD_QUEUE_HANDLE__ *a1)
{
  struct _KEVENT *v2; // rcx

  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x67u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 12, 1);
  v2 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C00A026C >= 5u )
    {
      WPP_SF_q(0x68u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
      v2 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    }
    KeSetEvent(v2, 2, 0);
  }
}
