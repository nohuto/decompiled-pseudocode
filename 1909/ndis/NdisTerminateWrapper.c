/*
 * XREFs of NdisTerminateWrapper @ 0x1C009C730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisMUnload @ 0x1C0137C70 (ndisMUnload.c)
 */

void __stdcall NdisTerminateWrapper(NDIS_HANDLE NdisWrapperHandle, PVOID SystemSpecific)
{
  _WORD *DriverObjectExtension; // rax
  _WORD *v4; // rbx
  __int16 v5; // cx
  int v6; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_7f9bbe2bb6303683d7762c790bde233d_Traceguids,
      (char)NdisWrapperHandle);
  if ( NdisWrapperHandle && *(_QWORD *)NdisWrapperHandle )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)NdisWrapperHandle, (PVOID)0x4E4D4944);
    v4 = DriverObjectExtension;
    if ( DriverObjectExtension )
    {
      v5 = DriverObjectExtension[13] | 4;
      DriverObjectExtension[13] = v5;
      if ( *((_QWORD *)DriverObjectExtension + 2) || v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v6 = 13;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          1,
          14,
          (struct _GUID *)&WPP_7f9bbe2bb6303683d7762c790bde233d_Traceguids,
          (char)DriverObjectExtension);
        v5 = v4[13];
      }
      *((_QWORD *)v4 + 13) = 0LL;
      v4[13] = v5 | 0x10;
      ndisMUnload(*(_QWORD *)NdisWrapperHandle);
    }
    else
    {
      ExFreePoolWithTag(NdisWrapperHandle, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return;
  v6 = 15;
LABEL_16:
  WPP_RECORDER_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    4,
    1,
    v6,
    (struct _GUID *)&WPP_7f9bbe2bb6303683d7762c790bde233d_Traceguids);
}
