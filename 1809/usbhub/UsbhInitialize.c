/*
 * XREFs of UsbhInitialize @ 0x1C001E1B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0001F78 (UsbhWait.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C000E810 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhGetTopOfBusStack @ 0x1C001D3F8 (UsbhGetTopOfBusStack.c)
 *     UsbhGetHubCount @ 0x1C001D500 (UsbhGetHubCount.c)
 *     UsbhIsHighSpeedCapable @ 0x1C001D588 (UsbhIsHighSpeedCapable.c)
 *     UsbhConfigureUsbHub @ 0x1C001D5E4 (UsbhConfigureUsbHub.c)
 *     UsbhGetHubPowerStatus @ 0x1C001DB84 (UsbhGetHubPowerStatus.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001DF7C (UsbhGetHubClassDescriptor.c)
 *     Usbh_UsbdQueryContollerType @ 0x1C001E124 (Usbh_UsbdQueryContollerType.c)
 *     UsbhRegisterPowerCallback @ 0x1C001E654 (UsbhRegisterPowerCallback.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001F810 (UsbhGetExtendedHubInformation.c)
 *     UsbhQueryParentHubConfig @ 0x1C00209A8 (UsbhQueryParentHubConfig.c)
 *     UsbhCheckHubErrata @ 0x1C00212C8 (UsbhCheckHubErrata.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025048 (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x1C0025734 (UsbhInitializeTtHub.c)
 *     UsbhLogStartFailure @ 0x1C003F3E8 (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitialize(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  unsigned int v3; // r14d
  _DWORD *v5; // rbx
  unsigned int TopOfBusStack; // esi
  __int64 result; // rax
  unsigned int v8; // ebp
  unsigned __int16 v9; // r10
  int v10; // r11d
  EVENT_TYPE v11; // ebp
  int v12; // eax
  unsigned int v13; // eax
  _DWORD *v14; // rax
  char *Src; // rax
  int v16; // r9d
  __int32 v17; // ecx
  __int32 v18; // ecx
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v5 = FdoExt((__int64)a1);
  Log((__int64)a1, 8, 1749634633, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack((__int64)a1);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetRootHubPdo";
    v16 = 5505;
  }
  else
  {
    TopOfBusStack = UsbhGetHubCount((__int64)a1, &v19);
    if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
    {
      Src = "GetHubCount";
      v16 = 5516;
    }
    else
    {
      if ( v19 > 6 )
      {
        UsbhLogStartFailure(
          (int)a1,
          -1073741823,
          7,
          5523,
          (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
          "hubCount > 6");
        return 3221225473LL;
      }
      TopOfBusStack = UsbhGetHubDeviceInformation((_DWORD)a1);
      if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
      {
        Src = "GetHubDeviceInformation";
        v16 = 5533;
      }
      else
      {
        if ( v5[633] == 1 )
        {
          if ( v5[634] == 2 )
            v5[640] |= 0x40u;
          if ( UsbhIsHighSpeedCapable((__int64)a1) )
            v5[640] |= 0x8000u;
        }
        UsbhCheckHubErrata(v5);
        TopOfBusStack = UsbhConfigureUsbHub((__int64)a1);
        if ( (TopOfBusStack & 0xC0000000) != 0xC0000000 )
        {
          do
          {
            result = UsbhGetHubClassDescriptor((__int64)a1, v5 + 734);
            TopOfBusStack = result;
            if ( (_DWORD)result == -1073741810 || (_DWORD)result == -1073741667 )
              return result;
            v8 = (unsigned int)result >> 30;
            if ( (unsigned int)result >> 30 == 3 && v3 > 3 )
            {
              Src = "GetHubClassDescriptor";
              v16 = 5585;
              goto LABEL_39;
            }
            if ( v3 )
              UsbhWait((int)a1, 10);
            ++v3;
          }
          while ( v8 == 3 );
          Log((__int64)a1, 8, 1749634633, *(unsigned __int16 *)((char *)v5 + 2939), *((unsigned __int16 *)v5 + 1276));
          v11 = v10 - 7;
          if ( *((_WORD *)v5 + 1271) >= 0x200u )
          {
            if ( ((unsigned __int8)v9 & (unsigned __int8)v11) != 0 )
              *((_BYTE *)v5 + 3007) = v11;
            if ( ((unsigned __int8)v9 & (unsigned __int8)v10) != 0 )
              *((_BYTE *)v5 + 3009) = v11;
            if ( (v9 & 0x80u) != 0 )
              *((_BYTE *)v5 + 3008) = v11;
            if ( (v5[640] & 0x40) != 0 )
            {
              if ( ((v9 >> 5) & 3) == 0 )
              {
LABEL_28:
                v5[753] = v10;
                goto LABEL_29;
              }
              v17 = ((v9 >> 5) & 3) - v11;
              if ( v17 )
              {
                v18 = v17 - v11;
                if ( v18 )
                {
                  if ( v18 != v11 )
                    goto LABEL_28;
                  v5[753] = 32;
                }
                else
                {
                  v5[753] = 24;
                }
              }
              else
              {
                v5[753] = 16;
              }
            }
          }
LABEL_29:
          UsbhGetHubPowerStatus((__int64)a1);
          if ( (v5[640] & 0x40) != 0 )
          {
            TopOfBusStack = UsbhInitializeTtHub(a1, a2);
            if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
            {
              Src = "InitializeTtHub";
              v16 = 5653;
              goto LABEL_39;
            }
          }
          TopOfBusStack = UsbhGetExtendedHubInformation(a1);
          if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
          {
            Src = "Get Port attributes";
            v16 = 5664;
            goto LABEL_39;
          }
          Usbh_UsbdQueryContollerType((__int64)a1);
          v12 = v5[640];
          if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
            v13 = v12 & 0xFFEFFFFF;
          else
            v13 = v12 | 0x100000;
          v5[640] = v13;
          FdoExt((__int64)a1)[1053] = v11;
          FdoExt((__int64)a1)[1052] = v11;
          v5[1043] = 201;
          KeInitializeSpinLock((PKSPIN_LOCK)v5 + 522);
          *((_BYTE *)v5 + 4184) = 0;
          *((_QWORD *)v5 + 525) = v5 + 1048;
          *((_QWORD *)v5 + 524) = v5 + 1048;
          KeInitializeEvent((PRKEVENT)v5 + 204, NotificationEvent, v11);
          KeInitializeEvent((PRKEVENT)v5 + 205, v11, v11);
          v5[1221] = v11;
          UsbhQueryParentHubConfig(a1);
          v14 = FdoExt((__int64)a1);
          UsbhSyncSendInternalIoctl((__int64)a1, 0x22043Fu, (unsigned __int64)(v14 + 1298), 0LL);
          v5[1314] = dword_1C006E690;
          UsbhRegisterPowerCallback(a1);
          v5[640] |= 0x40000000u;
          return TopOfBusStack;
        }
        Src = "ConfigureUsbHub";
        v16 = 5566;
      }
    }
  }
LABEL_39:
  UsbhLogStartFailure((int)a1, TopOfBusStack, 3, v16, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
  return TopOfBusStack;
}
