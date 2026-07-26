/*
 * XREFs of ?ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C00218D8
 * Callers:
 *     ndisMSetReceiveFilterAttributes @ 0x1C0021654 (ndisMSetReceiveFilterAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qdDd @ 0x1C0021940 (WPP_RECORDER_SF_qdDd.c)
 */

bool __fastcall ndisShouldSuppressReceiveFilterCapabilities(
        struct _NDIS_RECEIVE_FILTER_CAPABILITIES *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  bool v4; // bl

  v4 = 0;
  if ( (a1->EnabledQueueTypes & 1) != 0 )
    v4 = (a1->SupportedQueueProperties & 8) == 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdDd(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Revision, (_DWORD)a1, a4);
  return v4;
}
