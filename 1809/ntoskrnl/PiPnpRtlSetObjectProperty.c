/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x1406E64F0
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406D6B7C (PiDqIrpPropertySet.c)
 *     PiSwPropertySet @ 0x1406D8BF0 (PiSwPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E601C (PiDevCfgSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140708478 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14070B698 (PnpSetDeviceInterfacePropertyData.c)
 *     PiCMSetObjectProperty @ 0x14074F450 (PiCMSetObjectProperty.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14059D4CC (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     _CmSplitDevicePanelId @ 0x14074AD2C (_CmSplitDevicePanelId.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14083E1B8 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x14083E1F8 (PiAuditDeviceOperation.c)
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
  int v26; // r10d
  _UNKNOWN **v27; // r8
  unsigned int v28; // r9d
  _QWORD *v29; // rdx
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _KTHREAD *CurrentThread; // rax
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
  __int64 v57; // [rsp+98h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-41h] BYREF
  _QWORD v59[2]; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v56 = a1;
  v13 = 0;
  v54 = a4;
  v57 = a5;
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
      v26 = *(_DWORD *)(a6 + 16);
      v27 = &PiPnpRtlContainerReadOnlyProps;
      v28 = 0;
      while ( 1 )
      {
        v29 = *v27;
        if ( v26 == *((_DWORD *)*v27 + 4) )
        {
          v39 = *(_QWORD *)a6 - *v29;
          if ( *(_QWORD *)a6 == *v29 )
            v39 = *(_QWORD *)(a6 + 8) - v29[1];
          if ( !v39 )
            return (unsigned int)-1073741790;
        }
        ++v28;
        ++v27;
        if ( v28 >= 2 )
        {
          if ( v26 == 105 )
          {
            v30 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
              v30 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
            if ( !v30 )
            {
              v31 = a7 == 7;
              goto LABEL_36;
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
  for ( i = 0; i < 0xC; ++i )
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
      v33 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v33 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v33 )
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
      v32 = *(_QWORD *)a6 - DEVPKEY_Device_PanelId;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_PanelId )
        v32 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
      if ( !v32 )
      {
        if ( !pszSrc
          || a9 < 2
          || a7 != 18
          || pszSrc[((unsigned __int64)a9 >> 1) - 1]
          || (int)CmSplitDevicePanelId(pszSrc, &Guid) < 0
          || (int)PnpGetObjectProperty(
                    a1,
                    (__int64)a2,
                    1u,
                    v54,
                    0LL,
                    (__int64)&DEVPKEY_Device_ContainerId,
                    (__int64)&v50,
                    (__int64)v59,
                    16,
                    (__int64)&v49,
                    0) < 0
          || v50 != 13
          || v49 != 16 )
        {
          return (unsigned int)-1073741811;
        }
        v45 = v59[0] - *(_QWORD *)&Guid.Data1;
        if ( v59[0] == *(_QWORD *)&Guid.Data1 )
          v45 = v59[1] - *(_QWORD *)Guid.Data4;
        v31 = v45 == 0;
LABEL_36:
        if ( !v31 )
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
        v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
          v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
        if ( !v34 )
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
        if ( !v41 && SeAuditingWithTokenForSubcategory(138, 0LL) )
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
        if ( !v36 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        {
          v49 = 4;
          if ( (int)PnpGetObjectProperty(
                      v56,
                      (__int64)a2,
                      1u,
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
  v22 = PnpSetObjectProperty(v56, (_DWORD)a2, a3, v57, a6, a7, (__int64)pszSrc, a9, a10);
  if ( a3 != 1 )
    goto LABEL_17;
  v23 = *(_DWORD *)(a6 + 16);
  if ( v23 == 12 )
  {
    v42 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v42 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( !v42 && SeAuditingWithTokenForSubcategory(138, 0LL) )
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
    if ( !v37 && SeAuditingWithTokenForSubcategory(138, 0LL) )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v22;
}
