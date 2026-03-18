/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x1C00BD518
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int16 __fastcall RIMMarkSiblingMouseDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // si
  __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int16 result; // ax

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 67, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, a1);
  }
  v5 = 0;
  switch ( v3 )
  {
    case 1u:
      v5 = 16;
      break;
    case 2u:
      v5 = 4;
      break;
    case 4u:
      v5 = 8;
      break;
    case 5u:
      v5 = 2;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v3 - 4, a2, a3);
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
      break;
  }
  result = (v5 | *(_WORD *)(a1 + 888)) & 0xFFFE;
  *(_WORD *)(a1 + 888) = result;
  if ( v3 == 5 )
    *(_DWORD *)(a1 + 184) |= 0x6000000u;
  return result;
}
