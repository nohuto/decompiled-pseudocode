/*
 * XREFs of TtmDispatchApi @ 0x1408BF490
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     TtmpDispatchAssignDevice @ 0x1408BF870 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1408BF90C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1408BFA10 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408BFAF4 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1408BFB94 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1408BFC58 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408BFCF0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1408BFDA0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408BFE40 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408BFEE8 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiLogDispatchApiStart @ 0x1408C18F4 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1408C19C4 (TtmiLogDispatchApiStop.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
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
  unsigned int v14; // eax
  unsigned int v15; // esi
  int Terminal; // eax

  TtmiLogDispatchApiStart();
  PoolWithTag = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( TtmpEnabled != 1 )
  {
    v13 = -1073741637;
LABEL_3:
    TtmiLogError("TtmDispatchApi");
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
      v14 = 24;
      goto LABEL_22;
    case 4096:
      v14 = 12;
LABEL_13:
      v15 = 8;
      goto LABEL_23;
    case 4097:
      v14 = 24;
      v15 = 16;
      goto LABEL_23;
  }
  if ( a1 != 4098 )
  {
    if ( a1 != 4099 )
    {
      if ( a1 == 4100 )
      {
        v14 = 16;
        v15 = 544;
        goto LABEL_23;
      }
LABEL_20:
      v13 = -1073741811;
      goto LABEL_3;
    }
    v14 = 16;
    goto LABEL_13;
  }
  v14 = 16;
LABEL_22:
  v15 = 0;
LABEL_23:
  if ( a3 < v14 || !a4 && v15 || a5 < v15 )
  {
    v13 = -1073741789;
    goto LABEL_53;
  }
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x206D654Du);
    if ( !PoolWithTag )
    {
      v13 = -1073741801;
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
LABEL_53:
  TtmiLogError("TtmDispatchApi");
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
      *a7 = v15;
      *a8 = 1;
    }
  }
LABEL_58:
  TtmiLogDispatchApiStop((unsigned int)a1, (unsigned int)v13);
  return (unsigned int)v13;
}
