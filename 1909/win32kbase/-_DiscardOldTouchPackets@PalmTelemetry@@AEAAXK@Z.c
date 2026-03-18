/*
 * XREFs of ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x1C0159FFC
 * Callers:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x1C015A09C (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PalmTelemetry::_DiscardOldTouchPackets(PalmTelemetry *this, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  unsigned int v6; // r8d
  __int64 v7; // r9

  v3 = 0;
  v4 = a2;
  if ( *(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = *((_DWORD *)this + 3);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = (*((_DWORD *)this + 6) - v3 + v6 - 1) % 0x1AA;
      if ( (unsigned int)(v4 - *((_DWORD *)this + 6 * v7 + 525)) > 0x1F4 )
        break;
      if ( ++v3 >= v6 )
        return;
    }
    *((_DWORD *)this + 3) = v3;
    *((_DWORD *)this + 6) = ((int)v7 + 1) % 0x1AAu;
  }
}
