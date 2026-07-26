/*
 * XREFs of ?ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  struct _IRP *v4; // rdi
  int Status; // eax
  NTSTATUS v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // esi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Status = a2->IoStatus.Status;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      34,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a3,
      Status);
  }
  if ( v4->IoStatus.Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        14,
        35,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a3,
        v4->IoStatus.Status);
    }
    if ( (byte_1C00E8041 & 8) != 0 )
      McTemplateK0jqxq(
        (_DWORD)a1,
        (unsigned int)&QueryPowerCompleteSystemState,
        (_DWORD)a3 + 4008,
        (_DWORD)a3 + 4008,
        *((_DWORD *)a3 + 1014),
        *((_QWORD *)a3 + 503),
        v4->IoStatus.Status);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), v4, 0x20u);
    return (unsigned int)v4->IoStatus.Status;
  }
  else
  {
    v6 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)a3 + 479),
           3u,
           *(POWER_STATE *)(a3 + 3144),
           ndisQueryPowerComplete,
           a3,
           0LL);
    v9 = v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          36,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)a3,
          v6);
      }
      if ( (byte_1C00E8041 & 8) != 0 )
        McTemplateK0jqxq(
          v8,
          (unsigned int)&QueryPowerCompleteSystemStatePoRequest,
          (_DWORD)a3 + 4008,
          (_DWORD)a3 + 4008,
          *((_DWORD *)a3 + 1014),
          *((_QWORD *)a3 + 503),
          v9);
    }
    else
    {
      *((_QWORD *)a3 + 97) = v4;
    }
    if ( v9 < 0 )
    {
      v4->IoStatus.Status = v9;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), v4, 0x20u);
    }
    else
    {
      v9 = -1073741802;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        37,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a3);
    }
    return (unsigned int)v9;
  }
}
