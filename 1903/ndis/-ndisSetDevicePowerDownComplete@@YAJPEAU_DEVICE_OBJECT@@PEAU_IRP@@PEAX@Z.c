/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001CA48 (ndisCancelMediaDisconnectTimer.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _WORK_QUEUE_ITEM *a3)
{
  struct _IRP *v4; // rdi
  int Status; // eax
  int v6; // edx

  v4 = a2;
  if ( a2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Status = a2->IoStatus.Status;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      91,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a3,
      Status);
  }
  ndisLogMiniportEvent(a3, 14LL);
  ndisCancelMediaDisconnectTimer((char)a3);
  a3[170].List.Flink = (_LIST_ENTRY *)v4;
  ExQueueWorkItem(a3 + 169, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      14,
      92,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a3);
  }
  return 3221225494LL;
}
