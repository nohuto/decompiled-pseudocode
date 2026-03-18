/*
 * XREFs of ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C029560C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadScaleFactorFromInf(DXGMONITOR *this, unsigned int *a2)
{
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-1Ch]
  int v23; // [rsp+58h] [rbp-18h]
  unsigned int v24; // [rsp+5Ch] [rbp-14h]

  *a2 = 0;
  DeviceRegKey = 0LL;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
    return 3221225635LL;
  v5 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &DeviceRegKey);
  v10 = v5;
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    v12 = ZwQueryValueKey(
            DeviceRegKey,
            &DestinationString,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v10 = v12;
    if ( v12 != -1073741772 )
    {
      if ( v12 >= 0 )
      {
        if ( v22 == 4 && v23 == 4 )
        {
          *a2 = v24;
          goto LABEL_14;
        }
        LODWORD(v10) = -1073741788;
        v17 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v17 + 24) = this;
        *(_QWORD *)(v17 + 32) = v22;
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v17 + 24) = this;
        *(_QWORD *)(v17 + 32) = v10;
      }
      WdLogEvent5_WdError(v17);
      goto LABEL_14;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = this;
  }
  else
  {
    v11 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = v10;
  }
LABEL_14:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v10;
}
