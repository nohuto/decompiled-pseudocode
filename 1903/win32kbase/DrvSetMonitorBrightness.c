/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C00BEE70
 * Callers:
 *     PowerUnDimMonitor @ 0x1C005B698 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C00623F8 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0108A3C (PowerDimMonitor.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     UpdateMonitorDevices @ 0x1C004D700 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C004D920 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvSetMonitorBrightness(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, _BYTE *a5, char a6, ...)
{
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // esi
  unsigned int v18; // r15d
  __int64 v19; // rbx
  __int64 v20; // rdx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  __int64 v22; // rax
  unsigned int i; // [rsp+54h] [rbp-25h]
  int InputBuffer; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v27; // [rsp+5Ch] [rbp-1Dh] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-19h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-11h] BYREF
  _BYTE *v30; // [rsp+70h] [rbp-9h]
  PVOID Object; // [rsp+78h] [rbp-1h] BYREF
  int v32; // [rsp+80h] [rbp+7h]

  v7 = a3;
  v8 = (unsigned int)a2;
  v9 = a1;
  v30 = a5;
  v10 = -1073741823;
  if ( !gProtocolType )
  {
    v11 = WdLogNewEntry5_WdEvent(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = v8;
    WdLogEvent5_WdEvent(v11);
    UpdateMonitorDevices();
    if ( v7 != -1 )
    {
      if ( qword_1C02152B8 )
      {
        Object = (PVOID)__PAIR64__(v7, v8);
        v32 = a4;
        v12 = qword_1C02152B8(&Object);
        v15 = v12;
        if ( v12 < 0 )
        {
          v16 = WdLogNewEntry5_WdWarning(a1, v13, v14);
          *(_QWORD *)(v16 + 24) = v15;
          WdLogEvent5_WdWarning(v16);
        }
      }
    }
    *a5 = 0;
    v17 = 0;
    for ( i = 0; v17 < *(_DWORD *)(v9 + 20); i = v17 )
    {
      v18 = 0;
      a1 = 56LL * v17;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + v9 + 40) + 2576LL);
      if ( *(_DWORD *)(v19 + 216) )
      {
        do
        {
          v20 = *(_QWORD *)(v19 + 224);
          if ( (*(_DWORD *)(v20 + 20LL * v18) & 1) != 0
            && (!a6 || *(_BYTE *)(v20 + 20LL * v18 + 16))
            && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C02151D8)(
                      v20 + 4 * (5LL * v18 + 2),
                      *(unsigned int *)(v20 + 20LL * v18 + 4),
                      &Object,
                      &DeviceObject) >= 0 )
          {
            InputBuffer = v8;
            AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
            GreDeviceIoControlImpl(AttachedDeviceReference, 0x232433u, &InputBuffer, 4u, 0LL, 0, &v27, 1u, 0);
            if ( *(_BYTE *)(*(_QWORD *)(v19 + 224) + 20LL * v18 + 16) )
            {
              *v30 = 1;
              if ( *(_QWORD *)(v19 + 144) )
              {
                if ( (*(_DWORD *)(v19 + 160) & 0x800000) != 0
                  && *(_QWORD *)(v19 + 240)
                  && (*(_DWORD *)(v9 + 20) == 1 && *(_DWORD *)(v19 + 216) == 1 || !a4) )
                {
                  wil_details_FeaturePropertyCache_ReportUsageToService(
                    &Feature_OemPanelDriverSupport__private_propertyCache,
                    0x801B31u,
                    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D8B58,
                    1,
                    3);
                  v28[0] = 1;
                  v28[1] = a4;
                  GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324CFu, v28, 8u, 0LL, 0, &v27, 1u, 0);
                }
              }
            }
            ObfDereferenceObject(AttachedDeviceReference);
            ObfDereferenceObject(Object);
          }
          ++v18;
        }
        while ( v18 < *(_DWORD *)(v19 + 216) );
        v17 = i;
      }
      ++v17;
    }
    v10 = 0;
  }
  v22 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v22 + 24) = v10;
  WdLogEvent5_WdTrace(v22);
  return (unsigned int)v10;
}
