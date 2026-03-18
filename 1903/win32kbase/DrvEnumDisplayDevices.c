/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C004E770
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C004E670 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C001497C (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C0037DC0 (UserIsCurrentProcessDwm.c)
 *     DrvGetDeviceFromName @ 0x1C003C3B0 (DrvGetDeviceFromName.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00493E4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C004D700 (UpdateMonitorDevices.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00900C0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00A26E0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C00A9CE0 (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // rdi
  wchar_t *DeviceFromName; // rsi
  int v10; // r15d
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG v15; // eax
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _DEVICE_OBJECT *v20; // rax
  _DWORD *v21; // rax
  unsigned int v22; // r13d
  char *v23; // rdi
  struct _DEVICE_OBJECT *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  const wchar_t *v30; // r8
  size_t i; // rcx
  NTSTATUS DeviceProperty; // eax
  void *v33; // r15
  int v34; // eax
  struct _UNICODE_STRING *v35; // r15
  int v36; // eax
  int DeviceInterfaceName; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  size_t j; // rcx
  NTSTATUS v41; // eax
  void *v42; // r12
  __int64 v43; // r15
  __int64 v44; // rax
  ULONG v45; // eax
  unsigned int v46; // r8d
  __int64 v47; // rdx
  char *v48; // r12
  __int64 v49; // rdx
  char *v50; // rsi
  PVOID v51; // rcx
  __int64 v52; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-1A0h] BYREF
  void *v55; // [rsp+40h] [rbp-198h]
  SIZE_T Length; // [rsp+48h] [rbp-190h]
  struct _UNICODE_STRING *v57; // [rsp+50h] [rbp-188h]
  void *v58; // [rsp+58h] [rbp-180h]
  int v59; // [rsp+60h] [rbp-178h]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-170h] BYREF
  PVOID Object; // [rsp+70h] [rbp-168h] BYREF
  PVOID P[2]; // [rsp+78h] [rbp-160h] BYREF
  __int64 v63; // [rsp+88h] [rbp-150h]
  wchar_t PropertyBuffer[128]; // [rsp+90h] [rbp-148h] BYREF

  v55 = a4;
  v7 = (unsigned int)a3;
  v59 = a3;
  v57 = a1;
  P[1] = a4;
  DeviceFromName = 0LL;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v10 = 0;
  LODWORD(v11) = 0;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v12[3] = a1;
  v63 = (unsigned int)v7;
  v12[4] = (unsigned int)v7;
  v12[5] = a4;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  if ( a1 )
  {
    UpdateMonitorDevices();
    if ( a6 == 1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
        DeviceFromName = DrvGetDeviceFromName(String1);
      if ( String1 )
        Win32FreePool((__int64)String1);
    }
    else
    {
      DeviceFromName = DrvGetDeviceFromName(a1);
    }
    if ( !DeviceFromName || (unsigned int)v7 >= *((_DWORD *)DeviceFromName + 54) )
      return 3221225473LL;
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C02151D8)(
                *((_QWORD *)DeviceFromName + 28) + 4 * (5 * v7 + 2),
                *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v7 + 4),
                &Object,
                &DeviceObject) < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v27, v26, v28);
      WdLogEvent5_WdError(v29);
      return 3221225473LL;
    }
    goto LABEL_26;
  }
  DeviceFromName = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_13;
  v15 = BufferLength;
  do
  {
    if ( a6
      && ((v13 = *((unsigned int *)DeviceFromName + 40), (v13 & 0x2000000) != 0)
       || (v14 = (unsigned __int16)gProtocolType, gProtocolType)
       && DeviceFromName[110] != gProtocolType
       && (v13 & 0x4000008) == 0) )
    {
      BufferLength = --v15;
    }
    else if ( v15 == (_DWORD)v7 )
    {
      break;
    }
    DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
    BufferLength = ++v15;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_13:
    v16 = WdLogNewEntry5_WdTrace(v14);
    WdLogEvent5_WdTrace(v16);
    return 3221225473LL;
  }
  if ( dword_1C0215BA0
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && ::Object
    && (PVOID)PsGetCurrentProcess(65533LL, v13) != gpepCSRSS
    && !UserIsCurrentProcessDwm(v19, v18)
    && (DeviceFromName[80] & 8) == 0 )
  {
    v10 = 1;
  }
  v20 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 18);
  if ( !v20 )
  {
    if ( !v10 )
    {
      v24 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
      if ( v24 )
      {
        if ( (int)DrvForceChildDeviceReenumeration(v24, (struct _DEVICE_RELATIONS **)P) >= 0 )
        {
          DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
          ExFreePoolWithTag(P[0], 0);
        }
      }
      else
      {
        v25 = WdLogNewEntry5_WdTrace(0LL);
        WdLogEvent5_WdTrace(v25);
      }
      goto LABEL_26;
    }
    v20 = (struct _DEVICE_OBJECT *)::Object;
  }
  DeviceObject = v20;
LABEL_26:
  v58 = 0LL;
  if ( a6 == 1 )
  {
    v21 = v55;
    if ( (unsigned __int64)v55 >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    LODWORD(Length) = *v21;
    v22 = Length;
    if ( (unsigned int)Length > 0x348 )
      v22 = 840;
    LODWORD(Length) = v22;
    v23 = (char *)PALLOCMEM2(v22, 0x73726447u, 1);
    v58 = v23;
    if ( !v23 )
    {
      LODWORD(v11) = -1073741823;
      goto LABEL_127;
    }
  }
  else
  {
    v22 = 840;
    if ( *(_DWORD *)v55 < 0x348u )
      v22 = *(_DWORD *)v55;
    LODWORD(Length) = v22;
    v23 = (char *)v55;
    v58 = v55;
    memset(v55, 0, v22);
  }
  if ( v22 >= 4 )
    *(_DWORD *)v23 = 4;
  if ( v22 >= 0x44 )
  {
    *(_DWORD *)v23 = 68;
    if ( v57 )
    {
      swprintf_s((wchar_t *)v23 + 2, 0x20uLL, L"%ws\\Monitor%d", DeviceFromName + 32, v59);
    }
    else
    {
      *(_OWORD *)(v23 + 4) = *((_OWORD *)DeviceFromName + 4);
      *(_OWORD *)(v23 + 20) = *((_OWORD *)DeviceFromName + 5);
      *(_OWORD *)(v23 + 36) = *((_OWORD *)DeviceFromName + 6);
      *(_OWORD *)(v23 + 52) = *((_OWORD *)DeviceFromName + 7);
    }
    *((_WORD *)v23 + 33) = 0;
  }
  if ( v22 >= 0x144 )
  {
    *(_DWORD *)v23 = 324;
    *((_WORD *)v23 + 34) = 0;
    if ( v57 || v10 )
    {
      if ( DeviceObject )
      {
        BufferLength = 256;
        for ( i = 256LL; ; i = BufferLength )
        {
          v33 = PALLOCMEM2(i, 0x64646547u, 0);
          if ( !v33 )
          {
            LODWORD(v11) = -1073741670;
            goto LABEL_68;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v33,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool((__int64)v33);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v23 + 34, 0x80uLL, (const wchar_t *)v33, 0x7FuLL);
        Win32FreePool((__int64)v33);
      }
    }
    else
    {
      v30 = (const wchar_t *)*((_QWORD *)DeviceFromName + 26);
      if ( v30 )
        wcsncpy_s((wchar_t *)v23 + 34, 0x80uLL, v30, 0x7FuLL);
    }
LABEL_68:
    *((_WORD *)v23 + 161) = 0;
  }
  if ( v22 < 0x148 )
  {
    v35 = v57;
  }
  else
  {
    *(_DWORD *)v23 = 328;
    if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName) )
      *((_DWORD *)DeviceFromName + 40) &= ~0x80000u;
    else
      *((_DWORD *)DeviceFromName + 40) |= 0x80000u;
    v34 = *((_DWORD *)DeviceFromName + 40);
    v35 = v57;
    if ( v57 )
    {
      *((_DWORD *)v23 + 81) = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v63) & 0xFFFFFFF;
    }
    else
    {
      if ( (a5 & 2) != 0 )
        v36 = v34 & 0xFFFFFFF;
      else
        v36 = v34 & 0xF2FFFFF;
      *((_DWORD *)v23 + 81) = v36;
    }
  }
  if ( v22 < 0x248 )
  {
    v43 = -1LL;
    goto LABEL_112;
  }
  *(_DWORD *)v23 = 584;
  *((_WORD *)v23 + 164) = 0;
  if ( (a5 & 1) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v11 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        v39 = WdLogNewEntry5_WdTrace(v38);
        *(_QWORD *)(v39 + 24) = v11;
        WdLogEvent5_WdTrace(v39);
        goto LABEL_127;
      }
    }
LABEL_109:
    v43 = -1LL;
    goto LABEL_110;
  }
  if ( !DeviceObject )
    goto LABEL_109;
  BufferLength = 256;
  for ( j = 256LL; ; j = BufferLength )
  {
    v42 = PALLOCMEM2(j, 0x64646547u, 0);
    if ( !v42 )
    {
      LODWORD(v11) = -1073741670;
LABEL_94:
      v43 = -1LL;
      goto LABEL_95;
    }
    v41 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, v42, &BufferLength);
    if ( v41 != -1073741789 )
      break;
    Win32FreePool((__int64)v42);
  }
  if ( v41 )
  {
    Win32FreePool((__int64)v42);
    goto LABEL_94;
  }
  v46 = 0;
  if ( v35 )
  {
    v43 = -1LL;
    v47 = -1LL;
    do
      ++v47;
    while ( *((_WORD *)v42 + v47) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v47 + 2) )
      v46 = v47 + 1;
  }
  else
  {
    v43 = -1LL;
  }
  wcsncpy_s((wchar_t *)v23 + 164, 0x80uLL, (const wchar_t *)v42 + v46, 0x7FuLL);
  Win32FreePool((__int64)v42);
LABEL_95:
  if ( v57 )
  {
    *((_WORD *)v23 + 291) = 0;
    v44 = -1LL;
    do
      ++v44;
    while ( *(_WORD *)&v23[2 * v44 + 328] );
    v45 = v44 + 1;
    BufferLength = v45;
    if ( v45 < 0x7E )
    {
      *(_WORD *)&v23[2 * v45 + 326] = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        &v23[2 * BufferLength + 328],
        &BufferLength);
    }
  }
LABEL_110:
  *((_WORD *)v23 + 291) = 0;
LABEL_112:
  if ( v22 >= 0x348 )
  {
    *(_DWORD *)v23 = 840;
    v48 = v23 + 584;
    *((_WORD *)v23 + 292) = 0;
    if ( v57 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v23 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v49 = -1LL;
        do
          ++v49;
        while ( *(_WORD *)&v48[2 * v49] );
        BufferLength = v49;
        wcsncpy_s(
          (wchar_t *)&v23[2 * (unsigned int)v49 + 584],
          128LL - (unsigned int)v49,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v49));
        do
          ++v43;
        while ( *(_WORD *)&v48[2 * v43] );
        BufferLength = v43;
        wcsncpy_s(
          (wchar_t *)&v23[2 * (unsigned int)v43 + 584],
          128LL - (unsigned int)v43,
          PropertyBuffer,
          (unsigned int)(127 - v43));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3, 0LL, (unsigned __int16 *)v23 + 292, 0x80u, 0LL);
    }
    *((_WORD *)v23 + 419) = 0;
  }
  if ( !v57 && DeviceObject && !*((_QWORD *)DeviceFromName + 18) && DeviceObject != ::Object )
    ObfDereferenceObject(DeviceObject);
LABEL_127:
  v50 = (char *)v55;
  v51 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v23 != v50 )
  {
    if ( v23 )
    {
      ProbeForWrite(v50, v22, 4u);
      memmove(v50, v23, v22);
      Win32FreePool((__int64)v23);
    }
  }
  v52 = WdLogNewEntry5_WdTrace(v51);
  *(_QWORD *)(v52 + 24) = (int)v11;
  WdLogEvent5_WdTrace(v52);
  return (unsigned int)v11;
}
