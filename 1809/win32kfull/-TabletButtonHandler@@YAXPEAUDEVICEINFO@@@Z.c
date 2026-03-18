/*
 * XREFs of ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01C8640
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     SetRITTimer @ 0x1C01153C0 (SetRITTimer.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C01C88D8 (-TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01C8B3C (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall TabletButtonHandler(struct DEVICEINFO *a1)
{
  ULONG ReportLength; // ebp
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  ULONG v4; // eax
  USHORT *v5; // rdi
  NTSTATUS Usages; // eax
  unsigned __int64 v7; // r9
  char *v8; // rax
  struct tagTABLET_BUTTON_ACTION *v9; // r9
  unsigned int v10; // edx
  int v11; // r9d
  __int64 v12; // rdx
  ULONG UsageLength[4]; // [rsp+40h] [rbp-108h] BYREF
  _devicemodeW v14; // [rsp+50h] [rbp-F8h] BYREF

  ReportLength = *((_DWORD *)a1 + 66);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)a1 + 58) + 16LL);
  v4 = HidP_MaxUsageListLength(HidP_Input, 0, PreparsedData);
  UsageLength[0] = v4;
  if ( v4 )
  {
    v5 = (USHORT *)Win32AllocPool(2LL * v4, 1635087189LL);
    if ( v5 )
    {
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0,
                 0,
                 v5,
                 UsageLength,
                 PreparsedData,
                 *(PCHAR *)(*((_QWORD *)a1 + 58) + 24LL),
                 ReportLength);
      if ( dword_1C031094C != 10 )
      {
        if ( Usages >= 0 && (v12 = 0LL, UsageLength[0]) )
        {
          while ( v5[v12] - 1 != dword_1C031094C )
          {
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= UsageLength[0] )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          if ( gpTabBtnAction )
          {
            xxxTabletButtonExecuteAction(gpTabBtnAction, 0, 0LL);
            gpTabBtnAction = 0LL;
          }
          dword_1C031094C = 10;
          if ( gtmridTabletButtonTimer )
          {
            FindTimer(0LL, gtmridTabletButtonTimer, 4u, 1, 0LL);
            gtmridTabletButtonTimer = 0LL;
          }
        }
        goto LABEL_34;
      }
      if ( Usages < 0 )
        goto LABEL_34;
      if ( !UsageLength[0] )
        goto LABEL_34;
      if ( (unsigned __int16)(*v5 - 1) > 9u )
        goto LABEL_34;
      dword_1C031094C = *v5 - 1;
      if ( (int)TabletRetrieveDevMode(&v14) < 0 || v14.dmDisplayOrientation > 3 )
        goto LABEL_34;
      if ( v14.dmDisplayOrientation == 1 )
      {
        v8 = (char *)&unk_1C0319C20;
      }
      else
      {
        if ( v14.dmDisplayOrientation != 2 )
        {
          v7 = (unsigned __int64)(unsigned int)dword_1C031094C << 7;
          if ( v14.dmDisplayOrientation == 3 )
            v8 = (char *)&unk_1C0319C60;
          else
            v8 = (char *)&TabButtonConfig;
          goto LABEL_17;
        }
        v8 = (char *)&unk_1C0319C40;
      }
      v7 = (unsigned __int64)(unsigned int)dword_1C031094C << 7;
LABEL_17:
      v9 = (struct tagTABLET_BUTTON_ACTION *)&v8[v7];
      if ( (PVOID)grpdeskRitInput == grpdeskLogon )
        v9 = (struct tagTABLET_BUTTON_ACTION *)((char *)v9 + 16);
      if ( (unsigned int)(*(_DWORD *)v9 + 2147483636) <= 1 )
      {
        gpTabBtnAction = v9;
        v10 = 250;
        v11 = 0;
LABEL_25:
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, v10, (__int64)xxxTabletButtonTimerCallback, v11);
        goto LABEL_34;
      }
      if ( *(_DWORD *)v9 != *((_DWORD *)v9 + 2) || *((_DWORD *)v9 + 1) != *((_DWORD *)v9 + 3) )
      {
        gpTabBtnAction = v9;
        v10 = 1000;
        v11 = 1;
        goto LABEL_25;
      }
      xxxTabletButtonExecuteAction(v9, 0, &v14);
LABEL_34:
      Win32FreePool(v5);
    }
  }
}
