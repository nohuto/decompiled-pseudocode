/*
 * XREFs of UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C
 * Callers:
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0004190 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0004240 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0004488 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005134 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0005400 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C00054E0 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00376E0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 * Callees:
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00040A4 (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0004240 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0004364 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0004488 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0004544 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0004770 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0004D04 (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005134 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x1C000532C (UsbDevice_SetConfigureRequestStatus.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005530 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 */

__int64 __fastcall UsbDevice_QueueConfigureEndpointEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  bool v15; // cf
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rdx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 v24; // r9
  const char *v25; // rcx
  __int64 v26; // rcx
  char v27; // [rsp+30h] [rbp-18h]

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = *(unsigned int *)(a1 + 592);
        v4 = 14;
        v5 = *(_QWORD *)(a1 + 584);
        if ( (int)v3 > 7 )
        {
          if ( (_DWORD)v3 == 8 )
          {
            v8 = a2 - 1;
            if ( (_DWORD)a2 == 1 )
            {
LABEL_41:
              v4 = 10;
              goto LABEL_42;
            }
            goto LABEL_55;
          }
          if ( (_DWORD)v3 == 9 )
          {
            v7 = a2 - 3;
            if ( (_DWORD)a2 == 3 )
              goto LABEL_41;
            goto LABEL_22;
          }
          if ( (unsigned int)(v3 - 10) < 2 )
          {
            v4 = 12;
            if ( (unsigned int)(a2 - 1) > 1 )
              v4 = 14;
          }
        }
        else
        {
          switch ( (_DWORD)v3 )
          {
            case 7:
              if ( (_DWORD)a2 == 3 )
              {
                v4 = 8;
              }
              else if ( (_DWORD)a2 == 4 )
              {
                v4 = 9;
              }
              break;
            case 0:
              v4 = 1;
              if ( (_DWORD)a2 != 5 )
                v4 = 14;
              break;
            case 1:
              v8 = a2 - 1;
              if ( (_DWORD)a2 == 1 )
              {
                v4 = 2;
                break;
              }
LABEL_55:
              if ( v8 == 1 )
                v4 = 12;
              break;
            case 2:
              v7 = a2 - 3;
              if ( (_DWORD)a2 == 3 )
              {
                v4 = 3;
                break;
              }
LABEL_22:
              if ( v7 == 1 )
                v4 = 11;
              break;
            case 3:
              if ( (_DWORD)a2 != 3 )
              {
                if ( (_DWORD)a2 != 4 )
                  break;
LABEL_19:
                v4 = 7;
                break;
              }
              v4 = 4;
              break;
            default:
              switch ( (_DWORD)v3 )
              {
                case 4:
                  v6 = a2 - 1;
                  if ( (_DWORD)a2 == 1 )
                  {
                    v4 = v6 + 5;
                    goto LABEL_42;
                  }
                  break;
                case 5:
                  v6 = a2 - 1;
                  if ( (_DWORD)a2 == 1 )
                  {
                    v4 = v6 + 6;
                    goto LABEL_42;
                  }
                  break;
                case 6:
                  v6 = a2 - 1;
                  if ( (_DWORD)a2 == 1 )
                    goto LABEL_19;
                  break;
                default:
                  goto LABEL_42;
              }
              if ( v6 == 1 )
                v4 = 13;
              break;
          }
        }
LABEL_42:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v27 = a2;
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            a2,
            12,
            46,
            (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
            v3,
            v27,
            v4);
        }
        *(_DWORD *)(a1 + 592) = v4;
        if ( v4 > 7 )
          break;
        if ( v4 == 7 )
        {
          v15 = *(_DWORD *)(v5 + 84) != 0;
          goto LABEL_62;
        }
        if ( !v4 )
        {
          v19 = 5LL;
          return UsbDevice_SendConfigureEndpointCommand(a1, v19);
        }
        v9 = v4 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( !v12 )
                return UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(a1, v5);
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 == 1 )
                  return UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(a1, v5);
LABEL_79:
                v24 = 4368LL;
                v25 = "Unexpected ConfigureEndpointState value";
                goto LABEL_81;
              }
              v14 = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, v5, 1u);
              if ( v14 >= 0 )
              {
                *(_BYTE *)(a1 + 452) = 0;
                v19 = 1LL;
                return UsbDevice_SendConfigureEndpointCommand(a1, v19);
              }
              goto LABEL_53;
            }
            a2 = 4 - (unsigned int)((unsigned int)UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(v5) != 0);
          }
          else
          {
            a2 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 564LL) != 2) + 3;
          }
        }
        else
        {
          v14 = UsbDevice_ValidateEndpointConfigureRequest(a1, v5, v3, 14LL);
          if ( v14 < 0 )
            goto LABEL_53;
          a2 = 1LL;
        }
      }
      v16 = v4 - 8;
      if ( !v16 )
        return UsbDevice_HandleAssignPinsForEndpointsToOffloadState(a1, v5);
      v17 = v16 - 1;
      if ( v17 )
        break;
      v15 = *(_BYTE *)(a1 + 452) != 0;
LABEL_62:
      a2 = 4 - (unsigned int)v15;
    }
    v18 = v17 - 1;
    if ( v18 )
      break;
    v14 = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, v5, 2u);
    if ( v14 >= 0 )
    {
      v19 = 2LL;
      return UsbDevice_SendConfigureEndpointCommand(a1, v19);
    }
LABEL_53:
    UsbDevice_SetConfigureRequestStatus(a1, (unsigned int)v14);
    a2 = 2LL;
  }
  v21 = v18 - 1;
  if ( !v21 )
    return UsbDevice_HandleAddAndDropEndpointsState(a1, v5);
  v22 = v21 - 1;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( !v23 )
    {
      UsbDevice_CompleteConfigureEndpointRequest(a1, a2);
      return Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4119, 0, 0LL, 0LL);
    }
    if ( v23 != 1 )
      goto LABEL_79;
    v24 = 3984LL;
    v25 = "Unhandled event/transition encountered";
LABEL_81:
    Debug_FreAssertMsg(v25, 0LL, "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c", v24);
    UsbDevice_SetConfigureRequestStatus(a1, 3221225701LL);
  }
  else
  {
    v26 = a1;
  }
  return UsbDevice_CompleteConfigureEndpointRequest(v26, a2);
}
