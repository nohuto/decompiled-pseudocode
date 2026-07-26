/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C00114C0
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rdx

  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    v5 = 0LL;
  else
    v5 = *(unsigned int *)(a2 + 48);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(76LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v5);
  ndisLogMiniportEvent(a3, 12LL);
  LOBYTE(v6) = 12;
  ndisReferenceMiniportNoCheck(a3, v6);
  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    KeResetEvent(*(PRKEVENT *)(a3 + 5416));
  *(_QWORD *)(a3 + 5464) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5432), (WORK_QUEUE_TYPE)40);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(77LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
  return 3221225494LL;
}
