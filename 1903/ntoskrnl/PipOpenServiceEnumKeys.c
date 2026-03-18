/*
 * XREFs of PipOpenServiceEnumKeys @ 0x140733E90
 * Callers:
 *     PipHardwareConfigActivateService @ 0x14072C32C (PipHardwareConfigActivateService.c)
 *     PiDevCfgVerifyService @ 0x14072C4F0 (PiDevCfgVerifyService.c)
 *     PiProcessDriverInstance @ 0x140733830 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140733AA4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140775FD0 (PipDmgGetDriverDmarCompatLevel.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077A264 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x14077CB10 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861A70 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140867EA0 (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x1409F78FC (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C3848 (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x1406E8650 (IopCreateRegistryKeyEx.c)
 */

int __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  int result; // eax
  int v10; // eax
  int v11; // ebx
  _QWORD *v12; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-19h] BYREF
  void *v15; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING v16; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  *(_QWORD *)&v16.Length = 0LL;
  v16.Buffer = 0LL;
  result = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 6, (__int64)&v15);
  if ( result >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( !v12 )
          v12 = (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL);
        v12 = (_QWORD *)*v12;
        if ( v12 == (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL) || !v12 )
          break;
        result = PnpCtxGetCachedNodeBaseKey(*(__int64 *)&PiPnpRtlCtx, v12, 6, &v15);
        if ( result < 0 )
        {
          if ( result != -2147483622 )
            goto LABEL_3;
          break;
        }
        *(&ObjectAttributes.Length + 1) = 0;
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        KeyHandle = 0LL;
        ObjectAttributes.RootDirectory = v15;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_3;
      }
      result = -1073741772;
    }
LABEL_3:
    if ( result >= 0 )
    {
      if ( a4 || a5 )
      {
        *(_DWORD *)&v16.Length = 655368;
        v16.Buffer = L"Enum";
        if ( a5 )
        {
          v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v16, a2, 1u, 0LL);
        }
        else
        {
          *(&ObjectAttributes.Length + 1) = 0;
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          Handle = 0LL;
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &v16;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          v10 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
        }
        v11 = v10;
        if ( v10 < 0 )
        {
          ZwClose(KeyHandle);
          return v11;
        }
        if ( a4 )
          *a4 = Handle;
        else
          ZwClose(Handle);
      }
      if ( a3 )
        *a3 = KeyHandle;
      else
        ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
