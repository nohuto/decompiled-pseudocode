/*
 * XREFs of ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x1C0107B94
 * Callers:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x1C0107C34 (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PalmTelemetry::_DiscardOldTouchPackets(PalmTelemetry *this, __int64 a2)
{
  int v2; // ebx
  int v3; // esi
  unsigned int v5; // r8d
  __int64 v6; // r9

  v2 = 0;
  v3 = a2;
  if ( *(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = (*((_DWORD *)this + 6) - v2 + v5 - 1) % 0x1AA;
      if ( (unsigned int)(v3 - *((_DWORD *)this + 6 * v6 + 525)) > 0x1F4 )
        break;
      if ( ++v2 >= v5 )
        return;
    }
    *((_DWORD *)this + 3) = v2;
    *((_DWORD *)this + 6) = ((int)v6 + 1) % 0x1AAu;
  }
}
