/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C008F74C
 * Callers:
 *     PowerUnDimMonitor @ 0x1C009780C (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0099C10 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C00E2618 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0041C40 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0051280 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, _BYTE *a5, char a6)
{
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // r15d
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-59h]
  unsigned int i; // [rsp+54h] [rbp-25h]
  int InputBuffer; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-1Dh] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-19h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-11h] BYREF
  _BYTE *v29; // [rsp+70h] [rbp-9h]
  PVOID Object; // [rsp+78h] [rbp-1h] BYREF
  int v31; // [rsp+80h] [rbp+7h]

  v7 = a3;
  v8 = (unsigned int)a2;
  v9 = a1;
  v29 = a5;
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
      if ( qword_1C01CDD68 )
      {
        Object = (PVOID)__PAIR64__(v7, v8);
        v31 = a4;
        v19 = qword_1C01CDD68(&Object);
        v20 = v19;
        if ( v19 < 0 )
        {
          v21 = WdLogNewEntry5_WdWarning(a1);
          *(_QWORD *)(v21 + 24) = v20;
          WdLogEvent5_WdWarning(v21);
        }
      }
    }
    *a5 = 0;
    v12 = 0;
    for ( i = 0; v12 < *(_DWORD *)(v9 + 20); i = v12 )
    {
      v13 = 0;
      a1 = 5LL * v12;
      v14 = *(_QWORD *)(*(_QWORD *)(v9 + 40LL * v12 + 32) + 2576LL);
      if ( *(_DWORD *)(v14 + 216) )
      {
        do
        {
          v15 = *(_QWORD *)(v14 + 224);
          if ( (*(_DWORD *)(v15 + 20LL * v13) & 1) != 0
            && (!a6 || *(_BYTE *)(v15 + 20LL * v13 + 16))
            && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C01CDA80)(
                      v15 + 4 * (5LL * v13 + 2),
                      *(unsigned int *)(v15 + 20LL * v13 + 4),
                      &Object,
                      &DeviceObject) >= 0 )
          {
            InputBuffer = v8;
            AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
            GreDeviceIoControlImpl(AttachedDeviceReference, 0x232433u, &InputBuffer, 4u, 0LL, 0, &v26, 1u, 0);
            if ( *(_BYTE *)(*(_QWORD *)(v14 + 224) + 20LL * v13 + 16) )
            {
              *v29 = 1;
              if ( *(_QWORD *)(v14 + 144) )
              {
                if ( (*(_DWORD *)(v14 + 160) & 0x800000) != 0
                  && *(_QWORD *)(v14 + 240)
                  && (*(_DWORD *)(v9 + 20) == 1 && *(_DWORD *)(v14 + 216) == 1 || !a4) )
                {
                  wil_details_FeaturePropertyCache_ReportUsageToService(
                    (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
                    8395569LL,
                    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01933C0,
                    1,
                    v22);
                  v27[0] = 1;
                  v27[1] = a4;
                  GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324CFu, v27, 8u, 0LL, 0, &v26, 1u, 0);
                }
              }
            }
            ObfDereferenceObject(AttachedDeviceReference);
            ObfDereferenceObject(Object);
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v14 + 216) );
        v12 = i;
      }
      ++v12;
    }
    v10 = 0;
  }
  v16 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v16 + 24) = v10;
  WdLogEvent5_WdTrace(v16);
  return (unsigned int)v10;
}
