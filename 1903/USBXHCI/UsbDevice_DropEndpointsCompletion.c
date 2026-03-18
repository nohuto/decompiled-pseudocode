/*
 * XREFs of UsbDevice_DropEndpointsCompletion @ 0x1C0005090
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C00062F4 (UsbDevice_SetConfigureRequestStatus.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_DropEndpointsCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r9d
  unsigned int v5; // edi
  int v6; // edx
  char v8; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(v2 + 135);
      v4 = 73;
LABEL_9:
      v8 = v3;
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v3,
        12,
        v4,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        v8,
        *(_QWORD *)v2);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  v5 = 1;
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(a1 + 61);
      v4 = 75;
      goto LABEL_9;
    }
LABEL_10:
    UsbDevice_SetConfigureRequestStatus(v2, 3221225473LL);
    v5 = 2;
    return UsbDevice_QueueConfigureEndpointEvent(v2, v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v6,
      12,
      74,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v2);
  }
  return UsbDevice_QueueConfigureEndpointEvent(v2, v5);
}
