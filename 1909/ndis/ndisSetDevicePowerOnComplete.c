/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C0012B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // edx

  v4 = a2;
  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    LOBYTE(v5) = 0;
  else
    v5 = *(_DWORD *)(a2 + 48);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      79,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3,
      v5);
  }
  ndisLogMiniportEvent(a3, 12LL);
  ndisReferenceMiniportNoCheck(a3);
  *(_QWORD *)(a3 + 5400) = v4;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5368), (WORK_QUEUE_TYPE)40);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      14,
      80,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3);
  }
  return 3221225494LL;
}
