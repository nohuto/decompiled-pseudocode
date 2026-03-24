/*
 * XREFs of TtmDispatchApi @ 0x140881700
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     TtmpDispatchAssignDevice @ 0x140881AE0 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140881B7C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140881CA8 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140881D8C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140881E2C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140881EF0 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140881F88 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140882038 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408820D8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140882180 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiLogDispatchApiStart @ 0x140883B44 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x140883C14 (TtmiLogDispatchApiStop.c)
 */

__int64 __fastcall TtmDispatchApi(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int *a7,
        _BYTE *a8)
{
  PVOID PoolWithTag; // rbx
  int v13; // edi
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // esi
  int Terminal; // eax
  int v18; // edx

  TtmiLogDispatchApiStart();
  PoolWithTag = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( TtmpEnabled != 1 )
  {
    v13 = -1073741637;
    v14 = 984;
LABEL_3:
    TtmiLogError("TtmDispatchApi", v14, -1, v13);
    goto LABEL_58;
  }
  if ( a1 > 4101 )
  {
    if ( a1 != 4102 && a1 != 4103 && (unsigned int)(a1 - 4104) >= 2 )
      goto LABEL_20;
    goto LABEL_21;
  }
  switch ( a1 )
  {
    case 4101:
LABEL_21:
      v15 = 24;
      goto LABEL_22;
    case 4096:
      v15 = 12;
LABEL_13:
      v16 = 8;
      goto LABEL_23;
    case 4097:
      v15 = 24;
      v16 = 16;
      goto LABEL_23;
  }
  if ( a1 != 4098 )
  {
    if ( a1 != 4099 )
    {
      if ( a1 == 4100 )
      {
        v15 = 16;
        v16 = 544;
        goto LABEL_23;
      }
LABEL_20:
      v13 = -1073741811;
      v14 = 1045;
      goto LABEL_3;
    }
    v15 = 16;
    goto LABEL_13;
  }
  v15 = 16;
LABEL_22:
  v16 = 0;
LABEL_23:
  if ( a3 < v15 || !a4 && v16 || a5 < v16 )
  {
    v13 = -1073741789;
    v18 = 1056;
    goto LABEL_53;
  }
  if ( v16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x206D654Du);
    if ( !PoolWithTag )
    {
      v13 = -1073741801;
      v14 = 1071;
      goto LABEL_3;
    }
  }
  if ( a1 <= 4101 )
  {
    switch ( a1 )
    {
      case 4101:
        Terminal = TtmpDispatchSetDefaultDeviceAssignment(a2);
        break;
      case 4096:
        Terminal = TtmpDispatchOpenTerminal(a2, PoolWithTag);
        break;
      case 4097:
        Terminal = TtmpDispatchCreateTerminal(a2, PoolWithTag);
        break;
      case 4098:
        Terminal = TtmpDispatchEvacuateDevices(a2);
        break;
      case 4099:
        Terminal = TtmpDispatchCreateEventQueue(a2, PoolWithTag);
        break;
      default:
        Terminal = TtmpDispatchGetTerminalEvent(a2, PoolWithTag);
        break;
    }
    goto LABEL_41;
  }
  switch ( a1 )
  {
    case 4102:
      Terminal = TtmpDispatchAssignDevice(a2);
      goto LABEL_41;
    case 4103:
      Terminal = TtmpDispatchSetDisplayState(a2);
      goto LABEL_41;
    case 4104:
      Terminal = TtmpDispatchSetDisplayTimeouts(a2);
      goto LABEL_41;
    case 4105:
      Terminal = TtmpDispatchSetDisplayPowerRequest(a2);
LABEL_41:
      v13 = Terminal;
      goto LABEL_54;
  }
  v13 = -1073741811;
  v18 = 1134;
LABEL_53:
  TtmiLogError("TtmDispatchApi", v18, -1, v13);
LABEL_54:
  if ( PoolWithTag )
  {
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
    }
    else
    {
      *a6 = PoolWithTag;
      *a7 = v16;
      *a8 = 1;
    }
  }
LABEL_58:
  TtmiLogDispatchApiStop((unsigned int)a1, (unsigned int)v13);
  return (unsigned int)v13;
}
