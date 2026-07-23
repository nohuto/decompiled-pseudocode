/*
 * XREFs of TtmDispatchApi @ 0x140882960
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpDispatchAssignDevice @ 0x140882D40 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140882DDC (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140882F08 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140882FEC (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x14088308C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140883150 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408831E8 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140883298 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x140883338 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408833E0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiLogDispatchApiStart @ 0x140884DA4 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x140884E74 (TtmiLogDispatchApiStop.c)
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
