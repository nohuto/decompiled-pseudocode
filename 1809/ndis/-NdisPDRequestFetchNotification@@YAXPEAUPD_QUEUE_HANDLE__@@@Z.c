/*
 * XREFs of ?NdisPDRequestFetchNotification@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C007B310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisPDRequestFetchNotification(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( (unsigned __int8)byte_1C00A026C >= 5u )
    WPP_SF_q(0x65u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 14, 1);
}
