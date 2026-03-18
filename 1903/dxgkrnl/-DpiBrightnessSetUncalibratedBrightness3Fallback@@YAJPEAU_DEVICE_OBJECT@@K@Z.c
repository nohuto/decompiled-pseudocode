/*
 * XREFs of ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02A7EF8
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C0153900 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0161580 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C0163FF8 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetUncalibratedBrightness3Fallback(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  char *DeviceExtension; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rax
  void (__fastcall *v15)(_QWORD); // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+60h] [rbp+8h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  v18 = 0;
  if ( *((_WORD *)DeviceExtension + 2268) )
  {
    v7 = (*((__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, int *))DeviceExtension + 573))(a1, a2, &v18);
    v5 = v7;
    if ( v7 < 0 )
    {
      v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v6 + 24) = v5;
      goto LABEL_3;
    }
    if ( (v18 & 4) == 0 )
    {
      KeWaitForSingleObject(DeviceExtension + 4480, Executive, 0, 0, 0LL);
      v8 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
      v5 = v8;
      if ( v8 < 0 )
      {
        v12 = WdLogNewEntry5_WdError(v10, v9, v11);
        *(_QWORD *)(v12 + 24) = v5;
        WdLogEvent5_WdError(v12);
LABEL_20:
        KeReleaseMutex((PRKMUTEX)DeviceExtension + 80, 0);
        return (unsigned int)v5;
      }
      v13 = *(_DWORD **)(*((_QWORD *)DeviceExtension + 487) + 2456LL);
      if ( (*v13 & 0x1000) != 0 )
      {
        LODWORD(v5) = 0;
        v14 = WdLogNewEntry5_WdWarning(v13, v9, v11);
        *(_QWORD *)(v14 + 24) = 0LL;
      }
      else
      {
        if ( *((_WORD *)DeviceExtension + 2377) == 3 )
        {
          v15 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 597);
          if ( v15 )
          {
            v15(*((_QWORD *)DeviceExtension + 595));
            memset(DeviceExtension + 4752, 0, 0x48uLL);
          }
          *((_WORD *)DeviceExtension + 2268) = 0;
          LODWORD(v5) = DpiBrightnessSetupInterfaceV2(a1);
          if ( (int)v5 < 0 )
          {
            LODWORD(v5) = DpiQueryMiniportInterface(
                            (__int64)a1,
                            (__int64)&GUID_DEVINTERFACE_BRIGHTNESS,
                            56,
                            1,
                            (__int64)Timeout,
                            (__int64)(DeviceExtension + 4752));
            if ( (int)v5 >= 0 )
            {
              *((_QWORD *)DeviceExtension + 588) = a1;
              *((_QWORD *)DeviceExtension + 589) = DpiDoInterfaceReference;
              *((_QWORD *)DeviceExtension + 590) = DpiDoInterfaceDereference;
              *((_QWORD *)DeviceExtension + 591) = DpiBrightnessIfGetPossible;
              *((_QWORD *)DeviceExtension + 592) = DpiBrightnessIfSet;
              *((_QWORD *)DeviceExtension + 593) = DpiBrightnessIfGet;
              *((_DWORD *)DeviceExtension + 1174) = 65592;
            }
          }
          goto LABEL_19;
        }
        LODWORD(v5) = -1073741637;
        v14 = WdLogNewEntry5_WdWarning(v13, v9, v11);
        *(_QWORD *)(v14 + 24) = -1073741637LL;
      }
      WdLogEvent5_WdWarning(v14);
LABEL_19:
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
      goto LABEL_20;
    }
  }
  LODWORD(v5) = -1073741637;
  v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = -1073741637LL;
LABEL_3:
  WdLogEvent5_WdWarning(v6);
  return (unsigned int)v5;
}
