/*
 * XREFs of UsbDevice_DropEndpointsCompletion @ 0x1C0004190
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C000532C (UsbDevice_SetConfigureRequestStatus.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_DropEndpointsCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  unsigned __int16 v4; // cx
  int v5; // edi
  char v6; // r8

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 1;
  if ( a2 == 3 )
  {
    LOBYTE(a2) = *(_BYTE *)(v2 + 135);
    v4 = 73;
  }
  else
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 61);
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      v5 = 0;
      v4 = 74;
      goto LABEL_7;
    }
    v4 = 75;
  }
  v5 = -1073741823;
LABEL_7:
  v6 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
    a2,
    12,
    v4,
    (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
    v6,
    *(_QWORD *)v2);
  if ( v5 < 0 )
  {
    UsbDevice_SetConfigureRequestStatus(v2, (unsigned int)v5);
    v3 = 2;
  }
  return UsbDevice_QueueConfigureEndpointEvent(v2, v3);
}
