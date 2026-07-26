/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0011600
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C600 (ndisCancelMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3)
{
  if ( a2 && (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(86LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, (unsigned int)a2->IoStatus.Status);
  ndisLogMiniportEvent(a3, 14LL);
  ndisCancelMediaDisconnectTimer(a3);
  if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
    KeResetEvent(*((PRKEVENT *)a3 + 677));
  *((_QWORD *)a3 + 688) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a3 + 171, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(87LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
  return 3221225494LL;
}
