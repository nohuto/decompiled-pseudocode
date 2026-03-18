/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x140706204
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x140705E2C (PiDevCfgSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x14072DF98 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140735FE8 (PnpSetDeviceInterfacePropertyData.c)
 *     PiSwPropertySet @ 0x14074231C (PiSwPropertySet.c)
 *     PiCMSetObjectProperty @ 0x1407796F4 (PiCMSetObjectProperty.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406A2E4C (_CmIsRootEnumeratedDevice.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     _CmSplitDevicePanelId @ 0x140767558 (_CmSplitDevicePanelId.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x140878144 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x140878184 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        const wchar_t *pszSrc,
        unsigned int a9,
        int a10)
{
  unsigned int v13; // r14d
  int v14; // ecx
  DEVPROPKEY **v15; // r9
  unsigned int i; // r10d
  DEVPROPKEY *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // esi
  int v21; // eax
  signed int v22; // ebx
  int v23; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v30; // r10d
  _UNKNOWN **v31; // r8
  unsigned int v32; // r9d
  _QWORD *v33; // rdx
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // r8
  char v48; // [rsp+60h] [rbp-81h]
  int v49; // [rsp+64h] [rbp-7Dh] BYREF
  int v50; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v51; // [rsp+6Ch] [rbp-75h] BYREF
  int v52; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v53; // [rsp+74h] [rbp-6Dh]
  __int64 v54; // [rsp+78h] [rbp-69h]
  int v55; // [rsp+80h] [rbp-61h] BYREF
  __int64 v56; // [rsp+88h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-51h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-39h]
  __int64 v59; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-29h]
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v56 = a1;
  v13 = 0;
  v58 = a5;
  v54 = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v51 = 0;
  v53 = 0;
  v52 = 0;
  v48 = 0;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v43 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v43 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        v44 = v43 == 0;
LABEL_82:
        if ( v44 )
          return (unsigned int)-1073741790;
      }
    }
    else if ( a3 == 5 )
    {
      v30 = *(_DWORD *)(a6 + 16);
      v31 = &PiPnpRtlContainerReadOnlyProps;
      v32 = 0;
      while ( 1 )
      {
        v33 = *v31;
        if ( v30 == *((_DWORD *)*v31 + 4) )
        {
          v39 = *(_QWORD *)a6 - *v33;
          if ( *(_QWORD *)a6 == *v33 )
            v39 = *(_QWORD *)(a6 + 8) - v33[1];
          if ( !v39 )
            return (unsigned int)-1073741790;
        }
        ++v32;
        ++v31;
        if ( v32 >= 2 )
        {
          if ( v30 == 105 )
          {
            v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
              v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
            if ( !v34 )
            {
              v35 = a7 == 7;
              goto LABEL_48;
            }
          }
          break;
        }
      }
    }
LABEL_9:
    v18 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    v19 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(a6 + 16);
  v15 = PiPnpRtlDeviceReadOnlyProps;
  for ( i = 0; i < 0xD; ++i )
  {
    v17 = *v15;
    if ( v14 == (*v15)->pid )
    {
      v25 = *(_QWORD *)a6 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&v17->fmtid.Data1 )
        v25 = *(_QWORD *)(a6 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v25 )
        return (unsigned int)-1073741790;
    }
    ++v15;
  }
  if ( v14 != 12 )
  {
    if ( v14 == 3 )
    {
      v27 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v27 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v27 )
        goto LABEL_81;
    }
    if ( v14 == 4 )
    {
      v38 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
        v38 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
      if ( !v38 )
      {
LABEL_81:
        v44 = CmIsRootEnumeratedDevice(a2) == 0;
        goto LABEL_82;
      }
    }
    else if ( v14 == 2 )
    {
      v26 = *(_QWORD *)a6 - DEVPKEY_Device_PanelId;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_PanelId )
        v26 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
      if ( !v26 )
      {
        if ( !pszSrc
          || a9 < 2
          || a7 != 18
          || pszSrc[((unsigned __int64)a9 >> 1) - 1]
          || (int)CmSplitDevicePanelId(pszSrc, &Guid) < 0
          || (int)PnpGetObjectProperty(
                    a1,
                    (__int64)a2,
                    1LL,
                    v54,
                    0LL,
                    (__int64)&DEVPKEY_Device_ContainerId,
                    (__int64)&v50,
                    (__int64)&v59,
                    16,
                    (__int64)&v49,
                    0) < 0
          || v50 != 13
          || v49 != 16 )
        {
          return (unsigned int)-1073741811;
        }
        v45 = v59 - *(_QWORD *)&Guid.Data1;
        if ( v59 == *(_QWORD *)&Guid.Data1 )
          v45 = v60 - *(_QWORD *)Guid.Data4;
        v35 = v45 == 0;
LABEL_48:
        if ( !v35 )
          return (unsigned int)-1073741811;
      }
    }
    goto LABEL_9;
  }
  v19 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  v18 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  v40 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
    v40 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  if ( !v40 && (!pszSrc || a9 != 4) )
    return (unsigned int)-1073741811;
LABEL_10:
  v20 = 5;
  if ( a3 == 1 )
  {
    v21 = *(_DWORD *)(a6 + 16);
    switch ( v21 )
    {
      case 10:
        v28 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
          v28 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
        if ( !v28 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          v48 = 1;
        }
        break;
      case 12:
        v41 = *(_QWORD *)a6 - v19;
        if ( *(_QWORD *)a6 == v19 )
          v41 = *(_QWORD *)(a6 + 8) - v18;
        if ( !v41 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          v49 = 4;
          if ( (int)CmGetDeviceRegProp(v56, (__int64)a2, v54, 11, (__int64)&v55, (__int64)&v51, (__int64)&v49, 0) < 0
            || v49 != 4
            || v55 != 4 )
          {
            v51 = 0;
          }
          v53 = *(_DWORD *)pszSrc;
        }
        break;
      case 5:
        v36 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
        if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
          v36 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
        if ( !v36 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          v49 = 4;
          if ( (int)PnpGetObjectProperty(
                      v56,
                      (__int64)a2,
                      1LL,
                      v54,
                      0LL,
                      (__int64)&DEVPKEY_Device_InstallError,
                      (__int64)&v50,
                      (__int64)&v52,
                      4,
                      (__int64)&v49,
                      0) < 0
            || v49 != 4
            || v50 != 23 )
          {
            v52 = 0;
          }
          if ( a9 == 4 && a7 == 23 )
            v13 = *(_DWORD *)pszSrc;
        }
        break;
    }
  }
  v22 = PnpSetObjectProperty(v56, (_DWORD)a2, a3, v58, a6, a7, (__int64)pszSrc, a9, a10);
  if ( a3 != 1 )
    goto LABEL_17;
  v23 = *(_DWORD *)(a6 + 16);
  if ( v23 == 12 )
  {
    v42 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v42 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( !v42 && SeAuditingWithTokenForSubcategory(137, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      LOBYTE(v46) = v22 >= 0;
      PiAuditDeviceEnableDisableRequest(&DestinationString, v51, v53, v46);
    }
    goto LABEL_17;
  }
  if ( v23 == 5 )
  {
    v37 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
    if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
      v37 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
    if ( !v37 && SeAuditingWithTokenForSubcategory(137, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      if ( v52 == -536870328 )
      {
        if ( v13 == -536870328 )
          goto LABEL_17;
        v20 = 6;
      }
      else if ( v13 != -536870328 )
      {
        goto LABEL_17;
      }
      LOBYTE(v47) = v22 >= 0;
      PiAuditDeviceOperation(&DestinationString, v20, v47);
    }
  }
LABEL_17:
  if ( v48 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v22;
}
