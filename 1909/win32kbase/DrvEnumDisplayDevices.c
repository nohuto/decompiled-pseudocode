/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C003B980
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C003B880 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0010424 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0012318 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     DrvGetDeviceFromName @ 0x1C003A300 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C003AA94 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C003D6C0 (UpdateMonitorDevices.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00A14A0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C00A8D90 (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
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
  ULONG v14; // eax
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _DEVICE_OBJECT *v19; // rax
  _DWORD *v20; // rax
  unsigned int v21; // r13d
  char *v22; // rdi
  struct _DEVICE_OBJECT *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  const wchar_t *v29; // r8
  size_t i; // rcx
  NTSTATUS DeviceProperty; // eax
  void *v32; // r15
  int v33; // eax
  struct _UNICODE_STRING *v34; // r15
  int v35; // eax
  int DeviceInterfaceName; // eax
  __int64 v37; // rax
  size_t j; // rcx
  NTSTATUS v39; // eax
  void *v40; // r12
  __int64 v41; // r15
  __int64 v42; // rax
  ULONG v43; // eax
  unsigned int v44; // r8d
  __int64 v45; // rdx
  char *v46; // r12
  __int64 v47; // rdx
  char *v48; // rsi
  __int64 v49; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-1A0h] BYREF
  void *v52; // [rsp+40h] [rbp-198h]
  SIZE_T Length; // [rsp+48h] [rbp-190h]
  struct _UNICODE_STRING *v54; // [rsp+50h] [rbp-188h]
  void *v55; // [rsp+58h] [rbp-180h]
  int v56; // [rsp+60h] [rbp-178h]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-170h] BYREF
  PVOID Object; // [rsp+70h] [rbp-168h] BYREF
  PVOID P[2]; // [rsp+78h] [rbp-160h] BYREF
  __int64 v60; // [rsp+88h] [rbp-150h]
  wchar_t PropertyBuffer[128]; // [rsp+90h] [rbp-148h] BYREF

  v52 = a4;
  v7 = (unsigned int)a3;
  v56 = a3;
  v54 = a1;
  P[1] = a4;
  DeviceFromName = 0LL;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v10 = 0;
  LODWORD(v11) = 0;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v12[3] = a1;
  v60 = (unsigned int)v7;
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
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C02121D8)(
                *((_QWORD *)DeviceFromName + 28) + 4 * (5 * v7 + 2),
                *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v7 + 4),
                &Object,
                &DeviceObject) < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v26, v25, v27);
      WdLogEvent5_WdError(v28);
      return 3221225473LL;
    }
    goto LABEL_26;
  }
  DeviceFromName = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_13;
  v14 = BufferLength;
  do
  {
    if ( a6
      && ((v13 = *((unsigned int *)DeviceFromName + 40), (v13 & 0x2000000) != 0)
       || gProtocolType && DeviceFromName[110] != gProtocolType && (v13 & 0x4000008) == 0) )
    {
      BufferLength = --v14;
    }
    else if ( v14 == (_DWORD)v7 )
    {
      break;
    }
    DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
    BufferLength = ++v14;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_13:
    v15 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v15);
    return 3221225473LL;
  }
  if ( dword_1C0212BA0
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && ::Object
    && (PVOID)PsGetCurrentProcess(65533LL, v13) != gpepCSRSS
    && !UserIsCurrentProcessDwm(v18, v17)
    && (DeviceFromName[80] & 8) == 0 )
  {
    v10 = 1;
  }
  v19 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 18);
  if ( !v19 )
  {
    if ( !v10 )
    {
      v23 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
      if ( v23 )
      {
        if ( (int)DrvForceChildDeviceReenumeration(v23, (struct _DEVICE_RELATIONS **)P) >= 0 )
        {
          DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
          ExFreePoolWithTag(P[0], 0);
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdTrace();
        WdLogEvent5_WdTrace(v24);
      }
      goto LABEL_26;
    }
    v19 = (struct _DEVICE_OBJECT *)::Object;
  }
  DeviceObject = v19;
LABEL_26:
  v55 = 0LL;
  if ( a6 == 1 )
  {
    v20 = v52;
    if ( (unsigned __int64)v52 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    LODWORD(Length) = *v20;
    v21 = Length;
    if ( (unsigned int)Length > 0x348 )
      v21 = 840;
    LODWORD(Length) = v21;
    v22 = (char *)PALLOCMEM2(v21, 0x73726447u, 1);
    v55 = v22;
    if ( !v22 )
    {
      LODWORD(v11) = -1073741823;
      goto LABEL_127;
    }
  }
  else
  {
    v21 = 840;
    if ( *(_DWORD *)v52 < 0x348u )
      v21 = *(_DWORD *)v52;
    LODWORD(Length) = v21;
    v22 = (char *)v52;
    v55 = v52;
    memset(v52, 0, v21);
  }
  if ( v21 >= 4 )
    *(_DWORD *)v22 = 4;
  if ( v21 >= 0x44 )
  {
    *(_DWORD *)v22 = 68;
    if ( v54 )
    {
      swprintf_s((wchar_t *)v22 + 2, 0x20uLL, L"%ws\\Monitor%d", DeviceFromName + 32, v56);
    }
    else
    {
      *(_OWORD *)(v22 + 4) = *((_OWORD *)DeviceFromName + 4);
      *(_OWORD *)(v22 + 20) = *((_OWORD *)DeviceFromName + 5);
      *(_OWORD *)(v22 + 36) = *((_OWORD *)DeviceFromName + 6);
      *(_OWORD *)(v22 + 52) = *((_OWORD *)DeviceFromName + 7);
    }
    *((_WORD *)v22 + 33) = 0;
  }
  if ( v21 >= 0x144 )
  {
    *(_DWORD *)v22 = 324;
    *((_WORD *)v22 + 34) = 0;
    if ( v54 || v10 )
    {
      if ( DeviceObject )
      {
        BufferLength = 256;
        for ( i = 256LL; ; i = BufferLength )
        {
          v32 = PALLOCMEM2(i, 0x64646547u, 0);
          if ( !v32 )
          {
            LODWORD(v11) = -1073741670;
            goto LABEL_68;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v32,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool((__int64)v32);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v22 + 34, 0x80uLL, (const wchar_t *)v32, 0x7FuLL);
        Win32FreePool((__int64)v32);
      }
    }
    else
    {
      v29 = (const wchar_t *)*((_QWORD *)DeviceFromName + 26);
      if ( v29 )
        wcsncpy_s((wchar_t *)v22 + 34, 0x80uLL, v29, 0x7FuLL);
    }
LABEL_68:
    *((_WORD *)v22 + 161) = 0;
  }
  if ( v21 < 0x148 )
  {
    v34 = v54;
  }
  else
  {
    *(_DWORD *)v22 = 328;
    if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName) )
      *((_DWORD *)DeviceFromName + 40) &= ~0x80000u;
    else
      *((_DWORD *)DeviceFromName + 40) |= 0x80000u;
    v33 = *((_DWORD *)DeviceFromName + 40);
    v34 = v54;
    if ( v54 )
    {
      *((_DWORD *)v22 + 81) = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v60) & 0xFFFFFFF;
    }
    else
    {
      if ( (a5 & 2) != 0 )
        v35 = v33 & 0xFFFFFFF;
      else
        v35 = v33 & 0xF2FFFFF;
      *((_DWORD *)v22 + 81) = v35;
    }
  }
  if ( v21 < 0x248 )
  {
    v41 = -1LL;
    goto LABEL_112;
  }
  *(_DWORD *)v22 = 584;
  *((_WORD *)v22 + 164) = 0;
  if ( (a5 & 1) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v11 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        v37 = WdLogNewEntry5_WdTrace();
        *(_QWORD *)(v37 + 24) = v11;
        WdLogEvent5_WdTrace(v37);
        goto LABEL_127;
      }
    }
LABEL_109:
    v41 = -1LL;
    goto LABEL_110;
  }
  if ( !DeviceObject )
    goto LABEL_109;
  BufferLength = 256;
  for ( j = 256LL; ; j = BufferLength )
  {
    v40 = PALLOCMEM2(j, 0x64646547u, 0);
    if ( !v40 )
    {
      LODWORD(v11) = -1073741670;
LABEL_94:
      v41 = -1LL;
      goto LABEL_95;
    }
    v39 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, v40, &BufferLength);
    if ( v39 != -1073741789 )
      break;
    Win32FreePool((__int64)v40);
  }
  if ( v39 )
  {
    Win32FreePool((__int64)v40);
    goto LABEL_94;
  }
  v44 = 0;
  if ( v34 )
  {
    v41 = -1LL;
    v45 = -1LL;
    do
      ++v45;
    while ( *((_WORD *)v40 + v45) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v45 + 2) )
      v44 = v45 + 1;
  }
  else
  {
    v41 = -1LL;
  }
  wcsncpy_s((wchar_t *)v22 + 164, 0x80uLL, (const wchar_t *)v40 + v44, 0x7FuLL);
  Win32FreePool((__int64)v40);
LABEL_95:
  if ( v54 )
  {
    *((_WORD *)v22 + 291) = 0;
    v42 = -1LL;
    do
      ++v42;
    while ( *(_WORD *)&v22[2 * v42 + 328] );
    v43 = v42 + 1;
    BufferLength = v43;
    if ( v43 < 0x7E )
    {
      *(_WORD *)&v22[2 * v43 + 326] = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        &v22[2 * BufferLength + 328],
        &BufferLength);
    }
  }
LABEL_110:
  *((_WORD *)v22 + 291) = 0;
LABEL_112:
  if ( v21 >= 0x348 )
  {
    *(_DWORD *)v22 = 840;
    v46 = v22 + 584;
    *((_WORD *)v22 + 292) = 0;
    if ( v54 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v22 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v47 = -1LL;
        do
          ++v47;
        while ( *(_WORD *)&v46[2 * v47] );
        BufferLength = v47;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v47 + 584],
          128LL - (unsigned int)v47,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v47));
        do
          ++v41;
        while ( *(_WORD *)&v46[2 * v41] );
        BufferLength = v41;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v41 + 584],
          128LL - (unsigned int)v41,
          PropertyBuffer,
          (unsigned int)(127 - v41));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3, 0LL, v22 + 584, 0x80u, 0LL);
    }
    *((_WORD *)v22 + 419) = 0;
  }
  if ( !v54 && DeviceObject && !*((_QWORD *)DeviceFromName + 18) && DeviceObject != ::Object )
    ObfDereferenceObject(DeviceObject);
LABEL_127:
  v48 = (char *)v52;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v22 != v48 )
  {
    if ( v22 )
    {
      ProbeForWrite(v48, v21, 4u);
      memmove(v48, v22, v21);
      Win32FreePool((__int64)v22);
    }
  }
  v49 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v49 + 24) = (int)v11;
  WdLogEvent5_WdTrace(v49);
  return (unsigned int)v11;
}
