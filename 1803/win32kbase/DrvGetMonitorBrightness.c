/*
 * XREFs of DrvGetMonitorBrightness @ 0x1C00D50C0
 * Callers:
 *     NtUserGetMonitorBrightness @ 0x1C00B64F0 (NtUserGetMonitorBrightness.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z @ 0x1C0052D90 (-GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetMonitorBrightness(struct _LUID a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  struct tagPER_MONITOR_DATA *PerMonitorData; // rax
  struct tagPER_MONITOR_DATA *v8; // r15
  __int64 result; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  int v11; // r14d
  unsigned __int8 v12; // cl
  int v13; // eax
  struct _LUID v14; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v15; // [rsp+58h] [rbp-11h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-9h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1h] BYREF
  int v18; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+74h] [rbp+Bh]
  int v20; // [rsp+78h] [rbp+Fh]

  v14 = a1;
  UpdateMonitorDevices();
  PerMonitorData = GetPerMonitorData(v14);
  v8 = PerMonitorData;
  if ( !PerMonitorData )
    return 3221226021LL;
  if ( *((_DWORD *)PerMonitorData + 7) == -1 )
    return 3221225659LL;
  result = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C01A1BE0)(
             &v14,
             a2,
             &Object,
             &DeviceObject);
  if ( (int)result >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    v11 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324C3u, 0LL, 0, &v18, 0xCu, &v15, 1u, 0);
    ObfDereferenceObject(AttachedDeviceReference);
    ObfDereferenceObject(Object);
    if ( v11 >= 0 )
    {
      v12 = v19;
      if ( a3 )
      {
        if ( v18 == 3 )
          *a3 = v19;
        else
          *a3 = (unsigned __int8)v19;
      }
      if ( a4 )
      {
        v13 = v20;
        if ( v18 != 3 )
          v13 = v12;
        *a4 = v13;
      }
    }
    else
    {
      *((_DWORD *)v8 + 7) = -1;
    }
    return (unsigned int)v11;
  }
  return result;
}
