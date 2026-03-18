/*
 * XREFs of ?TabletAdjustBrightness@@YAXH@Z @ 0x1C01C84A0
 * Callers:
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01C8B3C (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TabletAdjustBrightness(int a1)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 v4; // rcx
  char *v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  ULONG InOutBufferSize; // [rsp+20h] [rbp-30h] BYREF
  PVOID DataBlockObject; // [rsp+28h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]

  DataBlockObject = 0LL;
  if ( !gfSwitchInProgress && !gPowerTransitionsState[2] && gPowerTransitionsState[0] )
  {
    if ( IoWMIOpenBlock(&WmiMonitorBrightness_GUID, 1u, &DataBlockObject) >= 0 )
    {
      InOutBufferSize = 0;
      if ( IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, 0LL) == -1073741789 )
      {
        v2 = (char *)Win32AllocPoolNonPaged(InOutBufferSize, 1869640533LL);
        v3 = v2;
        if ( v2 )
        {
          if ( IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, v2) >= 0 )
          {
            v4 = 0LL;
            v5 = &v3[*((unsigned int *)v3 + 12)];
            v6 = *((_DWORD *)v5 + 1);
            if ( v6 )
            {
              do
              {
                if ( (unsigned __int8)v5[v4 + 8] >= (unsigned __int8)*v5 )
                  break;
                v4 = (unsigned int)(v4 + 1);
              }
              while ( (unsigned int)v4 < v6 );
            }
            if ( a1 )
            {
              v7 = (unsigned int)(v4 + 1);
              if ( (unsigned int)v7 < v6 )
                gPowerDisplayState[19] = (unsigned __int8)v5[v7 + 8];
            }
            else if ( (unsigned int)v4 > 1 )
            {
              gPowerDisplayState[19] = (unsigned __int8)v5[(unsigned int)(v4 - 1) + 8];
            }
          }
          Win32FreePool(v3);
        }
      }
      ObfDereferenceObject(DataBlockObject);
    }
    if ( gPowerDisplayState[24] != gPowerDisplayState[19] )
    {
      v11 = 0LL;
      v10 = 4;
      QueuePowerRequest(&v10, 0LL);
    }
  }
}
