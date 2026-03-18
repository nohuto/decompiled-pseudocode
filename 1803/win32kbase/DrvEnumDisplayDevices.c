/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0041AD0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0041A10 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0042578 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00CEF64 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v9; // r14d
  __int64 v10; // rsi
  _QWORD *v11; // rax
  wchar_t *v12; // r15
  ULONG v13; // eax
  int v14; // edx
  struct _DEVICE_OBJECT *v15; // rax
  unsigned int *v16; // rax
  unsigned int v17; // r12d
  char *v18; // rdi
  _OWORD *v19; // r9
  wchar_t *v20; // rcx
  const wchar_t *v21; // r8
  ULONG v22; // eax
  int PruneFlag; // eax
  int v24; // edx
  unsigned int v25; // edx
  char v26; // r8
  int v27; // ecx
  void *v28; // r14
  NTSTATUS v29; // eax
  char *v30; // r13
  __int64 v31; // r14
  char *v32; // r13
  char *v33; // r14
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 DeviceFromName; // rax
  __int64 v38; // rdx
  size_t v39; // rcx
  void *v40; // r14
  NTSTATUS DeviceProperty; // eax
  PDEVICE_OBJECT v42; // r14
  NTSTATUS DeviceInterfaces; // eax
  __int64 v44; // r13
  struct _DEVICE_OBJECT *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  ULONG v51; // eax
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-1A0h]
  unsigned int v54; // [rsp+50h] [rbp-198h]
  void *v55; // [rsp+58h] [rbp-190h]
  SIZE_T Length; // [rsp+60h] [rbp-188h]
  __int64 v57; // [rsp+68h] [rbp-180h]
  void *v58; // [rsp+70h] [rbp-178h]
  PZZWSTR SymbolicLinkList; // [rsp+78h] [rbp-170h] BYREF
  __int64 v60; // [rsp+80h] [rbp-168h]
  PVOID Object; // [rsp+88h] [rbp-160h]
  PVOID P[2]; // [rsp+90h] [rbp-158h] BYREF
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v55 = a4;
  v57 = a1;
  P[1] = a4;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v11[3] = a1;
  v60 = a3;
  v11[4] = a3;
  v11[5] = a4;
  v54 = a5;
  v11[6] = a5;
  WdLogEvent5_WdEvent();
  if ( a1 )
  {
    UpdateMonitorDevices();
    DeviceFromName = DrvGetDeviceFromName(a1, a6);
    v12 = (wchar_t *)DeviceFromName;
    if ( DeviceFromName && a3 < *(_DWORD *)(DeviceFromName + 216) )
    {
      if ( (int)_guard_dispatch_icall_fptr() >= 0 )
        goto LABEL_12;
      v47 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v47);
    }
    return 3221225473LL;
  }
  v12 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_66;
  v13 = BufferLength;
  do
  {
    if ( a6
      && ((v14 = *((_DWORD *)v12 + 40), (v14 & 0x2000000) != 0)
       || gProtocolType && v12[110] != gProtocolType && (v14 & 0x4000008) == 0) )
    {
      BufferLength = --v13;
    }
    else if ( v13 == a3 )
    {
      break;
    }
    v12 = (wchar_t *)*((_QWORD *)v12 + 16);
    BufferLength = ++v13;
  }
  while ( v12 );
  if ( !v12 )
  {
LABEL_66:
    v36 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v36);
    return 3221225473LL;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C01A1760
    && (PVOID)PsGetCurrentProcess() != gpepCSRSS
    && !UserIsCurrentProcessDwm()
    && (v12[80] & 8) == 0 )
  {
    v9 = 1;
  }
  v15 = (struct _DEVICE_OBJECT *)*((_QWORD *)v12 + 18);
  if ( v15 )
    goto LABEL_11;
  if ( v9 )
  {
    v15 = (struct _DEVICE_OBJECT *)qword_1C01A1760;
LABEL_11:
    DeviceObject = v15;
    goto LABEL_12;
  }
  v45 = (struct _DEVICE_OBJECT *)*((_QWORD *)v12 + 17);
  if ( v45 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v45, (struct _DEVICE_RELATIONS **)P) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
      ExFreePoolWithTag(P[0], 0);
    }
  }
  else
  {
    v46 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v46);
  }
LABEL_12:
  v58 = 0LL;
  if ( a6 == 1 )
  {
    v16 = (unsigned int *)v55;
    if ( (unsigned __int64)v55 >= MmUserProbeAddress )
      v16 = (unsigned int *)MmUserProbeAddress;
    v17 = *v16;
    if ( *v16 > 0x348 )
      v17 = 840;
    LODWORD(Length) = v17;
    v18 = (char *)PALLOCMEM2(v17, 0x73726447u, 1);
    v58 = v18;
    if ( !v18 )
    {
      LODWORD(v10) = -1073741823;
      goto LABEL_54;
    }
  }
  else
  {
    v17 = 840;
    if ( *(_DWORD *)v55 < 0x348u )
      v17 = *(_DWORD *)v55;
    LODWORD(Length) = v17;
    v18 = (char *)v55;
    v58 = v55;
    memset(v55, 0, v17);
  }
  if ( v17 >= 4 )
    *(_DWORD *)v18 = 4;
  if ( v17 >= 0x44 )
  {
    *(_DWORD *)v18 = 68;
    v19 = v12 + 32;
    v20 = (wchar_t *)(v18 + 4);
    if ( v57 )
    {
      swprintf_s(v20, 0x20uLL, L"%ws\\Monitor%d", v19, a3);
    }
    else
    {
      *(_OWORD *)v20 = *v19;
      *(_OWORD *)(v18 + 20) = *((_OWORD *)v12 + 5);
      *(_OWORD *)(v18 + 36) = *((_OWORD *)v12 + 6);
      *(_OWORD *)(v18 + 52) = *((_OWORD *)v12 + 7);
    }
    *((_WORD *)v18 + 33) = 0;
  }
  if ( v17 >= 0x144 )
  {
    *(_DWORD *)v18 = 324;
    *((_WORD *)v18 + 34) = 0;
    if ( v57 || v9 )
    {
      if ( DeviceObject )
      {
        v39 = 256LL;
        for ( BufferLength = 256; ; v39 = BufferLength )
        {
          v40 = PALLOCMEM2(v39, 0x64646547u, 0);
          if ( !v40 )
          {
            LODWORD(v10) = -1073741670;
            goto LABEL_29;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v40,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool((__int64)v40);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, (const wchar_t *)v40, 0x7FuLL);
        Win32FreePool((__int64)v40);
      }
    }
    else
    {
      v21 = (const wchar_t *)*((_QWORD *)v12 + 26);
      if ( v21 )
        wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, v21, 0x7FuLL);
    }
LABEL_29:
    *((_WORD *)v18 + 161) = 0;
  }
  v22 = 256;
  if ( v17 < 0x148 )
  {
    v26 = v54;
  }
  else
  {
    *(_DWORD *)v18 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v12);
    v24 = *((_DWORD *)v12 + 40);
    if ( PruneFlag )
      v25 = v24 & 0xFFF7FFFF;
    else
      v25 = v24 | 0x80000;
    *((_DWORD *)v12 + 40) = v25;
    v26 = v54;
    if ( v57 )
      v27 = *(_DWORD *)(32 * v60 + *((_QWORD *)v12 + 28)) & 0xFFFFFFF;
    else
      v27 = v25 & ((v54 & 2) != 0 ? 0xFFFFFFF : 254803967);
    *((_DWORD *)v18 + 81) = v27;
    v22 = 256;
  }
  if ( v17 < 0x248 )
  {
    v31 = -1LL;
    goto LABEL_47;
  }
  *(_DWORD *)v18 = 584;
  *((_WORD *)v18 + 164) = 0;
  if ( (v26 & 1) == 0 )
  {
    if ( DeviceObject )
    {
      for ( BufferLength = 256; ; v22 = BufferLength )
      {
        v28 = PALLOCMEM2(v22, 0x64646547u, 0);
        if ( !v28 )
        {
          LODWORD(v10) = -1073741670;
          goto LABEL_119;
        }
        v29 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, v28, &BufferLength);
        if ( v29 != -1073741789 )
          break;
        Win32FreePool((__int64)v28);
      }
      if ( !v29 )
      {
        v30 = v18 + 328;
        wcsncpy_s((wchar_t *)v18 + 164, 0x80uLL, (const wchar_t *)v28, 0x7FuLL);
        Win32FreePool((__int64)v28);
        goto LABEL_44;
      }
      Win32FreePool((__int64)v28);
LABEL_119:
      v30 = v18 + 328;
LABEL_44:
      if ( v57 )
      {
        *((_WORD *)v18 + 291) = 0;
        v31 = -1LL;
        v50 = -1LL;
        do
          ++v50;
        while ( *(_WORD *)&v30[2 * v50] );
        v51 = v50 + 1;
        BufferLength = v51;
        if ( v51 < 0x7E )
        {
          *(_WORD *)&v18[2 * v51 + 326] = 92;
          IoGetDeviceProperty(
            DeviceObject,
            DevicePropertyDriverKeyName,
            2 * (127 - BufferLength),
            &v18[2 * BufferLength + 328],
            &BufferLength);
        }
        goto LABEL_46;
      }
    }
    goto LABEL_45;
  }
  v42 = DeviceObject;
  if ( !DeviceObject )
  {
LABEL_45:
    v31 = -1LL;
LABEL_46:
    *((_WORD *)v18 + 291) = 0;
LABEL_47:
    if ( v17 >= 0x348 )
    {
      *(_DWORD *)v18 = 840;
      v32 = v18 + 584;
      *((_WORD *)v18 + 292) = 0;
      if ( v57 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
        {
          wcscpy_s((wchar_t *)v18 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
          v38 = -1LL;
          do
            ++v38;
          while ( *(_WORD *)&v32[2 * v38] );
          BufferLength = v38;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v38 + 584],
            128LL - (unsigned int)v38,
            L"\\Control\\Class\\",
            (unsigned int)(127 - v38));
          do
            ++v31;
          while ( *(_WORD *)&v32[2 * v31] );
          BufferLength = v31;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v31 + 584],
            128LL - (unsigned int)v31,
            PropertyBuffer,
            (unsigned int)(127 - v31));
        }
      }
      else
      {
        DrvGetRegistryHandleFromDeviceMap(v12, 3, 0LL, (unsigned __int16 *)v18 + 292, 0x80u, 0LL, gProtocolType);
      }
      *((_WORD *)v18 + 419) = 0;
    }
    if ( !v57 && DeviceObject && !*((_QWORD *)v12 + 18) && DeviceObject != qword_1C01A1760 )
      ObfDereferenceObject(DeviceObject);
    goto LABEL_54;
  }
  SymbolicLinkList = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, DeviceObject, 0, &SymbolicLinkList);
  v10 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    v48 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v48 + 24) = v42;
    v44 = v10;
    *(_QWORD *)(v48 + 32) = v10;
    WdLogEvent5_WdWarning(v48);
    v31 = -1LL;
  }
  else
  {
    v31 = -1LL;
    wcsncpy_s((wchar_t *)v18 + 164, 0x80uLL, SymbolicLinkList, 0xFFFFFFFFFFFFFFFFuLL);
    *((_WORD *)v18 + 165) = 92;
    ExFreePoolWithTag(SymbolicLinkList, 0);
    v44 = v10;
  }
  if ( (int)v10 >= 0 )
    goto LABEL_46;
  v49 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v49 + 24) = v44;
  WdLogEvent5_WdTrace(v49);
LABEL_54:
  v33 = (char *)v55;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v18 != v33 )
  {
    if ( v18 )
    {
      ProbeForWrite(v33, v17, 4u);
      memmove(v33, v18, v17);
      Win32FreePool((__int64)v18);
    }
  }
  v34 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v34 + 24) = (int)v10;
  WdLogEvent5_WdTrace(v34);
  return (unsigned int)v10;
}
